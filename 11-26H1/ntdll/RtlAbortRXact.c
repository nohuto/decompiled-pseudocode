/*
 * XREFs of RtlAbortRXact @ 0x1800FD820
 * Callers:
 *     RtlInitializeRXact @ 0x1800FD2D0 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x1800FD710 (RtlApplyRXact.c)
 *     RtlApplyRXactNoFlush @ 0x1800FD7F0 (RtlApplyRXactNoFlush.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall RtlAbortRXact(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 24) )
    return 3221225756LL;
  RtlFreeHeap_0();
  result = 0LL;
  *(_BYTE *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
