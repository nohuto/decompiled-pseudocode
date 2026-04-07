/*
 * XREFs of ??1CProjectedShadowSceneInstance@CProjectedShadowScene@@UEAA@XZ @ 0x1800BDD04
 * Callers:
 *     ??_GCProjectedShadowSceneInstance@CProjectedShadowScene@@UEAAPEAXI@Z @ 0x1800BDDD0 (--_GCProjectedShadowSceneInstance@CProjectedShadowScene@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAVCVisual@@UVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowSceneInstance@CProjectedShadowScene@@@@QEAAXPEAUVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowSceneInstance@CProjectedShadowScene@@@Z @ 0x18008D148 (-RemoveElement@-$CGenericTableMap@PEAVCVisual@@UVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShado.c)
 */

void __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::~CProjectedShadowSceneInstance(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this)
{
  _QWORD *v2; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 11);
  while ( 1 )
  {
    RestartKey = 0LL;
    v2 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 16), &RestartKey);
    if ( !v2 )
      break;
    CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::RemoveElement(
      (struct _RTL_GENERIC_TABLE *)((char *)this + 16),
      v2);
  }
  CBaseObject::~CBaseObject(this);
}
