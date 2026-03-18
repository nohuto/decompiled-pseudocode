/*
 * XREFs of MiVadSupportsCombine @ 0x140307A0C
 * Callers:
 *     MiCrcStillIntact @ 0x140307648 (MiCrcStillIntact.c)
 *     MiShareValidPage @ 0x140704A2C (MiShareValidPage.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadTree @ 0x1403265D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140326730 (MiLocateAddress.c)
 *     MiVadSupportsPrivateCommit @ 0x1403BBFA4 (MiVadSupportsPrivateCommit.c)
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
