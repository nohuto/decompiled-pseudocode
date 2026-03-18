/*
 * XREFs of ViThunkSnapSharedExportByName @ 0x140C441E8
 * Callers:
 *     ViThunkSnapSharedExports @ 0x140C44130 (ViThunkSnapSharedExports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     _stricmp @ 0x140536260 (_stricmp.c)
 */

__int64 __fastcall ViThunkSnapSharedExportByName(unsigned __int64 a1, const char **a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  const char *v11; // rbx
  __int64 *v13; // r14
  unsigned __int64 v14; // rbx
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  *(_DWORD *)(a3 + 8) = -1;
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1, 1u, &v15);
  v8 = RtlImageDirectoryEntryToData(a1, 1, 0xCu, &v15);
  v9 = v8;
  if ( v7 && v8 )
  {
    while ( 1 )
    {
      v10 = v7[3];
      if ( !(_DWORD)v10 || !*v7 )
        break;
      v11 = (const char *)(v10 + a1);
      if ( !stricmp((const char *)(v10 + a1), "ntoskrnl.exe") || !stricmp(v11, "hal.dll") )
      {
        v13 = (__int64 *)(a1 + *v7);
        v14 = a1 + v7[4];
        while ( *v13 )
        {
          if ( *v13 >= 0 && !stricmp((const char *)(*v13 + a1 + 2), *a2) )
          {
            *(_QWORD *)a3 = v14;
            v3 = 1;
            *(_QWORD *)(a3 + 16) = a2;
            *(_DWORD *)(a3 + 8) = (v14 - v9) >> 3;
            return v3;
          }
          ++v13;
          v14 += 8LL;
        }
      }
      v7 += 5;
    }
  }
  return v3;
}
