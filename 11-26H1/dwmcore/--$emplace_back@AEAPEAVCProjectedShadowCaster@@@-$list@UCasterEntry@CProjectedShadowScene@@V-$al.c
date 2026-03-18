/*
 * XREFs of ??$emplace_back@AEAPEAVCProjectedShadowCaster@@@?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAAAEAUCasterEntry@CProjectedShadowScene@@AEAPEAVCProjectedShadowCaster@@@Z @ 0x18027E180
 * Callers:
 *     ?ProcessSetCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027E32C (-ProcessSetCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETC.c)
 * Callees:
 *     ??$_Emplace@AEAPEAVCProjectedShadowCaster@@@?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAAPEAU?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@1@QEAU21@AEAPEAVCProjectedShadowCaster@@@Z @ 0x18020F118 (--$_Emplace@AEAPEAVCProjectedShadowCaster@@@-$list@UCasterEntry@CProjectedShadowScene@@V-$alloca.c)
 */

_QWORD *__fastcall std::list<CProjectedShadowScene::CasterEntry>::emplace_back<CProjectedShadowCaster * &>(
        __int64 *a1,
        __int64 *a2)
{
  return std::list<CProjectedShadowScene::CasterEntry>::_Emplace<CProjectedShadowCaster * &>((__int64)a1, *a1, a2) + 2;
}
