/*
 * XREFs of ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x1800088EC
 * Callers:
 *     ??1CWindowIconic@@MEAA@XZ @ 0x1800085DC (--1CWindowIconic@@MEAA@XZ.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008AB18 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x18001BBE0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18005A5BC (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowIconic::CleanupAnimationResources(CWindowIconic *this)
{
  CTopLevelWindow *v2; // rcx
  CTimelineBase *v3; // rcx

  v2 = (CTopLevelWindow *)*((_QWORD *)this + 11);
  if ( v2 )
    CTopLevelWindow::StopIconicAnimation(v2);
  CBitmapSourceArray::ReleaseContents((CWindowIconic *)((char *)this + 32), 1);
  v3 = (CTimelineBase *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    CTimelineBase::Release(v3);
    *((_QWORD *)this + 8) = 0LL;
  }
}
