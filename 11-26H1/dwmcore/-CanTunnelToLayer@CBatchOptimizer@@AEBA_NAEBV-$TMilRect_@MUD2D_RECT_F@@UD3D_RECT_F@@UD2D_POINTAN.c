/*
 * XREFs of ?CanTunnelToLayer@CBatchOptimizer@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x1800CEF50
 * Callers:
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800CEC20 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     <none>
 */

char __fastcall CBatchOptimizer::CanTunnelToLayer(__int64 a1, float *a2, int a3, _DWORD *a4)
{
  int v4; // edi
  __int64 v5; // r10
  int *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  float *i; // rdx

  v4 = a3 - 1;
  v5 = a3 - 1;
  v8 = (int *)(a1 + 48 + 4 * v5);
LABEL_2:
  if ( v5 == *a4 )
    return 1;
  v9 = 520LL * *v8;
  v10 = 0LL;
  for ( i = (float *)(v9 + a1 + 288); ; i += 4 )
  {
    if ( v10 == *(_DWORD *)(v9 + a1 + 100) )
    {
      --v4;
      --v5;
      --v8;
      goto LABEL_2;
    }
    if ( a2[2] >= *(i - 2) && *i >= *a2 && a2[3] >= *(i - 1) && i[1] >= a2[1] )
      break;
    ++v10;
  }
  *a4 = v4;
  return 0;
}
