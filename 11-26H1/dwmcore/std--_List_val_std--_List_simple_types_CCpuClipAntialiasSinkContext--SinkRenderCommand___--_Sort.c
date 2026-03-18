/*
 * XREFs of std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_2_::_lambda_1___ @ 0x1800C2650
 * Callers:
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1800C1C44 (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_2_::_lambda_1___ @ 0x1800C2650 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Sort.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800C2D20 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_2_::_lambda_1___ @ 0x1800C2650 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Sort.c)
 */

__int64 __fastcall std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_2_::_lambda_1___(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  char v3; // bl
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 *v10; // r8
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r11
  __int64 *v15; // rdx
  __int64 **v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return *(_QWORD *)*a1;
  v7 = a2 >> 1;
  v18 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_2_::_lambda_1___(
          a1,
          a2 >> 1,
          a3);
  LOBYTE(v8) = v3;
  v9 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_2_::_lambda_1___(
         &v18,
         a2 - v7,
         v8);
  v10 = (__int64 *)*a1;
  v11 = v9;
  v12 = v18;
  if ( *(float *)(*a1 + 24) > *(float *)(v18 + 24) )
  {
    v13 = v18;
LABEL_10:
    v14 = v12;
    do
      v12 = *(_QWORD *)v12;
    while ( v12 != v11 && *((float *)v10 + 6) > *(float *)(v12 + 24) );
    v15 = *(__int64 **)(v14 + 8);
    *v15 = v12;
    v16 = *(__int64 ***)(v12 + 8);
    *v16 = v10;
    v17 = (__int64 *)v10[1];
    *v17 = v14;
    v10[1] = (__int64)v16;
    *(_QWORD *)(v12 + 8) = v15;
    *(_QWORD *)(v14 + 8) = v17;
    if ( v12 != v11 )
    {
      while ( 1 )
      {
        v10 = (__int64 *)*v10;
        if ( v10 == (__int64 *)v12 )
          break;
        if ( *((float *)v10 + 6) > *(float *)(v12 + 24) )
          goto LABEL_10;
      }
    }
  }
  else
  {
    v13 = *a1;
    while ( 1 )
    {
      v10 = (__int64 *)*v10;
      if ( v10 == (__int64 *)v18 )
        break;
      if ( *((float *)v10 + 6) > *(float *)(v18 + 24) )
        goto LABEL_10;
    }
  }
  *a1 = v13;
  return v11;
}
