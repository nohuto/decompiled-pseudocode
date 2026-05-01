/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIXamlLauncherState@@UIImmersiveLauncherCortana@@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800815C0
 * Callers:
 *     ??0ImmersiveMonitorHelper@@QEAA@XZ @ 0x1800818E0 (--0ImmersiveMonitorHelper@@QEAA@XZ.c)
 *     ??0XamlLauncherState@@QEAA@XZ @ 0x1802B7C6C (--0XamlLauncherState@@QEAA@XZ.c)
 *     ??0CDropFeedback@@QEAA@XZ @ 0x18051AB0C (--0CDropFeedback@@QEAA@XZ.c)
 *     ??0CDragVisual@@QEAA@PEAUIDragVisualHost@@@Z @ 0x18051D7C4 (--0CDragVisual@@QEAA@PEAUIDragVisualHost@@@Z.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDragVisual@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008068C (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VCWRLObjec.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IXamlLauncherState,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IXamlLauncherState,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>(
        CWRLObjectWithSite *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>(a1);
  result = v1;
  *(_DWORD *)(v1 + 60) = 1;
  return result;
}
