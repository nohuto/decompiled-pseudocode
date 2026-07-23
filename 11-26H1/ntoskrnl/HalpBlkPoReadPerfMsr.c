/*
 * XREFs of HalpBlkPoReadPerfMsr @ 0x1405A7C40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpInterruptSendIpiToPhysicalTarget @ 0x140581AC4 (HalpInterruptSendIpiToPhysicalTarget.c)
 *     HalpBlkPoBusyWait @ 0x1405A7988 (HalpBlkPoBusyWait.c)
 */

__int64 __fastcall HalpBlkPoReadPerfMsr(unsigned int a1, int a2, _QWORD *a3)
{
  __int64 v6; // rbx
  KSPIN_LOCK *BugCheckParameter4; // rsi
  KIRQL v8; // r12
  int v9; // ebx

  v6 = *(_QWORD *)(HalpBlkPcr + 8LL * a1);
  BugCheckParameter4 = (KSPIN_LOCK *)(v6 + 2216);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 2216));
  HalpBlkPoBusyWait(1uLL, a1, v6 + 2216);
  *(_QWORD *)(v6 + 2240) = 0LL;
  *(_QWORD *)(v6 + 2248) = 0LL;
  *(_DWORD *)(v6 + 2228) = 1;
  *(_DWORD *)(v6 + 2232) = 1;
  *(_DWORD *)(v6 + 2236) = a2;
  _InterlockedExchange((volatile __int32 *)(v6 + 2224), 1);
  v9 = HalpInterruptSendIpiToPhysicalTarget();
  if ( v9 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 1uLL, a1, (ULONG_PTR)BugCheckParameter4);
  HalpBlkPoBusyWait(1uLL, a1, (ULONG_PTR)BugCheckParameter4);
  *a3 = BugCheckParameter4[3];
  KeReleaseSpinLock(BugCheckParameter4, v8);
  return (unsigned int)v9;
}
