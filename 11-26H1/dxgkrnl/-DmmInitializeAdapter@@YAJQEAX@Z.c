/*
 * XREFs of ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x14025A990
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x14042F7C0 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1400312C4 (-SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140031434 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140038A74 (-SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1400597EC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14005AA24 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140064DE0 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1402D6908 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140361F78 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140391BC8 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403EF568 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     ?SetFirmwareRecommendedVidPn@VIDPN_MGR@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1404128EC (-SetFirmwareRecommendedVidPn@VIDPN_MGR@@QEAAXPEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmInitializeAdapter(DXGADAPTER *this)
{
  __int64 v2; // rax
  VIDPN_MGR *v3; // r15
  __int64 result; // rax
  struct DMMVIDPN *v5; // rbx
  bool v6; // zf
  int v7; // eax
  __int64 v8; // rdx
  char *v9; // r8
  struct DMMVIDPN *v10; // rcx
  __int64 v11; // r13
  struct DMMVIDPN *v12; // rdx
  int v13; // r14d
  unsigned int v14; // eax
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 i; // rcx
  int v18; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v20; // r14
  unsigned int v21; // esi
  struct _LUID *v22; // rdx
  DXGADAPTER **v23; // rcx
  char v24; // r8
  struct DXGGLOBAL *Global; // rax
  int v26; // r8d
  unsigned int v27; // ebx
  __int64 v28; // r11
  struct DMMVIDPN *v29; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-61h] BYREF
  struct DMMVIDPN *v31; // [rsp+48h] [rbp-59h] BYREF
  struct DMMVIDPNTARGETMODESET *v32; // [rsp+50h] [rbp-51h] BYREF
  __int64 v33; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v34[20]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+17h] BYREF
  unsigned int v36; // [rsp+C0h] [rbp+1Fh]

  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10210;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10215;
  }
  v2 = *((_QWORD *)this + 395);
  if ( !v2 )
    return 0LL;
  v3 = *(VIDPN_MGR **)(v2 + 104);
  if ( !v3 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 10231;
    return result;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v33, *(_QWORD *)(v2 + 104));
  v5 = 0LL;
  v6 = (*((_DWORD *)this + 111) & 0x8000) == 0;
  v31 = 0LL;
  v35 = 0LL;
  v36 = 0;
  if ( !v6 )
  {
    v29 = 0LL;
    v7 = VIDPN_MGR::RecommendFunctionalVidPn(v3, DXGK_RFVR_FIRMWARE, &v35, 0xCu, &v29);
    if ( v7 < 0 )
    {
      WdLogSingleEntry2(2LL, this, v7);
      WdLogGlobalForLineNumber = 10262;
    }
    else
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v31, (__int64)v29);
      v5 = v31;
    }
    if ( v5 )
    {
      if ( v5 == (struct DMMVIDPN *)-96LL )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10271;
      }
      v8 = *((_QWORD *)v5 + 17);
      if ( v8 != 1 )
      {
        WdLogSingleEntry2(1LL, v8, this);
        WdLogGlobalForLineNumber = 10279;
        goto LABEL_52;
      }
      v9 = 0LL;
      v10 = (struct DMMVIDPN *)*((_QWORD *)v5 + 15);
      if ( v10 != (struct DMMVIDPN *)((char *)v5 + 120) )
        v9 = (char *)v10 - 8;
      v11 = *((_QWORD *)v9 + 12);
      v30 = *((_QWORD *)v9 + 11);
      if ( !v30 || !v11 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10286;
      }
      v32 = DMMVIDPNTARGET::AcquireCofuncModeSetRef((DMMVIDPNTARGET *)v11);
      v12 = (struct DMMVIDPN *)*((_QWORD *)v32 + 18);
      v29 = v12;
      if ( !v12 )
      {
        WdLogSingleEntry0(1LL);
        v12 = v29;
        WdLogGlobalForLineNumber = 10294;
      }
      v13 = v35;
      v14 = HIDWORD(v35) & 0xFFFFFFFC;
      if ( (((HIDWORD(v35) & 0xFFFFFFFC) - 1) & HIDWORD(v35) & 0xFFFFFFFC) != 0 || (v14 & *((_DWORD *)v12 + 32)) == 0 )
        goto LABEL_50;
      v15 = ((v14 | ((v14 | ((v14 | ((v14 | (v14 >> 6)) >> 6)) >> 6)) >> 6)) >> 2) & 0x3F;
      if ( (_DWORD)v35 && (_DWORD)v35 != 12 )
      {
        if ( (!*((_BYTE *)DXGGLOBAL::GetGlobal() + 304896) || v13 != 31) && v13 != 32 )
          goto LABEL_50;
        v12 = v29;
      }
      if ( (unsigned int)v15 <= 0x20 )
      {
        v16 = 0x100010116LL;
        if ( _bittest64(&v16, v15) )
        {
          for ( i = 0LL; i < 2; ++i )
            *(_BYTE *)(i + *(_QWORD *)(v11 + 96) + 416) = 1;
          v18 = HIDWORD(v35);
          *((_DWORD *)v12 + 34) = v35;
          *((_DWORD *)v12 + 33) = v18;
          VIDPN_MGR::SetFirmwareRecommendedVidPn(v3, v5);
          v29 = (struct DMMVIDPN *)(unsigned int)Feature_BrokeredDisplays_ModeChanges__private_featureState;
          if ( (Feature_BrokeredDisplays_ModeChanges__private_featureState & 0x10) == 0 )
          {
            LODWORD(v29) = Feature_BrokeredDisplays_ModeChanges__private_featureState | 1;
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_BrokeredDisplays_ModeChanges__private_descriptor,
              (__int64)v29,
              3LL);
            wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
              (unsigned __int8)v29,
              3,
              (__int64)&Feature_BrokeredDisplays_ModeChanges__private_descriptor);
          }
          IsEnabledDeviceUsageNoInline = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
          v20 = v30;
          if ( IsEnabledDeviceUsageNoInline )
          {
            v21 = *(_DWORD *)(v30 + 24);
            memset(v34, 0, sizeof(v34));
            if ( DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(
                   (struct DMMVIDPN *)((char *)v5 + 96),
                   1,
                   v21,
                   (struct _DXGK_DISPLAYMODE_INFO *)v34) < 0 )
            {
              WdLogSingleEntry2(2LL, v21, this);
              WdLogGlobalForLineNumber = 10345;
LABEL_49:
              v27 = *(_DWORD *)(v11 + 24);
              v30 = 0LL;
              DXGADAPTER::IsAdapterSessionized(this, v22, 0LL, &v30);
              DxgkLogCodePointPacketForSession(89, v30, v27, v36, 1, v28);
LABEL_51:
              auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v32, 0LL);
              goto LABEL_52;
            }
            v23 = (DXGADAPTER **)*((_QWORD *)this + 395);
            v34[11] = 1;
            *(_QWORD *)&v34[12] = 1LL;
            ADAPTER_DISPLAY::SetDisplayModeInfo(v23, v21, (const struct _DXGK_DISPLAYMODE_INFO *const)v34);
            ADAPTER_DISPLAY::SetLastCddIntegerVSync(*((ADAPTER_DISPLAY **)this + 395), v21, v34[3]);
            ADAPTER_DISPLAY::DetermineScalingCapabilities(*((ADAPTER_DISPLAY **)this + 395), v21);
            v24 = (_DWORD)v35 == 12 || (_DWORD)v35 == 32;
            ADAPTER_DISPLAY::SetHdrEnabled(*((DXGADAPTER ***)this + 395), v21, v24);
            *(_BYTE *)(*(_QWORD *)(v11 + 96) + 414LL) = 1;
          }
          VIDPN_MGR::CacheLastClientCommittedVidPnRef(v3, v5);
          Global = DXGGLOBAL::GetGlobal();
          do
            v26 = _InterlockedIncrement((volatile signed __int32 *)Global + 348);
          while ( !v26 );
          ADAPTER_DISPLAY::SetDisplayId(*((ADAPTER_DISPLAY **)this + 395), *(_DWORD *)(v20 + 24), v26);
          goto LABEL_49;
        }
      }
LABEL_50:
      WdLogSingleEntry3(1LL, HIDWORD(v35), (int)v35, this);
      WdLogGlobalForLineNumber = 10303;
      goto LABEL_51;
    }
  }
LABEL_52:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v31, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v33 + 40));
  return 0LL;
}
