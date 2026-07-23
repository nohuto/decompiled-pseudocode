/*
 * XREFs of PspQueryThreadIndexInformation @ 0x14077C7D0
 * Callers:
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspQueryThreadIndexInformation(struct _KTHREAD *a1, _DWORD *a2, _DWORD *a3)
{
  _KPROCESS *Process; // rsi
  signed __int64 v8; // rbx
  void *Pool2; // rax
  _DWORD *NormalContext; // rcx
  PSLIST_ENTRY v11; // rax
  __int64 v12; // rax
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( KeGetCurrentThread() != a1 )
    return 3221225506LL;
  Process = a1->Process;
  v8 = Process[4].Padding[4];
  if ( !v8 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225626LL;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[4].Padding[4], (signed __int64)Pool2, 0LL);
    if ( v8 )
      ExFreePoolWithTag(Pool2, 0);
    else
      v8 = (signed __int64)Pool2;
  }
  NormalContext = a1[1].SchedulerApc.NormalContext;
  if ( !NormalContext )
  {
    v11 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v8);
    NormalContext = v11;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v11[1].Next + 1);
LABEL_14:
      a1[1].SchedulerApc.NormalContext = NormalContext;
      goto LABEL_15;
    }
    v12 = ExAllocatePool2(0x100uLL);
    NormalContext = (_DWORD *)v12;
    if ( v12 )
    {
      *(_DWORD *)(v12 + 20) = 1;
      *(_DWORD *)(v12 + 16) = _InterlockedIncrement((volatile signed __int32 *)(v8 + 16));
      _InterlockedOr(v13, 0);
      goto LABEL_14;
    }
    return 3221225626LL;
  }
LABEL_15:
  *a2 = NormalContext[4];
  *a3 = NormalContext[5];
  return 0LL;
}
