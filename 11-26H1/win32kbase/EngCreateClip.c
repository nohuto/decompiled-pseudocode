/*
 * XREFs of EngCreateClip @ 0x140121DA0
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121BC0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     EngAllocMem @ 0x140044130 (EngAllocMem.c)
 *     EngDeleteClip @ 0x140121E60 (EngDeleteClip.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

CLIPOBJ *EngCreateClip(void)
{
  CLIPOBJ *v0; // rbx
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  struct _RECTL v3; // [rsp+28h] [rbp-20h] BYREF

  v0 = (CLIPOBJ *)EngAllocMem(1u, 0x98u, 0x76726447u);
  if ( !v0 )
    return v0;
  v2 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v2, 0x70u);
  if ( v2 )
  {
    *(_QWORD *)&v0[2].rclBounds.top = v2;
    v3.top = -134217728;
    v3.left = -134217728;
    *(_WORD *)&v0->iDComplexity = 256;
    v3.bottom = 0x7FFFFFF;
    v3.right = 0x7FFFFFF;
    v0->iMode = 0;
    RGNOBJ::vSet((RGNOBJ *)&v2, &v3);
    return v0;
  }
  EngDeleteClip(v0);
  return 0LL;
}
