/*
 * XREFs of ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003FB28
 * Callers:
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003FE0C (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800400E8 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x180040684 (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     memset_0 @ 0x180002FE8 (memset_0.c)
 */

__int64 __fastcall Common::GetProcessImageInfoByPID(
        DWORD dwProcessId,
        char *a2,
        unsigned __int16 *a3,
        unsigned int *a4,
        unsigned __int16 *a5)
{
  signed int v9; // edi
  signed int v10; // ebp
  unsigned int v11; // esi
  HANDLE v12; // rbx
  signed int LastError; // eax
  signed int v14; // eax
  wchar_t *v15; // rax
  wchar_t *v16; // rdx
  __int64 v17; // r8
  _WORD *v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  signed __int64 v22; // rdx
  __int16 v23; // ax
  char *v24; // rax
  WCHAR *v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r10
  signed __int64 v30; // r8
  __int16 v31; // ax
  unsigned int *v32; // rax
  DWORD dwSize[4]; // [rsp+20h] [rbp-888h] BYREF
  WCHAR ExeName[1040]; // [rsp+30h] [rbp-878h] BYREF

  v9 = 0;
  v10 = 0;
  v11 = 0;
  memset_0(ExeName, 0, sizeof(ExeName));
  dwSize[0] = 1040;
  v12 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v12 )
    goto LABEL_8;
  LastError = GetLastError();
  v9 = LastError;
  if ( LastError > 0 )
    v9 = (unsigned __int16)LastError | 0x80070000;
  if ( v9 >= 0 )
  {
LABEL_8:
    if ( QueryFullProcessImageNameW(v12, 0, ExeName, dwSize) )
      goto LABEL_9;
    v14 = GetLastError();
    v9 = v14;
    if ( v14 > 0 )
      v9 = (unsigned __int16)v14 | 0x80070000;
    if ( v9 >= 0 )
    {
LABEL_9:
      v15 = wcsrchr(ExeName, 0x5Cu);
      if ( v15 )
      {
        *v15 = 0;
        v16 = v15 + 1;
        if ( a2 )
        {
          if ( v15 == (wchar_t *)-2LL )
          {
            v10 = -2147024809;
          }
          else
          {
            v17 = 0x7FFFFFFFLL;
            v18 = v15 + 1;
            do
            {
              if ( !*v18 )
                break;
              ++v18;
              --v17;
            }
            while ( v17 );
            v10 = v17 == 0 ? 0x80070057 : 0;
            v19 = (0x7FFFFFFF - v17) & -(__int64)(v17 != 0);
            if ( v17 )
            {
              v20 = *(unsigned int *)a3;
              if ( *(_DWORD *)a3 && v20 <= 0x7FFFFFFF )
              {
                v21 = 2147483646 - v20;
                v22 = (char *)v16 - a2;
                do
                {
                  if ( !(v21 + v20) )
                    break;
                  v23 = *(_WORD *)&a2[v22];
                  if ( !v23 )
                    break;
                  *(_WORD *)a2 = v23;
                  a2 += 2;
                  --v20;
                }
                while ( v20 );
                v24 = a2 - 2;
                if ( v20 )
                  v24 = a2;
                v10 = v20 == 0 ? 0x8007007A : 0;
                *(_WORD *)v24 = 0;
              }
              else
              {
                v10 = -2147024809;
                if ( *(_DWORD *)a3 )
                  *(_WORD *)a2 = 0;
              }
              *(_DWORD *)a3 = v19 + 1;
            }
          }
        }
        if ( a4 )
        {
          v25 = ExeName;
          v26 = 0x7FFFFFFFLL;
          do
          {
            if ( !*v25 )
              break;
            ++v25;
            --v26;
          }
          while ( v26 );
          v11 = v26 == 0 ? 0x80070057 : 0;
          v27 = (0x7FFFFFFF - v26) & ((unsigned __int128)-(__int128)(unsigned __int64)v26 >> 64);
          if ( v26 )
          {
            v28 = *(unsigned int *)a5;
            if ( *(_DWORD *)a5 && v28 <= 0x7FFFFFFF )
            {
              v29 = 2147483646 - v28;
              v30 = (char *)ExeName - (char *)a4;
              do
              {
                if ( !(v29 + v28) )
                  break;
                v31 = *(_WORD *)((char *)a4 + v30);
                if ( !v31 )
                  break;
                *(_WORD *)a4 = v31;
                a4 = (unsigned int *)((char *)a4 + 2);
                --v28;
              }
              while ( v28 );
              v32 = (unsigned int *)((char *)a4 - 2);
              if ( v28 )
                v32 = a4;
              v11 = v28 == 0 ? 0x8007007A : 0;
              *(_WORD *)v32 = 0;
            }
            else
            {
              v11 = -2147024809;
              if ( *(_DWORD *)a5 )
                *(_WORD *)a4 = 0;
            }
            *(_DWORD *)a5 = v27 + 1;
          }
        }
      }
      else
      {
        v9 = -2147418113;
      }
    }
    if ( v12 )
      CloseHandle(v12);
    if ( v9 >= 0 )
    {
      if ( v10 < 0 )
        return (unsigned int)v10;
      return v11;
    }
  }
  return (unsigned int)v9;
}
