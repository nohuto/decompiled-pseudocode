/*
 * XREFs of ??1?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800BF640
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18000B800 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 */

int __fastcall detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::~vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  __int64 *v1; // r9
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 *v4; // rbx
  int result; // eax
  HANDLE ProcessHeap; // rax
  __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  v2 = (a1[1] - *a1) >> 5;
  if ( v2 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v7, *a1, v2);
    v1[1] += -32 * v3;
  }
  v4 = (__int64 *)*v1;
  result = (_DWORD)v1 + 24;
  *v1 = 0LL;
  if ( v4 != v1 + 3 )
  {
    if ( v4 )
    {
      ProcessHeap = GetProcessHeap();
      return HeapFree(ProcessHeap, 0, v4);
    }
  }
  return result;
}
