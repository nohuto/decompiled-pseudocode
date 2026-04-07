/*
 * XREFs of ??$detach_abi@I$0A@@winrt@@YA?A_P$$QEAI@Z @ 0x180094EA0
 * Callers:
 *     ?Resolve@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180033DF0 (-Resolve@-$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z.c)
 *     ?make_weak_ref@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18009061C (-make_weak_ref@-$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions.c)
 *     ?store@?$_Atomic_storage@H$03@std@@QEAAXH@Z @ 0x18009FCC0 (-store@-$_Atomic_storage@H$03@std@@QEAAXH@Z.c)
 *     ??$detach_from@I@impl@winrt@@YA?A_P$$QEAI@Z @ 0x1800DD1EC (--$detach_from@I@impl@winrt@@YA-A_P$$QEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::detach_abi<unsigned int,0>(unsigned int *a1)
{
  return *a1;
}
