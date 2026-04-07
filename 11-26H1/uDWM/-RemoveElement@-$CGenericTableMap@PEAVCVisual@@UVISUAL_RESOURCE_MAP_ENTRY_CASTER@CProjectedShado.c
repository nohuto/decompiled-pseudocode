/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@PEAVCVisual@@UVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowSceneInstance@CProjectedShadowScene@@@@QEAAXPEAUVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowSceneInstance@CProjectedShadowScene@@@Z @ 0x18008D148
 * Callers:
 *     ?RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z @ 0x18004D424 (-RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1CProjectedShadowSceneInstance@CProjectedShadowScene@@UEAA@XZ @ 0x1800BDD04 (--1CProjectedShadowSceneInstance@CProjectedShadowScene@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::RemoveElement(
        struct _RTL_GENERIC_TABLE *a1,
        _QWORD *a2)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = *a2;
  Buffer[1] = 0LL;
  if ( !RtlDeleteElementGenericTable(a1, Buffer) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
