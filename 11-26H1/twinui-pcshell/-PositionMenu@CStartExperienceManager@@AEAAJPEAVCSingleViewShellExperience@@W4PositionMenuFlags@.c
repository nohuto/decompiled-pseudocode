/*
 * XREFs of ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B4780
 * Callers:
 *     ?WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ @ 0x1800B5A50 (-WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B60A0 (-OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1800B6A20 (-InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1801FD390 (-InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800B4A40 (--0-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x1800B4B00 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ @ 0x1800B51EC (-StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B548C (-Destroy@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ??1?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B5530 (--1-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800B5564 (-reset@-$shared_object@V-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsPr.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B55C0 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x1800B55E0 (--$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMe.c)
 *     ?Stop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B56D4 (-Stop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180203058 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStartExperienceManager::PositionMenu(__int64 a1, __int64 a2, int a3)
{
  char v3; // r14
  struct CSingleViewShellExperience *v6; // rdx
  int MonitorInformation; // edi
  Geometry::CRect *v8; // rcx
  float v9; // xmm0_4
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // r8d
  bool v14[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  struct tagRECT v19; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+68h] [rbp-98h] BYREF
  __int16 v21; // [rsp+6Ch] [rbp-94h]
  __int16 v22; // [rsp+6Eh] [rbp-92h]
  __int64 v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  void **v26; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v27[272]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v28[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v29[48]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v3 = a3;
  v16 = a3;
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v26);
  v26 = &StartMenuExperienceTelemetry::StartMenuReposition::`vftable';
  StartMenuExperienceTelemetry::StartMenuReposition::StartActivity((StartMenuExperienceTelemetry::StartMenuReposition *)&v26);
  v19 = 0LL;
  v15 = 0;
  v14[0] = 0;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)a1,
                         v6,
                         &v19,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v15,
                         v14,
                         0LL);
  if ( MonitorInformation < 0 )
    goto LABEL_9;
  v14[0] = 1;
  v17 = v19.bottom - v19.top;
  v18 = v19.right - v19.left;
  StartMenuExperienceTelemetry::StartMenuReposition::ReportWindowPosition<long &,long &,long,long,unsigned char &,bool,enum CStartExperienceManager::PositionMenuFlags &>(
    (unsigned int)&v26,
    (unsigned int)&v19,
    (unsigned int)&v19.top,
    (unsigned int)&v18,
    (__int64)&v17,
    a2 + 52,
    (__int64)v14,
    (__int64)&v16);
  if ( Geometry::CRect::IsEmpty((Geometry::CRect *)(a1 + 744)) || !Geometry::CRect::Intersects(v8, &v19) )
  {
    *(_DWORD *)(a1 + 736) = *(_DWORD *)(a2 + 44);
  }
  else
  {
    *(_DWORD *)(a1 + 736) = *(_DWORD *)(a2 + 44);
    v13 = (int)*(float *)(a2 + 48) - (v19.bottom - *(_DWORD *)(a1 + 748));
    v9 = FLOAT_306_0;
    if ( *(float *)(a2 + 48) < 306.0 )
    {
LABEL_14:
      v19.bottom -= 306;
      goto LABEL_5;
    }
    if ( (int)*(float *)(a2 + 48) >= *(_DWORD *)(a1 + 748) - v19.top )
    {
      if ( v13 >= 306 )
      {
        v19.bottom = *(_DWORD *)(a1 + 748);
        v9 = (float)v13;
        goto LABEL_5;
      }
      goto LABEL_14;
    }
    v19.bottom = *(_DWORD *)(a1 + 748);
  }
  v9 = *(float *)(a2 + 48);
LABEL_5:
  *(float *)(a1 + 740) = v9;
  if ( *(_QWORD *)(a2 + 24)
    && (v11 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)(a2 + 80) + 96LL))(
                *(_QWORD *)(a2 + 80),
                &v19),
        v12 = v11,
        v11 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20D,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v11);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x427,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)v12);
    MonitorInformation = v12;
  }
  else
  {
    if ( (v3 & 1) != 0 )
    {
      v20 = 4;
      v21 = v15;
      v22 = 0;
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, &v20, 32LL);
    }
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v26);
    MonitorInformation = 0;
  }
LABEL_9:
  v26 = &StartMenuExperienceTelemetry::StartMenuReposition::`vftable';
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v26);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v29);
  wil::details::shared_object<wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v28);
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(v27);
  return (unsigned int)MonitorInformation;
}
