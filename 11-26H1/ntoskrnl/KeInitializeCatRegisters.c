/*
 * XREFs of KeInitializeCatRegisters @ 0x14052DCD8
 * Callers:
 *     KiRestoreFeatureBits @ 0x140516590 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
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
