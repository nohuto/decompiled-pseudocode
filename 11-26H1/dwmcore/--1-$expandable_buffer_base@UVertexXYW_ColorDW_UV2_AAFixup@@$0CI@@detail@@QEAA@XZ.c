/*
 * XREFs of ??1?$expandable_buffer_base@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@@detail@@QEAA@XZ @ 0x18000A074
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     <none>
 */

void __fastcall detail::expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>::~expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>(
        void **a1)
{
  void *v1; // rdx
  bool v2; // zf

  v1 = *a1;
  v2 = *a1 == a1 + 4;
  *a1 = 0LL;
  if ( v2 )
    v1 = 0LL;
  operator delete(v1);
}
