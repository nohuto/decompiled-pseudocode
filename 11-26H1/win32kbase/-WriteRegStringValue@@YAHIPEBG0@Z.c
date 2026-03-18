/*
 * XREFs of ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401EA0EC
 * Callers:
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1401A5F48 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1401ACDDC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1401B9CA4 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z @ 0x1401E9F98 (-SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z.c)
 * Callees:
 *     FastWriteProfileValue @ 0x1400E2410 (FastWriteProfileValue.c)
 */

void *__fastcall WriteRegStringValue(unsigned int a1, const unsigned __int16 *a2, unsigned __int16 *Data)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Data[v3] );
  return FastWriteProfileValue(0LL, a1, a2, 1u, Data, 2 * (int)v3 + 2);
}
