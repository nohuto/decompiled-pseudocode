/*
 * XREFs of ExReleaseDisownedFastResourceExclusive @ 0x1406D2240
 * Callers:
 *     DifExReleaseDisownedFastResourceExclusiveWrapper @ 0x1406575D0 (DifExReleaseDisownedFastResourceExclusiveWrapper.c)
 * Callees:
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14041E23C (ExpReleaseDisownedFastResourceExclusive.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExReleaseDisownedFastResourceExclusive(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  char v3; // al

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v3 = *(_BYTE *)(BugCheckParameter2 + 101);
  if ( (v3 & 2) == 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, BugCheckParameter2 + 64, ((unsigned __int64)(v3 & 2) << 15) | 1, 0LL);
  if ( (*(_QWORD *)(BugCheckParameter2 + 80) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0xDuLL, BugCheckParameter2 + 64, 0LL, 0LL);
  return ExpReleaseDisownedFastResourceExclusive(BugCheckParameter2, BugCheckParameter2 + 64);
}
