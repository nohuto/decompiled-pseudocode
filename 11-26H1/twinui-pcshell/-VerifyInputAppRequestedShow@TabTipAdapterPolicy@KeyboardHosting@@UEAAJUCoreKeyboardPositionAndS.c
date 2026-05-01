/*
 * XREFs of ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18024EFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1800B9FEC (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@.c)
 *     ??$MonitorInfoUsedForShowRequest@_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@_KAEBU123@AEBW44@_KAEBU123@AEBW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x1800BA42C (--$MonitorInfoUsedForShowRequest@_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@_KAEBU.c)
 *     ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x18013D93C (-LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18013DDD4 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ?IgnoreRelativeToCaretShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18013E198 (-IgnoreRelativeToCaretShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPo.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801B0D40 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@I.c)
 *     ShouldLoadLastFloatingPosition @ 0x1801E9508 (ShouldLoadLastFloatingPosition.c)
 *     ShouldSaveLastFloatingPosition @ 0x1801F0180 (ShouldSaveLastFloatingPosition.c)
 *     ?IsRequestBottomEdgeAligned@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1801FB3B4 (-IsRequestBottomEdgeAligned@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionA.c)
 *     ?IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18021012C (-IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKe.c)
 *     KeyboardHosting::ForceToFitRectWithinMonitorRect @ 0x180211014 (KeyboardHosting--ForceToFitRectWithinMonitorRect.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180215318 (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x18024E7BC (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18024EECC (-UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPosit.c)
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x18024FCC0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1802C9E24 (_o_ceilf_0.c)
 *     floorf @ 0x1802C9E30 (floorf.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z @ 0x180475E80 (--0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z.c)
 *     ?GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA?AUMonitorInformationSnapshot@2@XZ @ 0x180476314 (-GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA-AUMonitorInformationSnapshot@2@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     ??$InputAppRequestedShowBadRequest@IIAEAIAEAI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAI1@Z @ 0x180482610 (--$InputAppRequestedShowBadRequest@IIAEAIAEAI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x1804849B4 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?UnsafeUpdateMonitorInfo@ViewRectProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2@00@Z @ 0x180486720 (-UnsafeUpdateMonitorInfo@ViewRectProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2@00@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedShow(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        _BYTE *a7)
{
  int updated; // esi
  __int64 v10; // rdx
  _BYTE *v12; // r15
  _BYTE *v13; // r12
  unsigned __int64 *v14; // r13
  unsigned __int64 *v15; // rsi
  __int64 v16; // rax
  int ViewRectFromPositionAndSizeRequest; // eax
  unsigned int v18; // r15d
  char v19; // al
  float v20; // xmm1_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  float v23; // xmm12_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm9_4
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // eax
  bool v31; // zf
  __int64 v32; // rcx
  char v33; // si
  const struct KeyboardHosting::MonitorInformation *v34; // rdx
  float v35; // xmm1_4
  float v36; // xmm10_4
  float v37; // xmm11_4
  float v38; // xmm12_4
  float v39; // xmm8_4
  float v40; // xmm9_4
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int128 v44; // xmm0
  int v45; // [rsp+38h] [rbp-D0h]
  int v46; // [rsp+38h] [rbp-D0h]
  int v47; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v48; // [rsp+70h] [rbp-98h] BYREF
  char v49; // [rsp+78h] [rbp-90h] BYREF
  __int128 v50; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v51[2]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v52; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD *v53; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v54[76]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v55[24]; // [rsp+108h] [rbp+0h] BYREF
  int v56[4]; // [rsp+120h] [rbp+18h] BYREF
  int v57; // [rsp+130h] [rbp+28h]
  __int128 v58; // [rsp+1B8h] [rbp+B0h] BYREF
  _OWORD v59[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v60; // [rsp+208h] [rbp+100h] BYREF
  unsigned int v61[5]; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v62[52]; // [rsp+224h] [rbp+11Ch] BYREF
  unsigned __int64 v63; // [rsp+258h] [rbp+150h] BYREF
  unsigned int v64[5]; // [rsp+260h] [rbp+158h] BYREF
  _BYTE v65[52]; // [rsp+274h] [rbp+16Ch] BYREF
  __int128 v66; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v67[176]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _BYTE v68[176]; // [rsp+368h] [rbp+260h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4D0h] [rbp+3C8h]

  v48 = a3;
  v53 = a6;
  if ( KeyboardHosting::TabTipAdapterPolicy::IgnoreRelativeToCaretShowRequest(
         (RTL_SRWLOCK *)a1,
         a3,
         (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2)
    || KeyboardHosting::TabTipAdapterPolicy::IgnoreRelativeToFocusedElementShowRequest(
         (KeyboardHosting::TabTipAdapterPolicy *)a1,
         (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2) )
  {
    *a7 = 0;
    return 0LL;
  }
  if ( !KeyboardHosting::TabTipAdapterPolicy::CheckRequest(
          (KeyboardHosting::TabTipAdapterPolicy *)a1,
          (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2) )
  {
    *a7 = 0;
    LODWORD(v53) = *(_DWORD *)(a2 + 24);
    LODWORD(v51[0]) = *(_DWORD *)a2;
    TouchKeyboardExperienceTelemetryLogger::InputAppRequestedShowBadRequest<unsigned int,unsigned int,unsigned int &,unsigned int &>(
      v51,
      &v53,
      a2 + 8,
      a2 + 4);
    return 0LL;
  }
  updated = KeyboardHosting::TabTipAdapterPolicy::UpdateCurrentMonitorIfNecessary(
              (RTL_SRWLOCK *)a1,
              (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2);
  if ( updated < 0 )
  {
    v10 = 747LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  v12 = (_BYTE *)(a1 + 808);
  v13 = (_BYTE *)(a1 + 860);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    KeyboardHosting::MonitorInformation::GetSnapshot(a1 + 232, &v60);
    KeyboardHosting::MonitorInformation::GetSnapshot(a1 + 568, &v58);
    KeyboardHosting::MonitorInformation::GetSnapshot(a1 + 400, &v63);
    v51[0] = v63;
    *(_QWORD *)&v50 = v58;
    *(_QWORD *)&v52 = v60;
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForShowRequest<unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,bool &,bool &>(
      (unsigned __int64 *)&v52,
      (const struct Windows::Foundation::Rect *)v62,
      v61,
      (unsigned __int64 *)&v50,
      (struct Windows::Foundation::Rect *)((char *)v59 + 12),
      (unsigned int *)&v58 + 2,
      v51,
      (struct Windows::Foundation::Rect *)v65,
      v64,
      (bool *)(a1 + 860),
      (bool *)(a1 + 808));
    v14 = (unsigned __int64 *)&v60;
    if ( *v13 )
      v14 = &v63;
    v15 = (unsigned __int64 *)&v58;
    if ( *v12 )
      v15 = (unsigned __int64 *)&v60;
    v16 = *(_QWORD *)(a1 + 224);
    *(_OWORD *)(v16 + 520) = *(_OWORD *)v14;
    *(_OWORD *)(v16 + 536) = *((_OWORD *)v14 + 1);
    *(_OWORD *)(v16 + 552) = *((_OWORD *)v14 + 2);
    *(_OWORD *)(v16 + 568) = *((_OWORD *)v14 + 3);
    *(_OWORD *)(v16 + 584) = *((_OWORD *)v14 + 4);
    *(_OWORD *)(v16 + 600) = *(_OWORD *)v15;
    *(_OWORD *)(v16 + 616) = *((_OWORD *)v15 + 1);
    *(_OWORD *)(v16 + 632) = *((_OWORD *)v15 + 2);
    *(_OWORD *)(v16 + 648) = *((_OWORD *)v15 + 3);
    *(_OWORD *)(v16 + 664) = *((_OWORD *)v15 + 4);
    *(_OWORD *)(v16 + 680) = v58;
    *(_OWORD *)(v16 + 696) = v59[0];
    *(_OWORD *)(v16 + 712) = v59[1];
    *(_OWORD *)(v16 + 728) = v59[2];
    *(_OWORD *)(v16 + 744) = v59[3];
    LOBYTE(v47) = 0;
    v49 = 0;
    v66 = 0LL;
    *(_OWORD *)v54 = *(_OWORD *)a2;
    *(_OWORD *)&v54[16] = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v54[32] = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v54[48] = *(_OWORD *)(a2 + 48);
    *(_QWORD *)&v54[64] = *(_QWORD *)(a2 + 64);
    LOBYTE(v45) = KeyboardHosting::TabTipAdapterPolicy::IsRequestBottomEdgeAligned(
                    (KeyboardHosting::TabTipAdapterPolicy *)a1,
                    (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2);
    ViewRectFromPositionAndSizeRequest = KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
                                           *(_QWORD *)(a1 + 224),
                                           a1 + 144,
                                           a1 + 176,
                                           a1 + 192,
                                           v54,
                                           *(_DWORD *)(a1 + 208),
                                           v45,
                                           &v66,
                                           &v47,
                                           &v49);
    v18 = ViewRectFromPositionAndSizeRequest;
    if ( ViewRectFromPositionAndSizeRequest < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x311,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)ViewRectFromPositionAndSizeRequest);
      return v18;
    }
    v19 = *(_BYTE *)(a2 + 44);
    if ( v19 || *(_BYTE *)(a2 + 45) )
    {
      if ( *(_DWORD *)a2 == 1 )
        v15 = v14;
    }
    else
    {
      v15 = (unsigned __int64 *)&v58;
    }
    v20 = (float)*((int *)v15 + 2);
    v21 = (float)(*((float *)&v66 + 1) * v20) / 100.0;
    v22 = (float)(*((float *)&v66 + 2) * v20) / 100.0;
    v23 = (float)(*((float *)&v66 + 3) * v20) / 100.0;
    v24 = (float)(*(float *)&v66 * v20) / 100.0;
    *(float *)&v50 = v24;
    v25 = v21;
    *((float *)&v50 + 1) = v21;
    v26 = v22;
    *((float *)&v50 + 2) = v22;
    v27 = v23;
    *((float *)&v50 + 3) = v23;
    if ( *(_DWORD *)a2 == 1 )
    {
      *(float *)&v50 = (float)(*(float *)&v66 * v20) / 100.0;
      *((float *)&v50 + 1) = (float)(*((float *)&v66 + 1) * v20) / 100.0;
      *((float *)&v50 + 2) = (float)(*((float *)&v66 + 2) * v20) / 100.0;
      *((float *)&v50 + 3) = (float)(*((float *)&v66 + 3) * v20) / 100.0;
      if ( !v19 )
      {
        *(float *)&v50 = (float)(*(float *)&v66 * v20) / 100.0;
        *((float *)&v50 + 1) = (float)(*((float *)&v66 + 1) * v20) / 100.0;
        *((float *)&v50 + 2) = (float)(*((float *)&v66 + 2) * v20) / 100.0;
        *((float *)&v50 + 3) = (float)(*((float *)&v66 + 3) * v20) / 100.0;
        if ( !*(_BYTE *)(a2 + 45) )
        {
          *(float *)&v50 = (float)(*(float *)&v66 * v20) / 100.0;
          *((float *)&v50 + 1) = (float)(*((float *)&v66 + 1) * v20) / 100.0;
          *((float *)&v50 + 2) = (float)(*((float *)&v66 + 2) * v20) / 100.0;
          *((float *)&v50 + 3) = (float)(*((float *)&v66 + 3) * v20) / 100.0;
          if ( (*(_BYTE *)(a2 + 24) & 2) != 0 )
          {
            v24 = floorf((float)(*(float *)&v66 * v20) / 100.0);
            *(float *)&v50 = v24;
            v25 = o_ceilf_0(v21);
            *((float *)&v50 + 1) = v25;
            v26 = o_ceilf_0(v22);
            *((float *)&v50 + 2) = v26;
            v27 = o_ceilf_0(v23);
            *((float *)&v50 + 3) = v27;
          }
        }
      }
    }
    *a7 = 1;
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v52, (RTL_SRWLOCK *)(a1 + 800));
    v54[0] = 1;
    *(_WORD *)&v54[1] = 0;
    v54[3] = 0;
    *(_OWORD *)&v54[4] = *(_OWORD *)a2;
    *(_OWORD *)&v54[20] = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v54[36] = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v54[52] = *(_OWORD *)(a2 + 48);
    *(_QWORD *)&v54[68] = *(_QWORD *)(a2 + 64);
    v28 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Try_emplace<unsigned int const &,>(
                       (float *)(a1 + 736),
                       (__int64)v51,
                       (unsigned __int8 *)&v48);
    *(_OWORD *)(v28 + 20) = *(_OWORD *)v54;
    *(_OWORD *)(v28 + 36) = *(_OWORD *)&v54[16];
    *(_OWORD *)(v28 + 52) = *(_OWORD *)&v54[32];
    *(_OWORD *)(v28 + 68) = *(_OWORD *)&v54[48];
    *(_QWORD *)(v28 + 84) = *(_QWORD *)&v54[64];
    *(_DWORD *)(v28 + 92) = *(_DWORD *)&v54[72];
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v52);
    if ( ShouldLoadLastFloatingPosition(a2)
      && (v29 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                             (_QWORD *)(a1 + 840),
                             (__int64)&v52,
                             &v48),
          *(float *)(v29 + 32) = v26,
          *(float *)(v29 + 36) = v27,
          KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(
            (KeyboardHosting::TabTipAdapterPolicy *)a1,
            v48),
          *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  (_QWORD *)(a1 + 824),
                                  (__int64)&v52,
                                  &v48)
                   + 40LL)) )
    {
      v51[0] = 0LL;
      KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        (KeyboardHosting::TabTipAdapterPolicy *)a1,
        (struct Windows::Foundation::Point *)v51,
        v48);
      *(_QWORD *)&v66 = v51[0];
      *((_QWORD *)&v66 + 1) = __PAIR64__(LODWORD(v27), LODWORD(v26));
      v52 = 0LL;
      KeyboardHosting::ForceToFitRectWithinMonitorRect((__int64)&v66, (int *)v15 + 3, &v52);
      if ( *(_BYTE *)(a2 + 44) )
      {
        LODWORD(v24) = v52;
        LODWORD(v50) = v52;
      }
      if ( *(_BYTE *)(a2 + 45) )
      {
        v25 = *((float *)&v52 + 1);
        DWORD1(v50) = DWORD1(v52);
      }
    }
    else if ( ShouldSaveLastFloatingPosition(a2) )
    {
      v32 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                         (_QWORD *)(a1 + 840),
                         (__int64)&v52,
                         &v48);
      *(float *)(v32 + 32) = v26;
      *(float *)(v32 + 36) = v27;
      v51[0] = __PAIR64__(LODWORD(v25), LODWORD(v24));
      updated = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
                  (KeyboardHosting::TabTipAdapterPolicy *)a1,
                  (const struct Windows::Foundation::Point *)v51,
                  v48);
      if ( updated < 0 )
      {
        v10 = 877LL;
        goto LABEL_6;
      }
    }
    if ( *(_DWORD *)a2 != 2 )
      goto LABEL_69;
    v30 = v48;
    if ( v48 != *(_DWORD *)(a1 + 856) || !*(_BYTE *)(a1 + 820) || !*(_BYTE *)(a2 + 44) && !*(_BYTE *)(a2 + 45) )
    {
      v31 = (_BYTE)v47 == 0;
      goto LABEL_67;
    }
  }
  else
  {
    *(_QWORD *)&v52 = *(_QWORD *)(a1 + 400);
    *(_QWORD *)&v50 = *(_QWORD *)(a1 + 568);
    v51[0] = *(_QWORD *)(a1 + 232);
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForShowRequest<unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,bool &,bool &>(
      v51,
      (const struct Windows::Foundation::Rect *)(a1 + 240),
      (unsigned int *)(a1 + 272),
      (unsigned __int64 *)&v50,
      (struct Windows::Foundation::Rect *)(a1 + 576),
      (unsigned int *)(a1 + 608),
      (unsigned __int64 *)&v52,
      (struct Windows::Foundation::Rect *)(a1 + 408),
      (unsigned int *)(a1 + 440),
      (bool *)(a1 + 860),
      (bool *)(a1 + 808));
    KeyboardHosting::MonitorInformation::MonitorInformation(
      (KeyboardHosting::MonitorInformation *)v68,
      (const struct KeyboardHosting::MonitorInformation *)(a1 + (*v13 != 0 ? 400LL : 232LL)));
    KeyboardHosting::MonitorInformation::MonitorInformation(
      (KeyboardHosting::MonitorInformation *)v67,
      (const struct KeyboardHosting::MonitorInformation *)(a1 + (-(__int64)(*v12 != 0) & 0xFFFFFFFFFFFFFEB0uLL) + 568));
    KeyboardHosting::ViewRectProvider::UnsafeUpdateMonitorInfo(
      *(KeyboardHosting::ViewRectProvider **)(a1 + 224),
      (const struct KeyboardHosting::MonitorInformation *)v68,
      (const struct KeyboardHosting::MonitorInformation *)v67,
      (const struct KeyboardHosting::MonitorInformation *)(a1 + 568));
    LOBYTE(v47) = 0;
    v49 = 0;
    v66 = 0LL;
    *(_OWORD *)v54 = *(_OWORD *)a2;
    *(_OWORD *)&v54[16] = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v54[32] = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v54[48] = *(_OWORD *)(a2 + 48);
    *(_QWORD *)&v54[64] = *(_QWORD *)(a2 + 64);
    LOBYTE(v46) = KeyboardHosting::TabTipAdapterPolicy::IsRequestBottomEdgeAligned(
                    (KeyboardHosting::TabTipAdapterPolicy *)a1,
                    (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2);
    updated = KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
                *(_QWORD *)(a1 + 224),
                a1 + 144,
                a1 + 176,
                a1 + 192,
                v54,
                *(_DWORD *)(a1 + 208),
                v46,
                &v66,
                &v47,
                &v49);
    if ( updated < 0 )
    {
      v10 = 938LL;
      goto LABEL_6;
    }
    v33 = *(_BYTE *)(a2 + 44);
    if ( v33 || *(_BYTE *)(a2 + 45) )
    {
      v34 = (const struct KeyboardHosting::MonitorInformation *)v67;
      if ( *(_DWORD *)a2 == 1 )
        v34 = (const struct KeyboardHosting::MonitorInformation *)v68;
    }
    else
    {
      v34 = (const struct KeyboardHosting::MonitorInformation *)(a1 + 568);
    }
    KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v55, v34);
    v35 = (float)v57;
    v36 = (float)(*((float *)&v66 + 1) * (float)v57) / 100.0;
    v37 = (float)(*((float *)&v66 + 2) * (float)v57) / 100.0;
    v38 = (float)(*((float *)&v66 + 3) * (float)v57) / 100.0;
    v24 = (float)(*(float *)&v66 * (float)v57) / 100.0;
    *(float *)&v50 = v24;
    v25 = v36;
    *((float *)&v50 + 1) = v36;
    v39 = v37;
    *((float *)&v50 + 2) = v37;
    v40 = v38;
    *((float *)&v50 + 3) = v38;
    if ( *(_DWORD *)a2 == 1 )
    {
      *(float *)&v50 = (float)(*(float *)&v66 * v35) / 100.0;
      *((float *)&v50 + 1) = (float)(*((float *)&v66 + 1) * (float)v57) / 100.0;
      *((float *)&v50 + 2) = (float)(*((float *)&v66 + 2) * v35) / 100.0;
      *((float *)&v50 + 3) = (float)(*((float *)&v66 + 3) * v35) / 100.0;
      if ( !v33 )
      {
        *(float *)&v50 = (float)(*(float *)&v66 * v35) / 100.0;
        *((float *)&v50 + 1) = (float)(*((float *)&v66 + 1) * (float)v57) / 100.0;
        *((float *)&v50 + 2) = (float)(*((float *)&v66 + 2) * v35) / 100.0;
        *((float *)&v50 + 3) = (float)(*((float *)&v66 + 3) * v35) / 100.0;
        if ( !*(_BYTE *)(a2 + 45) )
        {
          *(float *)&v50 = (float)(*(float *)&v66 * v35) / 100.0;
          *((float *)&v50 + 1) = (float)(*((float *)&v66 + 1) * (float)v57) / 100.0;
          *((float *)&v50 + 2) = (float)(*((float *)&v66 + 2) * v35) / 100.0;
          *((float *)&v50 + 3) = (float)(*((float *)&v66 + 3) * v35) / 100.0;
          if ( (*(_BYTE *)(a2 + 24) & 2) != 0 )
          {
            v24 = floorf((float)(*(float *)&v66 * (float)v57) / 100.0);
            *(float *)&v50 = v24;
            v25 = o_ceilf_0(v36);
            *((float *)&v50 + 1) = v25;
            v39 = o_ceilf_0(v37);
            *((float *)&v50 + 2) = v39;
            v40 = o_ceilf_0(v38);
            *((float *)&v50 + 3) = v40;
          }
        }
      }
    }
    *a7 = 1;
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v52, (RTL_SRWLOCK *)(a1 + 800));
    v54[0] = 1;
    *(_WORD *)&v54[1] = 0;
    v54[3] = 0;
    *(_OWORD *)&v54[4] = *(_OWORD *)a2;
    *(_OWORD *)&v54[20] = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v54[36] = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v54[52] = *(_OWORD *)(a2 + 48);
    *(_QWORD *)&v54[68] = *(_QWORD *)(a2 + 64);
    v41 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Try_emplace<unsigned int const &,>(
                       (float *)(a1 + 736),
                       (__int64)v51,
                       (unsigned __int8 *)&v48);
    *(_OWORD *)(v41 + 20) = *(_OWORD *)v54;
    *(_OWORD *)(v41 + 36) = *(_OWORD *)&v54[16];
    *(_OWORD *)(v41 + 52) = *(_OWORD *)&v54[32];
    *(_OWORD *)(v41 + 68) = *(_OWORD *)&v54[48];
    *(_QWORD *)(v41 + 84) = *(_QWORD *)&v54[64];
    *(_DWORD *)(v41 + 92) = *(_DWORD *)&v54[72];
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v52);
    if ( ShouldLoadLastFloatingPosition(a2)
      && (v42 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                             (_QWORD *)(a1 + 840),
                             (__int64)&v52,
                             &v48),
          *(float *)(v42 + 32) = v39,
          *(float *)(v42 + 36) = v40,
          KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(
            (KeyboardHosting::TabTipAdapterPolicy *)a1,
            v48),
          *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  (_QWORD *)(a1 + 824),
                                  (__int64)&v52,
                                  &v48)
                   + 40LL)) )
    {
      v51[0] = 0LL;
      KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        (KeyboardHosting::TabTipAdapterPolicy *)a1,
        (struct Windows::Foundation::Point *)v51,
        v48);
      *(_QWORD *)&v66 = v51[0];
      *((_QWORD *)&v66 + 1) = __PAIR64__(LODWORD(v40), LODWORD(v39));
      v52 = 0LL;
      KeyboardHosting::ForceToFitRectWithinMonitorRect((__int64)&v66, v56, &v52);
      if ( v33 )
      {
        LODWORD(v24) = v52;
        LODWORD(v50) = v52;
      }
      if ( *(_BYTE *)(a2 + 45) )
      {
        v25 = *((float *)&v52 + 1);
        DWORD1(v50) = DWORD1(v52);
      }
    }
    else if ( ShouldSaveLastFloatingPosition(a2) )
    {
      v43 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                         (_QWORD *)(a1 + 840),
                         (__int64)&v52,
                         &v48);
      *(float *)(v43 + 32) = v39;
      *(float *)(v43 + 36) = v40;
      v51[0] = __PAIR64__(LODWORD(v25), LODWORD(v24));
      updated = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
                  (KeyboardHosting::TabTipAdapterPolicy *)a1,
                  (const struct Windows::Foundation::Point *)v51,
                  v48);
      if ( updated < 0 )
      {
        v10 = 1030LL;
        goto LABEL_6;
      }
    }
    if ( *(_DWORD *)a2 != 2 )
      goto LABEL_69;
    v30 = v48;
    if ( v48 != *(_DWORD *)(a1 + 856) || !*(_BYTE *)(a1 + 820) || !*(_BYTE *)(a2 + 44) && !*(_BYTE *)(a2 + 45) )
    {
      v31 = (_BYTE)v47 == 0;
LABEL_67:
      if ( v31 )
      {
        *(float *)(a1 + 812) = v24;
        *(float *)(a1 + 816) = v25;
        *(_BYTE *)(a1 + 820) = 1;
        *(_DWORD *)(a1 + 856) = v30;
      }
      goto LABEL_69;
    }
  }
  *(_QWORD *)&v50 = *(_QWORD *)(a1 + 812);
LABEL_69:
  v44 = v50;
  *v53 = v50;
  *(_OWORD *)(a1 + 904) = v44;
  return 0LL;
}
