/*
 * XREFs of ??1?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAA@XZ @ 0x180070480
 * Callers:
 *     _CProjectedShadowScene::CreateProjectedShadowReceiverVisual_::_1_::dtor$1 @ 0x1800E7688 (_CProjectedShadowScene--CreateProjectedShadowReceiverVisual_--_1_--dtor$1.c)
 *     _CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize_::_1_::dtor$0 @ 0x1800E76BE (_CProjectedShadowScene--CProjectedShadowSceneInstance--Initialize_--_1_--dtor$0.c)
 *     _CGlobalLightSet::AddNewSharedDistantLightWithType_::_1_::dtor$0 @ 0x1800E7706 (_CGlobalLightSet--AddNewSharedDistantLightWithType_--_1_--dtor$0.c)
 *     _CProjectedShadowScene::CProjectedShadowSceneInstance::AddCasterFromSharedHandle_::_1_::dtor$0 @ 0x1800E7B00 (_CProjectedShadowScene--CProjectedShadowSceneInstance--AddCasterFromSharedHandle_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::~ComPtr<IDCompositionDesktopDevicePartner>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
