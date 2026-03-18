/*
 * XREFs of ?bIncludeSprites@SURFACE@@SAHXZ @ 0x14014DA00
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

struct _GRETHREAD *SURFACE::bIncludeSprites(void)
{
  struct _GRETHREAD *result; // rax

  result = GreGetCurrentThread();
  if ( result )
    return (struct _GRETHREAD *)((*((_DWORD *)result + 86) >> 1) & 1);
  return result;
}
