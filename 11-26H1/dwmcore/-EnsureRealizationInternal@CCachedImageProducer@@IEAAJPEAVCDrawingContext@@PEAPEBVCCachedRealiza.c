/*
 * XREFs of ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x18009B9B4
 * Callers:
 *     ?GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18009B10C (-GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C5500 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18009C114 (-clear_region@-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x18009C208 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ??$emplace_back@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x18009C238 (--$emplace_back@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCach.c)
 *     ??R?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x18009C290 (--R-$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedImageProducer::EnsureRealizationInternal(
        CCachedImageProducer *this,
        struct CDrawingContext *a2,
        const struct CCachedImageProducer::CCachedRealization **a3)
{
  __int64 v6; // rax
  _QWORD *v7; // r15
  const struct CCachedImageProducer::CCachedRealization **v8; // rbx
  __int64 v9; // rdi
  const struct CCachedImageProducer::CCachedRealization *v10; // rsi
  __int64 v11; // rax
  int v12; // ecx
  __int64 *v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // ebx
  const struct CCachedImageProducer::CCachedRealization *v19; // rdx
  const struct CCachedImageProducer::CCachedRealization *v20; // rax
  const struct CCachedImageProducer::CCachedRealization **v22; // [rsp+20h] [rbp-30h] BYREF
  const struct CCachedImageProducer::CCachedRealization *v23; // [rsp+28h] [rbp-28h] BYREF
  char v24; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  const struct CCachedImageProducer::CCachedRealization *v26; // [rsp+90h] [rbp+40h] BYREF
  const struct CCachedImageProducer::CCachedRealization *v27; // [rsp+98h] [rbp+48h] BYREF

  LOBYTE(v26) = *((_BYTE *)g_pComposition + 6458);
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
  v7 = (_QWORD *)((char *)this + 32);
  v8 = (const struct CCachedImageProducer::CCachedRealization **)*((_QWORD *)this + 4);
  v9 = v6;
  while ( v8 != *((const struct CCachedImageProducer::CCachedRealization ***)this + 5) )
  {
    v10 = *v8;
    if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)*v8 + 24LL))(*(_QWORD *)*v8) < 0 )
      goto LABEL_13;
    v11 = (*(__int64 (__fastcall **)(_QWORD, const struct CCachedImageProducer::CCachedRealization ***))(**(_QWORD **)v10 + 88LL))(
            *(_QWORD *)v10,
            &v22);
    if ( *(_DWORD *)v11 == *(_DWORD *)v9
      && *(_DWORD *)(v11 + 4) == *(_DWORD *)(v9 + 4)
      && ((v12 = *(_DWORD *)(v11 + 8), v12 == -1) || v12 == *(_DWORD *)(v9 + 8) || *(_DWORD *)(v9 + 8) == -3)
      && (*(float *)(v11 + 16) != 0.0) == (*(float *)(v9 + 16) != 0.0)
      && (!*(_BYTE *)(v11 + 20) || *(_BYTE *)(v9 + 20))
      && ((v13 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 144LL))(*(_QWORD *)v10),
           v14 = *v13,
           (_BYTE)v26)
        ? (v15 = (*(__int64 (__fastcall **)(__int64 *))(v14 + 160))(v13))
        : (v15 = (*(__int64 (__fastcall **)(__int64 *))(v14 + 176))(v13)),
          !v15) )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          *(float *)(v9 + 16)
                        - *(float *)((*(__int64 (__fastcall **)(_QWORD, const struct CCachedImageProducer::CCachedRealization ***))(**(_QWORD **)v10 + 88LL))(
                                       *(_QWORD *)v10,
                                       &v22)
                                   + 16)) & _xmm) <= 0.0000011920929 )
      {
        *a3 = v10;
        return 0LL;
      }
LABEL_13:
      v16 = ((__int64)v8 - *v7) >> 3;
      detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::clear_region(
        (char *)this + 32,
        v16,
        1LL);
      v8 = (const struct CCachedImageProducer::CCachedRealization **)(*v7 + 8 * v16);
    }
    else
    {
      ++v8;
    }
  }
  v24 = 1;
  v22 = &v27;
  v17 = *(_QWORD *)this;
  v27 = 0LL;
  v23 = 0LL;
  v18 = (*(__int64 (__fastcall **)(CCachedImageProducer *, struct CDrawingContext *, const struct CCachedImageProducer::CCachedRealization **))(v17 + 96))(
          this,
          a2,
          &v23);
  if ( v24 )
  {
    v19 = *v22;
    *v22 = v23;
    if ( v19 )
      std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
  }
  if ( v18 >= 0 )
  {
    v20 = v27;
    *a3 = v27;
    v26 = v20;
    v27 = 0LL;
    detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::emplace_back<std::unique_ptr<CCachedImageProducer::CCachedRealization>>(
      (char *)this + 32,
      &v26);
    if ( v27 )
      std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x81,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cachedimageproducer.cpp",
    (const char *)(unsigned int)v18);
  std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v27);
  return (unsigned int)v18;
}
