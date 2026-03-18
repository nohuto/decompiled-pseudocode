/*
 * XREFs of ?resize@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18000A1CC
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18000A098 (-clear_region@-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorDW_.c)
 *     ?reserve_region@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVertexXYW_ColorDW_UV2_AAFixup@@_K0@Z @ 0x18000A36C (-reserve_region@-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorD.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

_OWORD *__fastcall detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::resize(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  _OWORD *result; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF

  memset_0(v10, 0, sizeof(v10));
  v4 = (a1[1] - *a1) >> 6;
  if ( a2 <= v4 )
    return (_OWORD *)detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::clear_region(
                       a1,
                       (__int64)(a2 << 6) >> 6,
                       (__int64)(a1[1] - ((a2 << 6) + *a1)) >> 6);
  v5 = a2 - v4;
  result = (_OWORD *)detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::reserve_region(
                       a1,
                       v4,
                       v5);
  if ( v5 )
  {
    v7 = v10[1];
    *result = v10[0];
    v8 = v10[2];
    result[1] = v7;
    v9 = v10[3];
    result[2] = v8;
    result[3] = v9;
    qmemcpy(result + 4, result, 8 * (((v5 << 6) - 57) >> 3));
  }
  return result;
}
