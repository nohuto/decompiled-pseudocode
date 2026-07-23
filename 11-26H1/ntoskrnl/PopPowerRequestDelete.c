/*
 * XREFs of PopPowerRequestDelete @ 0x140AD30B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     SleepstudyHelperDestroyBlocker @ 0x1404955B0 (SleepstudyHelperDestroyBlocker.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1407EBF9C (TtmNotifySessionPowerRequestDeleted.c)
 *     PsReleaseProcessWakeCounter @ 0x14098F1E0 (PsReleaseProcessWakeCounter.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     PopPowerRequestTableDeleteEntry @ 0x140AD31FC (PopPowerRequestTableDeleteEntry.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x140AD322C (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopDiagTracePowerRequestClose @ 0x140AD3278 (PopDiagTracePowerRequestClose.c)
 */

void __fastcall PopPowerRequestDelete(unsigned int *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rdi
  __int64 *v6; // rcx
  __int64 **v7; // rax
  void *v8; // rcx
  __int64 v9; // rcx
  KSPIN_LOCK *v10; // rcx
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  v5 = 0LL;
  PopAcquireRwLockExclusive(stru_140F12EA0.TracingPrivate, a2, a3, a4);
  v6 = *(__int64 **)a1;
  if ( *(unsigned int **)(*(_QWORD *)a1 + 8LL) != a1 || (v7 = (__int64 **)*((_QWORD *)a1 + 1), *v7 != (__int64 *)a1) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  v8 = (void *)*((_QWORD *)a1 + 17);
  if ( v8 )
  {
    ObfDereferenceObjectWithTag(v8, 0x72506F50u);
    *((_QWORD *)a1 + 17) = 0LL;
  }
  if ( *((_QWORD *)a1 + 18) )
  {
    v5 = *((_QWORD *)a1 + 18);
    *((_QWORD *)a1 + 18) = 0LL;
  }
  v9 = a1[9];
  --LODWORD(stru_140F12EA0.KernelShadowStackLimit.AllFields);
  PopPowerRequestTableDeleteEntry(v9);
  PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
  if ( v5 )
    PsReleaseProcessWakeCounter(v5);
  PoDestroyReasonContext(*((_QWORD **)a1 + 12));
  v10 = (KSPIN_LOCK *)*((_QWORD *)a1 + 20);
  if ( v10 )
    SleepstudyHelperDestroyBlocker(v10);
  PopDiagTracePowerRequestClose(a1);
  if ( a1[26] )
  {
    if ( TtmIsEnabled() )
      TtmNotifySessionPowerRequestDeleted(a1[4], a1[9]);
    if ( LOBYTE(stru_140F12EA0.OtherTransferCount) )
    {
      memset_0(Src, 0, 0x48uLL);
      Src[2] = a1[9];
      Src[0] = 17;
      PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
    }
  }
  if ( !*((_BYTE *)a1 + 152) )
    PopUmpoSendPowerRequestOverrideCleanup(a1);
}
