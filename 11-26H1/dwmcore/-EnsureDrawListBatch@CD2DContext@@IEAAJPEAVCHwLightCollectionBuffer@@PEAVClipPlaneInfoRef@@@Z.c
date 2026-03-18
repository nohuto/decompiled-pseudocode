/*
 * XREFs of ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C5AE0
 * Callers:
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C48D0 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C5AE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180071544 (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x1800C24BC (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800C24F0 (--1-$out_param_t@V-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBatchCommand@@@std@@@std@@@de.c)
 *     ??1?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ @ 0x1800C2540 (--1-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ.c)
 *     ?CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z @ 0x1800C47E0 (-CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C5AE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1PrivateCompositorRenderer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180135F90 (-InternalRelease@-$CMILRefCountBaseT@UID2D1PrivateCompositorRenderer@@VCMilObjectDeleter@@@@IEAA.c)
 *     ??1?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180138778 (--1-$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAVCSharedDirect3DResources@1@PEAPEAV1@@Z @ 0x18013887C (-Create@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAVCSharedDirect3DResources@1@PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCDrawListEntryBatch@@$0A@@@QEAAJPEFBQEAVCDrawListEntryBatch@@I@Z @ 0x1801389D0 (-AddMultipleAndSet@-$DynArray@PEAVCDrawListEntryBatch@@$0A@@@QEAAJPEFBQEAVCDrawListEntryBatch@@I.c)
 *     ?InternalRelease@?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@IEAAKXZ @ 0x180151070 (-InternalRelease@-$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x18017FE90 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18018CB8C (-AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delet.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::EnsureDrawListBatch(
        CD2DContext *this,
        struct CHwLightCollectionBuffer *a2,
        struct ClipPlaneInfoRef *a3)
{
  __int64 v3; // rbx
  int v7; // edi
  unsigned int v8; // r12d
  char *v10; // rdx
  int v11; // ecx
  __int64 v12; // rax
  struct CDrawListEntryBatch **v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  float v20; // xmm1_4
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  float v24; // xmm0_4
  _QWORD *v25; // rdi
  int v26; // ebx
  int v27; // r13d
  CDrawListBatchManager *v28; // rcx
  struct CDrawListEntryBatch *v29; // rcx
  __int64 v30; // rax
  CBatchOptimizer *v31; // rcx
  __int64 v32; // rcx
  CBatchCommand *v33; // rdx
  struct CD3DDevice *v34; // rcx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  CDrawListBatchManager *v38; // rcx
  struct CDrawListEntryBatch *v39; // rcx
  __int64 v40; // rax
  CBatchOptimizer *v41; // rcx
  __int64 v42; // rcx
  CBatchCommand *v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  struct CDrawListEntryBatch *v48; // [rsp+30h] [rbp-30h] BYREF
  struct CDrawListEntryBatch *v49; // [rsp+38h] [rbp-28h] BYREF
  struct CDrawListEntryBatch **v50; // [rsp+40h] [rbp-20h] BYREF
  struct CBatchCommand *v51; // [rsp+48h] [rbp-18h] BYREF
  char v52; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+98h] [rbp+38h]

  v3 = *((_QWORD *)this + 17);
  if ( !v3 )
  {
    v10 = (char *)this + 8;
    v11 = *((_DWORD *)this + 86);
    v12 = 0LL;
    if ( v11 )
      v12 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v11 - 1));
    v13 = *(struct CDrawListEntryBatch ***)(v12 + 24);
    v50 = v13;
    if ( *((_QWORD *)this + 19) )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    v14 = (__int64)this + 1108;
    if ( !v10 )
      v14 = 1124LL;
    if ( *(_DWORD *)v14 )
    {
      v27 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x10Cu, 0LL);
      v8 = -2003304307;
    }
    else
    {
      if ( *((_DWORD *)this + 28) )
        goto LABEL_14;
      v48 = 0LL;
      v34 = (CD2DContext *)((char *)this - 16);
      if ( !v10 )
        v34 = 0LL;
      v35 = CDrawListEntryBatch::Create(
              v34,
              *((struct CDrawListEntryBatch::CSharedDirect3DResources **)this + 16),
              &v48);
      v27 = v35;
      v8 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x113u, 0LL);
      }
      else
      {
        v49 = v48;
        v36 = DynArray<CDrawListEntryBatch *,0>::AddMultipleAndSet((char *)this + 88, &v49);
        v27 = v36;
        v8 = v36;
        if ( v36 >= 0 )
        {
          v48 = 0LL;
          wil::com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>::~com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>(&v48);
          v13 = v50;
LABEL_14:
          v15 = *((_QWORD *)this + 17);
          *((_QWORD *)this + 17) = 0LL;
          if ( v15 )
            CMILRefCountBaseT<ID2D1PrivateCompositorRenderer,CMilObjectDeleter>::InternalRelease();
          v16 = (unsigned int)(*((_DWORD *)this + 28) - 1);
          *((_QWORD *)this + 17) = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v16);
          v17 = *((_DWORD *)this + 30);
          *((_DWORD *)this + 28) = v16;
          if ( v17 >= (unsigned int)v16 )
            v17 = v16;
          *((_DWORD *)this + 30) = v17;
          ++*((_DWORD *)this + 40);
          v18 = *((_DWORD *)this + 8);
          v19 = *((_QWORD *)this + 17);
          *(_DWORD *)(v19 + 40) = v18;
          *(_DWORD *)(v19 + 44) = v18;
          (*((void (__fastcall **)(struct CDrawListEntryBatch **, struct CDrawListEntryBatch **))*v13 + 11))(v13, &v48);
          v20 = (float)(int)v48;
          v21 = HIDWORD(v48);
          *(_QWORD *)(v19 + 48) = 0LL;
          *(float *)(v19 + 56) = v20;
          *(float *)(v19 + 60) = (float)v21;
          v22 = (*((__int64 (__fastcall **)(struct CDrawListEntryBatch **, struct CDrawListEntryBatch ***))*v13 + 15))(
                  v13,
                  &v50);
          *(_OWORD *)(v19 + 80) = *(_OWORD *)v22;
          *(_QWORD *)(v19 + 96) = *(_QWORD *)(v22 + 16);
          v23 = (*((__int64 (__fastcall **)(struct CDrawListEntryBatch **, struct CDrawListEntryBatch ***))v13[1] + 3))(
                  v13 + 1,
                  &v50);
          *(_QWORD *)(v19 + 104) = *(_QWORD *)v23;
          *(_DWORD *)(v19 + 112) = *(_DWORD *)(v23 + 8);
          LODWORD(v23) = (_DWORD)v48;
          *(_DWORD *)(v19 + 72) = -1082130432;
          *(_DWORD *)(v19 + 76) = 1065353216;
          v24 = (float)(int)v23;
          LODWORD(v23) = HIDWORD(v48);
          *(float *)(v19 + 64) = 2.0 / v24;
          *(float *)(v19 + 68) = -2.0 / (float)(int)v23;
          v25 = (_QWORD *)*((_QWORD *)this + 17);
          v26 = 0;
          if ( a2 != (struct CHwLightCollectionBuffer *)v25[4] )
          {
            ++dword_1803DE34C;
            v38 = (CDrawListBatchManager *)(v25[2] + 24LL);
            v48 = 0LL;
            v50 = &v48;
            v51 = 0LL;
            v52 = 1;
            v26 = CDrawListBatchManager::CreateBatchCommand(v38, &v51);
            v8 = v26;
            wil::details::out_param_t<std::unique_ptr<CBatchCommand>>::~out_param_t<std::unique_ptr<CBatchCommand>>((__int64)&v50);
            if ( v26 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0xC0u, 0LL);
              if ( v48 )
              {
                std::default_delete<CBatchCommand>::operator()(v44, v48);
                goto LABEL_47;
              }
            }
            else
            {
              v39 = v48;
              *(_DWORD *)v48 = 2;
              wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
                (char *)v39 + 8,
                a2);
              v40 = v25[2];
              v41 = *(CBatchOptimizer **)(v40 + 160);
              if ( v41 )
              {
                CBatchOptimizer::AddStateSettingCommand(v41, &v48);
              }
              else
              {
                v45 = CDrawListBatchManager::AddBatchCommand(v40 + 24, &v48);
                v26 = v45;
                v8 = v45;
                if ( v45 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0xCAu, 0LL);
                  std::unique_ptr<CBatchCommand>::~unique_ptr<CBatchCommand>(&v48);
                  goto LABEL_47;
                }
              }
              v43 = v48;
              v25[4] = a2;
              if ( v43 )
                std::default_delete<CBatchCommand>::operator()(v42, v43);
            }
          }
          v8 = v26;
          if ( v26 >= 0 )
          {
            if ( (struct ClipPlaneInfoRef *)v25[3] != a3 )
            {
              if ( a3 )
                (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))a3)(a3);
              v50 = (struct CDrawListEntryBatch **)v25[3];
              v25[3] = a3;
              Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::InternalRelease(&v50);
            }
            return v8;
          }
LABEL_47:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x1C9u, 0LL);
          return v8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x115u, 0LL);
      }
      wil::com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>::~com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>(&v48);
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x1C7u, 0LL);
    return v8;
  }
  if ( *(struct ClipPlaneInfoRef **)(v3 + 24) == a3 )
  {
    v7 = 0;
    if ( a2 != *(struct CHwLightCollectionBuffer **)(v3 + 32) )
    {
      ++dword_1803DE34C;
      v28 = (CDrawListBatchManager *)(*(_QWORD *)(v3 + 16) + 24LL);
      v48 = 0LL;
      v50 = &v48;
      v51 = 0LL;
      v52 = 1;
      v7 = CDrawListBatchManager::CreateBatchCommand(v28, &v51);
      v8 = v7;
      wil::details::out_param_t<std::unique_ptr<CBatchCommand>>::~out_param_t<std::unique_ptr<CBatchCommand>>((__int64)&v50);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xC0u, 0LL);
        if ( v48 )
        {
          std::default_delete<CBatchCommand>::operator()(v37, v48);
          goto LABEL_39;
        }
      }
      else
      {
        v29 = v48;
        *(_DWORD *)v48 = 2;
        *((_QWORD *)v29 + 1) = a2;
        if ( a2 )
          (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))a2)(a2);
        v30 = *(_QWORD *)(v3 + 16);
        v31 = *(CBatchOptimizer **)(v30 + 160);
        if ( v31 )
        {
          CBatchOptimizer::AddStateSettingCommand(v31, &v48);
        }
        else
        {
          v47 = CDrawListBatchManager::AddBatchCommand(v30 + 24, &v48);
          v7 = v47;
          v8 = v47;
          if ( v47 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v47, 0xCAu, 0LL);
            std::unique_ptr<CBatchCommand>::~unique_ptr<CBatchCommand>(&v48);
            goto LABEL_39;
          }
        }
        v33 = v48;
        *(_QWORD *)(v3 + 32) = a2;
        if ( v33 )
          std::default_delete<CBatchCommand>::operator()(v32, v33);
      }
    }
    v8 = v7;
    if ( v7 >= 0 )
      return v8;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1DAu, 0LL);
    return v8;
  }
  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  v46 = CD2DContext::EnsureDrawListBatch(this, a2, a3);
  v8 = v46;
  if ( v46 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0x1D6u, 0LL);
  return v8;
}
