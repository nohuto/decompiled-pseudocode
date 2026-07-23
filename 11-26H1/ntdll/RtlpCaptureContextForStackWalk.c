/*
 * XREFs of RtlpCaptureContextForStackWalk @ 0x180127360
 * Callers:
 *     RtlpWalkFrameChain @ 0x18005BC74 (RtlpWalkFrameChain.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlpCaptureContextForStackWalk(char **a1, char a2)
{
  char *v2; // rbp
  char *v3; // r15
  char *result; // rax
  __int64 v5; // r8
  char *v6; // r9
  char *retaddr; // [rsp+0h] [rbp+0h]
  char v8; // [rsp+8h] [rbp+8h] BYREF

  a1[2] = v2;
  a1[4] = v3;
  a1[1] = &v8;
  result = retaddr;
  *a1 = retaddr;
  v5 = 0LL;
  v6 = 0LL;
  if ( a2 )
  {
    __asm { rdsspq  rax }
    if ( result )
    {
      v5 = 1LL;
      v6 = result + 8;
    }
  }
  a1[7] = (char *)v5;
  a1[8] = v6;
  return result;
}
