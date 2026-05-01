/*
 * XREFs of ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038DF00
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038B5C0 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x1801A78F0 (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801E24E0 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1801E73CC (--1RoVariant@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C28B8 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x180386100 (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ??$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAH0@Z @ 0x180388890 (--$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition.c)
 *     ??$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAJ000@Z @ 0x18038891C (--$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateW.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180388F8C (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_180388F8C.c)
 *     ??1ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAA@XZ @ 0x180389524 (--1ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x18038A63C (-FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x18038A7C8 (-FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x18038C9C4 (-StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18038CA64 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CQuickConnectExperienceManager::UpdateWindowPosition(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // r12d
  int v5; // r13d
  int v6; // eax
  unsigned int LastError; // ebx
  __int64 v8; // rbx
  void (__fastcall *v9)(__int64, __int64, LONG *); // rdi
  __int64 *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  int Int32; // eax
  __int64 v14; // rdx
  float v15; // xmm0_4
  float v16; // xmm1_4
  HMONITOR v17; // rax
  const char *v18; // r9
  __int64 v19; // rdx
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  LONG v22; // [rsp+38h] [rbp-C8h]
  struct tagRECT rcWork; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  RECT rc; // [rsp+70h] [rbp-90h] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-40h]
  __int64 v33[42]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v33,
    (__int64)"ExperienceManager_UpdateWindowPosition");
  v33[0] = (__int64)&QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::`vftable';
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::StartActivity((QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *)v33);
  v4 = (int)*((float *)a2 + 11);
  v27 = v4;
  v5 = (int)*((float *)a2 + 12);
  v26 = v5;
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_Params<int &,int &>(
    (__int64)v33,
    &v27,
    &v26);
  v28 = 0LL;
  v6 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4,
         &v28);
  LastError = v6;
  if ( v6 >= 0 )
  {
    v21 = 0LL;
    v22 = 0;
    v8 = v28;
    v9 = *(void (__fastcall **)(__int64, __int64, LONG *))(*(_QWORD *)v28 + 48LL);
    *(_QWORD *)&rcWork.left = &v21;
    *(_QWORD *)&rcWork.right = 0LL;
    v32 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MaxHeight", 0xAu, 9u);
    v9(v8, v32, &rcWork.right);
    v32 = 0LL;
    v10 = *(__int64 **)&rcWork.left;
    RoVariant::RoVariant((RoVariant *)&v24, *(struct IInspectable **)&rcWork.right);
    v11 = v24;
    v24 = 0LL;
    LODWORD(v9) = v25;
    v25 = 0;
    RoVariant::~RoVariant((RoVariant *)&v24);
    v12 = *v10;
    *v10 = v11;
    v24 = v12;
    LODWORD(v12) = *((_DWORD *)v10 + 2);
    *((_DWORD *)v10 + 2) = (_DWORD)v9;
    v25 = v12;
    RoVariant::~RoVariant((RoVariant *)&v24);
    if ( v21 )
    {
      *(_QWORD *)&rcWork.left = v21;
      rcWork.right = v22;
      Int32 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&rcWork, (int *)this + 96);
      LastError = Int32;
      if ( Int32 < 0 )
      {
        v14 = 821LL;
        goto LABEL_6;
      }
    }
    v15 = *((float *)this + 86);
    rc.left = (int)v15;
    v16 = *((float *)this + 87);
    rc.top = (int)v16;
    rc.right = (int)(float)(v15 + *((float *)this + 88));
    rc.bottom = (int)(float)(v16 + *((float *)this + 89));
    v17 = MonitorFromRect(&rc, 0);
    if ( v17 == (HMONITOR)-1LL )
    {
      v19 = 833LL;
    }
    else
    {
      mi.cbSize = 40;
      memset(&mi.rcMonitor, 0, 36);
      if ( GetMonitorInfoW(v17, &mi) )
      {
        rcWork = mi.rcWork;
        Int32 = CQuickConnectExperienceManager::FinalizeWindowPlacement(this, v4, v5, &rcWork);
        LastError = Int32;
        if ( Int32 >= 0 )
        {
          Int32 = CQuickConnectExperienceManager::FinalizeWindowPosition(this, v4, v5, &rcWork);
          LastError = Int32;
          if ( Int32 >= 0 )
          {
            if ( *((_QWORD *)a2 + 3) )
            {
              Int32 = CSingleViewShellExperience::SetPosition(a2, (const struct tagRECT *)((char *)this + 392));
              LastError = Int32;
              if ( Int32 < 0 )
              {
                v14 = 850LL;
                goto LABEL_6;
              }
              QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_SetPosition<long &,long &,long &,long &>(
                (__int64)v33,
                (_DWORD *)this + 98,
                (int *)this + 99,
                (int *)this + 100,
                (int *)this + 101);
            }
            wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v33);
            RoVariant::~RoVariant((RoVariant *)&v21);
            LastError = 0;
            goto LABEL_22;
          }
          v14 = 845LL;
        }
        else
        {
          v14 = 842LL;
        }
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)Int32);
LABEL_7:
        RoVariant::~RoVariant((RoVariant *)&v21);
        goto LABEL_22;
      }
      v19 = 835LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v19,
                  (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
                  v18);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32E,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_22:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::~ExperienceManager_UpdateWindowPosition((QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *)v33);
  return LastError;
}
