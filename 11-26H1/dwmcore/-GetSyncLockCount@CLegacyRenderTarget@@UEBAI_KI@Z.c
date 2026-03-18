/*
 * XREFs of ?GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z @ 0x180252F30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOutstandingPresents@CTargetStats@@QEAAI_K@Z @ 0x18016D010 (-GetOutstandingPresents@CTargetStats@@QEAAI_K@Z.c)
 *     ?DoesIntersect@CTreeDirty@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180190228 (-DoesIntersect@CTreeDirty@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x18019288C (-PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetSyncLockCount(
        CLegacyRenderTarget *this,
        unsigned __int64 a2,
        unsigned int a3)
{
  unsigned int v6; // ebx
  char v7; // r14
  unsigned int OutstandingPresents; // esi

  v6 = 0;
  v7 = CLegacyRenderTarget::PresentNeeded((CLegacyRenderTarget *)((char *)this - 160));
  if ( v7 || *((_DWORD *)this + 8002) != 1 )
  {
    OutstandingPresents = CTargetStats::GetOutstandingPresents((CLegacyRenderTarget *)((char *)this + 31968), a2);
    if ( a3 > OutstandingPresents
      && (v7 || CTreeDirty::DoesIntersect(*((_QWORD *)this + 3) + 112LL, (float *)this + 7442)) )
    {
      return a3 - OutstandingPresents;
    }
  }
  return v6;
}
