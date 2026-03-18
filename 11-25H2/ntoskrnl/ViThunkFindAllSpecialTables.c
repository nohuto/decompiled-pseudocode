/*
 * XREFs of ViThunkFindAllSpecialTables @ 0x140B87618
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140B87038 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140B87B68 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ViThunkFindNextSpecialTable @ 0x140B877C4 (ViThunkFindNextSpecialTable.c)
 */

ULONG_PTR __fastcall ViThunkFindAllSpecialTables(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 NextSpecialTable; // rbx
  ULONG_PTR Pool2; // r11
  __int64 v6; // rdi

  v2 = a2;
  NextSpecialTable = ViThunkFindNextSpecialTable(a1, a2);
  if ( !NextSpecialTable )
    return 0LL;
  Pool2 = ExAllocatePool2(0x100uLL, 8LL * (unsigned int)(ViVerifierSpecialThunkTables + 1), 0x74566D4DuLL);
  if ( !Pool2 )
    return 0LL;
  v6 = 0LL;
  do
  {
    *(_QWORD *)(Pool2 + 8 * v6) = NextSpecialTable;
    v6 = (unsigned int)(v6 + 1);
    NextSpecialTable = ViThunkFindNextSpecialTable(a1, v2);
  }
  while ( NextSpecialTable );
  return Pool2;
}
