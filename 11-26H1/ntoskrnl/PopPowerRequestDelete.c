/*
 * XREFs of PopPowerRequestDelete @ 0x140AD6100
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopUmpoSendPowerMessage @ 0x140437684 (PopUmpoSendPowerMessage.c)
 *     SleepstudyHelperDestroyBlocker @ 0x14049BA60 (SleepstudyHelperDestroyBlocker.c)
 *     PoDestroyReasonContext @ 0x14050A3C0 (PoDestroyReasonContext.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1407E643C (TtmNotifySessionPowerRequestDeleted.c)
 *     PsReleaseProcessWakeCounter @ 0x1409BE200 (PsReleaseProcessWakeCounter.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 *     PopPowerRequestTableDeleteEntry @ 0x140AD624C (PopPowerRequestTableDeleteEntry.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x140AD627C (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopDiagTracePowerRequestClose @ 0x140AD62C8 (PopDiagTracePowerRequestClose.c)
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
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20, a2, a3, a4);
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
  --LODWORD(stru_140F12D20.StackLimit);
  PopPowerRequestTableDeleteEntry(v9);
  PopReleaseRwLock(&stru_140F12D20);
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
    if ( LOBYTE(stru_140F12D20.CurrentRunTime) )
    {
      memset_0(Src, 0, 0x48uLL);
      Src[2] = a1[9];
      Src[0] = 17;
      PopUmpoSendPowerMessage(Src, 0x48uLL, 0, 0LL);
    }
  }
  if ( !*((_BYTE *)a1 + 152) )
    PopUmpoSendPowerRequestOverrideCleanup(a1);
}
