/*
 * XREFs of std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___ @ 0x180196C28
 * Callers:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___ @ 0x1800C275C (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderComm_ea_1800C275C.c)
 * Callees:
 *     ?IsOverlapping@Bounds@CCpuClipAntialiasSink@@QEBA_NAEBU12@@Z @ 0x180196D38 (-IsOverlapping@Bounds@CCpuClipAntialiasSink@@QEBA_NAEBU12@@Z.c)
 *     _CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2_::operator() @ 0x180196D5C (_CCpuClipAntialiasSinkContext--ProcessRenderCommands_OverlapPass_--_18_--_lambda_2_--operator().c)
 */

float *__fastcall std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___(
        float *a1,
        float *a2,
        __int64 *a3)
{
  float *v3; // r9
  __int64 *v5; // rcx
  __int64 *v6; // r10
  float v7; // xmm1_4
  float *v8; // r11
  __int64 *v10; // r8
  __int64 **v11; // rdx
  float **v12; // rcx
  _QWORD *v13; // rax
  float *v14; // r9

  v3 = a1;
  v5 = (__int64 *)(a2 + 4);
  v6 = (__int64 *)a2;
  v7 = a2[6];
  if ( v3[7] > v7 )
  {
    if ( a2[7] > v3[6] )
    {
      if ( *(_DWORD *)v5 >= *((_DWORD *)v3 + 4) )
        goto LABEL_4;
      goto LABEL_13;
    }
    v5 = (__int64 *)(a2 + 4);
  }
  if ( v3[6] <= v7 )
  {
LABEL_4:
    v8 = v3;
    while ( 1 )
    {
      v3 = *(float **)v3;
      if ( v3 == a2 )
        return v8;
      if ( v3[7] <= v7 || *((float *)v5 + 3) <= v3[6] )
      {
        if ( v3[6] > v7 )
          goto LABEL_15;
      }
      else if ( *(_DWORD *)v5 < *((_DWORD *)v3 + 4) )
      {
        goto LABEL_15;
      }
    }
  }
LABEL_13:
  v8 = a2;
LABEL_15:
  v10 = v6;
  while ( 1 )
  {
    v6 = (__int64 *)*v6;
    if ( v6 == a3 )
      break;
    if ( CCpuClipAntialiasSink::Bounds::IsOverlapping(
           (CCpuClipAntialiasSink::Bounds *)((char *)v6 + 20),
           (const struct CCpuClipAntialiasSink::Bounds *)(v3 + 5)) )
    {
      if ( *((_DWORD *)v6 + 4) >= *((_DWORD *)v3 + 4) )
        break;
    }
    else if ( v3[6] <= *((float *)v6 + 6) )
    {
      break;
    }
  }
  v11 = (__int64 **)v10[1];
  *v11 = v6;
  v12 = (float **)v6[1];
  *v12 = v3;
  v13 = (_QWORD *)*((_QWORD *)v3 + 1);
  *v13 = v10;
  *((_QWORD *)v3 + 1) = v12;
  v6[1] = (__int64)v11;
  v10[1] = (__int64)v13;
  if ( v6 != a3 )
  {
    while ( 1 )
    {
      v14 = *(float **)v3;
      if ( v14 == (float *)v6 )
        break;
      if ( (unsigned __int8)CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2_::operator()(
                              v12,
                              v6 + 2,
                              v14 + 4) )
        goto LABEL_15;
    }
  }
  return v8;
}
