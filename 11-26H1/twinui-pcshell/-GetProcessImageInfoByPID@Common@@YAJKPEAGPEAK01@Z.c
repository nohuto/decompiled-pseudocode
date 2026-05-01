/*
 * XREFs of ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x180111364
 * Callers:
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180111070 (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x180315F0C (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x1803169E8 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18067C934 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AAC98 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     StringCopyWorkerW @ 0x1801115BC (StringCopyWorkerW.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1801739BC (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall Common::GetProcessImageInfoByPID(
        DWORD dwProcessId,
        STRSAFE_LPWSTR pszDest,
        unsigned __int16 *a3,
        char *a4,
        unsigned __int16 *a5)
{
  signed int v9; // edi
  HRESULT v10; // esi
  int v11; // ebp
  HANDLE v12; // rbx
  wchar_t *v13; // rax
  const wchar_t *v14; // r9
  __int64 v15; // r8
  _WORD *v16; // rax
  unsigned int v17; // edx
  __int64 v18; // r11
  signed int LastError; // eax
  signed int v21; // eax
  size_t v22; // [rsp+20h] [rbp-898h]
  DWORD dwSize; // [rsp+30h] [rbp-888h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-880h] BYREF
  WCHAR ExeName[1040]; // [rsp+40h] [rbp-878h] BYREF

  v9 = 0;
  v10 = 0;
  v11 = 0;
  memset_0(ExeName, 0, sizeof(ExeName));
  dwSize = 1040;
  v12 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v12 )
    goto LABEL_22;
  LastError = GetLastError();
  v9 = LastError;
  if ( LastError > 0 )
    v9 = (unsigned __int16)LastError | 0x80070000;
  if ( v9 >= 0 )
  {
LABEL_22:
    if ( !QueryFullProcessImageNameW(v12, 0, ExeName, &dwSize) )
    {
      v21 = GetLastError();
      v9 = v21;
      if ( v21 > 0 )
        v9 = (unsigned __int16)v21 | 0x80070000;
      if ( v9 < 0 )
        goto LABEL_15;
    }
    v13 = wcsrchr(ExeName, 0x5Cu);
    if ( !v13 )
    {
      v9 = -2147418113;
LABEL_15:
      if ( v12 )
        CloseHandle(v12);
      if ( v9 >= 0 )
      {
        if ( v10 < 0 )
          return (unsigned int)v10;
        return (unsigned int)v11;
      }
      return (unsigned int)v9;
    }
    v14 = v13 + 1;
    *v13 = 0;
    if ( pszDest )
    {
      if ( v13 == (wchar_t *)-2LL )
      {
        v17 = -2147024809;
      }
      else
      {
        v15 = 0x7FFFFFFFLL;
        v16 = v13 + 1;
        do
        {
          if ( !*v16 )
            break;
          ++v16;
          --v15;
        }
        while ( v15 );
        v10 = -2147024809;
        v17 = v15 == 0 ? 0x80070057 : 0;
        v18 = (0x7FFFFFFF - v15) & -(__int64)(v15 != 0);
        if ( v15 )
        {
          if ( *(_DWORD *)a3 )
          {
            if ( *(_DWORD *)a3 > 0x7FFFFFFFu )
            {
              if ( *(_DWORD *)a3 )
                *pszDest = 0;
            }
            else
            {
              v10 = StringCopyWorkerW(pszDest, *(unsigned int *)a3, (size_t *)v15, v14, v22);
            }
          }
          *(_DWORD *)a3 = v18 + 1;
          goto LABEL_14;
        }
      }
      v10 = v17;
    }
LABEL_14:
    if ( a4 )
    {
      v24 = 0LL;
      v11 = StringCchLengthW(ExeName, 0x7FFFFFFFuLL, &v24);
      if ( v11 >= 0 )
      {
        v11 = StringCchCopyW(a4, *(unsigned int *)a5, (char *)ExeName);
        *(_DWORD *)a5 = v24 + 1;
      }
    }
    goto LABEL_15;
  }
  return (unsigned int)v9;
}
