/*
 * XREFs of PspWow64SetContextThread @ 0x140B81920
 * Callers:
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x1409EA8D0 (WbSetWowTrapFrame.c)
 * Callees:
 *     KeSuspendThread @ 0x140208E28 (KeSuspendThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D9690 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x1403D9B20 (RtlpValidateContextFlags.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D9D30 (RtlGetExtendedContextLength2.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x140466740 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     PsGetThreadTeb @ 0x14047EB60 (PsGetThreadTeb.c)
 *     PsMultiResumeThread @ 0x1404F76A8 (PsMultiResumeThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E70D0 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 *     RtlpReadExtendedContext @ 0x1409EAB30 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x140A4D9B0 (RtlCopyContext.c)
 *     RtlpWow64CtxFromAmd64 @ 0x140A660D0 (RtlpWow64CtxFromAmd64.c)
 *     EtwTiLogSetContextThread @ 0x140A84C80 (EtwTiLogSetContextThread.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140AA5DB0 (RtlGuardIsValidWow64StackPointer.c)
 *     RtlpWow64CtxToAmd64 @ 0x140AA9614 (RtlpWow64CtxToAmd64.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140B81560 (PspWow64ReadOrWriteThreadCpuArea.c)
 */

__int64 __fastcall PspWow64SetContextThread(PETHREAD Thread, _KLOCK_ENTRY_LOCK_STATE a2, int a3, char a4)
{
  unsigned int *v5; // r14
  int ExtendedContextLength2; // ebx
  char v8; // al
  _KPROCESS *Process; // rax
  ULONG64 v10; // r12
  int ULongFromUser; // edi
  int v12; // eax
  ULONG v13; // edi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  void *v17; // rsp
  __int64 v18; // rcx
  struct _KPROCESS *v19; // rbx
  void *ThreadTeb; // rax
  ULONG v21; // r14d
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  void *v24; // rsp
  void *v25; // rsp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v27; // rtt
  __int64 v28; // rdx
  int v29; // ebx
  __int64 v30; // rdx
  unsigned int v31; // ecx
  unsigned int Thread_high; // ebx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  void *v35; // rsp
  void *v36; // rsp
  ULONG64 CpuAreaEnabledFeatures; // rax
  __int64 v38; // r8
  _RTL_BALANCED_NODE *v39; // r12
  char v40; // al
  int v41; // ecx
  __int64 v42; // rdx
  int v44; // [rsp+28h] [rbp-28h]
  int v45; // [rsp+28h] [rbp-28h]
  struct _KLOCK_ENTRIES v46; // [rsp+50h] [rbp+0h] BYREF

  LOBYTE(v46.AvailableEntryBitmap) = a4;
  v5 = (unsigned int *)a2.0;
  v46.Entries[0].LockState = a2;
  LOWORD(v46.Thread) = 0;
  if ( a3 != 716 )
  {
    ExtendedContextLength2 = -1073741820;
LABEL_3:
    v8 = 0;
    goto LABEL_74;
  }
  v46.Entries[0].TreeNode.Children[1] = (_RTL_BALANCED_NODE *)KeGetCurrentThread();
  Process = Thread->Process;
  v46.Entries[0].TreeNode.ParentValue = (unsigned __int64)Process;
  if ( !Process[1].ReadyTime || WORD2(Process[3].PerProcessorCycleTimes) != 332 )
    goto LABEL_28;
  v46.Entries[0].TreeNode.Children[0] = (_RTL_BALANCED_NODE *)(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]);
  RtlpRemoveArchDisallowedXStateFeatures(0x10000, v46.Entries[0].TreeNode.Children);
  v10 = (unsigned __int64)v46.Entries[0].TreeNode.Children[0] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a4 )
  {
    ULongFromUser = RtlReadULongFromUser(v5);
    LODWORD(v46.Entries[0].OwnerTree.Root) = ULongFromUser;
  }
  else
  {
    ULongFromUser = *v5;
  }
  v12 = RtlpValidateContextFlags(ULongFromUser, 0LL);
  ExtendedContextLength2 = v12;
  if ( v12 < 0 || (ULongFromUser & 0x10000) != 0 )
  {
    if ( v12 != -1073741811 )
      goto LABEL_15;
  }
  else
  {
    ExtendedContextLength2 = -1073741811;
  }
  if ( a4 )
  {
    ULongFromUser = ULongFromUser & 0xD800007F | 0x10000;
    ExtendedContextLength2 = 0;
  }
