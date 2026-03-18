/*
 * XREFs of ViThunkFindExportAddress @ 0x140CDF290
 * Callers:
 *     ViThunkFindAllExportAddresses @ 0x140CDF1DC (ViThunkFindAllExportAddresses.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 */

unsigned __int64 __fastcall ViThunkFindExportAddress(const char *a1, int *a2)
{
  PVOID *v2; // rdi
  int v4; // ebp
  int v5; // ebx
  unsigned __int64 v6; // rsi
  _DWORD *v7; // rax
  _DWORD *v8; // r8
  int v9; // r10d
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  int v12; // edx
  __int64 v13; // rcx
  bool v14; // cc
  int v15; // eax
  unsigned int v16; // r10d
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r11
  unsigned __int64 v20; // r8
  unsigned __int16 i; // dx
  int v24; // [rsp+68h] [rbp+10h] BYREF

  v2 = (PVOID *)PsLoadedModuleList;
  *a2 = 0;
  v4 = 0;
  v5 = 1;
  while ( 1 )
  {
    if ( v2 == &PsLoadedModuleList )
      return 0LL;
    v6 = (unsigned __int64)v2[6];
    v7 = (_DWORD *)RtlImageDirectoryEntryToData(v6, 1, 0, &v24);
    v8 = v7;
    if ( v7 )
    {
      v9 = 0;
      v10 = v6 + (unsigned int)v7[8];
      v11 = v6 + (unsigned int)v7[9];
      v12 = v7[6] - 1;
      LODWORD(v13) = 0;
      while ( 1 )
      {
        v14 = v12 < v9;
        if ( v12 < (unsigned int)v9 )
          break;
        v13 = (unsigned int)(v12 + v9) >> 1;
        v15 = strcmp(a1, (const char *)(v6 + *(unsigned int *)(v10 + 4 * v13)));
        if ( v15 >= 0 )
        {
          if ( v15 <= 0 )
          {
            v14 = v12 < v9;
            break;
          }
          v9 = v13 + 1;
        }
        else
        {
          if ( !(_DWORD)v13 )
            goto LABEL_14;
          v12 = v13 - 1;
        }
      }
      if ( !v14 )
      {
        v16 = v8[5];
        v17 = *(unsigned __int16 *)(v11 + 2LL * (unsigned int)v13);
        if ( (unsigned int)v17 < v16 )
          break;
      }
    }
LABEL_14:
    if ( ++v4 == 2 )
      return 0LL;
    v2 = (PVOID *)*v2;
  }
  v18 = (unsigned int)v8[7];
  v19 = v18 + v6;
  v20 = v6 + *(unsigned int *)(v18 + 4 * v17 + v6);
  for ( i = 0; i < v16; ++i )
  {
    if ( i != (_WORD)v17 && v6 + *(unsigned int *)(v19 + 4LL * i) == v20 )
      goto LABEL_22;
  }
  v5 = 0;
LABEL_22:
  *a2 = v5;
  return v20;
}
