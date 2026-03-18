/*
 * XREFs of ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180070E00
 * Callers:
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180071544 (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800CEC20 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800702C0 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800706D0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 */

void __fastcall CBatchOptimizer::AppendLayer(CBatchOptimizer *this)
{
  _DWORD *v1; // rsi
  int v3; // r9d
  int v4; // r11d
  _DWORD *v5; // rdx
  __int64 v6; // r8

  v1 = (_DWORD *)((char *)this + 32);
  if ( *((_DWORD *)this + 8) == 8 )
  {
    if ( !*((_BYTE *)this + 4240) || (v1 = (_DWORD *)((char *)this + 32), !CBatchOptimizer::TryMergeOneLayer(this)) )
    {
      CBatchOptimizer::FlushBottomLayer(this);
      v1 = (_DWORD *)((char *)this + 32);
      v3 = *((_DWORD *)this + 8) - 1;
      if ( *((_DWORD *)this + 8) != 1 )
      {
        v4 = *((_DWORD *)this + 12);
        v5 = (_DWORD *)((char *)this + 48);
        v6 = 0LL;
        do
        {
          ++v6;
          *v5 = v5[1];
          ++v5;
        }
        while ( v6 != v3 );
        v1 = (_DWORD *)((char *)this + 32);
        *((_DWORD *)this + v3 + 12) = v4;
      }
      --*v1;
    }
  }
  *(_OWORD *)((char *)this + 520 * *((int *)this + (*v1)++ + 12) + 80) = *((_OWORD *)this + 1);
}
