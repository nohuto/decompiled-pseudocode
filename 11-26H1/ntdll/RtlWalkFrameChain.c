/*
 * XREFs of RtlWalkFrameChain @ 0x18005BC30
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18005AE40 (EtwpWriteToPrivateBuffers.c)
 *     RtlCaptureStackBackTrace @ 0x18005BB90 (RtlCaptureStackBackTrace.c)
 * Callees:
 *     RtlpWalkFrameChain @ 0x18005BC74 (RtlpWalkFrameChain.c)
 */

ULONG __cdecl RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v3; // r8d
  int v4; // ecx
  ULONG result; // eax

  if ( (Flags & 0xFFFF00FF) != 0 )
    return 0;
  v3 = Flags >> 8;
  if ( v3 > 0xFE || Count == -1 )
    return 0;
  v4 = RtlpWalkFrameChain((_DWORD)Callers, Count + 1, v3, v3 + 1);
  result = v4 - 1;
  if ( !v4 )
    return 0;
  return result;
}
