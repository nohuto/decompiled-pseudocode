/*
 * XREFs of ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x1800D7DE0
 * Callers:
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180081B2C (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18021F66C (-DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?ProcessSetReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027E458 (-ProcessSetReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SE.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall CProjectedShadowScene::FindReceiverEntry(
        CProjectedShadowScene *this,
        const struct CProjectedShadowReceiver *a2)
{
  __int64 ***v2; // rcx
  __int64 **i; // rax

  v2 = (__int64 ***)*((_QWORD *)this + 11);
  for ( i = *v2; i != (__int64 **)v2; i = (__int64 **)*i )
  {
    if ( i[2] == (__int64 *)a2 )
      return i + 2;
  }
  return 0LL;
}
