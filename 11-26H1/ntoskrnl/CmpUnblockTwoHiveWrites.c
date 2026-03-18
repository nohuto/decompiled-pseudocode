/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x1408B1620
 * Callers:
 *     CmpVirtualPathPresent @ 0x1407734E0 (CmpVirtualPathPresent.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408B1674 (CmpVirtualBranchIsReplicated.c)
 * Callees:
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpUnblockTwoHiveWrites(PVOID P, PVOID a2)
{
  __int64 result; // rax

  if ( P )
    result = HvUnlockHiveFlusherExclusive(P);
  if ( a2 )
    result = HvUnlockHiveFlusherExclusive(a2);
  if ( P )
    result = CmpDereferenceHive(P);
  if ( a2 )
    return CmpDereferenceHive(a2);
  return result;
}
