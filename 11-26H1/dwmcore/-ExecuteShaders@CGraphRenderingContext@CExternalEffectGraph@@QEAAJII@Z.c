/*
 * XREFs of ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z @ 0x18001CA4C
 * Callers:
 *     _CBlurRenderingGraphBuilder::BuildPrescale_::_2_::_lambda_1_::operator() @ 0x1800180A8 (_CBlurRenderingGraphBuilder--BuildPrescale_--_2_--_lambda_1_--operator().c)
 *     std::_Func_impl_no_alloc__CBlurRenderingGraphBuilder::BuildOnePass_::_2_::_lambda_2__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1801B2510 (std--_Func_impl_no_alloc__CBlurRenderingGraphBuilder--BuildOnePass_--_2_--_lambda_2_ea_1801B2510.c)
 * Callees:
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18001B764 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ??0EffectInput@@QEAA@XZ @ 0x18001CEE4 (--0EffectInput@@QEAA@XZ.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x18001CF10 (--1EffectInput@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18001E240 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z @ 0x18001E36C (-Alloc@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18003E488 (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18006CCA0 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800D9794 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalEffectGraph::CGraphRenderingContext::ExecuteShaders(
        CExternalEffectGraph::CGraphRenderingContext *this,
        int a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r14d
  int v5; // r12d
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  unsigned int v11; // r13d
  int v12; // xmm0_4
  __int64 v13; // rdi
  _DWORD *v14; // rax
  __int128 v15; // xmm1
  EffectInput *v16; // r14
  __int64 v17; // r15
  __int64 v18; // r15
  unsigned int v19; // eax
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r12
  struct CDrawingContext *v25; // rdx
  CBrushRenderingGraph *v26; // rcx
  int updated; // eax
  int v28; // r14d
  int v29; // eax
  EffectInput *v30; // r14
  __int64 v31; // r15
  EffectInput *v33; // rbx
  EffectInput *v34; // rbx
  unsigned int v35; // [rsp+20h] [rbp-E0h]
  unsigned int v36; // [rsp+20h] [rbp-E0h]
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  struct CGeometryOnlyDrawListBrush *v38[2]; // [rsp+38h] [rbp-C8h] BYREF
  char v39; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+5Ch] [rbp-A4h]
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h]
  char v46; // [rsp+78h] [rbp-88h]
  __int128 v47; // [rsp+80h] [rbp-80h]
  int v48; // [rsp+90h] [rbp-70h]
  char v49; // [rsp+94h] [rbp-6Ch]
  char v50; // [rsp+95h] [rbp-6Bh]
  __int128 v51; // [rsp+98h] [rbp-68h]
  __int128 v52; // [rsp+A8h] [rbp-58h]
  __int128 v53; // [rsp+B8h] [rbp-48h]
  __int128 v54; // [rsp+C8h] [rbp-38h]
  char v55; // [rsp+228h] [rbp+128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v41 = a3;
  v3 = 0LL;
  v42 = a2;
  v40 = 0LL;
  v4 = a3;
  v5 = a2;
  v38[0] = 0LL;
  v7 = 0;
  v8 = CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Alloc();
  if ( v8 )
  {
    *(_DWORD *)(v8 + 8) = 0;
    *(_QWORD *)v8 = &CDrawListCache::`vftable';
    v9 = 0LL;
    if ( g_pComposition )
      v9 = *((_QWORD *)g_pComposition + 110);
    *(_QWORD *)(v8 + 16) = v9;
    *(_QWORD *)(v8 + 24) = 0LL;
    v3 = v8;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 40) = 2LL;
    *(_QWORD *)(v8 + 72) = 0LL;
    *(_WORD *)(v8 + 84) = 0;
    *(_BYTE *)(v8 + 86) = 1;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 8));
    v40 = 0LL;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v40);
    v38[0] = 0LL;
    v40 = v3;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x24u, 0LL);
  }
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(v38);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v7,
      v35);
  }
  else
  {
    lpMem = 0LL;
    v38[0] = (struct CGeometryOnlyDrawListBrush *)&lpMem;
    v38[1] = 0LL;
    v39 = 1;
    v7 = CGeometryOnlyDrawListBrush::Create(&v38[1]);
    if ( v39 )
    {
      v10 = *(_QWORD **)v38[0];
      *(_QWORD *)v38[0] = v38[1];
      if ( v10 )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v10);
    }
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCC,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
        (const char *)(unsigned int)v7,
        v35);
      if ( lpMem )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
    }
    else
    {
      v11 = 0;
      v12 = *((_DWORD *)this + 11);
      v13 = 4LL;
      v14 = lpMem;
      LODWORD(v38[1]) = *((_DWORD *)this + 10);
      HIDWORD(v38[1]) = v12;
      v38[0] = 0LL;
      v15 = *(_OWORD *)v38;
      *((_BYTE *)lpMem + 52) = 1;
      v14[12] = 0;
      *((_OWORD *)v14 + 2) = v15;
      while ( v11 < v4 )
      {
        v43 = 0LL;
        v16 = (EffectInput *)&v44;
        v17 = 4LL;
        do
        {
          EffectInput::EffectInput(v16);
          v16 = (EffectInput *)((char *)v16 + 112);
          --v17;
        }
        while ( v17 );
        v18 = *((_QWORD *)this + 6);
        v19 = v5 + v11;
        v20 = v44;
        v43 = v19 | 0x100000000LL;
        v21 = 112LL * *((unsigned int *)this + 8);
        v22 = *(_QWORD *)(v21 + v18);
        v44 = v22;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        v23 = *(_QWORD *)(v21 + v18 + 8);
        v24 = v45;
        v45 = v23;
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        v25 = *(struct CDrawingContext **)this;
        v26 = (CBrushRenderingGraph *)*((_QWORD *)this + 2);
        v46 = *(_BYTE *)(v21 + v18 + 16);
        v47 = *(_OWORD *)(v21 + v18 + 24);
        v48 = *(_DWORD *)(v21 + v18 + 40);
        v49 = *(_BYTE *)(v21 + v18 + 44);
        v50 = *(_BYTE *)(v21 + v18 + 45);
        v51 = *(_OWORD *)(v21 + v18 + 48);
        v52 = *(_OWORD *)(v21 + v18 + 64);
        v53 = *(_OWORD *)(v21 + v18 + 80);
        v54 = *(_OWORD *)(v21 + v18 + 96);
        v51 = *(_OWORD *)(v21 + v18 + 48);
        updated = CBrushRenderingGraph::UpdateDrawListCache(
                    v26,
                    v25,
                    (const struct CDrawListBrush *)lpMem,
                    (struct EffectStage *)&v43,
                    0,
                    (struct CDrawListCache *)v3);
        v28 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xDD,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
            (const char *)(unsigned int)updated,
            v36);
          v34 = (EffectInput *)&v55;
          do
          {
            v34 = (EffectInput *)((char *)v34 - 112);
            EffectInput::~EffectInput(v34);
            --v13;
          }
          while ( v13 );
          goto LABEL_37;
        }
        v29 = CDrawListCache::Render(v3, *(_QWORD *)this, &CMILMatrix::Identity);
        v28 = v29;
        if ( v29 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xE5,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
            (const char *)(unsigned int)v29,
            11);
          v33 = (EffectInput *)&v55;
          do
          {
            v33 = (EffectInput *)((char *)v33 - 112);
            EffectInput::~EffectInput(v33);
            --v13;
          }
          while ( v13 );
LABEL_37:
          if ( lpMem )
            CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
          v7 = v28;
          goto LABEL_34;
        }
        *(_DWORD *)(112LL * *((unsigned int *)this + 9) + *((_QWORD *)this + 6) + 40) |= *(_DWORD *)(v3 + 72) & 0x278;
        if ( *(_QWORD *)(v3 + 24) )
        {
          if ( (*(_DWORD *)(v3 + 72) & 0x400) != 0 )
            ++dword_1803DE46C;
          else
            ++dword_1803DE460;
          *(_QWORD *)(v3 + 24) = 0LL;
          CDrawListCache::ReleaseDrawListEntries((CDrawListCache *)v3);
          *(_WORD *)(v3 + 84) = 0;
        }
        v30 = (EffectInput *)&v55;
        v31 = 4LL;
        do
        {
          v30 = (EffectInput *)((char *)v30 - 112);
          EffectInput::~EffectInput(v30);
          --v31;
        }
        while ( v31 );
        v4 = v41;
        ++v11;
        v5 = v42;
      }
      if ( lpMem )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
      v7 = 0;
    }
  }
LABEL_34:
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v40);
  return (unsigned int)v7;
}
