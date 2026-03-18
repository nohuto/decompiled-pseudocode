/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2DA8
 * Callers:
 *     DxgkSetDisplayMode @ 0x1402D1030 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x140008FB0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x140038DB4 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x140045C54 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x140056880 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1400585B0 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0E@Z @ 0x14005E620 (-IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0E@Z.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140064DE0 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline @ 0x140075B08 (Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkNotifyDisplayChange @ 0x1402051B0 (DxgkNotifyDisplayChange.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1402D3F90 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     DxgkStatusChangeNotify @ 0x1402D4620 (DxgkStatusChangeNotify.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D4AF8 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4CC4 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1402DD148 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402DED8C (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x140360580 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     DxgkQueryDmmInterface @ 0x140365A0C (DxgkQueryDmmInterface.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AA90 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x1403DD110 (-CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PR.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1403F47D8 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1403F5984 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 */

__int64 __fastcall DXGDEVICE::SetDisplayMode(
        DXGDEVICE *this,
        const struct DXGALLOCATION *a2,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a3,
        enum _D3DDDI_ROTATION a4,
        struct _D3DKMT_SETDISPLAYMODE_FLAGS a5,
        unsigned int *a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v9; // r14
  __int64 v10; // r15
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v12; // xmm0
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rcx
  _QWORD *v19; // rax
  D3DDDIFORMAT Format; // eax
  int v21; // r8d
  struct DXGPROCESS *Current; // rdi
  __int64 v23; // r8
  __int64 v24; // rax
  const struct _DXGK_DISPLAYMODE_INFO *v25; // rsi
  int v26; // eax
  __int64 v27; // rbx
  unsigned int updated; // eax
  unsigned int v29; // r8d
  int DmmInterface; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v31; // r9d
  int v32; // eax
  struct DXGGLOBAL *Global; // rax
  int v34; // r8d
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v35; // ebx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rbx
  unsigned __int8 v40; // [rsp+20h] [rbp-E0h]
  __int64 v41; // [rsp+20h] [rbp-E0h]
  struct _DXGK_DISPLAYMODE_INFO *v42; // [rsp+28h] [rbp-D8h]
  __int64 v43; // [rsp+30h] [rbp-D0h]
  __int64 v44; // [rsp+30h] [rbp-D0h]
  unsigned int *v45; // [rsp+40h] [rbp-C0h]
  _BYTE v46[4]; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v47; // [rsp+54h] [rbp-ACh]
  struct _DXGDMM_INTERFACE *v48; // [rsp+58h] [rbp-A8h]
  struct _DXGKARG_DESCRIBEALLOCATION v49; // [rsp+60h] [rbp-A0h] BYREF
  enum _D3DDDI_ROTATION v50; // [rsp+90h] [rbp-70h]
  struct D3DKMDT_HVIDPN__ *v51; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v53; // [rsp+A8h] [rbp-58h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-40h]
  __int128 v57; // [rsp+C8h] [rbp-38h]
  int v58; // [rsp+D8h] [rbp-28h]
  __int128 v59; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v60; // [rsp+F0h] [rbp-10h] BYREF
  __m256i v61; // [rsp+100h] [rbp+0h] BYREF
  __int128 v62; // [rsp+120h] [rbp+20h]
  _DWORD v63[68]; // [rsp+130h] [rbp+30h] BYREF
  __int64 retaddr; // [rsp+298h] [rbp+198h]

  v54 = a7;
  v52 = retaddr;
  v50 = a4;
  v47 = a3;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<6,8>::NotifyStatusChange(&v52, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7076;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderAdapter()->IsCoreResourceExclusiveOwner()",
      7076LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *((_QWORD *)this + 237);
  v10 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !v9 || !*(_QWORD *)(v9 + 3160) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 237)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7084;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter != NULL) && pDisplayAdapter->IsDisplayAdapter() && pDisplayAdapter->IsCoreResourceExclusiveOwner()",
      7084LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v9 + 3160), v10);
  v59 = *(_OWORD *)DisplayModeInfo;
  v60 = *((_OWORD *)DisplayModeInfo + 1);
  v61 = *(__m256i *)((_BYTE *)DisplayModeInfo + 1);
  v12 = *((_OWORD *)DisplayModeInfo + 4);
  v13 = *((_QWORD *)a2 + 6);
  memset(&v49.Width, 0, 32);
  v49.Flags.Value = 1;
  v62 = v12;
  v49.Rotation = -1;
  v14 = *(void **)(v13 + 16);
  v15 = *((_QWORD *)this + 2);
  v49.hAllocation = v14;
  v16 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v15 + 16) + 3168LL), &v49);
  v17 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry5(2LL, v16, this, *((unsigned int *)a2 + 4), a2, (unsigned int)v10);
    v43 = *((unsigned int *)a2 + 4);
    WdLogGlobalForLineNumber = 7099;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x 0x%I64x",
      v17,
      (__int64)this,
      v43,
      (__int64)a2,
      (unsigned int)v10);
    goto LABEL_80;
  }
  if ( *(_QWORD *)&v49.Width != (_QWORD)v59 )
  {
    WdLogSingleEntry5(3LL, a2, v49.Width, v49.Height, (unsigned int)v59, DWORD1(v59));
    WdLogGlobalForLineNumber = 7116;
    LODWORD(v17) = -1071775739;
LABEL_80:
    if ( (int)v17 >= 0 )
    {
      v55 = 1LL;
      v56 = 0LL;
      v57 = 0LL;
      DxgkStatusChangeNotify(&v55);
    }
    goto LABEL_82;
  }
  if ( v49.Rotation != -1 && v49.Rotation != HIDWORD(v60) )
  {
    WdLogSingleEntry3(3LL, a2, v49.Rotation, SHIDWORD(v60));
    WdLogGlobalForLineNumber = 7126;
LABEL_13:
    LODWORD(v17) = -1071775739;
    goto LABEL_82;
  }
  v18 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v18) = ((unsigned __int32)v61.m256i_i32[2] >> 4) ^ v18;
  if ( (v18 & 1) == 0 && v49.PrivateDriverFormatAttribute != v61.m256i_i32[5] )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v49.Height);
    LODWORD(v17) = -1071774891;
    v19[3] = a2;
    v19[4] = v49.PrivateDriverFormatAttribute;
    v19[5] = v61.m256i_u32[5];
    *a6 = v49.PrivateDriverFormatAttribute;
    WdLogGlobalForLineNumber = 7138;
    goto LABEL_82;
  }
  *(__int64 *)((char *)&v61.m256i_i64[1] + 4) = (__int64)v49.MultisampleMethod;
  Format = v49.Format;
  DWORD2(v59) = v49.Format;
  if ( !*(_QWORD *)(v9 + 3168) )
  {
    if ( v49.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    DWORD2(v59) = Format;
  }
  if ( !v49.RefreshRate.Denominator )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7159;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The miniport driver returned invalid refresh rate with denominator being 0; numerator is 0x%I64x",
      v49.RefreshRate.Numerator,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v17) = -1073741811;
    goto LABEL_82;
  }
  if ( v49.RefreshRate.Numerator == 64 && v49.RefreshRate.Denominator == 1 && (_QWORD)v60 == 0xFFFFFFFEFFFFFFFEuLL )
  {
    v49.RefreshRate.Numerator = -2;
    v49.RefreshRate.Denominator = -2;
  }
  if ( *(_BYTE *)&a5 & 1 | ((*(_DWORD *)(*((_QWORD *)this + 5) + 408LL) & 4) != 0) )
  {
    if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange((const struct _D3DDDI_RATIONAL *)&v60, &v49.RefreshRate, 0)
      && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
            (const struct _D3DDDI_RATIONAL *)&v61.m256i_u64[3],
            &v49.RefreshRate,
            v21) )
    {
      WdLogSingleEntry5(3LL, a2, v49.RefreshRate.Numerator, v49.RefreshRate.Denominator, (unsigned int)v60, DWORD1(v60));
      WdLogGlobalForLineNumber = 7190;
      goto LABEL_13;
    }
    v49.RefreshRate = (D3DDDI_RATIONAL)v60;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304953) && (*(_BYTE *)&a5 & 1) != 0 )
  {
    if ( Current )
    {
      if ( (*((_DWORD *)Current + 102) & 4) != 0 )
      {
        LOBYTE(v23) = (unsigned int)ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(*(_QWORD *)(v9 + 3160)) != 1;
        if ( !(unsigned __int8)BmlPixelFormatMatchHdrPixelFormat((unsigned int)v49.Format, HIDWORD(v62), v23) )
        {
          WdLogSingleEntry3(3LL, a2, v49.Format, SHIDWORD(v62));
          WdLogGlobalForLineNumber = 7232;
          LODWORD(v17) = -1071775739;
          goto LABEL_82;
        }
      }
    }
  }
  *(D3DDDI_RATIONAL *)&v60 = v49.RefreshRate;
  HIDWORD(v59) = DmmMapVSyncFromRationalToInteger(&v49.RefreshRate, v47, 0LL);
  v24 = *((_QWORD *)a2 + 6);
  DWORD2(v60) = v47;
  v61.m256i_i32[2] = v61.m256i_i32[2] & 0xFFFFFFEF | (*(_DWORD *)(v24 + 4) >> 8) & 0x10;
  v25 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v9 + 3160), v10);
  if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
          *(ADAPTER_DISPLAY **)(v9 + 3160),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF)
    && IsDisplayModeEqual(
         (const struct _D3DKMT_DISPLAYMODE *)v25,
         (const struct _D3DKMT_DISPLAYMODE *)&v59,
         *(_BYTE *)&a5 & 1)
    && !DmmNeedTargetModeWireformatOrColorspaceChange((void *)v9, v10, SDWORD2(v59))
    && ((*(_BYTE *)&a5 & 1) != 0 || *(_QWORD *)((char *)v25 + 44) == *(__int64 *)((char *)&v61.m256i_i64[1] + 4)) )
  {
    if ( !DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v9) )
      DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v10, a2, 0, 1);
    v26 = DmmPowerOnOffTargetsFromSourceIfNecessary((void *const)v9, 0, 0LL);
    if ( v26 < 0 )
    {
      v27 = v26;
      WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 3160), v26);
      v41 = *(_QWORD *)(v9 + 3160);
      WdLogGlobalForLineNumber = 7298;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DmmPowerOnOffTargetsFromSourceIfNecessary failed on hAdapter 0x%I64x (Status = 0x%I64x).",
        v41,
        v27,
        0LL,
        0LL,
        0LL);
    }
    updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                *(ADAPTER_DISPLAY **)(v9 + 3160),
                this,
                v10,
                *((struct DXGADAPTERALLOCATION **)a2 + 6));
    v29 = *(_DWORD *)(v9 + 412);
    LODWORD(v17) = updated;
    v48 = 0LL;
    DxgkLogCodePointPacket(0x3Cu, updated, v29, v10, 0LL);
    goto LABEL_77;
  }
  v48 = 0LL;
  DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)v9);
  v17 = DmmInterface;
  if ( DmmInterface < 0 )
  {
    WdLogSingleEntry5(2LL, DmmInterface, this, *((unsigned int *)a2 + 4), a2, (unsigned int)v10);
    v44 = *((unsigned int *)a2 + 4);
    WdLogGlobalForLineNumber = 7321;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: DxgkQueryDmmInterface failed 0x%I64x 0x%I64x 0x%I64x",
      v17,
      (__int64)this,
      v44,
      (__int64)a2,
      (unsigned int)v10);
    goto LABEL_80;
  }
  v53 = 0LL;
  v51 = 0LL;
  v56 = 0LL;
  v57 = 0uLL;
  v58 = 0;
  LOBYTE(v55) = 0;
  v17 = CreateFunctionalVidPnWithEnabledVidPnSource(
          v48,
          (void *const)v9,
          v10,
          v31,
          v40,
          (struct _DXGK_DISPLAYMODE_INFO *)&v59,
          &v51,
          &v53,
          (unsigned int (*)[16])v45);
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v55,
    (__int64)v51,
    *((_QWORD *)v48 + 8),
    v9);
  switch ( (_DWORD)v17 )
  {
    case 0xC01E0333:
      WdLogSingleEntry5(7LL, -1071774925LL, (unsigned int)v10, (unsigned int)v59, DWORD1(v59), SDWORD2(v59));
      WdLogGlobalForLineNumber = 7359;
      break;
    case 0xC01E035A:
      WdLogSingleEntry5(7LL, (unsigned int)v10, *(_QWORD *)(v9 + 3160), (unsigned int)v59, DWORD1(v59), SDWORD2(v59));
      WdLogGlobalForLineNumber = 7368;
      break;
    case 0xC01E0306:
      WdLogSingleEntry5(
        7LL,
        (unsigned int)v59,
        DWORD1(v59),
        SDWORD2(v59),
        (unsigned int)v60 / DWORD1(v60),
        (unsigned int)v10);
      WdLogGlobalForLineNumber = 7379;
      break;
    default:
      if ( (int)v17 < 0 )
      {
        WdLogSingleEntry5(2LL, v17, (unsigned int)v10, (unsigned int)v59, DWORD1(v59), SDWORD2(v59));
        WdLogGlobalForLineNumber = 7387;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed to create functional VidPN based on the active VidPN with source 0x%I64x enabled with "
                    "%I64d x %I64d x %I64d.",
          v17,
          (unsigned int)v10,
          (unsigned int)v59,
          DWORD1(v59),
          SDWORD2(v59));
        if ( (_BYTE)v55 )
          ((void (__fastcall *)(_QWORD, __int64))v57)(*((_QWORD *)&v57 + 1), v56);
        goto LABEL_80;
      }
      if ( !DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v9) )
        DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v10, a2, 0, 1);
      memset(v63, 0, 0x104uLL);
      v63[8] = 1 << v10;
      v46[0] = 0;
      v32 = DmmSetTimingsOnAdapter(v9, v56, 0LL, 2LL, v63, v46, 0LL, 0LL);
      v17 = v32;
      if ( v32 < 0 )
      {
        WdLogSingleEntry5(2LL, v32, *(_QWORD *)(v9 + 3160), (unsigned int)v10, a2, this);
        v42 = *(struct _DXGK_DISPLAYMODE_INFO **)(v9 + 3160);
        WdLogGlobalForLineNumber = 7455;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"NTSTATUS=0x%I64x DXGADAPTER 0x%I64x DXGADAPTER::CommitVidPn failed VidPnSourceId 0x%I64x DXGALLOCATIO"
                    "N 0x%I64x 0x%I64x 0x%I64x",
          v17,
          (__int64)v42,
          (unsigned int)v10,
          (__int64)a2,
          (__int64)this);
      }
      else
      {
        if ( (unsigned int)Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline()
          && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)(v9 + 3160), v10) == 2 )
        {
          *((_BYTE *)this + v10 + 1304) = 1;
        }
        DmmHandleSetTimingsResult((DXGADAPTER *)v9, (struct _DMM_SET_TIMING_RESULT *)v46, v54);
        if ( ((1 << v10) & v63[21]) != 0 )
          LODWORD(v17) = v63[v10 + 22];
        if ( !Current || (*((_DWORD *)Current + 102) & 4) == 0 )
        {
          Global = DXGGLOBAL::GetGlobal();
          do
            v34 = _InterlockedIncrement((volatile signed __int32 *)Global + 348);
          while ( !v34 );
          ADAPTER_DISPLAY::SetDisplayId(
            *(ADAPTER_DISPLAY **)(v9 + 3160),
            (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
            v34);
          DxgkNotifyDisplayChange(1);
        }
      }
      if ( (_BYTE)v55 )
        ((void (__fastcall *)(_QWORD, __int64))v57)(*((_QWORD *)&v57 + 1), v56);
