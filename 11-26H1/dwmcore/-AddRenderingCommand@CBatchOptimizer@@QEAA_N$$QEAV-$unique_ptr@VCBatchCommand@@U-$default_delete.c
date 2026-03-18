/*
 * XREFs of ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800CEC20
 * Callers:
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C48D0 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 * Callees:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800706D0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180070E00 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800711C0 (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180071750 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180071A70 (-ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_de.c)
 *     ?GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CDE50 (-GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetRenderingEffect@CRenderingBatchCommand@@QEBAPEAVCRenderingEffect@@XZ @ 0x1800CEE30 (-GetRenderingEffect@CRenderingBatchCommand@@QEBAPEAVCRenderingEffect@@XZ.c)
 *     ?MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z @ 0x1800CEE50 (-MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z.c)
 *     ?MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@AEBUSharedStateLayer@@PEAVCRenderingEffect@@@Z @ 0x1800CEE90 (-MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ?CanTunnelToLayer@CBatchOptimizer@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x1800CEF50 (-CanTunnelToLayer@CBatchOptimizer@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBatchOptimizer::AddRenderingCommand(CBatchOptimizer *this, int **a2)
{
  __int64 v2; // r12
  int *v6; // r13
  unsigned int v7; // esi
  int v8; // edi
  int *i; // rdx
  char *v10; // r14
  char v11; // r8
  struct CRenderingEffect *RenderingEffect; // rax
  __int64 *matched; // rax
  __int64 v14; // rcx
  __int64 v15; // r13
  struct CRenderingEffect *v16; // rax
  int v17; // ecx
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF
  __int64 v19; // [rsp+98h] [rbp+50h] BYREF
  int *v20; // [rsp+A0h] [rbp+58h]
  __int64 v21; // [rsp+A8h] [rbp+60h] BYREF

  v2 = 0LL;
  if ( !*((_DWORD *)this + 8) )
    CBatchOptimizer::AppendLayer(this);
  if ( !CBatchCommand::ApplyRenderState((CBatchCommand *)*a2, this) )
  {
    CDrawListBatchManager::ReturnBatchCommand(*((_QWORD *)this + 1), a2);
    return 0;
  }
  v6 = *a2;
  v20 = v6;
  v18 = 0LL;
  CRenderingBatchCommand::GetWorldBounds((__int64)v6, (__int64)&v18);
  v7 = *((_DWORD *)this + 8);
  v8 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v8 == v7 )
        goto LABEL_28;
      for ( i = (int *)((char *)this + 4 * v8 + 48); *((_DWORD *)this + 130 * *i + 26); ++i )
        ++v8;
      LODWORD(v19) = v8;
      v10 = (char *)this + 520 * *((int *)this + v8 + 12);
      if ( CBatchOptimizer::MatchStateToHomogeneousLayer(
             (const struct SharedStateLayer *)(v10 + 80),
             (CBatchOptimizer *)((char *)this + 16)) )
      {
        break;
      }
LABEL_24:
      ++v8;
    }
    if ( !v11 )
      break;
    if ( (unsigned __int8)CBatchOptimizer::CanTunnelToLayer(this, &v18, v7, &v19) )
    {
      v8 = v19;
      break;
    }
    v17 = *((_DWORD *)this + 8);
    v8 = v19;
    if ( (_DWORD)v19 == v17 - 1
      && *((_BYTE *)this + 4240)
      && v17 == 8
      && *((_DWORD *)this + 130 * *((int *)this + (int)v19 + 12) + 25) == 1
      && CBatchOptimizer::TryMergeOneLayer(this) )
    {
      v7 = *((_DWORD *)this + 8);
      v8 = v7 - 1;
    }
  }
  RenderingEffect = CRenderingBatchCommand::GetRenderingEffect((CRenderingBatchCommand *)v6);
  matched = (__int64 *)CBatchOptimizer::MatchEffectToHomogeneousLayer(&v21, v10 + 80, RenderingEffect);
  v14 = v2;
  v15 = *matched;
  v19 = v15;
  v2 = v15;
  *matched = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  if ( !v15 )
  {
    v6 = v20;
    goto LABEL_24;
  }
  if ( !*((_DWORD *)v10 + 25) )
  {
    *((_DWORD *)v10 + 22) = *((_DWORD *)this + 6);
    v10[92] = *((_BYTE *)this + 28);
  }
  if ( v8 == v7 )
  {
    v6 = v20;
LABEL_28:
    v16 = CRenderingBatchCommand::GetRenderingEffect((CRenderingBatchCommand *)v6);
    v19 = (__int64)v16;
    if ( v16 )
      (**(void (__fastcall ***)(struct CRenderingEffect *))v16)(v16);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    CBatchOptimizer::AppendLayer(this);
    v8 = *((_DWORD *)this + 8) - 1;
  }
  CBatchOptimizer::AppendEntryToLayer(this, v8, &v18, (__int64 *)a2, &v19);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  return 1;
}
