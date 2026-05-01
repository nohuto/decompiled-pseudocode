/*
 * XREFs of ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDragVisual@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180290E94
 * Callers:
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x180454B40 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 *     ??1CAppTransitionTargetManager@@UEAA@XZ @ 0x1804E48E0 (--1CAppTransitionTargetManager@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UITaggableTarget@@VCWRLObjectWithSite@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804E4910 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UITaggableTarget@@VCWRLObjectWithSite.c)
 *     ??_GCAppArrangementSingleTransitionTarget@@UEAAPEAXI@Z @ 0x1804E4960 (--_GCAppArrangementSingleTransitionTarget@@UEAAPEAXI@Z.c)
 *     ??_ECLauncherAndDefaultSwitchTransitionTarget@@UEAAPEAXI@Z @ 0x1804E49B0 (--_ECLauncherAndDefaultSwitchTransitionTarget@@UEAAPEAXI@Z.c)
 *     ??1CDropFeedback@@UEAA@XZ @ 0x18053DA2C (--1CDropFeedback@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDragVisual@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18053DAE0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDragVisual@@UI.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x180540930 (--1CDragVisual@@MEAA@XZ.c)
 *     ??1CPinnedList@@UEAA@XZ @ 0x18068C1A8 (--1CPinnedList@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 16));
}
