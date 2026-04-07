/*
 * XREFs of ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800119B4
 * Callers:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001066C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180045488 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800C9698 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z @ 0x180011BC4 (-SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x180082CB0 (-CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
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
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v14, 0LL);
  if ( v10 )
    CBaseObject::Release(v10);
  return (unsigned int)v11;
}
