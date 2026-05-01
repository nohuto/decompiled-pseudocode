/*
 * XREFs of ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18065670C
 * Callers:
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1806564DC (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1800F1970 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D5A88 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Common::GetProcessArgsByPID(DWORD dwProcessId, char *a2, unsigned __int16 *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  NTSTATUS v7; // esi
  unsigned int v8; // edi
  unsigned __int16 *v9; // rbp
  unsigned int v10; // r14d
  const struct std::nothrow_t *v11; // rdx
  HANDLE v12; // r15
  signed int LastError; // eax
  int v14; // ebx
  __int16 v15; // r8
  __int64 v16; // rcx
  char *v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // eax
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
    goto LABEL_8;
  LastError = GetLastError();
  v14 = LastError;
  if ( LastError > 0 )
    v14 = (unsigned __int16)LastError | 0x80070000;
  if ( v14 >= 0 )
  {
    v4 = 0;
    while ( 1 )
    {
LABEL_8:
      if ( v4 >= 2 )
        goto LABEL_15;
      if ( ProcessInformationLength > 0x10000 )
        goto LABEL_12;
      operator delete(v9, v11);
      v9 = (unsigned __int16 *)operator new[](
                                 ProcessInformationLength + 2LL,
                                 (const struct std::nothrow_t *)&std::nothrow);
      if ( !v9 )
        break;
      ++v4;
      v7 = NtQueryInformationProcess(
             v12,
             ProcessImageFileMapping|ProcessUserModeIOPL,
             v9,
             ProcessInformationLength,
             &ProcessInformationLength);
      if ( v7 != -1073741820 )
      {
LABEL_12:
        if ( v7 >= 0 )
        {
          v14 = 0;
          v15 = 34;
          v16 = *v9 >> 1;
          v9[v16 + 8] = 0;
          if ( v9[8] != 34 )
            v15 = 32;
          while ( v10 < (unsigned int)v16 )
          {
            v11 = (const struct std::nothrow_t *)(v10 + 1);
            if ( v9[v10 + 8] == v15 )
            {
              v8 = v16 - v10;
              v17 = (char *)&v9[(_QWORD)v11 + 8];
              if ( v17 && v8 )
              {
                do
                {
                  if ( *(_WORD *)v17 != 32 )
                    break;
                  v17 += 2;
                  --v8;
                }
                while ( v8 );
                v18 = *(unsigned int *)a3;
                v19 = v18 - 1;
                if ( v8 < (int)v18 - 1 )
                  v19 = v8;
                v8 = v19;
                v14 = StringCchCopyNW(a2, v18, v17, v19);
              }
              break;
            }
            ++v10;
          }
          *(_DWORD *)a3 = v8;
          goto LABEL_29;
        }
LABEL_15:
        v14 = v7 | 0x10000000;
        goto LABEL_29;
      }
    }
    v7 = -1073741801;
    goto LABEL_15;
  }
LABEL_29:
  operator delete(v9, v11);
  if ( v12 )
    CloseHandle(v12);
  return (unsigned int)v14;
}
