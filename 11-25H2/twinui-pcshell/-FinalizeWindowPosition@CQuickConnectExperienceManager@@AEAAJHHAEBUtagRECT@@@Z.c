/*
 * XREFs of ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x18038A7C8
 * Callers:
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038DF00 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$ExperienceManager_FinalizeWindowPosition_Finalized@AEAJAEAJAEAJAEAJ@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXAEAJ000@Z @ 0x18038812C (--$ExperienceManager_FinalizeWindowPosition_Finalized@AEAJAEAJAEAJAEAJ@ExperienceManager_Finaliz.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180388F8C (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_180388F8C.c)
 *     ??1ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAA@XZ @ 0x18038941C (--1ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?ExperienceManager_FinalizeWindowPosition_FixedPosition@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x18038A2AC (-ExperienceManager_FinalizeWindowPosition_FixedPosition@ExperienceManager_FinalizeWindowPosition.c)
 *     ?GetHorizontalAlignment@CQuickConnectExperienceManager@@AEAAHHAEBUtagRECT@@@Z @ 0x18038AA60 (-GetHorizontalAlignment@CQuickConnectExperienceManager@@AEAAHHAEBUtagRECT@@@Z.c)
 *     ?GetVerticalAlignment@CQuickConnectExperienceManager@@AEAAHHAEBUtagRECT@@@Z @ 0x18038ABA0 (-GetVerticalAlignment@CQuickConnectExperienceManager@@AEAAHHAEBUtagRECT@@@Z.c)
 *     ?StartActivity@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x18038C604 (-StartActivity@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18038CA64 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

__int64 __fastcall CQuickConnectExperienceManager::FinalizeWindowPosition(
        CQuickConnectExperienceManager *this,
        int a2,
        int a3,
        const struct tagRECT *a4)
{
  float v8; // xmm0_4
  int v9; // eax
  float v10; // xmm2_4
  int *v11; // rsi
  int VerticalAlignment; // eax
  _DWORD *v13; // r11
  int *v14; // r10
  int *v15; // r9
  float v16; // xmm0_4
  float v17; // xmm2_4
  int v18; // ecx
  int *v19; // r9
  int v20; // edx
  int HorizontalAlignment; // eax
  _QWORD v23[42]; // [rsp+30h] [rbp-188h] BYREF

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v23,
    (__int64)"ExperienceManager_FinalizeWindowPosition");
  v23[0] = &QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::`vftable';
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::StartActivity((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition *)v23);
  if ( !*((_BYTE *)this + 389) )
  {
    if ( a3 == *((_DWORD *)this + 96) )
    {
      *((_BYTE *)this + 389) = 1;
      QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::ExperienceManager_FinalizeWindowPosition_FixedPosition((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition *)v23);
    }
    if ( *((_DWORD *)this + 90) != 1 )
    {
      switch ( *((_DWORD *)this + 90) )
      {
        case 2:
          v16 = *((float *)this + 89) + *((float *)this + 87);
          *((_DWORD *)this + 99) = (int)v16;
          *((_DWORD *)this + 101) = a3 + (int)v16;
LABEL_18:
          HorizontalAlignment = CQuickConnectExperienceManager::GetHorizontalAlignment(this, a2, a4);
          v13 = (_DWORD *)((char *)this + 392);
          *((_DWORD *)this + 98) = HorizontalAlignment;
          v11 = (int *)((char *)this + 400);
          *((_DWORD *)this + 100) = a2 + HorizontalAlignment;
          goto LABEL_19;
        case 3:
          v10 = *((float *)this + 86);
          *((_DWORD *)this + 98) = (int)(float)(v10 - (float)a2);
          v9 = (int)v10;
          goto LABEL_11;
        case 4:
          v8 = *((float *)this + 88) + *((float *)this + 86);
          *((_DWORD *)this + 98) = (int)v8;
          v9 = a2 + (int)v8;
LABEL_11:
          v11 = (int *)((char *)this + 400);
          *((_DWORD *)this + 100) = v9;
          VerticalAlignment = CQuickConnectExperienceManager::GetVerticalAlignment(this, a3, a4);
          v14 = (int *)((char *)this + 396);
          *((_DWORD *)this + 99) = VerticalAlignment;
          v15 = (int *)((char *)this + 404);
          *((_DWORD *)this + 101) = a3 + VerticalAlignment;
LABEL_19:
          QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::ExperienceManager_FinalizeWindowPosition_Finalized<long &,long &,long &,long &>(
            (__int64)v23,
            v13,
            v14,
            v11,
            v15);
          wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
          goto LABEL_20;
      }
    }
    v17 = *((float *)this + 87);
    v18 = *((_DWORD *)this + 99);
    if ( v18 > (int)(float)(v17 - (float)a3) || (v19 = (int *)((char *)this + 404), v18 == *((_DWORD *)this + 101)) )
    {
      v20 = (int)v17;
      v19 = (int *)((char *)this + 404);
      *((_DWORD *)this + 99) = (int)v17 - a3;
    }
    else
    {
      v20 = v18 + a3;
    }
    *v19 = v20;
    goto LABEL_18;
  }
  *((_DWORD *)this + 101) = a3 + *((_DWORD *)this + 99);
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::ExperienceManager_FinalizeWindowPosition_Finalized<long &,long &,long &,long &>(
    (__int64)v23,
    (_DWORD *)this + 98,
    (int *)this + 99,
    (int *)this + 100,
    (int *)this + 101);
LABEL_20:
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::~ExperienceManager_FinalizeWindowPosition((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition *)v23);
  return 0LL;
}
