/*
 * XREFs of _BmlGetPathModeListForPathTargetModes @ 0x1402E029C
 * Callers:
 *     _BmlGetPathModeListForPath @ 0x1402DFF2C (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x14003B5AC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x140045C54 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x14004D590 (-GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140053EAC (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x14026A494 (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 *     BmlPinPathContentRotation @ 0x1402D76DC (BmlPinPathContentRotation.c)
 *     BmlPinPathContentScaling @ 0x1402D9D38 (BmlPinPathContentScaling.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1402DB240 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1402DD530 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1402E0800 (BmlUnPinPartialPathModalityOnPath.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1402E12D0 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1402E269C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 *     ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1403FB510 (-AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 */

__int64 __fastcall BmlGetPathModeListForPathTargetModes(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        CCD_MODE_RESULT_SET *a5)
{
  int refreshed; // r14d
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v10; // rdi
  __int64 result; // rax
  struct DMMVIDPNTARGETMODESET *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rsi
  __int64 v19; // rax
  _QWORD *v20; // r15
  __int64 v21; // r15
  unsigned __int16 v22; // si
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rsi
  unsigned __int16 v27; // r12
  int v28; // esi
  struct DMMVIDPNTARGETMODE *NextMode; // rax
  int v30; // eax
  char v31; // si
  int v32; // ecx
  DMMVIDPNSOURCEMODE *v33; // r14
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rax
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  int v40; // eax
  D3DDDI_RATIONAL v41; // r8
  __int64 i; // r12
  unsigned __int64 v43; // [rsp+20h] [rbp-A1h] BYREF
  __int64 v44; // [rsp+28h] [rbp-99h]
  __int64 v45; // [rsp+30h] [rbp-91h]
  VIDPN_MGR *v46; // [rsp+38h] [rbp-89h]
  DMMVIDPNSOURCEMODE *v47; // [rsp+40h] [rbp-81h]
  struct _D3DDDI_RATIONAL PresentationVSync; // [rsp+48h] [rbp-79h] BYREF
  struct DMMVIDPNTARGETMODESET *v49; // [rsp+50h] [rbp-71h] BYREF
  struct DMMVIDPNTARGETMODESET *v50; // [rsp+58h] [rbp-69h] BYREF
  _OWORD v51[11]; // [rsp+60h] [rbp-61h] BYREF
  void *v54; // [rsp+138h] [rbp+77h] BYREF

  refreshed = 0;
  v7 = a3;
  v46 = *(VIDPN_MGR **)(a2 + 48);
  v8 = 120LL * a3;
  v45 = v8;
  if ( !v46 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6579;
  }
  v50 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 88));
  v10 = (__int64)v50;
  if ( !v50 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192328LL;
    WdLogGlobalForLineNumber = 6584;
    return result;
  }
  v12 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 96));
  v49 = v12;
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
  v15[3] = v12;
  v15[4] = *(unsigned __int16 *)(v8 + a1 + 68);
  v17 = *(unsigned __int16 *)(v8 + a1 + 70);
  v15[5] = v17;
  WdLogGlobalForLineNumber = 6590;
  if ( !v12 )
  {
    refreshed = -1071774967;
LABEL_52:
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v49, 0LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v50, 0LL);
    return (unsigned int)refreshed;
  }
  v18 = (_QWORD *)((char *)v12 + 48);
  if ( (_QWORD *)*v18 == v18 )
    goto LABEL_52;
  if ( !*(_QWORD *)(v10 + 144) )
  {
    WdLogSingleEntry2(1LL, v10, v7);
    WdLogGlobalForLineNumber = 6606;
    refreshed = -1071774968;
    goto LABEL_52;
  }
  if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
  {
    WdLogNewEntry5_WdTrace(v17, v16);
    WdLogGlobalForLineNumber = 6617;
  }
  v47 = *(DMMVIDPNSOURCEMODE **)(v10 + 144);
  v19 = *((_QWORD *)v12 + 18);
  v43 = 0LL;
  v54 = 0LL;
  v20 = (_QWORD *)*v18;
  v44 = v19;
  if ( v20 == v18 )
    v21 = 0LL;
  else
    v21 = (__int64)(v20 - 1);
  v22 = a3;
  while ( 1 )
  {
    if ( !v21 )
      goto LABEL_51;
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
    v23[3] = *(_DWORD *)(v21 + 24) + ((*(_DWORD *)(v21 + 120) & 0x1F8u) << 13);
    v23[4] = *(unsigned int *)(v21 + 84);
    v24 = *(unsigned int *)(v21 + 88);
    v23[5] = v24;
    v23[6] = *(unsigned int *)(v21 + 92);
    v23[7] = *(unsigned int *)(v21 + 96);
    v25 = *(_QWORD *)(v8 + a1 + 16);
    WdLogGlobalForLineNumber = 6631;
    ++*(_DWORD *)(v45 + a1 + 100);
    if ( v44 && v44 != v21 || !BmlDoesTargetModeObeyConstraint(a1, v22, v21) )
    {
      WdLogNewEntry5_WdTrace(v24, v23);
      WdLogGlobalForLineNumber = 6640;
      goto LABEL_28;
    }
    ++*(_DWORD *)(v45 + a1 + 104);
    v26 = *(unsigned int *)(v21 + 24);
    if ( v44 )
    {
      refreshed = 0;
    }
    else
    {
      refreshed = VIDPN_MGR::PinVidPnTargetMode(v46, v12, v26, 1);
      if ( refreshed < 0 )
      {
        refreshed = 0;
LABEL_24:
        v27 = a3;
        goto LABEL_25;
      }
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v24, v23) + 24) = v26;
    v30 = *(_DWORD *)(v25 + 8);
    WdLogGlobalForLineNumber = 6659;
    if ( (v30 & 0x1000000) != 0 )
    {
      v31 = 1;
      v32 = *(_DWORD *)(v25 + 240);
      *(_QWORD *)(v21 + 152) = *(_QWORD *)(v25 + 224);
      *(_DWORD *)(v21 + 160) = v32;
    }
    else
    {
      v31 = 0;
    }
    v27 = a3;
    if ( (int)BmlPinPathContentScaling(a1, a2, a3) >= 0 && (int)BmlPinPathContentRotation(a1, a2, a3) >= 0 )
    {
      memset(v51, 0, 0x70uLL);
      v33 = v47;
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v47);
      v35 = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
      v36 = *(_OWORD *)&GraphicsInfo->Stride;
      *((_QWORD *)&v51[5] + 1) = *(_QWORD *)(v21 + 152);
      v37 = *(_QWORD *)(v21 + 144);
      *(_OWORD *)((char *)&v51[3] + 8) = v35;
      *(_QWORD *)&v51[6] = v37;
      v38 = *(_OWORD *)(v21 + 72);
      LODWORD(v37) = *(_DWORD *)(v21 + 128);
      *(_OWORD *)((char *)&v51[4] + 8) = v36;
      HIDWORD(v51[6]) = v37;
      v39 = *(_OWORD *)(v21 + 88);
      v40 = *((_DWORD *)v33 + 18);
      v51[0] = v38;
      v51[1] = v39;
      *(_QWORD *)&v51[3] = *(_QWORD *)(v21 + 120);
      v51[2] = *(_OWORD *)(v21 + 104);
      if ( v40 == 3 || (BYTE8(v51[6]) = 0, v40 == 4) )
        BYTE8(v51[6]) = 1;
      refreshed = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v51);
      if ( refreshed < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 6687;
        goto LABEL_51;
      }
      if ( !v31 && DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v21) )
      {
        if ( !v43 )
        {
          refreshed = BmlBuildVirtualRefreshRateListFromTargetModeSet(v12, &v43, &v54);
          if ( refreshed < 0 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 6708;
LABEL_51:
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v54);
            goto LABEL_52;
          }
        }
        if ( v54 )
        {
          PresentationVSync = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v21 + 72));
          for ( i = 0LL; (unsigned int)i < v43; i = (unsigned int)(i + 1) )
          {
            if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
                    &PresentationVSync,
                    (const struct _D3DDDI_RATIONAL *)(*(_QWORD *)&v41 + 8 * i),
                    0)
              && DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                   (DMMVIDPNTARGETMODE *)v21,
                   (const struct _D3DDDI_RATIONAL *)v54 + i,
                   1u) )
            {
              *((_QWORD *)&v51[5] + 1) = *((_QWORD *)v54 + i);
              refreshed = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v51);
              if ( refreshed < 0 )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 6727;
                goto LABEL_57;
              }
            }
            v41 = (D3DDDI_RATIONAL)v54;
          }
          goto LABEL_24;
        }
      }
    }
LABEL_25:
    v28 = BmlUnPinPartialPathModalityOnPath(a1, a2, v27);
    if ( v28 < 0 )
      break;
    if ( v44 )
      goto LABEL_51;
    v22 = a3;
LABEL_28:
    NextMode = DMMVIDPNTARGETMODESET::GetNextMode(v12, (const struct DMMVIDPNTARGETMODE *const)v21);
    v8 = v45;
    v21 = (__int64)NextMode;
  }
  WdLogSingleEntry3(3LL, a1, v27, a2);
  WdLogGlobalForLineNumber = 6765;
  refreshed = v28;
LABEL_57:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v54);
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v12 + 88));
  ReferenceCounted::Release((ReferenceCounted *)(v10 + 88));
  return (unsigned int)refreshed;
}
