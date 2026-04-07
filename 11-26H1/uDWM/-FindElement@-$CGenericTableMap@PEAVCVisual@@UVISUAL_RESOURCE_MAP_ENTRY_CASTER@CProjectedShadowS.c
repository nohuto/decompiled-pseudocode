/*
 * XREFs of ?FindElement@?$CGenericTableMap@PEAVCVisual@@UVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowSceneInstance@CProjectedShadowScene@@@@QEAAPEAUVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowSceneInstance@CProjectedShadowScene@@PEAVCVisual@@@Z @ 0x18008C44C
 * Callers:
 *     ?RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z @ 0x18004D424 (-RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVisual@@@Z @ 0x18004D704 (-AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVi.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 a2)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = a2;
  Buffer[1] = 0LL;
  return RtlLookupElementGenericTable(a1, Buffer);
}
