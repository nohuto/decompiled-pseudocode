/*
 * XREFs of ViThunkFindExportAddress @ 0x140CE5628
 * Callers:
 *     ViThunkFindAllExportAddresses @ 0x140CE5574 (ViThunkFindAllExportAddresses.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 */

char *__fastcall ViThunkFindExportAddress(const char *a1, int *a2)
{
  PVOID *v2; // rdi
  int v4; // ebp
  int v5; // ebx
  char *v6; // rsi
  _DWORD *v7; // rax
  _DWORD *v8; // r8
  int v9; // r10d
  char *v10; // r13
  char *v11; // r12
  int v12; // edx
  __int64 v13; // rcx
  bool v14; // cc
  int v15; // eax
  unsigned int v16; // r10d
  __int64 v17; // r9
  __int64 v18; // rdx
  char *v19; // r11
  char *v20; // r8
  unsigned __int16 i; // dx
  ULONG Size; // [rsp+68h] [rbp+10h] BYREF

  v2 = (PVOID *)PsLoadedModuleList;
  *a2 = 0;
  v4 = 0;
  v5 = 1;
  while ( 1 )
  {
    if ( v2 == &PsLoadedModuleList )
      return 0LL;
    v6 = (char *)v2[6];
    v7 = RtlImageDirectoryEntryToData(v6, 1u, 0, &Size);
    v8 = v7;
    if ( v7 )
    {
      v9 = 0;
      v10 = &v6[v7[8]];
      v11 = &v6[v7[9]];
      v12 = v7[6] - 1;
      LODWORD(v13) = 0;
      while ( 1 )
      {
        v14 = v12 < v9;
        if ( v12 < (unsigned int)v9 )
          break;
        v13 = (unsigned int)(v12 + v9) >> 1;
        v15 = strcmp(a1, &v6[*(unsigned int *)&v10[4 * v13]]);
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
        v17 = *(unsigned __int16 *)&v11[2 * (unsigned int)v13];
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
  v19 = &v6[v18];
  v20 = &v6[*(unsigned int *)&v6[4 * v17 + v18]];
  for ( i = 0; i < v16; ++i )
  {
    if ( i != (_WORD)v17 && &v6[*(unsigned int *)&v19[4 * i]] == v20 )
      goto LABEL_22;
  }
  v5 = 0;
LABEL_22:
  *a2 = v5;
  return v20;
}
