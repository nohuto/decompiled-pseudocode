/*
 * XREFs of VerifierEngCreateClip @ 0x1403320B0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x140331D44 (-VerifierRandomFailure@@YAHK@Z.c)
 */

CLIPOBJ *__fastcall VerifierEngCreateClip(int a1, __int64 a2)
{
  if ( (unsigned int)VerifierRandomFailure(a1, a2) )
    return 0LL;
  else
    return EngCreateClip();
}
