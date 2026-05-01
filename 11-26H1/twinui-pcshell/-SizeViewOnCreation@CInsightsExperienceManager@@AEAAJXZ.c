/*
 * XREFs of ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x18039FE68
 * Callers:
 *     ?OnViewCreated@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18039F9E0 (-OnViewCreated@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802AAA08 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _anonymous_namespace_::ComputeInsightsPanelRect @ 0x18039F1F0 (_anonymous_namespace_--ComputeInsightsPanelRect.c)
 *     ?SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z @ 0x18039FDA0 (-SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z.c)
 */

__int64 __fastcall CInsightsExperienceManager::SizeViewOnCreation(CInsightsExperienceManager *this)
{
  const struct _tlgProvider_t *v2; // rax
  HMONITOR v3; // rbx
  HMONITOR v4; // r8
  int v5; // esi
  HMONITOR v6; // r8
  int v7; // r14d
  int v8; // ebx
  __int64 v9; // rdx
  POINT pt[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v2 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807F96FB,
      0LL);
  pt[0] = 0LL;
  v3 = MonitorFromPoint(0LL, 1u);
  v5 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x148, (ExperienceManagerUtils *)v3, v4);
  mi.cbSize = 40;
  v7 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x22C, (ExperienceManagerUtils *)v3, v6);
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v3, &mi) )
  {
    v8 = -2147418113;
    v9 = 381LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  *(RECT *)&pt[0].x = mi.rcWork;
  *(_OWORD *)&pt[0].x = *(_OWORD *)anonymous_namespace_::ComputeInsightsPanelRect((__int64)v12, v5, v7, (int *)pt);
  v8 = CInsightsExperienceManager::SetViewSizeAndPosition(this, (struct tagRECT *)pt);
  if ( v8 < 0 )
  {
    v9 = 383LL;
    goto LABEL_5;
  }
  return 0LL;
}
