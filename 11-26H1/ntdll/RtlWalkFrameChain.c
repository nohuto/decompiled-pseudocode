/*
 * XREFs of RtlWalkFrameChain @ 0x180010500
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18000F710 (EtwpWriteToPrivateBuffers.c)
 *     RtlCaptureStackBackTrace @ 0x180010460 (RtlCaptureStackBackTrace.c)
 * Callees:
 *     RtlpWalkFrameChain @ 0x180010544 (RtlpWalkFrameChain.c)
 */

__int64 __fastcall RtlWalkFrameChain(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r8d
  int v4; // ecx
  __int64 result; // rax

  if ( (a3 & 0xFFFF00FF) != 0 )
    return 0LL;
  v3 = a3 >> 8;
  if ( v3 > 0xFE || a2 == -1 )
    return 0LL;
  v4 = RtlpWalkFrameChain(a1, a2 + 1, v3, v3 + 1);
  result = (unsigned int)(v4 - 1);
  if ( !v4 )
    return 0LL;
  return result;
}
