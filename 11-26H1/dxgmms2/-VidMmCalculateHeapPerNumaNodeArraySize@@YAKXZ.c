/*
 * XREFs of ?VidMmCalculateHeapPerNumaNodeArraySize@@YAKXZ @ 0x1400A4BFC
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x140125A90 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x14012981C (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 VidMmCalculateHeapPerNumaNodeArraySize(void)
{
  if ( KeQueryHighestNodeNumber() )
    return (unsigned int)KeQueryHighestNodeNumber() + 2;
  else
    return 1LL;
}
