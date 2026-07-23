/*
 * XREFs of KiRcuStartGracePeriod @ 0x140526914
 * Callers:
 *     CcDecrementVolumeUseCountWithDelete @ 0x1403861F0 (CcDecrementVolumeUseCountWithDelete.c)
 *     KeRcuFreePool @ 0x1405F2980 (KeRcuFreePool.c)
 *     KeRcuSynchronize @ 0x1407BD260 (KeRcuSynchronize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRcuForEachParticipatingCpu @ 0x1404EA054 (KiRcuForEachParticipatingCpu.c)
 *     KiRcuFlushCompleted @ 0x1404FD44C (KiRcuFlushCompleted.c)
 */

void __fastcall KiRcuStartGracePeriod(PVOID **a1)
{
  KIRQL v2; // al
  struct _KTHREAD *v3; // rdx
  _QWORD *SparePtr; // rcx
  int v5; // edi
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&KiDpcCorralLock.WaitBlock[2].WaitListEntry.Blink);
  v3 = (struct _KTHREAD *)((char *)&KiDpcCorralLock.WaitBlock[2].Thread->Header.Lock + 1);
  a1[2] = (PVOID *)((char *)&KiDpcCorralLock.WaitBlock[2].Thread->Header.Lock + 1);
  SparePtr = KiDpcCorralLock.WaitBlock[2].SparePtr;
  if ( *(struct _KTHREAD **)KiDpcCorralLock.WaitBlock[2].SparePtr != (struct _KTHREAD *)&KiDpcCorralLock.WaitBlockFill11[128] )
    __fastfail(3u);
  a1[1] = (PVOID *)KiDpcCorralLock.WaitBlock[2].SparePtr;
  *a1 = &KiDpcCorralLock.WaitBlock[2].Object;
  *SparePtr = a1;
  KiDpcCorralLock.WaitBlock[2].SparePtr = a1;
  KiDpcCorralLock.WaitBlock[2].Thread = v3;
  KeReleaseSpinLock((PKSPIN_LOCK)&KiDpcCorralLock.WaitBlock[2].WaitListEntry.Blink, v2);
  v5 = 0;
  v7 = 0;
  KiRcuForEachParticipatingCpu(v6, (__int64)&v7);
  if ( v7 )
  {
    LOBYTE(v5) = ((unsigned __int64)a1[3] & 0xFFFFFFFFFFFFFFFCuLL) < 8;
    KiRcuFlushCompleted(v5);
  }
}
