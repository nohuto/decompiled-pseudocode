/*
 * XREFs of ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C
 * Callers:
 *     ?EnsureCaptionSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x18000B35C (-EnsureCaptionSprite@CLegacyNonClientBackground@@AEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18004F9A8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?CloneVisualTree@CSolidRectangleVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18004FC60 (-CloneVisualTree@CSolidRectangleVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18005E6A8 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180065E90 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x1800836E0 (-EnsureResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18008B908 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800A6C70 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?SetupVisuals@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B6308 (-SetupVisuals@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B7C30 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800B98EC (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x1800C9A60 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ConnectSprite@CTouchDragVisual@@AEAAJPEAUTrailPoint@1@@Z @ 0x1800CC60C (-ConnectSprite@CTouchDragVisual@@AEAAJPEAUTrailPoint@1@@Z.c)
 *     ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2D38 (-DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D38AC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D3D34 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DD3F4 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSolidRectangleVisual@@QEAA@XZ @ 0x18004FF40 (--0CSolidRectangleVisual@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSolidRectangleVisual::Create(struct CSolidRectangleVisual **a1)
{
  CSolidRectangleVisual *v2; // rax
  CSolidRectangleVisual *v3; // rbx
  CSolidRectangleVisual *v4; // rax
  struct CSolidRectangleVisual *v5; // rbx
  int v6; // edi

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 9u, 0LL);
    return (unsigned int)v6;
  }
  v2 = (CSolidRectangleVisual *)DefaultHeap::AllocClear(0xD0uLL);
  v3 = v2;
  if ( !v2 )
  {
    v5 = 0LL;
    goto LABEL_9;
  }
  memset_0(v2, 0, 0xD0uLL);
  v4 = CSolidRectangleVisual::CSolidRectangleVisual(v3);
  v5 = v4;
  if ( !v4 )
  {
LABEL_9:
    v6 = -2147024882;
    goto LABEL_10;
  }
  v6 = (*(__int64 (__fastcall **)(CSolidRectangleVisual *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v6 >= 0 )
  {
    *a1 = v5;
    return 0;
  }
LABEL_10:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 9u, 0LL);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v6;
}
