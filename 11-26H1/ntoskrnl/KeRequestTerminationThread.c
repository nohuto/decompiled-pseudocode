/*
 * XREFs of KeRequestTerminationThread @ 0x1402C5B58
 * Callers:
 *     KeRequestTerminationProcess @ 0x1407B9F48 (KeRequestTerminationProcess.c)
 *     PspTerminateThreadByPointer @ 0x1409575E0 (PspTerminateThreadByPointer.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 * Callees:
 *     KiInsertQueueApc @ 0x14020B070 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14020B1E0 (KiSignalThreadForApc.c)
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402C4710 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeAlertThread @ 0x1402C5C40 (KeAlertThread.c)
 *     KeForceResumeThread @ 0x1402C5E5C (KeForceResumeThread.c)
 *     VslRequestSecureThreadExit @ 0x1405C3EA8 (VslRequestSecureThreadExit.c)
 */

void __fastcall KeRequestTerminationThread(__int64 a1)
{
  __int64 v1; // rax
  char v3; // si
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 544);
  v6 = 0;
  if ( (*(_BYTE *)(v1 + 368) & 1) != 0 )
    VslRequestSecureThreadExit();
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xFu) )
  {
    v3 = 0;
    KiAcquireThreadLockRaiseToDpc(a1, &v6);
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = v6;
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v3 = 1;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
        KiSignalThreadForApc((__int64)CurrentPrcb, a1 + 648, v5, 0);
      }
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, v5);
    if ( v3 )
    {
      KeAlertThread(a1, 0LL);
      KeForceResumeThread(a1);
    }
  }
}
