/*
 * XREFs of IoConnectInterrupt @ 0x14079F360
 * Callers:
 *     DifIoConnectInterruptWrapper @ 0x14065A2F0 (DifIoConnectInterruptWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     IopConnectInterruptFullySpecified @ 0x14079F708 (IopConnectInterruptFullySpecified.c)
 */

NTSTATUS __stdcall IoConnectInterrupt(
        PKINTERRUPT *InterruptObject,
        PKSERVICE_ROUTINE ServiceRoutine,
        PVOID ServiceContext,
        PKSPIN_LOCK SpinLock,
        ULONG Vector,
        KIRQL Irql,
        KIRQL SynchronizeIrql,
        KINTERRUPT_MODE InterruptMode,
        BOOLEAN ShareVector,
        KAFFINITY ProcessorEnableMask,
        BOOLEAN FloatingSave)
{
  _QWORD v12[3]; // [rsp+60h] [rbp-18h] BYREF

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  v12[0] = ProcessorEnableMask;
  v12[1] = 0LL;
  return IopConnectInterruptFullySpecified(
           (_DWORD)InterruptObject,
           0,
           (_DWORD)ServiceRoutine,
           (_DWORD)ServiceContext,
           (__int64)SpinLock,
           Vector,
           Irql,
           SynchronizeIrql,
           InterruptMode,
           ShareVector,
           (__int64)v12);
}
