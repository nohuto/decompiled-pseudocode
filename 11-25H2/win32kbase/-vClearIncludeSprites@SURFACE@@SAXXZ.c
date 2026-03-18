/*
 * XREFs of ?vClearIncludeSprites@SURFACE@@SAXXZ @ 0x140140490
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

void SURFACE::vClearIncludeSprites(void)
{
  struct _GRETHREAD *CurrentThread; // rax

  CurrentThread = GreGetCurrentThread();
  if ( CurrentThread )
    *((_DWORD *)CurrentThread + 86) &= ~2u;
}
