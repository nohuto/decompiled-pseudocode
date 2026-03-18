/*
 * XREFs of ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18025F064
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800720B0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180071750 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x18011AFA0 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z @ 0x18016D470 (-SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z.c)
 *     ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderingEffect@@@Z @ 0x180170530 (-FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderi.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x180174D00 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801767E0 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetRenderingEffect@CBatchCommand@@QEBAPEAVCRenderingEffect@@XZ @ 0x180181B70 (-GetRenderingEffect@CBatchCommand@@QEBAPEAVCRenderingEffect@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBatch::RenderLoop<0>(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r14d
  int v4; // r15d
  struct CRenderingEffect *v6; // rbx
  __int64 v7; // r8
  struct CBatchCommand **v8; // rdi
  struct CBatchCommand **v9; // rcx
  CBatchCommand *v10; // r12
  CBatchCommand *v11; // rcx
  struct CRenderingEffect *RenderingEffect; // rax
  void (__fastcall *v13)(struct CRenderingEffect *, struct CRenderingEffect **, struct CRenderingEffect *, char *); // rdi
  struct CRenderingEffect *v14; // rax
  int v15; // eax
  const struct CRenderingEffect *v16; // r8
  int v17; // eax
  struct CBatchCommand **v19; // [rsp+30h] [rbp-10h] BYREF
  struct CBatchCommand **v20; // [rsp+38h] [rbp-8h]
  char v21; // [rsp+80h] [rbp+40h] BYREF
  struct CRenderingEffect *v22; // [rsp+90h] [rbp+50h] BYREF
  struct CRenderingEffect *v23; // [rsp+98h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = 0;
  v6 = 0LL;
  v22 = 0LL;
  v7 = *(_QWORD *)(v2 + 24);
  v8 = (struct CBatchCommand **)(v7 + 8LL * *(unsigned int *)(a1 + 40));
  v9 = (struct CBatchCommand **)(v7 + 8LL * *(unsigned int *)(a1 + 44));
  v20 = v9;
  while ( 1 )
  {
    v19 = v8;
    if ( v8 == v9 )
      break;
    v10 = *v8;
    if ( !CBatchCommand::ApplyRenderState(*v8, (struct IDrawListStateSink *)a2) )
      goto LABEL_17;
    if ( !v6 )
    {
      CD3DBatchExecutionContext::Flush(a2, 0x80000000);
      v11 = v10;
LABEL_6:
      RenderingEffect = CBatchCommand::GetRenderingEffect(v11);
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(
        (__int64 *)&v22,
        (void (__fastcall ***)(_QWORD))RenderingEffect);
      v6 = v22;
      goto LABEL_11;
    }
    v11 = v10;
    if ( *(int *)(a2 + 32) < 0 )
      goto LABEL_6;
    v21 = 0;
    v13 = *(void (__fastcall **)(struct CRenderingEffect *, struct CRenderingEffect **, struct CRenderingEffect *, char *))(*(_QWORD *)v6 + 72LL);
    v14 = CBatchCommand::GetRenderingEffect(v10);
    v13(v6, &v23, v14, &v21);
    if ( v23 != v6 )
    {
      CD3DBatchExecutionContext::Flush(a2, 0x80000000);
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=((__int64 *)&v22, (__int64 *)&v23);
      v6 = v22;
    }
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v23);
LABEL_11:
    if ( *(int *)(a2 + 32) >= 0 )
    {
      if ( v4 >= 0 )
      {
LABEL_19:
        v16 = v6;
        goto LABEL_15;
      }
    }
    else
    {
      v15 = CD3DBatchExecutionContext::SetRenderingEffectState((CD3DBatchExecutionContext *)a2, v6);
      v4 = v15;
      if ( v15 >= 0 )
        goto LABEL_19;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x159u, 0LL);
    }
    v16 = 0LL;
LABEL_15:
    v17 = CD3DBatchExecutionContext::FillVertexAndIndexBuffers(
            (CD3DBatchExecutionContext *)a2,
            (const struct CBatchCommand *const **)&v19,
            v16);
    v3 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x160u, 0LL);
      break;
    }
    *(_DWORD *)(a2 + 32) = 0;
    v8 = v19;
LABEL_17:
    v9 = v20;
    ++v8;
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v22);
  return v3;
}
