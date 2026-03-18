/*
 * XREFs of PsInitializeQuotaSystem @ 0x140CD8E40
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 * Callees:
 *     PspRegisterResource @ 0x140614DC0 (PspRegisterResource.c)
 *     PspSanitizeResourceLimits @ 0x1407F01D0 (PspSanitizeResourceLimits.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

char __fastcall PsInitializeQuotaSystem(int a1)
{
  unsigned __int8 v1; // dl
  int v2; // r8d
  int v3; // edx
  _QWORD *v4; // rdx
  PVOID *v5; // rcx
  struct _LIST_ENTRY *Pool2; // rax
  struct _LIST_ENTRY **p_Blink; // rax
  __int64 v8; // rcx

  if ( a1 )
  {
    PspRegisterResource(0, 5u, -1073741756);
    PspRegisterResource(1, v1, v2);
    PspRegisterResource(2, 0, -1073741524);
    PspRegisterResource(v3 + 3, v3, -1073741663);
    PsAltSystemCallRegistrationLock.WaitListEntry.Flink = (struct _LIST_ENTRY *)&PsAltSystemCallRegistrationLock.WaitBlockList;
    PsAltSystemCallRegistrationLock.WaitBlockList = (_KWAIT_BLOCK *)&PsAltSystemCallRegistrationLock.WaitBlockList;
    *(_QWORD *)&PsAltSystemCallRegistrationLock.ApcStateFill[40] = MmRaisePoolQuota;
    PsAltSystemCallRegistrationLock.Timer.Header.WaitListHead.Blink = &PsAltSystemCallRegistrationLock.Timer.Header.WaitListHead;
    PsAltSystemCallRegistrationLock.Timer.Header.WaitListHead.Flink = &PsAltSystemCallRegistrationLock.Timer.Header.WaitListHead;
    PsAltSystemCallRegistrationLock.WaitStatus = (volatile __int64)MmReturnPoolQuota;
    *(_DWORD *)&PsAltSystemCallRegistrationLock.ApcStateFill[16] = 1;
    *(_OWORD *)&PsAltSystemCallRegistrationLock.ApcStateFill[24] = 0x10000uLL;
    PsAltSystemCallRegistrationLock.Queue = (_DISPATCHER_HEADER *volatile)0x80000;
    PsAltSystemCallRegistrationLock.RelativeTimerBias = (unsigned __int64)MmRaisePoolQuota;
    *(_QWORD *)&PsAltSystemCallRegistrationLock.Timer.Header.Lock = MmReturnPoolQuota;
    *((_DWORD *)&PsAltSystemCallRegistrationLock.SwapListEntry + 2) = 0;
    PsAltSystemCallRegistrationLock.Teb = 0LL;
LABEL_10:
    LOBYTE(Pool2) = 1;
    return (char)Pool2;
  }
  dword_140E273C0 = 1;
  v4 = &unk_140E27200;
  dword_140E273C4 = 1;
  v5 = &stru_140FC01F0.SchedulerApc.Reserved[2];
  do
  {
    if ( (*(_BYTE *)v5 & 2) == 0 )
      *v4 = -1LL;
    ++v5;
    v4 += 16;
  }
  while ( (__int64)v5 < (__int64)&stru_140FC01F0.SchedulerApcFill5[80] );
  KeGetCurrentThread()->ApcState.Process[1].SchedulingGroup = (_KSCHEDULING_GROUP *)&PspSystemQuotaBlock;
  PspSanitizeResourceLimits((unsigned int *)&PspSiloMonitorLock.SchedulerApcFill5[16], 1);
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(256LL, 0x300uLL, 0x74517350u);
  PspSiloMonitorLock.WaitListEntry.Blink = Pool2;
  if ( Pool2 )
  {
    p_Blink = &Pool2->Blink;
    v8 = 32LL;
    do
    {
      p_Blink[1] = (struct _LIST_ENTRY *)p_Blink;
      *p_Blink = (struct _LIST_ENTRY *)p_Blink;
      *(p_Blink - 1) = 0LL;
      p_Blink += 3;
      --v8;
    }
    while ( v8 );
    goto LABEL_10;
  }
  return (char)Pool2;
}
