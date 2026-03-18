/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x140CDEC04
 * Callers:
 *     ViInitSystemPhase0 @ 0x140CDEDA4 (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x140CDFB38 (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, unsigned int a2)
{
  unsigned int v2; // ebx
  void *result; // rax

  if ( a2 > 0x1800 )
  {
    word_140FFE50E = 0;
    a2 = 6142;
  }
  v2 = a2;
  result = memmove(MmVerifyDriverBuffer, Src, a2);
  VfOptionFlags &= ~1u;
  LODWORD(MmVerifyDriverBufferLength) = v2;
  return result;
}
