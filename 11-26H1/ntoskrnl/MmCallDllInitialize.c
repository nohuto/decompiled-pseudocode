/*
 * XREFs of MmCallDllInitialize @ 0x1408754D8
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 *     PipInitializeCoreDriversAndElam @ 0x140D04EDC (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140D05314 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     strcmp @ 0x14073DC40 (strcmp.c)
 *     MiIssueDllInitializeCall @ 0x1408752E8 (MiIssueDllInitializeCall.c)
 */

__int64 __fastcall MmCallDllInitialize(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 (__fastcall *v3)(UNICODE_STRING *); // rax
  __int64 (__fastcall *v4)(UNICODE_STRING *); // rbx
  int v5; // r14d
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  int v8; // esi
  int v9; // ebp
  int v10; // eax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(UNICODE_STRING *); // rdx
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 48);
  v14 = 0;
  v3 = (__int64 (__fastcall *)(UNICODE_STRING *))RtlImageDirectoryEntryToData(v1, 1, 0, &v14);
  v4 = v3;
  if ( v3 )
  {
    v5 = 0;
    v6 = v1 + *((unsigned int *)v3 + 8);
    v7 = v1 + *((unsigned int *)v3 + 9);
    v8 = *((_DWORD *)v3 + 6) - 1;
    while ( v8 >= v5 )
    {
      v9 = (v5 + v8) >> 1;
      v15 = v9;
      v10 = strcmp("DllInitialize", (const char *)(v1 + *(unsigned int *)(v6 + 4LL * v9)));
      if ( v10 >= 0 )
      {
        if ( v10 <= 0 )
        {
          v11 = *(unsigned __int16 *)(v7 + 2 * v15);
          if ( (unsigned int)v11 < *((_DWORD *)v4 + 5) )
          {
            v12 = (__int64 (__fastcall *)(UNICODE_STRING *))(v1
                                                           + *(unsigned int *)(v1 + *((unsigned int *)v4 + 7) + 4 * v11));
            if ( (unsigned __int64)v12 <= (unsigned __int64)v4 || (unsigned __int64)v12 >= (unsigned __int64)v4 + v14 )
            {
              if ( v12 )
                return MiIssueDllInitializeCall(a1, v12);
            }
          }
          return 0LL;
        }
        v5 = v9 + 1;
      }
      else
      {
        if ( !v9 )
          return 0LL;
        v8 = v9 - 1;
      }
    }
  }
  return 0LL;
}
