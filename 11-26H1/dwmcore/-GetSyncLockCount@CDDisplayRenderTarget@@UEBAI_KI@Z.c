/*
 * XREFs of ?GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z @ 0x180253EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOutstandingPresents@CTargetStats@@QEAAI_K@Z @ 0x18016D010 (-GetOutstandingPresents@CTargetStats@@QEAAI_K@Z.c)
 *     ?DoesIntersect@CTreeDirty@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180190228 (-DoesIntersect@CTreeDirty@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ @ 0x180192858 (-PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::GetSyncLockCount(
        CDDisplayRenderTarget *this,
        unsigned __int64 a2,
        unsigned int a3)
{
  unsigned int v6; // ebx
  char v7; // r14
  unsigned int OutstandingPresents; // esi

  v6 = 0;
  v7 = CDDisplayRenderTarget::PresentNeeded((CDDisplayRenderTarget *)((char *)this - 160));
  if ( v7 || *((_DWORD *)this + 8008) != 1 )
  {
    OutstandingPresents = CTargetStats::GetOutstandingPresents((CDDisplayRenderTarget *)((char *)this + 31992), a2);
    if ( a3 > OutstandingPresents
      && (v7 || CTreeDirty::DoesIntersect(*((_QWORD *)this + 5) + 112LL, (float *)this + 7446)) )
    {
      return a3 - OutstandingPresents;
    }
  }
  return v6;
}
