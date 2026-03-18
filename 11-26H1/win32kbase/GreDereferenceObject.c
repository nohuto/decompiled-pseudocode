/*
 * XREFs of GreDereferenceObject @ 0x140055340
 * Callers:
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 * Callees:
 *     ?GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z @ 0x14005537C (-GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z.c)
 *     ?GrepDeleteReferencedRegion@@YAJPEAUHRGN__@@@Z @ 0x1400554B0 (-GrepDeleteReferencedRegion@@YAJPEAUHRGN__@@@Z.c)
 */

__int64 __fastcall GreDereferenceObject(HSURF a1, char a2, int a3)
{
  if ( a2 == 4 )
    return GrepDeleteReferencedRegion((HRGN)a1);
  if ( a2 == 5 )
    return GrepDeleteReferencedSurface(a1, a3 != 0);
  return 3221225485LL;
}
