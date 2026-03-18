/*
 * XREFs of ExpInitializeSvm @ 0x140CE6C44
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CE4380 (ExpInitSystemPhase1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

$7A85BAF4F1FA08634C1C4A3E45B775B3 *ExpInitializeSvm()
{
  unsigned int v0; // r8d
  bool v1; // zf
  struct _LIST_ENTRY *Pool2; // rax
  char *p_WaitStatus; // rdx
  unsigned int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *result; // rax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  guard_dispatch_icall_no_overrides(0LL, (__int64)&v9);
  v0 = v9;
  v1 = v9 == 1;
  if ( v9 > 1 )
  {
    Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(64LL, 104LL * v9, 0x76537845u);
    v0 = v9;
    v1 = v9 == 1;
    ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1].Blink = Pool2;
  }
  if ( v1 || (p_WaitStatus = (char *)ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1].Blink) == 0LL )
  {
    p_WaitStatus = (char *)&ExSaPageGroupDescriptorArrayLock.WaitStatus;
    v0 = 1;
    ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.WaitStatus;
    v4 = 0;
    *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.ApcStateFill[32] = 1;
  }
  else
  {
    *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.ApcStateFill[32] = v0;
    v4 = 0;
    if ( !v0 )
      goto LABEL_9;
  }
  do
  {
    v5 = v4;
    v6 = 104LL * v4++;
    *(_QWORD *)&p_WaitStatus[v6 + 16] = ExpSvmWorkerThread;
    *(_QWORD *)&p_WaitStatus[v6 + 24] = v5;
    *(_QWORD *)&p_WaitStatus[v6] = 0LL;
    *(_QWORD *)&p_WaitStatus[v6 + 56] = ExpSvmDpcRoutine;
    *(_DWORD *)&p_WaitStatus[v6 + 32] = 275;
    *(_QWORD *)&p_WaitStatus[v6 + 64] = v5;
    *(_QWORD *)&p_WaitStatus[v6 + 88] = 0LL;
    *(_QWORD *)&p_WaitStatus[v6 + 48] = 0LL;
    *(_DWORD *)&p_WaitStatus[v6 + 96] = 0;
  }
  while ( v4 < v0 );
LABEL_9:
  v7 = (_QWORD *)HalIommuDispatch;
  *(_QWORD *)(HalIommuDispatch + 96) = ExpSvmFaultRoutine;
  v7[13] = ExpSvmReferenceAsid;
  v7[14] = ExpSvmDereferenceAsid;
  v7[15] = ExpSvmServicePageFault;
  result = &ExSaPageGroupDescriptorArrayLock.152;
  ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink = ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead;
  ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Flink = ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead;
  ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Object = 0LL;
  ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1].Flink = 0LL;
  return result;
}
