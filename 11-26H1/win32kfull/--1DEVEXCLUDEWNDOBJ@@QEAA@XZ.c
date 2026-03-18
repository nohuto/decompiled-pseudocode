/*
 * XREFs of ??1DEVEXCLUDEWNDOBJ@@QEAA@XZ @ 0x140310614
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140311624 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     EngControlSprites @ 0x140318840 (EngControlSprites.c)
 */

void __fastcall DEVEXCLUDEWNDOBJ::~DEVEXCLUDEWNDOBJ(WNDOBJ **this)
{
  WNDOBJ *v1; // rcx

  v1 = *this;
  if ( v1 )
    EngControlSprites(v1, 2u);
}
