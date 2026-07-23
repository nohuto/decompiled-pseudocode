/*
 * XREFs of PopFxIssueComponentPerfStateChanges @ 0x1404F2DC0
 * Callers:
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x140606EF0 (PoFxIssueComponentPerfStateChangeMultiple.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PopFxQueueWorkOrder @ 0x1403965EC (PopFxQueueWorkOrder.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x1404F2BC8 (PopFxCompleteComponentPerfState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1404F2FFC (PopDiagTraceFxPerfRequestProgress.c)
 *     PopPluginRequestComponentPerfState @ 0x1404F30DC (PopPluginRequestComponentPerfState.c)
 *     PopDiagTraceFxPerfRequest @ 0x1404F3164 (PopDiagTraceFxPerfRequest.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

NTSTATUS __fastcall PopFxIssueComponentPerfStateChanges(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        char a3,
        unsigned int a4,
        void *Src,
        __int64 a6)
{
  __int64 v10; // rbx
  int v11; // r15d
  void *v12; // r13
  __int64 v13; // r8
  char v14; // r12
  int v15; // eax
  int v16; // r14d
  int v17; // edx
  char v18; // al
  char v19; // bp
  __int64 v21; // r9
  signed __int32 v22[8]; // [rsp+0h] [rbp-68h] BYREF
  int v23; // [rsp+34h] [rbp-34h]
  char v24; // [rsp+78h] [rbp+10h] BYREF

  KeGetCurrentIrql();
  v10 = *(_QWORD *)(a2 + 424);
  if ( !v10 )
    PopFxBugCheck(0x61BuLL, *(_QWORD *)(BugCheckParameter2 + 64), BugCheckParameter2, *(unsigned int *)(a2 + 16));
  v11 = *(_DWORD *)(*(_QWORD *)v10 + 16LL);
  if ( a4 > *(_DWORD *)(v10 + 144) )
    PopFxBugCheck(0x61CuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), 0LL);
  if ( (_InterlockedExchange((volatile __int32 *)(v10 + 40), 0) & 7) != 0 )
    PopFxBugCheck(0x61DuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), *(_QWORD *)(v10 + 80));
  v12 = Src;
  if ( *(_BYTE *)(v10 + 74) )
  {
    memmove(*(void **)(v10 + 48), Src, 16LL * a4);
    *(_DWORD *)(v10 + 56) = a4;
    *(_BYTE *)(v10 + 72) = 0;
    *(_QWORD *)(v10 + 64) = MEMORY[0xFFFFF78000000008];
  }
  *(_QWORD *)(v10 + 80) = a6;
  KeResetEvent((PRKEVENT)(v10 + 8));
  PopDiagTraceFxPerfRequest(v10, a4, v12);
  v14 = 1;
  v15 = a3 & 1;
  v16 = a3 & 2;
  v23 = v15;
  if ( v15 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x88000000);
  }
  else if ( v16 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x10000000u);
  }
  _InterlockedAdd((volatile signed __int32 *)(v10 + 40), 4u);
  _InterlockedOr(v22, 0);
  if ( !*(_BYTE *)(v10 + 73) )
  {
    v19 = 1;
    goto LABEL_17;
  }
  v17 = *(_DWORD *)(a2 + 16);
  v24 = 0;
  v18 = PopPluginRequestComponentPerfState(BugCheckParameter2, v17, a4, (_DWORD)v12, (__int64)&v24);
  v19 = v24;
  v14 = v18;
  if ( v18 )
  {
LABEL_17:
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), v19 != 0 ? 1610612736 : 0x20000000);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 40));
  }
  PopDiagTraceFxPerfRequestProgress(
    v10,
    ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 0xFFFFFFFF) - 1) & 7,
    v13);
  if ( v14 )
  {
    if ( v16 )
    {
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
      return PopFxQueueWorkOrder(v10 + 88, BugCheckParameter2);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x80000000);
      return PopFxCompleteComponentPerfState(BugCheckParameter2, *(_DWORD *)(a2 + 16), v10, v19);
    }
  }
  else if ( v23 )
  {
    return KeWaitForSingleObject((PVOID)(v10 + 8), Executive, 0, 0, 0LL);
  }
  else
  {
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
    return (unsigned int)PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, (unsigned __int8)v21 + 20, v21);
  }
}
