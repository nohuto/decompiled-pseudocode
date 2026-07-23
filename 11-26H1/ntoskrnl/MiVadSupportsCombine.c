/*
 * XREFs of MiVadSupportsCombine @ 0x1402E9A8C
 * Callers:
 *     MiCrcStillIntact @ 0x1402E96C8 (MiCrcStillIntact.c)
 *     MiShareValidPage @ 0x1407096FC (MiShareValidPage.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiVadSupportsPrivateCommit @ 0x1403C5E14 (MiVadSupportsPrivateCommit.c)
 */

__int64 __fastcall MiVadSupportsCombine(__int64 a1, __int64 a2)
{
  __int64 Address; // rbx

  MiLockVadTree(1LL);
  Address = MiLocateAddress(a2);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1);
  if ( !Address || MiVadPageSizes[(*(_DWORD *)(Address + 48) >> 17) & 3] == 16 )
    return 0LL;
  else
    return Address & -(__int64)((unsigned int)MiVadSupportsPrivateCommit(Address) != 0);
}
