/*
 * XREFs of ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x180017950
 * Callers:
 *     ?WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ @ 0x180015F70 (-WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ.c)
 *     ?InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1802086B0 (-InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@.c)
 *     ?OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18021E580 (-OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180221CE0 (-InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180016930 (-Stop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180017C10 (--0-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x180017CBC (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ @ 0x1800183AC (-StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180018634 (-Destroy@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ??1?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800186D8 (--1-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18001870C (-reset@-$shared_object@V-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsPr.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x180018764 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x180018784 (--$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMe.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180210544 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStartExperienceManager::PositionMenu(__int64 a1, __int64 a2, int a3)
{
  char v3; // r14
  struct CSingleViewShellExperience *v6; // rdx
  int MonitorInformation; // esi
  DWORD v8; // edx
  Geometry::CRect *v9; // rcx
  float v10; // xmm0_4
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // r8d
  int v15; // [rsp+20h] [rbp-E0h]
  int v16; // [rsp+20h] [rbp-E0h]
  bool v17[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  struct tagRECT v22; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+68h] [rbp-98h] BYREF
  __int16 v24; // [rsp+6Ch] [rbp-94h]
  __int16 v25; // [rsp+6Eh] [rbp-92h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  __int64 v28; // [rsp+80h] [rbp-80h]
  void **v29; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v30[272]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v31[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v32[48]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v3 = a3;
  v19 = a3;
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v29);
  v29 = &StartMenuExperienceTelemetry::StartMenuReposition::`vftable';
  StartMenuExperienceTelemetry::StartMenuReposition::StartActivity((StartMenuExperienceTelemetry::StartMenuReposition *)&v29);
  v22 = 0LL;
  v18 = 0;
  v17[0] = 0;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)a1,
                         v6,
                         &v22,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v18,
                         v17,
                         0LL);
  if ( MonitorInformation < 0 )
    goto LABEL_8;
  v17[0] = 1;
  v20 = v22.bottom - v22.top;
  v21 = v22.right - v22.left;
  StartMenuExperienceTelemetry::StartMenuReposition::ReportWindowPosition<long &,long &,long,long,unsigned char &,bool,enum CStartExperienceManager::PositionMenuFlags &>(
    (unsigned int)&v29,
    (unsigned int)&v22,
    (unsigned int)&v22.top,
    (unsigned int)&v21,
    (__int64)&v20,
    a2 + 52,
    (__int64)v17,
    (__int64)&v19);
  if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)(a1 + 744)) && Geometry::CRect::Intersects(v9, &v22) )
  {
    *(_DWORD *)(a1 + 736) = *(_DWORD *)(a2 + 44);
    v8 = *(_DWORD *)(a1 + 748);
    v14 = (int)*(float *)(a2 + 48) - (v22.bottom - v8);
    v10 = FLOAT_306_0;
    if ( *(float *)(a2 + 48) < 306.0 )
    {
LABEL_13:
      v22.bottom -= 306;
      goto LABEL_4;
    }
    if ( (int)*(float *)(a2 + 48) >= *(_DWORD *)(a1 + 748) - v22.top )
    {
      if ( v14 < 306 )
        goto LABEL_13;
      v10 = (float)v14;
    }
    else
    {
      v10 = *(float *)(a2 + 48);
    }
    v22.bottom = *(_DWORD *)(a1 + 748);
    goto LABEL_4;
  }
  *(_DWORD *)(a1 + 736) = *(_DWORD *)(a2 + 44);
  v10 = *(float *)(a2 + 48);
LABEL_4:
  *(float *)(a1 + 740) = v10;
  if ( *(_QWORD *)(a2 + 24)
    && (v12 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)(a2 + 80) + 96LL))(
                *(_QWORD *)(a2 + 80),
                &v22),
        v13 = v12,
        v12 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20D,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v12,
      v15);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42B,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)v13,
      v16);
    MonitorInformation = v13;
  }
  else
  {
    if ( (v3 & 1) != 0 )
    {
      v23 = 4;
      v24 = v18;
      v25 = 0;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, &v23, 32LL, 0LL);
    }
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v29, v8);
    MonitorInformation = 0;
  }
LABEL_8:
  v29 = &StartMenuExperienceTelemetry::StartMenuReposition::`vftable';
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v29);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v32);
  wil::details::shared_object<wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v31);
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(v30);
  return (unsigned int)MonitorInformation;
}
