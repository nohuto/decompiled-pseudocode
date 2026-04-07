/*
 * XREFs of ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x1800152DC
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180014634 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18001F8E0 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180021E7C (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18003F870 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180056E94 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18006F1B8 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?ValidateVisual@CLegacyNonClientBackground@@UEAAJXZ @ 0x1800739C0 (-ValidateVisual@CLegacyNonClientBackground@@UEAAJXZ.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18007DD50 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A45BC (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B735C (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800CEFFC (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z.c)
 *     ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D5A44 (-DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDrawGeometryInstruction@@AEAA@XZ @ 0x1800153A0 (--0CDrawGeometryInstruction@@AEAA@XZ.c)
 *     ?Initialize@CDrawGeometryInstruction@@AEAAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@@Z @ 0x18001545C (-Initialize@CDrawGeometryInstruction@@AEAAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDrawGeometryInstruction::Create(
        struct CBaseLegacyMilBrushProxy *a1,
        struct CBaseGeometryProxy *a2,
        struct CDrawGeometryInstruction **a3)
{
  CDrawGeometryInstruction *v6; // rax
  CDrawGeometryInstruction *v7; // rax
  CBaseObject *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx

  v6 = (CDrawGeometryInstruction *)DefaultHeap::AllocClear(0x20uLL);
  if ( v6 && (v7 = CDrawGeometryInstruction::CDrawGeometryInstruction(v6), (v8 = v7) != 0LL) )
  {
    v9 = CDrawGeometryInstruction::Initialize(v7, a1, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x31u, 0LL);
      CBaseObject::Release(v8);
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2Fu, 0LL);
  }
  return v10;
}
