/*
 * XREFs of RtlpCaptureContextForStackWalk @ 0x140537680
 * Callers:
 *     RtlpWalkFrameChain @ 0x140262420 (RtlpWalkFrameChain.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpCaptureContextForStackWalk(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r15
  void *result; // rax
  void *retaddr; // [rsp+0h] [rbp+0h]
  char v5; // [rsp+8h] [rbp+8h] BYREF

  a1[2] = v1;
  a1[4] = v2;
  a1[1] = &v5;
  result = retaddr;
  *a1 = retaddr;
  a1[7] = 0LL;
  a1[8] = 0LL;
  return result;
}
