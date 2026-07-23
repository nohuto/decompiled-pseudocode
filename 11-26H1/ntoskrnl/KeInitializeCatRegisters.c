/*
 * XREFs of KeInitializeCatRegisters @ 0x1405301F8
 * Callers:
 *     KiRestoreFeatureBits @ 0x140510000 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KeInitializeCatRegisters()
{
  __int64 result; // rax

  if ( KiCacheIsoBitmap )
  {
    if ( _bittest64(&KeFeatureBits, 0x2Cu) )
    {
      result = (unsigned int)KiCacheIsoBitmap;
      __writemsr(0xC91u, (unsigned int)KiCacheIsoBitmap);
    }
  }
  return result;
}
