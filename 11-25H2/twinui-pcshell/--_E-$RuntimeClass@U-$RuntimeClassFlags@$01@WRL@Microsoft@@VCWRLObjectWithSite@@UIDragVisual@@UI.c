/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDragVisual@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18051ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDragVisual@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802B8FB8 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VCWRLObjec.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  Block[15] = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
