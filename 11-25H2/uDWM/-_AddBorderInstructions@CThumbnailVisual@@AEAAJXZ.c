/*
 * XREFs of ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18009670C
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180014634 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18002317C (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003E0FC (-CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18004B474 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800CEFFC (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z.c)
 */

__int64 __fastcall CThumbnailVisual::_AddBorderInstructions(CThumbnailVisual *this)
{
  struct CRectangleGeometryProxy **v1; // rsi
  HRESULT RectangleGeometryProxy; // eax
  unsigned int v4; // ebx
  void *Theme; // rbp
  HRESULT ThemeInt; // eax
  int v7; // eax
  unsigned int pColor; // [rsp+20h] [rbp-28h]
  int piVal; // [rsp+50h] [rbp+8h] BYREF
  COLORREF v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = (struct CRectangleGeometryProxy **)((char *)this + 384);
  if ( !*((_QWORD *)this + 48) )
  {
    RectangleGeometryProxy = CCompositor::CreateRectangleGeometryProxy(
                               *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                               (struct CRectangleGeometryProxy **)this + 48);
    v4 = RectangleGeometryProxy;
    if ( RectangleGeometryProxy < 0 )
    {
      pColor = 1319;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometryProxy, pColor, 0LL);
      return v4;
    }
  }
  v11 = 0;
  piVal = 0;
  Theme = (void *)CDesktopManager::GetTheme(0);
  RectangleGeometryProxy = GetThemeColor(Theme, 63, 0, 3801, &v11);
  v4 = RectangleGeometryProxy;
  if ( RectangleGeometryProxy < 0 )
  {
    pColor = 1325;
    goto LABEL_14;
  }
  ThemeInt = GetThemeInt(Theme, 63, 0, 2403, (int *)this + 111);
  v4 = ThemeInt;
  if ( ThemeInt < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeInt, 0x52Eu, 0LL);
  }
  else
  {
    RectangleGeometryProxy = GetThemeInt(Theme, 63, 0, 2402, &piVal);
    v4 = RectangleGeometryProxy;
    if ( RectangleGeometryProxy < 0 )
    {
      pColor = 1327;
      goto LABEL_14;
    }
    v7 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(this, *v1, v11, (double)piVal / 255.0);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x530u, 0LL);
    }
    else
    {
      RectangleGeometryProxy = CThumbnailAnimatedVisual::AddSolidBrushInstruction(
                                 this,
                                 *((struct CRectangleGeometryProxy **)this + 47),
                                 0,
                                 1.0);
      v4 = RectangleGeometryProxy;
      if ( RectangleGeometryProxy < 0 )
      {
        pColor = 1329;
        goto LABEL_14;
      }
    }
  }
  return v4;
}
