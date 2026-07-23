/*
 * XREFs of ViThunkReplaceAllThunkedImports @ 0x140C3BDC4
 * Callers:
 *     VfThunkApplyThunksCurrentSession @ 0x140C3B408 (VfThunkApplyThunksCurrentSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     ViThunkFindAllSpecialTables @ 0x140C3B7DC (ViThunkFindAllSpecialTables.c)
 *     ViThunkReplaceIatEntryForClassDriverThunk @ 0x140C3BF08 (ViThunkReplaceIatEntryForClassDriverThunk.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140C3BF64 (ViThunkReplaceIatEntryForWdmThunk.c)
 */

__int64 __fastcall ViThunkReplaceAllThunkedImports(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 *AllSpecialTables; // rsi
  __int64 v5; // rbp
  unsigned int v6; // ebx
  __int64 v8; // rdi
  __int64 v10; // r12
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ebp
  __int64 v14; // rdx
  int v15; // r14d

  AllSpecialTables = 0LL;
  v5 = a3;
  v6 = 0;
  v8 = a2;
  if ( a4 && !KernelVerifier )
    AllSpecialTables = (__int64 *)ViThunkFindAllSpecialTables(a2, a3);
  if ( (_DWORD)v5 )
  {
    v10 = v5;
    do
    {
      v11 = ViThunkReplaceIatEntryForWdmThunk(a1, v8, &VfPoolThunks);
      if ( !v11 )
      {
        v11 = ViThunkReplaceIatEntryForWdmThunk(a1, v8, &VfRegularThunks);
        if ( !v11 )
          v11 = ViThunkReplaceIatEntryForWdmThunk(a1, v8, &VfDifThunks);
      }
      v12 = v6 + 1;
      if ( !v11 )
        v12 = v6;
      v6 = v12;
      v13 = v12;
      if ( AllSpecialTables && !KernelVerifier )
      {
        v14 = *AllSpecialTables;
        v15 = 0;
        while ( v14 )
        {
          if ( (unsigned int)ViThunkReplaceIatEntryForClassDriverThunk(a1, v14 + 24, v8) )
          {
            v6 = v13 + 1;
            break;
          }
          v14 = AllSpecialTables[++v15];
        }
      }
      if ( a4
        && !KernelVerifier
        && (unsigned int)ViThunkReplaceIatEntryForClassDriverThunk(a1, &ViVerifierDriverAddedThunkListHead, v8) )
      {
        ++v6;
      }
      v8 += 8LL;
      --v10;
    }
    while ( v10 );
  }
  if ( AllSpecialTables )
    ExFreePoolWithTag(AllSpecialTables, 0);
  return v6;
}
