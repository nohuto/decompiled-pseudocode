/*
 * XREFs of ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800F0094
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE2B0 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1800D4F00 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1800D54A8 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x1800D595C (-IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800ED670 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180122D6C (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x180126B70 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x180126C20 (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x1801976C8 (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180199E68 (McTemplateU0xq_EventWriteTransfer.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x1801B589C (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 *     ?ClearDirectFlip@COverlayContext@@IEAAXXZ @ 0x18021E3C4 (-ClearDirectFlip@COverlayContext@@IEAAXXZ.c)
 *     ??1?$unique_ptr@VCDirectFlipInfo@@U?$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ @ 0x18021F2A4 (--1-$unique_ptr@VCDirectFlipInfo@@U-$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@IEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x18023B14C (-EnsureIndependentFlipState@COverlayContext@@IEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::ApplyConfiguration(COverlayContext *this, char a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rdi
  __int128 *v10; // r14
  _QWORD *v11; // r12
  int v12; // r12d
  __int64 v13; // r8
  __int64 v14; // rdx
  void (__fastcall *v15)(__int64, __int64 *); // rax
  __int128 v16; // xmm0
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  _QWORD *v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdi
  char v22; // r13
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  char v25; // r12
  __int64 v26; // rcx
  void (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rax
  CDirectFlipInfo *v31; // rax
  CDirectFlipInfo *v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  BOOL v37; // r15d
  __int64 v38; // r14
  unsigned int i; // r12d
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  int v43; // r13d
  char v44; // al
  __int64 v45; // r9
  char v46; // bl
  __int64 v47; // rbx
  int v48; // eax
  __int64 v49; // rcx
  char v51; // [rsp+40h] [rbp-30h]
  __int64 v52[3]; // [rsp+48h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 19052) && (!*((_BYTE *)this + 19124) || *((_DWORD *)this + 4780) != *((_DWORD *)this + 4762)) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL) + 48LL))(*((_QWORD *)this + 7) + 8LL);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 256LL))(*((_QWORD *)this + 7));
    if ( *(_BYTE *)(v5 + 280) )
      *(_BYTE *)(v5 + 281) = 1;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL) + 32LL))(*((_QWORD *)this + 7) + 8LL);
  v7 = *((_QWORD *)this + 1586);
  v8 = v6;
  v9 = *((_QWORD *)this + 1587);
  v10 = (__int128 *)(v7 + 244);
  while ( v7 != v9 )
  {
    v11 = (_QWORD *)((char *)v10 - 228);
    if ( !TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty(v10) )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 216LL))(*v11);
    if ( *((_DWORD *)v10 + 8) )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 320LL))(*v11);
      if ( *((_DWORD *)v10 + 8) != v12 )
      {
        v13 = *((_QWORD *)this + 7);
        v14 = 0LL;
        v15 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 304LL);
        do
        {
          *((float *)v52 + v14) = (float)*((int *)v10 + v14 + 4);
          ++v14;
        }
        while ( v14 < 4 );
        v15(v13, v52);
        v16 = *v10;
        *((_DWORD *)v10 + 8) = v12;
        v10[1] = v16;
      }
    }
    v17 = *((unsigned int *)v10 - 34);
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD, __int64))(**(_QWORD **)((char *)v10 - 228) + 224LL))(
      *(_QWORD *)((char *)v10 - 228),
      v17,
      1LL,
      (__int64)v10 + 36,
      *((_DWORD *)v10 - 34),
      v8);
    if ( !*((_BYTE *)v10 + 119)
      && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)((char *)v10 - 228) + 352LL))(*(_QWORD *)((char *)v10 - 228))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)((char *)v10 - 228) + 360LL))(*(_QWORD *)((char *)v10 - 228))) )
    {
      v18 = *(_QWORD **)(a3 + 8);
      v19 = (_QWORD *)((char *)v10 - 236);
      if ( v18 == *(_QWORD **)(a3 + 16) )
      {
        std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(a3, v18, v19);
      }
      else
      {
        *v18 = *v19;
        *(_QWORD *)(a3 + 8) += 8LL;
      }
    }
    v7 += 392LL;
    v10 = (__int128 *)((char *)v10 + 392);
  }
  v20 = *((_QWORD *)this + 2392);
  v21 = 0LL;
  v22 = 0;
  if ( v20 && *(_BYTE *)(v20 + 737) )
  {
    v23 = *(_QWORD **)(a3 + 8);
    v52[0] = *((_QWORD *)this + 2392);
    if ( v23 == *(_QWORD **)(a3 + 16) )
    {
      std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(a3, v23, v52);
    }
    else
    {
      *v23 = v20;
      *(_QWORD *)(a3 + 8) += 8LL;
    }
  }
  if ( *((int *)this + 4806) <= 0 )
  {
    v25 = 0;
    goto LABEL_62;
  }
  v24 = *((_QWORD *)this + 2411);
  v22 = 1;
  if ( v24
    && *(_QWORD *)(v24 + 8) == *((_QWORD *)this + 2398)
    && *(_QWORD *)(v24 + 16) == *((_QWORD *)this + 2399)
    && *(_QWORD *)(v24 + 24) == *((_QWORD *)this + 2400)
    && (*(_DWORD *)(v24 + 52) == 1) == (*((_DWORD *)this + 4807) == 1) )
  {
    v25 = 1;
  }
  else
  {
    v25 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2399) + 136LL))(*((_QWORD *)this + 2399)) )
    {
LABEL_60:
      v22 = 0;
      goto LABEL_62;
    }
  }
  if ( *((_QWORD *)this + 1587) != *((_QWORD *)this + 1586)
    || *((_DWORD *)this + 4782)
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2399) + 176LL))(*((_QWORD *)this + 2399)) )
  {
    goto LABEL_60;
  }
  v26 = *((_QWORD *)this + 2399);
  v52[0] = 0LL;
  v27 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
  if ( v27 )
  {
    if ( v52[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52[0] + 16LL))(v52[0]);
    (**v27)(v27, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, v52);
  }
  if ( v52[0] && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v52[0] + 24LL))(v52[0]) )
  {
    v22 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v28 = 0LL;
LABEL_58:
      McTemplateU0xq_EventWriteTransfer(
        *(unsigned int *)(*((_QWORD *)this + 2399) + 40LL),
        &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL,
        *(unsigned int *)(*((_QWORD *)this + 2399) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 2399) + 40LL)) << 32),
        v28);
      goto LABEL_59;
    }
    goto LABEL_59;
  }
  if ( *((int *)this + 4807) < 3 )
    goto LABEL_52;
  if ( v25 && !(unsigned __int8)CDirectFlipInfo::IsIndependentFlip(*((CDirectFlipInfo **)this + 2411)) )
    goto LABEL_53;
  if ( !*((_BYTE *)this + 19354) )
  {
LABEL_52:
    if ( !v25 )
      goto LABEL_59;
LABEL_53:
    if ( CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 2411)) )
      goto LABEL_59;
    v29 = *((_DWORD *)this + 4807);
    if ( v29 < 3 )
      goto LABEL_59;
    if ( v29 == 4 )
      goto LABEL_59;
    v22 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
      goto LABEL_59;
    v28 = 1LL;
    goto LABEL_58;
  }
  v22 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
  {
    v28 = 2LL;
    goto LABEL_58;
  }
LABEL_59:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v52);
LABEL_62:
  v30 = *((_QWORD *)this + 2411);
  if ( v30 && (*(_DWORD *)(v30 + 48) != 3 || !a2 && (!v22 || !v25)) )
    COverlayContext::ClearDirectFlip(this);
  if ( !*((_QWORD *)this + 2411) && v22 )
  {
    v31 = (CDirectFlipInfo *)operator new(0x70uLL);
    if ( v31 )
      v32 = CDirectFlipInfo::CDirectFlipInfo(v31, (COverlayContext *)((char *)this + 19176));
    else
      v32 = 0LL;
    *((_DWORD *)v32 + 12) = 2;
    *((_QWORD *)this + 2411) = v32;
    v52[0] = 0LL;
    std::unique_ptr<CDirectFlipInfo>::~unique_ptr<CDirectFlipInfo>(v52);
    if ( *(int *)(*((_QWORD *)this + 2411) + 52LL) >= 3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL) + 48LL))(*((_QWORD *)this + 7) + 8LL);
    LOBYTE(v33) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 2411) + 16LL) + 464LL))(
      *(_QWORD *)(*((_QWORD *)this + 2411) + 16LL),
      1LL,
      v33);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v34 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL) + 24LL))(
              *((_QWORD *)this + 7) + 8LL,
              v52);
      McTemplateU0xq_EventWriteTransfer(
        v35,
        &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT,
        *(unsigned int *)(v34 + 8),
        1LL);
    }
  }
  v36 = *((_QWORD *)this + 2411);
  if ( v36 )
  {
    if ( v22 )
    {
      v48 = *((_DWORD *)this + 4807);
      *(_DWORD *)(v36 + 52) = v48;
      v49 = v36 + 32;
      if ( v48 < 3 )
        std::shared_ptr<CRegion>::reset(v49);
      else
        std::shared_ptr<CRegion>::operator=(v49, (char *)this + 19208);
    }
    if ( *(int *)(*((_QWORD *)this + 2411) + 52LL) >= 3 && !a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL) + 48LL))(*((_QWORD *)this + 7) + 8LL);
    if ( (int)CDirectFlipInfo::Activate(*((CDirectFlipInfo **)this + 2411)) < 0 )
    {
      COverlayContext::ClearDirectFlip(this);
    }
    else if ( CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 2411))
           && (unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL) + 48LL))(*((_QWORD *)this + 7) + 8LL);
    }
  }
  else
  {
    v37 = 1;
    v38 = 0x7D6343EB1A1F58D1LL * ((__int64)(*((_QWORD *)this + 1587) - *((_QWORD *)this + 1586)) >> 3);
    if ( !*((_BYTE *)this + 19052) )
      v37 = *(_DWORD *)this > 1u;
    for ( i = 0; i < (unsigned int)v38; v21 += 392LL )
    {
      v40 = *(_QWORD *)(v21 + *((_QWORD *)this + 1586) + 16);
      v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 368LL))(v40);
      v42 = *((_QWORD *)this + 1586);
      v43 = v41;
      v44 = 0;
      v51 = 0;
      v45 = v42 + v21;
      v46 = *(_BYTE *)(v42 + v21 + 361);
      if ( *(_DWORD *)(v42 + v21 + 372) != i + v37 || *(_BYTE *)(v45 + 363) && (v43 < 3 || !*(_BYTE *)(v45 + 364)) )
      {
        v44 = 1;
        v51 = 1;
      }
      if ( v46
        && (v44
         || v43 == -1
         || !*((_BYTE *)this + 19355)
         || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + v42 + 16) + 120LL))(*(_QWORD *)(v21 + v42 + 16))
         || CCommonRegistryData::m_fDisableIndependentFlip) )
      {
        v46 = 0;
      }
      COverlayContext::EnsureIndependentFlipState(
        this,
        (struct COverlayContext::OverlayPlaneInfo *)(v21 + *((_QWORD *)this + 1586)),
        v46);
      if ( v51
        || (!v46 || v43 < 3)
        && (v47 = *((_QWORD *)this + 1586),
            *(_DWORD *)(v21 + v47 + 380) != (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + v47 + 16)
                                                                                   + 320LL))(*(_QWORD *)(v21 + v47 + 16))) )
      {
        *(_BYTE *)(v21 + *((_QWORD *)this + 1586) + 366) = 1;
      }
      ++i;
    }
  }
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 19176));
}
