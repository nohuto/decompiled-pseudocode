/*
 * XREFs of VfSetVerifierRunningMode @ 0x140B8B218
 * Callers:
 *     VfSetVerifierInformationEx @ 0x140B8C654 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x140C2A404 (ViInitSystemPhase0.c)
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
  dword_140F03B04 = a1;
  return result;
}
