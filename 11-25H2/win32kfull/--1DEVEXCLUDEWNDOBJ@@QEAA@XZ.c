/*
 * XREFs of ??1DEVEXCLUDEWNDOBJ@@QEAA@XZ @ 0x140327040
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140328140 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     EngControlSprites @ 0x14032FCA0 (EngControlSprites.c)
 */

void __fastcall DEVEXCLUDEWNDOBJ::~DEVEXCLUDEWNDOBJ(WNDOBJ **this)
{
  WNDOBJ *v1; // rcx

  v1 = *this;
  if ( v1 )
    EngControlSprites(v1, 2u);
}
