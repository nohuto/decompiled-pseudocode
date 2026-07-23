/*
 * XREFs of MiIssueFlowThroughFault @ 0x14038CFA8
 * Callers:
 *     MiHandleCollidedFault @ 0x14038D1C8 (MiHandleCollidedFault.c)
 * Callees:
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 */

__int64 __fastcall MiIssueFlowThroughFault(
        __int64 a1,
        _SLIST_ENTRY *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _SLIST_ENTRY **a6,
        _DWORD *a7)
{
  char v7; // bl
  struct _KTHREAD *CurrentThread; // r11
  int v12; // r10d
  _KPROCESS *Process; // rdi

  v7 = 0;
  *a6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *(_DWORD *)(a4 + 188);
  *a7 = 2;
  Process = CurrentThread->Process;
  if ( (v12 & 0x200) != 0 && (int)PsGetIoPriorityThread((__int64)CurrentThread) >= 2
    || CurrentThread == *(struct _KTHREAD **)(a4 + 152)
    || (CurrentThread->SameThreadTransientFlags & 2) != 0
    || Process[3].StackCount.Value
    && ((*(_DWORD *)(a4 + 188) & 0x400000) == 0 && *(_QWORD *)(a4 + 208) || (v12 & 0x20) != 0) )
  {
    v7 = 1;
  }
  if ( *(__int64 *)(a5 + 40) < 0 && (*(_DWORD *)(a5 + 16) & 0x400LL) != 0 )
  {
    if ( (CurrentThread->WaitBlock[3].SpareLong
       || _bittest((const signed __int32 *)&CurrentThread->116, 0xAu)
       || *(_BYTE *)(a1 + 68)
       || v7)
      && (v12 & 0x80u) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *a7 = 1;
      return MiResolveMappedFileFault(a1, a2, a3, a6);
    }
    return 0LL;
  }
  if ( !BYTE6(CurrentThread[1].Queue) && (v12 & 0x20) == 0 && !v7 || (v12 & 0x80u) != 0 )
    return 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(a5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *a7 = 1;
  return MiResolvePageFileFault(a1, (__int64 *)a2, a3, a6);
}
