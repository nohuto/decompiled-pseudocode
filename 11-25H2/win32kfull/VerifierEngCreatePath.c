/*
 * XREFs of VerifierEngCreatePath @ 0x140332260
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x140069F10 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x140331D44 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *__fastcall VerifierEngCreatePath(int a1, __int64 a2)
{
  if ( (unsigned int)VerifierRandomFailure(a1, a2) )
    return 0LL;
  else
    return EngCreatePath();
}
