/*
 * XREFs of sub_1409077D4 @ 0x1409077D4
 * Callers:
 *     sub_140905930 @ 0x140905930 (sub_140905930.c)
 *     sub_14090835C @ 0x14090835C (sub_14090835C.c)
 *     sub_1409093BC @ 0x1409093BC (sub_1409093BC.c)
 *     sub_140909DF0 @ 0x140909DF0 (sub_140909DF0.c)
 *     WbCreateHeapExecutedBlock @ 0x14090A030 (WbCreateHeapExecutedBlock.c)
 *     WbHeapExecutionUnloadModule @ 0x140A3DEC0 (WbHeapExecutionUnloadModule.c)
 * Callees:
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     sub_140907850 @ 0x140907850 (sub_140907850.c)
 */

signed __int64 __fastcall sub_1409077D4(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rdi

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 80));
    if ( !v2 )
    {
      if ( *(_QWORD *)(a2 + 40) )
      {
        sub_140907850(a1);
        *(_QWORD *)(a2 + 40) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_DWORD *)(a2 + 72) = 0;
      }
      SddlpFree(a2);
    }
  }
  return v2;
}
