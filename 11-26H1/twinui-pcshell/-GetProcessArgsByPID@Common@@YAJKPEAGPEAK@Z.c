/*
 * XREFs of ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18067C75C
 * Callers:
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18067C520 (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1801069F0 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802CE0B0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Common::GetProcessArgsByPID(DWORD dwProcessId, char *a2, unsigned __int16 *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  NTSTATUS v7; // ebp
  unsigned int v8; // edi
  unsigned __int16 *v9; // rsi
  unsigned int v10; // r14d
  const struct std::nothrow_t *v11; // rdx
  HANDLE v12; // r15
  signed int LastError; // eax
  int v14; // ebx
  unsigned __int16 *v15; // r8
  __int16 v16; // r9
  __int64 v17; // rcx
  char *v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // eax
  ULONG ProcessInformationLength; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  ProcessInformationLength = 512;
  v7 = -1073741820;
  v8 = 0;
  v9 = 0LL;
  if ( !a2 || !a3 )
    return 2147500035LL;
  *(_WORD *)a2 = 0;
  v10 = 1;
  v12 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v12 )
  {
LABEL_8:
    while ( v4 < 2 && ProcessInformationLength <= 0x10000 )
    {
      operator delete(v9, v11);
      v9 = (unsigned __int16 *)operator new[](
                                 ProcessInformationLength + 2LL,
                                 (const struct std::nothrow_t *)&std::nothrow);
      if ( !v9 )
      {
        v7 = -1073741801;
        goto LABEL_13;
      }
      ++v4;
      v7 = NtQueryInformationProcess(
             v12,
             ProcessImageFileMapping|ProcessUserModeIOPL,
             v9,
             ProcessInformationLength,
             &ProcessInformationLength);
      if ( v7 != -1073741820 )
        break;
    }
    if ( v7 < 0 )
    {
LABEL_13:
      v14 = v7 | 0x10000000;
      goto LABEL_14;
    }
    v14 = 0;
    v15 = v9;
  }
  else
  {
    LastError = GetLastError();
    v14 = LastError;
    if ( LastError > 0 )
      v14 = (unsigned __int16)LastError | 0x80070000;
    if ( v14 >= 0 )
    {
      v4 = 0;
      goto LABEL_8;
    }
LABEL_14:
    v15 = v9;
    if ( v14 < 0 )
      goto LABEL_31;
  }
  v16 = 34;
  v17 = *v9 >> 1;
  v9[v17 + 8] = 0;
  if ( v9[8] != 34 )
    v16 = 32;
  while ( v10 < (unsigned int)v17 )
  {
    v11 = (const struct std::nothrow_t *)(v10 + 1);
    if ( v15[v10 + 8] == v16 )
    {
      v8 = v17 - v10;
      v18 = (char *)&v9[(unsigned int)v11 + 8];
      if ( v18 && v8 )
      {
        do
        {
          if ( *(_WORD *)v18 != 32 )
            break;
          v18 += 2;
          --v8;
        }
        while ( v8 );
        v19 = *(unsigned int *)a3;
        v20 = v19 - 1;
        if ( v8 < (int)v19 - 1 )
          v20 = v8;
        v8 = v20;
        v14 = StringCchCopyNW(a2, v19, v18, v20);
      }
      break;
    }
    ++v10;
  }
  *(_DWORD *)a3 = v8;
LABEL_31:
  operator delete(v9, v11);
  if ( v12 )
    CloseHandle(v12);
  return (unsigned int)v14;
}
