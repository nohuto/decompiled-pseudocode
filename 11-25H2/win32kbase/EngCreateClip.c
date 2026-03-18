/*
 * XREFs of EngCreateClip @ 0x1401298C0
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140129710 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x140013C70 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     EngAllocMem @ 0x14001BE30 (EngAllocMem.c)
 *     EngDeleteClip @ 0x140129970 (EngDeleteClip.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

CLIPOBJ *EngCreateClip(void)
{
  CLIPOBJ *v0; // rbx
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  struct _RECTL v3; // [rsp+28h] [rbp-20h] BYREF

  v0 = (CLIPOBJ *)EngAllocMem(1u, 0x98u, 0x76726447u);
  if ( !v0 )
    return v0;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v2);
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
