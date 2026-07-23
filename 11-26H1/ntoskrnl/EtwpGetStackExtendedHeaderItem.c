/*
 * XREFs of EtwpGetStackExtendedHeaderItem @ 0x140473EA4
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     MmCanThreadFault @ 0x1402623C0 (MmCanThreadFault.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140262E30 (KeExpandKernelStackAndCalloutInternal.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 */

char __fastcall EtwpGetStackExtendedHeaderItem(
        __int64 a1,
        struct _KTHREAD *a2,
        char a3,
        __int64 a4,
        char a5,
        signed __int64 *a6)
{
  ULONG v7; // ebx
  signed __int64 v8; // rdi
  __int16 v9; // r12
  __int64 v10; // rsi
  PVOID *v11; // r14
  struct _KTHREAD *CurrentThread; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r12
  __int16 v17; // bx
  __int16 v18; // bx
  char result; // al
  __int64 v20; // rbx
  ULONG v21; // ebx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h]
  int v24; // [rsp+40h] [rbp-10h]
  int v25; // [rsp+44h] [rbp-Ch]
  __int64 v26; // [rsp+48h] [rbp-8h]

  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = a4 + 32;
  v11 = (PVOID *)(a4 + 48);
  if ( a5 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 1024), 1u);
    v20 = *(_QWORD *)(a4 + 24);
    if ( KeGetEffectiveIrql() > 2u )
    {
      v21 = RtlWalkFrameChain(v11, 0x100u, 0x400u);
    }
    else
    {
      v26 = 0LL;
      BugCheckParameter3 = (ULONG_PTR)v11;
      v23 = v20;
      v24 = 256;
      v25 = 1024;
      if ( (int)KeExpandKernelStackAndCalloutInternal(
                  (ULONG_PTR)EtwpExpandedStackWalk,
                  (ULONG_PTR)&BugCheckParameter3,
                  24576,
                  1073741832,
                  v20) < 0 )
        goto LABEL_33;
      v21 = v26;
    }
    if ( v21 <= 4 )
      v7 = 0;
    else
      v7 = v21 - 4;
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != a2
    || (CurrentThread->MiscFlags & 0x400) != 0
    || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    goto LABEL_16;
  }
  if ( KeGetEffectiveIrql() < 2u )
  {
    if ( !MmCanThreadFault(v14, v13, v15)
      || BYTE6(CurrentThread[1].Queue)
      || KeGetCurrentThread()->ApcStateIndex == 1
      || (CurrentThread->SameThreadTransientFlags & 4) != 0
      || (a3 & 1) != 0 )
    {
      goto LABEL_9;
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 1024), 1u);
    v16 = *(_QWORD *)(a4 + 24);
    if ( KeGetEffectiveIrql() > 2u )
    {
      v9 = RtlWalkFrameChain((PVOID *)(v10 + 8 * (v7 + 2LL)), 256 - v7, 1u);
LABEL_14:
      if ( a6 )
        v8 = *a6;
      goto LABEL_16;
    }
    v26 = 0LL;
    BugCheckParameter3 = v10 + 8 * (v7 + 2LL);
    v23 = v16;
    v24 = 256 - v7;
    v25 = 1;
    if ( (int)KeExpandKernelStackAndCalloutInternal(
                (ULONG_PTR)EtwpExpandedStackWalk,
                (ULONG_PTR)&BugCheckParameter3,
                24576,
                1073741832,
                v16) >= 0 )
    {
      v9 = v26;
      goto LABEL_14;
    }
LABEL_33:
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1028));
    return 0;
  }
  if ( !KeGetCurrentPrcb()->NestingLevel )
LABEL_9:
    v8 = _InterlockedIncrement64(&EtwpStackMatchId);
LABEL_16:
  v17 = v9 + v7;
  if ( v17 || v8 )
  {
    *(_QWORD *)(v10 + 8) = v8;
    v18 = 8 * (v17 + 1);
    result = 1;
    *(_DWORD *)(v10 + 2) = 6;
    *(_WORD *)(v10 + 6) = v18;
    *(_WORD *)v10 = v18 + 8;
    return result;
  }
  return 0;
}
