/*
 * XREFs of ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F2BC
 * Callers:
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800133E8 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180018D00 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18001F8E0 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18002317C (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F27C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18003F870 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180056E94 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18007DD50 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18007EB30 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800860F0 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A45BC (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003E0FC (-CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z @ 0x18003F3F4 (-SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z.c)
 */

__int64 __fastcall ResourceHelper::CreateRectangleGeometry(
        int a1,
        int a2,
        int a3,
        int a4,
        struct CRectangleGeometryProxy **a5)
{
  struct CRectangleGeometryProxy **v5; // rsi
  CRectangleGeometryProxy *v10; // rbx
  int v11; // edi
  int RectangleGeometryProxy; // eax
  unsigned int v14; // eax
  bool v15; // [rsp+68h] [rbp-20h]

  v5 = a5;
  a5 = (struct CRectangleGeometryProxy **)*a5;
  v10 = (CRectangleGeometryProxy *)a5;
  if ( a5
    || (RectangleGeometryProxy = CCompositor::CreateRectangleGeometryProxy(
                                   *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                   (struct CRectangleGeometryProxy **)&a5),
        v10 = (CRectangleGeometryProxy *)a5,
        v11 = RectangleGeometryProxy,
        RectangleGeometryProxy >= 0) )
  {
    v11 = CRectangleGeometryProxy::SetRectangle(
            v10,
            (float)a1,
            (float)a2,
            (float)a3 + (float)a1,
            (float)a4 + (float)a2,
            0.0,
            0.0,
            0.0,
            0.0,
            0.0,
            0.0,
            0.0,
            0.0,
            v15);
    if ( v11 >= 0 )
    {
      *v5 = v10;
      return (unsigned int)v11;
    }
    v14 = 43;
  }
  else
  {
    v14 = 27;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v14, 0LL);
  if ( v10 )
    CBaseObject::Release(v10);
  return (unsigned int)v11;
}
