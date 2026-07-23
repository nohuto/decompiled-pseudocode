/*
 * XREFs of EtwpExpandStackAndWalkFrameChain @ 0x140260610
 * Callers:
 *     EtwpTraceStackWalk @ 0x14020A6A0 (EtwpTraceStackWalk.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140262E30 (KeExpandKernelStackAndCalloutInternal.c)
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 */

__int64 __fastcall EtwpExpandStackAndWalkFrameChain(PVOID *Callers, __int64 Count, __int64 a3, ULONG a4, ULONG *a5)
{
  __int64 v5; // rbx
  ULONG v7; // esi
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-28h] BYREF
  ULONG v11; // [rsp+40h] [rbp-18h]
  ULONG v12; // [rsp+44h] [rbp-14h]
  __int64 v13; // [rsp+48h] [rbp-10h]

  v5 = *(_QWORD *)(a3 + 24);
  v7 = Count;
  if ( (unsigned __int8)KeAreInterruptsEnabled(Callers, Count, a3) && KeGetCurrentIrql() <= 2u )
  {
    v13 = 0LL;
    BugCheckParameter3[0] = (ULONG_PTR)Callers;
    BugCheckParameter3[1] = v5;
    v11 = v7;
    v12 = a4;
    result = KeExpandKernelStackAndCalloutInternal((ULONG_PTR)EtwpExpandedStackWalk, (ULONG_PTR)BugCheckParameter3, v5);
    if ( (int)result >= 0 )
      *a5 = v13;
  }
  else
  {
    *a5 = RtlWalkFrameChain(Callers, v7, a4);
    return 0LL;
  }
  return result;
}
