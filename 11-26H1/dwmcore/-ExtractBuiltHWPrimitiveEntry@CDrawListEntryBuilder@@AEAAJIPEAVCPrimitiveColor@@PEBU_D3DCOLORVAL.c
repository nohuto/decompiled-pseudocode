/*
 * XREFs of ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18000EE70
 * Callers:
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x18000E850 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x18000EDA0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x180010850 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     PrimitiveStorage::Alloc_16_ @ 0x1800094C0 (PrimitiveStorage--Alloc_16_.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x180009790 (-Initialize@CDrawListPrimitive@@IEAAXAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180144760 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ?push_back@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAPEAVCDrawListEntry@@@Z @ 0x18016C644 (-push_back@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x180185E80 (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAPEAX_K@Z @ 0x180188CD8 (-Alloc@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
        CDrawListEntryBuilder *this,
        int a2,
        struct CPrimitiveColor *a3,
        const struct _D3DCOLORVALUE *a4)
{
  void *v4; // r15
  unsigned int v5; // r14d
  __int64 v7; // rdi
  char *v8; // r12
  char v9; // r13
  unsigned int v10; // edx
  int v11; // r8d
  unsigned int v12; // eax
  int v13; // ecx
  char *v14; // rbx
  void (__fastcall ***v15)(_QWORD); // r12
  _QWORD *v16; // r13
  int v17; // r15d
  bool v18; // zf
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbx
  char *v22; // rdx
  _OWORD *p_r; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v35; // rcx
  CCpuClip *v36; // rcx
  int v37; // eax
  struct CShape *v38; // rdi
  __int64 (__fastcall *v39)(struct CShape *, _QWORD, __int64 *); // rbx
  int v40; // eax
  int Src; // [rsp+20h] [rbp-69h]
  char *v42; // [rsp+40h] [rbp-49h] BYREF
  struct CShape *v43; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v44; // [rsp+50h] [rbp-39h] BYREF
  int v45; // [rsp+54h] [rbp-35h]
  int v46; // [rsp+58h] [rbp-31h]
  int v47; // [rsp+5Ch] [rbp-2Dh]
  int v48[2]; // [rsp+60h] [rbp-29h] BYREF
  int v49; // [rsp+68h] [rbp-21h]
  unsigned int v50; // [rsp+6Ch] [rbp-1Dh]
  int v51[2]; // [rsp+70h] [rbp-19h] BYREF
  __int128 v52; // [rsp+78h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  __int64 v54; // [rsp+F0h] [rbp+67h] BYREF
  int v55; // [rsp+F8h] [rbp+6Fh]
  struct CPrimitiveColor *v56; // [rsp+100h] [rbp+77h]
  const struct _D3DCOLORVALUE *v57; // [rsp+108h] [rbp+7Fh]

  v57 = a4;
  v56 = a3;
  v55 = a2;
  v4 = (void *)*((_QWORD *)this + 511);
  v5 = 0;
  v7 = (__int64)(*((_QWORD *)this + 512) - (_QWORD)v4) >> 1;
  if ( !v7 )
  {
LABEL_29:
    v25 = *((_QWORD *)this + 22);
    v26 = (*((_QWORD *)this + 23) - v25) >> 4;
    if ( v26 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v51, v25, v26);
      *((_QWORD *)this + 23) += -16 * v27;
    }
    v28 = *((_QWORD *)this + 266);
    v29 = (*((_QWORD *)this + 267) - v28) >> 4;
    if ( v29 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v51, v28, v29);
      *((_QWORD *)this + 267) += -16 * v30;
    }
    v31 = *((_QWORD *)this + 511);
    v32 = (*((_QWORD *)this + 512) - v31) >> 1;
    if ( v32 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v51, v31, v32);
      *((_QWORD *)this + 512) += -2 * v33;
    }
    *((_QWORD *)this + 510) = 0LL;
    *((_QWORD *)this + 558) = 0LL;
    return v5;
  }
  v8 = 0LL;
  v9 = *((_BYTE *)this + 29);
  v43 = (struct CShape *)_mm_unpacklo_ps((__m128)*((unsigned int *)this + 1), (__m128)*((unsigned int *)this + 2)).m128_u64[0];
  v42 = 0LL;
  if ( v7 == -1 || !v4 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v10 = *((_DWORD *)this + 1020);
  v11 = *(_DWORD *)this;
  *(_QWORD *)v48 = *((_QWORD *)this + 266);
  *(_QWORD *)v51 = *((_QWORD *)this + 22);
  v49 = 8 * v11 + 16;
  v12 = v10;
  *(_QWORD *)&v52 = __PAIR64__(v10, v49);
  v55 = v11;
  v50 = v10;
  v44 = v10;
  v45 = v10;
  v46 = v11;
  v47 = v7;
  v13 = v10 & 1;
  if ( (v10 & 1) != 0 )
  {
    v12 = v10 - v13 + 2;
    v44 = v12;
    if ( v10 )
      v45 = v10 - v13 + 2;
  }
  if ( v12 > 0x10000 || (unsigned int)v7 > 0x1FFFE )
  {
    v44 = 0;
    v47 = 0;
  }
  v14 = PrimitiveStorage::Alloc_16_(&v44);
  if ( v14 )
  {
    CDrawListPrimitive::Initialize((__int64)v14, (__int64)v51, (__int64)v48, v55, v4, v7, &v43, v9);
    v8 = v14;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x41u, 0LL);
  }
  v42 = v8;
  if ( (v5 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x7B9u, 0LL);
LABEL_54:
    std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v42);
    return v5;
  }
  v15 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
  v16 = (_QWORD *)((char *)this + 4472);
  v5 = 0;
  v52 = 0LL;
  if ( !*((_BYTE *)this + 4493) )
    v16 = 0LL;
  v17 = *((_DWORD *)this + 6);
  if ( *((_BYTE *)this + 4492) )
  {
    v17 &= ~1u;
    *((_BYTE *)this + 4492) = 0;
  }
  v18 = *((_BYTE *)this + 4490) == 0;
  v54 = 0LL;
  if ( !v18 || !CCpuClip::HasClip(*((CCpuClip **)this + 2)) )
  {
    v19 = *((_QWORD *)&v52 + 1);
    goto LABEL_16;
  }
  v43 = 0LL;
  v37 = CCpuClip::ResolveClip(v36, &v43, 0LL);
  v5 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x7D1u, 0LL);
    goto LABEL_53;
  }
  v38 = v43;
  v39 = *(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v43 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
  v40 = v39(v38, 0LL, &v54);
  v5 = v40;
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x7D2u, 0LL);
LABEL_53:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
    goto LABEL_54;
  }
  v19 = v54;
  v5 = 0;
LABEL_16:
  v20 = CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Alloc();
  v21 = v20;
  if ( v20 )
  {
    *(_DWORD *)(v20 + 8) = 0;
    *(_QWORD *)v20 = &CDrawListEntry::`vftable';
    v22 = v42;
    v42 = 0LL;
    *(_QWORD *)(v20 + 16) = v22;
    *(_QWORD *)(v20 + 24) = v15;
    if ( v15 )
      (**v15)(v15);
    *(_QWORD *)(v21 + 32) = v19;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    *(_QWORD *)(v21 + 40) = v56;
    *(_DWORD *)(v21 + 48) = 1065353216;
    *(_DWORD *)(v21 + 52) = 1065353216;
    *(_DWORD *)(v21 + 56) = 1065353216;
    *(_DWORD *)(v21 + 60) = 1065353216;
    p_r = (_OWORD *)&v57->r;
    *(_DWORD *)(v21 + 64) = v17;
    if ( p_r )
      *(_OWORD *)(v21 + 48) = *p_r;
    if ( v16 )
    {
      *(_QWORD *)(v21 + 68) = *v16;
      *(_DWORD *)(v21 + 64) = v17 | 0x100;
    }
    (**(void (__fastcall ***)(__int64))v21)(v21);
    v43 = (struct CShape *)v21;
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::push_back(
      (char *)this + 112,
      &v43);
    v24 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( v42 )
      (**(void (__fastcall ***)(char *, __int64))v42)(v42, 1LL);
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
    (const char *)0x8007000ELL,
    Src);
  v5 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x7D7u, 0LL);
  v35 = v54;
  if ( v54 )
  {
    v54 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  if ( v42 )
    (**(void (__fastcall ***)(char *, __int64))v42)(v42, 1LL);
  return v5;
}