LABEL_15:
  if ( ExtendedContextLength2 < 0 )
    goto LABEL_3;
  v13 = ULongFromUser & 0x37FFFFFF;
  HIDWORD(v46.Thread) = 0;
  *(_QWORD *)&v46.Entries[0].EntryFlags = 0LL;
  if ( a4 )
  {
    ExtendedContextLength2 = RtlGetExtendedContextLength2(v13, (PULONG)&v46.Thread + 1, v10);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_3;
    v14 = HIDWORD(v46.Thread) + 15LL;
    if ( v14 <= HIDWORD(v46.Thread) )
      v14 = 0xFFFFFFFFFFFFFF0LL;
    v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
    v16 = alloca(v15);
    v17 = alloca(v15);
    v5 = (unsigned int *)&v46;
    v46.Entries[0].TreeNode.Children[0] = (_RTL_BALANCED_NODE *)&v46;
    ExtendedContextLength2 = RtlInitializeExtendedContext2((PCONTEXT)&v46, v13, (PCONTEXT_EX *)&v46.Entries[0].8, v10);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_3;
    ExtendedContextLength2 = RtlpReadExtendedContext(
                               v18,
                               2u,
                               *(__int64 *)&v46.Entries[0].EntryFlags,
                               v13,
                               (__int64)v46.Entries[0].LockState.LockState,
                               0LL);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_3;
  }
  else
  {
    v46.Entries[0].TreeNode.Children[0] = (_RTL_BALANCED_NODE *)v5;
  }
  v19 = IoThreadToProcess((PETHREAD)v46.Entries[0].TreeNode.Children[1]);
  if ( IoThreadToProcess(Thread) == v19
    && (*(_DWORD *)(v46.Entries[0].TreeNode.ParentValue + 136) & 0x20) != 0
    && (v13 & 0x10001) == 0x10001 )
  {
    ThreadTeb = (void *)PsGetThreadTeb((__int64)Thread);
    if ( !RtlGuardIsValidWow64StackPointer(v5[49], ThreadTeb) )
    {
LABEL_28:
      ExtendedContextLength2 = -1073741811;
      v8 = 0;
      goto LABEL_74;
    }
  }
  v21 = 1048671;
  if ( !v10 )
    v21 = 1048607;
  HIDWORD(v46.Thread) = 0;
  ExtendedContextLength2 = RtlGetExtendedContextLength2(v21, (PULONG)&v46.Thread + 1, v10);
  if ( ExtendedContextLength2 < 0 )
    goto LABEL_3;
  v22 = HIDWORD(v46.Thread) + 15LL;
  if ( v22 <= HIDWORD(v46.Thread) )
    v22 = 0xFFFFFFFFFFFFFF0LL;
  v23 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
  v24 = alloca(v23);
  v25 = alloca(v23);
  ExtendedContextLength2 = RtlInitializeExtendedContext2(
                             (PCONTEXT)&v46,
                             v21,
                             (PCONTEXT_EX *)&v46.Entries[0].TreeNode.Children[1],
                             v10);
  if ( ExtendedContextLength2 < 0 )
    goto LABEL_3;
  if ( Thread != KeGetCurrentThread() )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    BYTE1(v46.Thread) = 0;
    v46.Entries[0].TreeNode.Children[1] = (_RTL_BALANCED_NODE *)KeGetCurrentThread();
    --WORD2(v46.Entries[0].TreeNode.Children[1][20].Left);
    _m_prefetchw((const void *)&Thread[1].WaitStatus);
    v27 = Thread[1].WaitStatus & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v27 == _InterlockedCompareExchange64(&Thread[1].WaitStatus, v27 + 2, v27)
      || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    {
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1) != 0 )
        v29 = -1073741749;
      else
        v29 = KeSuspendThread(Thread, 0LL, &v46.Entries[0].EntryFlags);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus);
    }
    else
    {
      v29 = -1073741749;
    }
    KiLeaveCriticalRegionUnsafe((__int64)v46.Entries[0].TreeNode.Children[1], v28);
    if ( v29 < 0 )
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v30);
    else
      LOBYTE(v46.Thread) = 1;
  }
  ExtendedContextLength2 = PspGetContextThreadInternal((__int64)Thread, (__int64)&v46, 0, 1, 1);
  if ( ExtendedContextLength2 < 0 )
    goto LABEL_73;
  v31 = 65599;
  if ( v10 )
    v31 = 65663;
  v46.Entries[0].EntryFlags = v31;
  HIDWORD(v46.Thread) = 0;
  ExtendedContextLength2 = RtlGetExtendedContextLength2(v31, (PULONG)&v46.Thread + 1, v10);
  if ( ExtendedContextLength2 < 0 )
    goto LABEL_73;
  BYTE2(v46.Thread) = 0;
  *(_DWORD *)&v46.Entries[0].LockState.0 = 0;
  Thread_high = HIDWORD(v46.Thread);
  v33 = HIDWORD(v46.Thread) + 15LL;
  if ( v33 <= HIDWORD(v46.Thread) )
    v33 = 0xFFFFFFFFFFFFFF0LL;
  v34 = v33 & 0xFFFFFFFFFFFFFFF0uLL;
  v35 = alloca(v34);
  v36 = alloca(v34);
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures((int *)&v46.Entries[0].8);
  RtlInitializeExtendedContext2(
    (PCONTEXT)&v46,
    v46.Entries[0].EntryFlags,
    (PCONTEXT_EX *)&v46.Entries[0].TreeNode.Children[1],
    CpuAreaEnabledFeatures);
  LOBYTE(v38) = 1;
  ExtendedContextLength2 = PspWow64ReadOrWriteThreadCpuArea(
                             (_KPROCESS *)v46.Entries[0].TreeNode.ParentValue,
                             (__int64)Thread,
                             v38,
                             &v46,
                             Thread_high,
                             v44,
                             (int *)v46.Entries,
                             (__int64)&v46.Thread + 2);
  if ( ExtendedContextLength2 < 0 )
    goto LABEL_73;
  BYTE1(v46.Thread) = 0;
  if ( BYTE2(v46.Thread) )
  {
    v39 = v46.Entries[0].TreeNode.Children[0];
    ExtendedContextLength2 = RtlCopyContext((PCONTEXT)&v46, v13, (PCONTEXT)v46.Entries[0].TreeNode.Children[0]);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_73;
  }
  else
  {
    if ( LOWORD(v46.Entries[0].OwnerTree.Root) == 35 )
    {
      v39 = v46.Entries[0].TreeNode.Children[0];
      ExtendedContextLength2 = RtlpWow64CtxToAmd64(v13, v46.Entries[0].TreeNode.Children[0], (__int64)&v46);
      if ( ExtendedContextLength2 >= 0 )
      {
        v40 = 1;
        goto LABEL_69;
      }
      goto LABEL_73;
    }
    if ( (v46.Entries[0].CrossThreadReleasableAndBusyByte & 1) == 0 )
    {
      v41 = 65656;
      if ( !v10 )
        v41 = 65592;
      ExtendedContextLength2 = RtlpWow64CtxFromAmd64(v41, &v46, (int *)&v46);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_73;
      *(_DWORD *)&v46.Entries[0].LockState.0 |= 1u;
    }
    v39 = v46.Entries[0].TreeNode.Children[0];
    ExtendedContextLength2 = RtlCopyContext((PCONTEXT)&v46, v13, (PCONTEXT)v46.Entries[0].TreeNode.Children[0]);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_73;
    if ( (v13 & 0x10010) == 0x10010 )
    {
      ExtendedContextLength2 = RtlpWow64CtxToAmd64(0x10010u, v39, (__int64)&v46);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_73;
      BYTE1(v46.Thread) = 1;
      *(_DWORD *)&v46.Entries[0].TreeNode.0 = 1048592;
    }
  }
  ExtendedContextLength2 = PspWow64ReadOrWriteThreadCpuArea(
                             (_KPROCESS *)v46.Entries[0].TreeNode.ParentValue,
                             (__int64)Thread,
                             0LL,
                             &v46,
                             HIDWORD(v46.Thread),
                             v45,
                             (int *)v46.Entries,
                             0LL);
  if ( ExtendedContextLength2 >= 0 )
  {
    v40 = BYTE1(v46.Thread);
LABEL_69:
    if ( !v40
      || (ExtendedContextLength2 = PspSetContextThreadInternal(Thread, (_CONTEXT *)&v46, 0, 1, 1),
          ExtendedContextLength2 >= 0) )
    {
      if ( LOBYTE(v46.AvailableEntryBitmap) )
        EtwTiLogSetContextThread(KeGetCurrentThread()->PreviousMode, (__int64)Thread, (__int64)v39, v13);
    }
  }
LABEL_73:
  v8 = (char)v46.Thread;
LABEL_74:
  if ( v8 )
  {
    PsMultiResumeThread((__int64)Thread, 0LL, 1LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v42);
  }
  return (unsigned int)ExtendedContextLength2;
}
