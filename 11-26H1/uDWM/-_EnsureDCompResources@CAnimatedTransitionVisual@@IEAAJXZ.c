/*
 * XREFs of ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18004F9A8
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18004F520 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180082594 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ?CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x180081AE8 (-CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x180081F80 (-CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     ?CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x180082CB0 (-CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?CreateRotateTransformProxy@CCompositor@@QEAAJPEAPEAVCRotateTransformProxy@@@Z @ 0x1800A7FDC (-CreateRotateTransformProxy@CCompositor@@QEAAJPEAPEAVCRotateTransformProxy@@@Z.c)
 *     ?CreateTransformGroupProxy@CCompositor@@QEAAJPEAPEAVCTransformGroupProxy@@@Z @ 0x1800A7FFC (-CreateTransformGroupProxy@CCompositor@@QEAAJPEAPEAVCTransformGroupProxy@@@Z.c)
 *     ?CreateTranslateTransformProxy@CCompositor@@QEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x1800A800C (-CreateTranslateTransformProxy@CCompositor@@QEAAJPEAPEAVCTranslateTransformProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_EnsureDCompResources(struct CEffectGroupProxy **this)
{
  unsigned int v2; // ebx
  struct CVisual *v3; // rsi
  CContainerVisual **v4; // r14
  int v5; // eax
  int v6; // eax
  int ScaleTransformProxy; // eax
  int EffectGroupProxy; // eax
  int TranslateTransformProxy; // eax
  int RotateTransformProxy; // eax
  int TransformGroupProxy; // eax
  int RectangleGeometryProxy; // eax
  CBaseObject **v14; // rax
  int v15; // eax
  int v16; // eax

  v2 = 0;
  v3 = 0LL;
  if ( !this[76] )
  {
    EffectGroupProxy = CCompositor::CreateEffectGroupProxy(
                         *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                         this + 76);
    v2 = EffectGroupProxy;
    if ( EffectGroupProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, EffectGroupProxy, 0x4DCu, 0LL);
      return v2;
    }
  }
  if ( !this[77] )
  {
    ScaleTransformProxy = CCompositor::CreateScaleTransformProxy(
                            *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                            this + 77);
    v2 = ScaleTransformProxy;
    if ( ScaleTransformProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ScaleTransformProxy, 0x4E1u, 0LL);
      return v2;
    }
  }
  if ( !this[78] )
  {
    TranslateTransformProxy = CCompositor::CreateTranslateTransformProxy(
                                *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                this + 78);
    v2 = TranslateTransformProxy;
    if ( TranslateTransformProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, TranslateTransformProxy, 0x4E6u, 0LL);
      return v2;
    }
  }
  if ( !this[79] )
  {
    RotateTransformProxy = CCompositor::CreateRotateTransformProxy(
                             *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                             this + 79);
    v2 = RotateTransformProxy;
    if ( RotateTransformProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RotateTransformProxy, 0x4EBu, 0LL);
      return v2;
    }
  }
  if ( !this[80] )
  {
    TransformGroupProxy = CCompositor::CreateTransformGroupProxy(
                            *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                            this + 80);
    v2 = TransformGroupProxy;
    if ( TransformGroupProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, TransformGroupProxy, 0x4F0u, 0LL);
      return v2;
    }
  }
  if ( !this[81] )
  {
    RectangleGeometryProxy = CCompositor::CreateRectangleGeometryProxy(
                               *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                               this + 81);
    v2 = RectangleGeometryProxy;
    if ( RectangleGeometryProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometryProxy, 0x4F5u, 0LL);
      return v2;
    }
  }
  v4 = this + 83;
  if ( !this[83] )
  {
    v5 = CSolidRectangleVisual::Create(this + 83);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x4FAu, 0LL);
      return v2;
    }
    if ( *((_BYTE *)this + 911) )
    {
      v14 = (CBaseObject **)this[19];
      v3 = *v14;
      if ( *v14 )
      {
        CBaseObject::AddRef(*v14);
        v15 = CContainerVisual::RemoveChild((CContainerVisual *)(this + 1), v3);
        v2 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x502u, 0LL);
          goto LABEL_32;
        }
        v16 = CContainerVisual::AddChild(*v4, v3);
        v2 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x503u, 0LL);
LABEL_32:
          CBaseObject::Release(v3);
          return v2;
        }
      }
    }
    v6 = CContainerVisual::AddChild((CContainerVisual *)(this + 1), *v4);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x507u, 0LL);
    if ( v3 )
      goto LABEL_32;
  }
  return v2;
}
