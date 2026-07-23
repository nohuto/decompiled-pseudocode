/*
 * XREFs of DbgkpWerDeferredWriteRoutine @ 0x14078EE20
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405CEAAC (IoWriteDeferredLiveDumpData.c)
 *     DbgkpWerCleanupContext @ 0x14078EC38 (DbgkpWerCleanupContext.c)
 */

void __fastcall DbgkpWerDeferredWriteRoutine(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  struct _KTIMER *v4; // rsi
  int v5; // ebp
  int v6; // eax

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerDeferredWriteRoutine entered, context 0x%p\n", (const void *)a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( *(_DWORD *)(a1 + 32) == 453 )
    v3 = -24000000000LL;
  else
    v3 = -10000000LL * SLODWORD(EmpParseLock.FirstArgument);
  v4 = *(struct _KTIMER **)(*(_QWORD *)(a1 + 120) + 16LL);
  if ( v4 )
    KiSetTimerEx((__int64)v4, v3, 0, 0, 0LL);
  v5 = IoWriteDeferredLiveDumpData(*(_QWORD *)(a1 + 128));
  KeCancelTimer(v4);
  *(_QWORD *)(a1 + 128) = 0LL;
  if ( v5 >= 0 )
  {
    v6 = WerLiveKernelSubmitReport(*(_QWORD *)(a1 + 96), 0LL);
    if ( v6 >= 0 )
      *(_DWORD *)(a1 + 104) |= 1u;
    else
      DbgPrintEx(
        5u,
        0,
        "DBGK: DbgkpWerDeferredWriteRoutine: WerLiveKernelSubmitReport failed with status 0x%X\n",
        (unsigned int)v6);
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkpWerDeferredWriteRoutine: dump write failed with status 0x%X\n", (unsigned int)v5);
  }
  DbgkpWerCleanupContext(a1);
  _InterlockedExchange((volatile __int32 *)&EmpParseLock.TrapFrame, 0);
  KeLeaveCriticalRegion();
}
