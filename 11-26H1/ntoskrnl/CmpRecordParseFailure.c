/*
 * XREFs of CmpRecordParseFailure @ 0x1408C64C0
 * Callers:
 *     CmpDoWritethroughReparse @ 0x1408C11D0 (CmpDoWritethroughReparse.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmpCreateKeyBody @ 0x1408FBCB0 (CmpCreateKeyBody.c)
 *     CmpCreateHiveRootCell @ 0x140B4B93C (CmpCreateHiveRootCell.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseFailure(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax

  if ( a1 )
  {
    v3 = *(unsigned __int8 *)(a1 + 426);
    if ( (unsigned __int8)v3 < 4u )
    {
      *(_DWORD *)(a1 + 8 * v3 + 428) = a3;
      *(_DWORD *)(a1 + 8LL * (unsigned __int8)(*(_BYTE *)(a1 + 426))++ + 432) = a2;
    }
  }
}
