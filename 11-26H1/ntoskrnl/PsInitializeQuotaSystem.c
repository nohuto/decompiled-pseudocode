/*
 * XREFs of PsInitializeQuotaSystem @ 0x140CDF1C0
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     PspRegisterResource @ 0x140617C00 (PspRegisterResource.c)
 *     PspSanitizeResourceLimits @ 0x1407F5D30 (PspSanitizeResourceLimits.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
    *(_QWORD *)&PsAltSystemCallRegistrationLock.Timer.Processor = 0x10000LL;
    PsAltSystemCallRegistrationLock.WaitBlock[0].Object = &PsAltSystemCallRegistrationLock.WaitBlockFill11[24];
    PsAltSystemCallRegistrationLock.WaitBlock[0].Thread = (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[24];
    PsAltSystemCallRegistrationLock.WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)MmRaisePoolQuota;
    PsAltSystemCallRegistrationLock.WaitBlock[1].SparePtr = &PsAltSystemCallRegistrationLock.WaitBlockFill11[80];
    PsAltSystemCallRegistrationLock.WaitBlock[1].Object = &PsAltSystemCallRegistrationLock.WaitBlockFill11[80];
    *(_QWORD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[16] = MmReturnPoolQuota;
    LODWORD(PsAltSystemCallRegistrationLock.Timer.Dpc) = 1;
    PsAltSystemCallRegistrationLock.WaitBlock[0].WaitListEntry.Flink = 0LL;
    *(_QWORD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[64] = MmRaisePoolQuota;
    PsAltSystemCallRegistrationLock.WaitBlock[1].Thread = (struct _KTHREAD *)MmReturnPoolQuota;
    *(_DWORD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[40] = 0;
    *(_OWORD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[48] = 0x80000uLL;
LABEL_10:
    LOBYTE(Pool2) = 1;
    return (char)Pool2;
  }
  dword_140E27500 = 1;
  v4 = &unk_140E27340;
  dword_140E27504 = 1;
  v5 = &stru_140FC11F0.SchedulerApc.Reserved[1];
  do
  {
    if ( (*(_BYTE *)v5 & 2) == 0 )
      *v4 = -1LL;
    ++v5;
    v4 += 16;
  }
  while ( (__int64)v5 < (__int64)&stru_140FC11F0.SchedulerApc.SystemArgument2 );
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
