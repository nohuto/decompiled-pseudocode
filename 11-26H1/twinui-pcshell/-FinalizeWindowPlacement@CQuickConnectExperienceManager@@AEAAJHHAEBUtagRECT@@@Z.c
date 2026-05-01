/*
 * XREFs of ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1803917DC
 * Callers:
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395120 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$ExperienceManager_FinalizeWindowPlacement_Finalized@AEAW4Placement@Popups@UI@Windows@@@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXAEAW4Placement@Popups@UI@Windows@@@Z @ 0x18038F160 (--$ExperienceManager_FinalizeWindowPlacement_Finalized@AEAW4Placement@Popups@UI@Windows@@@Experi.c)
 *     ??$ExperienceManager_FinalizeWindowPlacement_Prefered@AEAW4Placement@Popups@UI@Windows@@@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXAEAW4Placement@Popups@UI@Windows@@@Z @ 0x18038F1D0 (--$ExperienceManager_FinalizeWindowPlacement_Prefered@AEAW4Placement@Popups@UI@Windows@@@Experie.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803900EC (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1803900EC.c)
 *     ??1ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAA@XZ @ 0x180390564 (--1ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ @ 0x180393700 (-StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180393C80 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?ValidateBoundary@CQuickConnectExperienceManager@@AEAAJW4Placement@Popups@UI@Windows@@HHAEBUtagRECT@@AEA_N@Z @ 0x18039549C (-ValidateBoundary@CQuickConnectExperienceManager@@AEAAJW4Placement@Popups@UI@Windows@@HHAEBUtagR.c)
 */

__int64 __fastcall CQuickConnectExperienceManager::FinalizeWindowPlacement(
        CQuickConnectExperienceManager *this,
        unsigned int a2,
        unsigned int a3,
        const struct tagRECT *a4)
{
  unsigned int v8; // ebx
  unsigned int v9; // r15d
  __int64 v10; // r11
  __int64 v11; // r8
  unsigned int v12; // esi
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v14[7]; // [rsp+3Ch] [rbp-CCh]
  _QWORD v15[42]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v14[0] = a2;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"ExperienceManager_FinalizeWindowPlacement");
  v15[0] = &QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::`vftable';
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::StartActivity((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement *)v15);
  if ( *((_BYTE *)this + 388) )
  {
LABEL_2:
    QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::~ExperienceManager_FinalizeWindowPlacement((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement *)v15);
    return 0LL;
  }
  else
  {
    QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::ExperienceManager_FinalizeWindowPlacement_Prefered<enum Windows::UI::Popups::Placement &>(
      (__int64)v15,
      (int *)this + 90);
    v8 = 0;
    v9 = *((_DWORD *)this + 90);
    v10 = 0LL;
    v11 = v14[0];
    *(__m128i *)&v14[2] = _mm_load_si128((const __m128i *)&_xmm);
    v14[1] = v9;
    LOBYTE(v13) = 0;
    while ( v8 < 5 )
    {
      if ( !v10 || v14[v10 + 1] != v9 )
      {
        v12 = v14[v10 + 1];
        CQuickConnectExperienceManager::ValidateBoundary(this, v12, v11, a3, a4, &v13);
        if ( (_BYTE)v13 )
        {
          *((_DWORD *)this + 90) = v12;
          QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::ExperienceManager_FinalizeWindowPlacement_Finalized<enum Windows::UI::Popups::Placement &>(
            (__int64)v15,
            (int *)this + 90);
          wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
          goto LABEL_2;
        }
      }
      ++v8;
      ++v10;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x394,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)0x80004005LL);
    QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::~ExperienceManager_FinalizeWindowPlacement((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement *)v15);
    return 2147500037LL;
  }
}
