/*
 * XREFs of RtlAbortRXact @ 0x1800FCF70
 * Callers:
 *     RtlInitializeRXact @ 0x1800FCA20 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x1800FCE60 (RtlApplyRXact.c)
 *     RtlApplyRXactNoFlush @ 0x1800FCF40 (RtlApplyRXactNoFlush.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

__int64 __fastcall RtlAbortRXact(__int64 a1)
{
  void *v1; // r8
  __int64 result; // rax

  v1 = *(void **)(a1 + 24);
  if ( !v1 )
    return 3221225756LL;
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v1);
  result = 0LL;
  *(_BYTE *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
