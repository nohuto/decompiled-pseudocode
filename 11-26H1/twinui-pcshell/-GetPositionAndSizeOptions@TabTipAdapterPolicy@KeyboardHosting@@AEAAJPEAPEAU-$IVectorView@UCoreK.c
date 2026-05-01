/*
 * XREFs of ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800B9230
 * Callers:
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x1800B8B70 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1800B9FEC (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x1800BA684 (--$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_K.c)
 *     ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x18013D93C (-LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18013DDD4 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ?GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z @ 0x18024E5EC (-GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x18024E7BC (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?UpdateMonitorInfo@PositionAndSizeOptionsProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2@00@Z @ 0x18024EF9C (-UpdateMonitorInfo@PositionAndSizeOptionsProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2.c)
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x180250A00 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z @ 0x180475E80 (--0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z.c)
 *     ?GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA?AUMonitorInformationSnapshot@2@XZ @ 0x180476314 (-GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA-AUMonitorInformationSnapshot@2@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
        KeyboardHosting::TabTipAdapterPolicy *this,
        _QWORD *a2)
{
  __int64 v2; // rdi
  char IsEnabled; // al
  char v5; // r15
  _BYTE *v6; // r12
  const struct KeyboardHosting::MonitorInformation *v7; // rbx
  const struct KeyboardHosting::MonitorInformation *v8; // rdx
  HMONITOR v9; // rax
  int PositionAndSizeOptions; // ebx
  __int64 v11; // rdx
  const char *v13; // r9
  int ForegroundAppRect; // eax
  __int128 v15; // xmm0
  char v16; // al
  __int128 v17; // xmm1
  __int64 v18; // rcx
  __int128 v19; // xmm0
  unsigned int v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  __int128 v22; // [rsp+70h] [rbp-90h] BYREF
  POINT pt[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v24; // [rsp+90h] [rbp-70h] BYREF
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v27[20]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v28[52]; // [rsp+10Ch] [rbp+Ch] BYREF
  __int64 v29; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v30[20]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v31[52]; // [rsp+15Ch] [rbp+5Ch] BYREF
  _BYTE v32[176]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v33[176]; // [rsp+240h] [rbp+140h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+238h]

  v2 = (__int64)a2;
  *(_QWORD *)&v22 = a2;
  *a2 = 0LL;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
  v5 = *((_BYTE *)this + 860);
  v6 = (char *)this + 808;
  if ( IsEnabled )
  {
    v7 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + (-(__int64)(*v6 != 0) & 0xFFFFFFFFFFFFFEB0uLL) + 568);
    KeyboardHosting::MonitorInformation::GetSnapshot((char *)this + 232, &v29);
    KeyboardHosting::MonitorInformation::GetSnapshot((char *)this + 568, &v26);
    KeyboardHosting::MonitorInformation::GetSnapshot((char *)this + 400, &mi);
    pt[0] = *(POINT *)&mi.cbSize;
    v21 = v26;
    *(_QWORD *)&v24 = v29;
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForCreatingOptions<unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,bool &,bool &>(
      &v24,
      v31,
      v30,
      &v21,
      v28,
      v27,
      pt,
      &mi.rcWork.right,
      &mi.rcMonitor.top,
      (char *)this + 860,
      (char *)this + 808);
    KeyboardHosting::PositionAndSizeOptionsProvider::UpdateMonitorInfo(
      *((KeyboardHosting::PositionAndSizeOptionsProvider **)this + 27),
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + (v5 != 0 ? 400LL : 232LL)),
      v7,
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 568));
    v2 = v22;
  }
  else
  {
    KeyboardHosting::MonitorInformation::MonitorInformation(
      (KeyboardHosting::MonitorInformation *)v33,
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + (v5 != 0 ? 400LL : 232LL)));
    if ( *v6 )
      v8 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 232);
    else
      v8 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 568);
    KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v32, v8);
    *(_QWORD *)&v22 = *((_QWORD *)this + 50);
    *(_QWORD *)&v24 = *((_QWORD *)this + 71);
    pt[0] = *(POINT *)((char *)this + 232);
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForCreatingOptions<unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,bool &,bool &>(
      pt,
      (char *)this + 240,
      (char *)this + 272,
      &v24,
      (char *)this + 576,
      (char *)this + 608,
      &v22,
      (char *)this + 408,
      (char *)this + 440,
      (char *)this + 860,
      (char *)this + 808);
    KeyboardHosting::PositionAndSizeOptionsProvider::UpdateMonitorInfo(
      *((KeyboardHosting::PositionAndSizeOptionsProvider **)this + 27),
      (const struct KeyboardHosting::MonitorInformation *)v33,
      (const struct KeyboardHosting::MonitorInformation *)v32,
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 568));
  }
  v20 = *((_DWORD *)this + 230);
  KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(this, v20);
  if ( !*(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                (char *)this + 824,
                                &v22,
                                &v20)
                 + 40LL) )
    goto LABEL_13;
  v21 = 0LL;
  KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(this, (struct Windows::Foundation::Point *)&v21, v20);
  pt[0].x = (int)*(float *)&v21;
  pt[0].y = (int)*((float *)&v21 + 1);
  v9 = MonitorFromPoint(pt[0], 2u);
  if ( !v9 )
  {
    PositionAndSizeOptions = -2147418113;
    v11 = 1526LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions);
    return (unsigned int)PositionAndSizeOptions;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v9, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x5F9,
             (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
             v13);
LABEL_13:
  v22 = 0LL;
  ForegroundAppRect = KeyboardHosting::ViewRectHelper::GetForegroundAppRect((struct Windows::Foundation::Rect *)&v22);
  if ( ForegroundAppRect < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5FD,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)ForegroundAppRect);
  v15 = v22;
  v16 = *((_BYTE *)this + 869);
  v17 = *((_OWORD *)this + 9);
  v18 = *((_QWORD *)this + 27);
  *((_OWORD *)this + 12) = v22;
  v22 = v15;
  v19 = *((_OWORD *)this + 11);
  *(_OWORD *)&pt[0].x = v17;
  v24 = v19;
  PositionAndSizeOptions = KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
                             v18,
                             (unsigned int)pt,
                             (unsigned int)&v24,
                             (unsigned int)&v22,
                             v16,
                             v2);
  if ( PositionAndSizeOptions < 0 )
  {
    v11 = 1536LL;
    goto LABEL_10;
  }
  return 0LL;
}
