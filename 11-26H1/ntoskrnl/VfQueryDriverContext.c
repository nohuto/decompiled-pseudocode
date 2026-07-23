/*
 * XREFs of VfQueryDriverContext @ 0x1406448C0
 * Callers:
 *     <none>
 * Callees:
 *     ViIsContextIdValid @ 0x140C28878 (ViIsContextIdValid.c)
 *     ViQueryObjectContext @ 0x140C288E0 (ViQueryObjectContext.c)
 */

__int64 __fastcall VfQueryDriverContext(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // r9
  unsigned int v4; // r10d

  if ( ViVerifierEnabled && (unsigned __int8)ViIsContextIdValid(1LL, a2) )
    return ViQueryObjectContext(v3, v4, v2);
  else
    return 0LL;
}
