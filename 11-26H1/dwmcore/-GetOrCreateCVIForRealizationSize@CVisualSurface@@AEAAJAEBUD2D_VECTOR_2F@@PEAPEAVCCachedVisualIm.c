/*
 * XREFs of ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800D3F4C
 * Callers:
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x1800D3DB0 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 * Callees:
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x18009A2A8 (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@-$vector_.c)
 *     ?erase@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USourceCVI@CVisualSurface@@@2@V?$basic_iterator@$$CBUSourceCVI@CVisualSurface@@@2@@Z @ 0x18009AA54 (-erase@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurface@@$03$.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180203C2C (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualSurface::GetOrCreateCVIForRealizationSize(
        CVisualSurface *this,
        const struct D2D_VECTOR_2F *a2,
        struct CCachedVisualImage **a3)
{
  __int64 v3; // rdi
  float v4; // xmm0_4
  int v7; // eax
  float y; // xmm0_4
  float v9; // xmm0_4
  unsigned int v10; // r13d
  int **v11; // rbx
  int v12; // r14d
  int *v13; // rsi
  _QWORD *v14; // r13
  struct CComposition *v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v19; // r14
  unsigned __int64 CurrentFrameId; // rax
  struct CCachedVisualImage *v21; // rbx
  __int64 v22; // rax
  __int64 v23[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+40h]
  struct CCachedVisualImage *v25; // [rsp+80h] [rbp+48h] BYREF
  __int64 v26; // [rsp+88h] [rbp+50h] BYREF
  struct CCachedVisualImage **v27; // [rsp+90h] [rbp+58h]
  int **v28; // [rsp+98h] [rbp+60h] BYREF

  v27 = a3;
  v3 = 0LL;
  v4 = a2->x + 0.5;
  v26 = 0LL;
  v7 = (int)floorf_0(v4);
  y = a2->y;
  LODWORD(v25) = v7;
  v9 = floorf_0(y + 0.5);
  v10 = (unsigned int)v25;
  v11 = (int **)*((_QWORD *)this + 11);
  v12 = (int)v9;
  LODWORD(v26) = (int)v9;
  while ( v11 != *((int ***)this + 12) )
  {
    v13 = *v11;
    (*(void (__fastcall **)(int *, struct CCachedVisualImage **))(*((_QWORD *)*v11 + 10) + 32LL))(*v11 + 20, &v25);
    if ( (struct CCachedVisualImage *)__PAIR64__(v12, v10) == v25 )
    {
      v19 = v3;
      v3 = (__int64)v13;
      if ( v13 )
        (*(void (__fastcall **)(int *))(*(_QWORD *)v13 + 8LL))(v13);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      CurrentFrameId = GetCurrentFrameId();
      v12 = v26;
      v11[1] = (int *)CurrentFrameId;
LABEL_17:
      v11 += 2;
    }
    else
    {
      if ( v13[2] > 1 || GetCurrentFrameId() - (unsigned __int64)v11[1] <= 0xA )
        goto LABEL_17;
      v28 = v11;
      v11 = (int **)*detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::erase(
                       (_QWORD *)this + 11,
                       v23,
                       &v28);
    }
  }
  v14 = v27;
  v26 = v3;
  if ( v3 )
  {
LABEL_19:
    *v14 = v3;
    return 0LL;
  }
  v15 = (struct CComposition *)*((_QWORD *)this + 3);
  v25 = 0LL;
  v16 = CCachedVisualImage::CreateForVisualSurface(v15, &v25);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v21 = v25;
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=(&v26, (__int64)v25);
    v25 = v21;
    v22 = GetCurrentFrameId();
    detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::emplace_back<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,unsigned __int64>(
      (_QWORD *)this + 11,
      (__int64 *)&v25,
      v22);
    v3 = v26;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D6,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)(unsigned int)v16);
  if ( v25 )
    (*(void (__fastcall **)(struct CCachedVisualImage *))(*(_QWORD *)v25 + 16LL))(v25);
  return v17;
}
