/*
 * XREFs of ?GetMeshCacheManager@@YAPEAVCMeshCacheManager@@XZ @ 0x180009F30
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     <none>
 */

struct CMeshCacheManager *GetMeshCacheManager(void)
{
  struct CMeshCacheManager *result; // rax

  result = 0LL;
  if ( g_pComposition )
    return (struct CMeshCacheManager *)*((_QWORD *)g_pComposition + 83);
  return result;
}
