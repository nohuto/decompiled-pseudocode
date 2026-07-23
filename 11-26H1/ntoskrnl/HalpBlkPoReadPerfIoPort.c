/*
 * XREFs of HalpBlkPoReadPerfIoPort @ 0x1405A7B40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpInterruptSendIpiToPhysicalTarget @ 0x140581AC4 (HalpInterruptSendIpiToPhysicalTarget.c)
 *     HalpBlkPoBusyWait @ 0x1405A7988 (HalpBlkPoBusyWait.c)
 */

__int64 __fastcall HalpBlkPoReadPerfIoPort(unsigned int a1, __int16 a2, __int16 a3, _DWORD *a4)
{
  __int64 v8; // rdi
  KIRQL v9; // r13
  int v10; // ebx

  v8 = *(_QWORD *)(HalpBlkPcr + 8LL * a1);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 2216));
  HalpBlkPoBusyWait(3uLL, a1, v8 + 2216);
  *(_QWORD *)(v8 + 2240) = 0LL;
  *(_QWORD *)(v8 + 2248) = 0LL;
  *(_DWORD *)(v8 + 2228) = 1;
  *(_DWORD *)(v8 + 2232) = 2;
  *(_WORD *)(v8 + 2236) = a2;
  *(_WORD *)(v8 + 2238) = a3;
  _InterlockedExchange((volatile __int32 *)(v8 + 2224), 1);
  v10 = HalpInterruptSendIpiToPhysicalTarget();
  if ( v10 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 3uLL, a1, v8 + 2216);
  HalpBlkPoBusyWait(3uLL, a1, v8 + 2216);
  *a4 = *(_DWORD *)(v8 + 2240);
  KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 2216), v9);
  return (unsigned int)v10;
}
