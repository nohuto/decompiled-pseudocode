/*
 * XREFs of ExpInitializeSvm @ 0x140CECFE4
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CEA720 (ExpInitSystemPhase1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

struct _LIST_ENTRY **ExpInitializeSvm()
{
  unsigned int v0; // r8d
  bool v1; // zf
  ULONG_PTR Pool2; // rax
  struct _LIST_ENTRY **p_Blink; // rdx
  unsigned int v4; // r9d
  struct _LIST_ENTRY *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  struct _LIST_ENTRY **result; // rax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  guard_dispatch_icall_no_overrides(0LL, (__int64)&v9);
  v0 = v9;
  v1 = v9 == 1;
  if ( v9 > 1 )
  {
    Pool2 = ExAllocatePool2(64LL, 104LL * v9, 0x76537845u);
    v0 = v9;
    v1 = v9 == 1;
    *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[16] = Pool2;
  }
  if ( v1 || (p_Blink = *(struct _LIST_ENTRY ***)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[16]) == 0LL )
  {
    p_Blink = &ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1].Blink;
    v0 = 1;
    *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[16] = &ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1].Blink;
    v4 = 0;
    *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[24] = 1;
  }
  else
  {
    *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[24] = v0;
    v4 = 0;
    if ( !v0 )
      goto LABEL_9;
  }
  do
  {
    v5 = (struct _LIST_ENTRY *)v4;
    v6 = 13LL * v4++;
    p_Blink[v6 + 2] = (struct _LIST_ENTRY *)ExpSvmWorkerThread;
    p_Blink[v6 + 3] = v5;
    p_Blink[v6] = 0LL;
    p_Blink[v6 + 7] = (struct _LIST_ENTRY *)ExpSvmDpcRoutine;
    LODWORD(p_Blink[v6 + 4]) = 275;
    p_Blink[v6 + 8] = v5;
    p_Blink[v6 + 11] = 0LL;
    p_Blink[v6 + 6] = 0LL;
    LODWORD(p_Blink[v6 + 12]) = 0;
  }
  while ( v4 < v0 );
LABEL_9:
  v7 = (_QWORD *)HalIommuDispatch;
  *(_QWORD *)(HalIommuDispatch + 96) = ExpSvmFaultRoutine;
  v7[13] = ExpSvmReferenceAsid;
  v7[14] = ExpSvmDereferenceAsid;
  v7[15] = ExpSvmServicePageFault;
  result = &ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink;
  ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink;
  ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink;
  ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Blink = 0LL;
  ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Flink = 0LL;
  return result;
}
