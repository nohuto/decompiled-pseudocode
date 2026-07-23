/*
 * XREFs of HalpBlkPoWritePerfIoPort @ 0x1405A7E00
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpInterruptSendIpiToPhysicalTarget @ 0x140581AC4 (HalpInterruptSendIpiToPhysicalTarget.c)
 *     HalpBlkPoBusyWait @ 0x1405A7988 (HalpBlkPoBusyWait.c)
 */

__int64 __fastcall HalpBlkPoWritePerfIoPort(unsigned int a1, __int16 a2, __int16 a3, int a4, int a5)
{
  __int64 v10; // rbp
  KIRQL v11; // r13
  int v12; // ebx

  v10 = *(_QWORD *)(HalpBlkPcr + 8LL * a1);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 2216));
  HalpBlkPoBusyWait(4uLL, a1, v10 + 2216);
  *(_QWORD *)(v10 + 2248) = 0LL;
  *(_DWORD *)(v10 + 2228) = 2;
  *(_DWORD *)(v10 + 2232) = 2;
  *(_WORD *)(v10 + 2236) = a2;
  *(_WORD *)(v10 + 2238) = a3;
  *(_DWORD *)(v10 + 2240) = a4;
  *(_DWORD *)(v10 + 2244) = a5;
  _InterlockedExchange((volatile __int32 *)(v10 + 2224), 1);
  v12 = HalpInterruptSendIpiToPhysicalTarget();
  if ( v12 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 4uLL, a1, v10 + 2216);
  KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 2216), v11);
  return (unsigned int)v12;
}
