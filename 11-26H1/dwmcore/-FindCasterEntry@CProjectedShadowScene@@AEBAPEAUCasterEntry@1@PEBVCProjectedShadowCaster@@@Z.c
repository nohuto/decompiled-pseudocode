/*
 * XREFs of ?FindCasterEntry@CProjectedShadowScene@@AEBAPEAUCasterEntry@1@PEBVCProjectedShadowCaster@@@Z @ 0x18021EA30
 * Callers:
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x1800D7250 (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?ProcessSetCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027E32C (-ProcessSetCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETC.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall CProjectedShadowScene::FindCasterEntry(
        CProjectedShadowScene *this,
        const struct CProjectedShadowCaster *a2)
{
  __int64 ***v2; // rcx
  __int64 **i; // rax

  v2 = (__int64 ***)*((_QWORD *)this + 9);
  for ( i = *v2; i != (__int64 **)v2; i = (__int64 **)*i )
  {
    if ( i[2] == (__int64 *)a2 )
      return i + 2;
  }
  return 0LL;
}