LABEL_77:
      if ( (int)v17 < 0 )
        goto LABEL_82;
      *((_DWORD *)this + v10 + 310) |= 0x200u;
      goto LABEL_80;
  }
  if ( (_BYTE)v55 )
    ((void (__fastcall *)(_QWORD, __int64))v57)(*((_QWORD *)&v57 + 1), v56);
LABEL_82:
  v35 = v47;
  *(_QWORD *)&v59 = *(_QWORD *)&v49.Width;
  DWORD2(v59) = v49.Format;
  if ( v49.RefreshRate.Denominator )
    HIDWORD(v59) = DmmMapVSyncFromRationalToInteger(&v49.RefreshRate, v47, 0LL);
  else
    HIDWORD(v59) = 0;
  *(D3DDDI_RATIONAL *)&v60 = v49.RefreshRate;
  v36 = *((_QWORD *)a2 + 6);
  *((_QWORD *)&v60 + 1) = __PAIR64__(v50, v35);
  v37 = DmmCacheDisplayModeChangeRequest(v9, (*(_DWORD *)(v36 + 4) >> 6) & 0xF, &v59);
  if ( v37 < 0 )
  {
    v38 = v37;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7500;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DmmCacheDisplayModeChangeRequest (status = 0x%I64x)",
      v38,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<6,8>::NotifyStatusChange(&v52, 8);
  return (unsigned int)v17;
}
