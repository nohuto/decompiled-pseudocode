/*
 * XREFs of VfSetVerifierRunningMode @ 0x140C390C4
 * Callers:
 *     VfSetVerifierInformationEx @ 0x140C39B18 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x140CDEDA4 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfSetVerifierRunningMode(int a1)
{
  __int64 result; // rax

  if ( (unsigned int)(a1 - 1) > 3 )
    return 3221225485LL;
  VfVerifyMode = a1;
  result = 0LL;
  dword_140F08704 = a1;
  return result;
}
