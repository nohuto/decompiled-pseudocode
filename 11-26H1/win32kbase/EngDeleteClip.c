/*
 * XREFs of EngDeleteClip @ 0x140121E60
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121BC0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x140121D60 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x140121DA0 (EngCreateClip.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     EngFreeMem @ 0x140044080 (EngFreeMem.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  if ( pco )
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pco[2].rclBounds.top);
    EngFreeMem(pco);
  }
}
