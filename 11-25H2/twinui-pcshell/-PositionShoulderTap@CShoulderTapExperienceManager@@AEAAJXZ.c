/*
 * XREFs of ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x18037D3D8
 * Callers:
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18037D0D0 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001BAEC (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801E24E0 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802B34F0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG$$QEAHAEAJ22222222222@Z @ 0x18037C7DC (--$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExper.c)
 *     ?GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18037CE80 (-GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 *     ?IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z @ 0x18037D078 (-IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z.c)
 *     ?PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z @ 0x18037D970 (-PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?get@?$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAAPEAVShoulderTapExperienceManagerTelemetry@@P6AXXZ@Z @ 0x18037E354 (-get@-$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAAPEAVShoulderTapExpe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShoulderTapExperienceManager::PositionShoulderTap(CShoulderTapExperienceManager *this)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  ShoulderTapExperienceManagerTelemetry *v5; // rcx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, PCWSTR, RECT *); // rbx
  PCWSTR v8; // rax
  int v9; // eax
  unsigned int LastError; // ebx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, SID *, GUID *, __int64 *); // rbx
  int v13; // eax
  ExperienceManagerUtils *v14; // r14
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, ExperienceManagerUtils *, SID *, GUID *, int *); // rdi
  int PeopleBarScreenEdge; // eax
  __int64 v18; // rdx
  unsigned int v19; // r9d
  LONG bottom; // eax
  UINT v21; // ebx
  LONG left; // eax
  HMONITOR v23; // r8
  const char *v24; // r9
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v25; // rdx
  __int64 v26; // r9
  HWND v27; // rax
  POINT anchorPoint; // [rsp+70h] [rbp-29h] BYREF
  SIZE windowSize; // [rsp+78h] [rbp-21h] BYREF
  int v31[2]; // [rsp+80h] [rbp-19h] BYREF
  int v32; // [rsp+88h] [rbp-11h] BYREF
  __int64 v33; // [rsp+90h] [rbp-9h] BYREF
  UINT32 length; // [rsp+98h] [rbp-1h] BYREF
  int v35; // [rsp+9Ch] [rbp+3h] BYREF
  PCWSTR v36; // [rsp+A0h] [rbp+7h] BYREF
  RECT rc; // [rsp+A8h] [rbp+Fh] BYREF
  RECT popupWindowPosition; // [rsp+B8h] [rbp+1Fh] BYREF
  RECT excludeRect; // [rsp+C8h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 34), 0LL);
  if ( ShoulderTapExperienceManagerTelemetry::IsEnabled(v3) )
  {
    wil::details::static_lazy<ShoulderTapExperienceManagerTelemetry>::get(
      v4,
      _lambda_43b277c613f9e9ea449b850c5995e33f_::_lambda_invoker_cdecl_);
    ShoulderTapExperienceManagerTelemetry::PositionShoulderTapStart_(v5, StringRawBuffer);
  }
  rc = 0LL;
  length = 0;
  v6 = *((_QWORD *)this + 32);
  v7 = *(__int64 (__fastcall **)(__int64, PCWSTR, RECT *))(*(_QWORD *)v6 + 112LL);
  v8 = WindowsGetStringRawBuffer(*((HSTRING *)this + 33), &length);
  v9 = v7(v6, v8, &rc);
  LastError = v9;
  if ( v9 >= 0 )
  {
    v33 = 0LL;
    v11 = *((_QWORD *)this + 31);
    v12 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v11 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    v13 = v12(v11, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v33);
    LastError = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_33:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      return LastError;
    }
    v14 = (ExperienceManagerUtils *)MonitorFromRect(&rc, 1u);
    *(_QWORD *)v31 = 0LL;
    v15 = v33;
    v16 = *(__int64 (__fastcall **)(__int64, ExperienceManagerUtils *, SID *, GUID *, int *))(*(_QWORD *)v33 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
    PeopleBarScreenEdge = v16(v15, v14, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v31);
    LastError = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v18 = 283LL;
LABEL_28:
      v26 = (unsigned int)PeopleBarScreenEdge;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)v26);
      goto LABEL_32;
    }
    v32 = -1;
    PeopleBarScreenEdge = CShoulderTapExperienceManager::GetPeopleBarScreenEdge(
                            this,
                            (enum EDGEUI_TRAYSTUCKPLACE *)&v32);
    LastError = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v18 = 286LL;
      goto LABEL_28;
    }
    excludeRect = 0LL;
    PeopleBarScreenEdge = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)v31 + 168LL))(
                            *(_QWORD *)v31,
                            &excludeRect);
    LastError = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v18 = 289LL;
      goto LABEL_28;
    }
    v19 = 184;
    windowSize.cx = 184;
    windowSize.cy = 184;
    if ( v32 == -1 )
      goto LABEL_30;
    if ( v32 )
    {
      if ( v32 == 1 )
      {
        anchorPoint.x = (rc.left + rc.right) / 2;
        bottom = rc.bottom;
        v21 = 65540;
        goto LABEL_19;
      }
      if ( v32 != 2 )
      {
        if ( v32 == 3 )
        {
          anchorPoint.x = (rc.left + rc.right) / 2;
          bottom = rc.top;
          v21 = 65572;
LABEL_19:
          windowSize.cy = 202;
LABEL_24:
          anchorPoint.y = bottom;
          windowSize.cx = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v19, v14, (HMONITOR)2);
          windowSize.cy = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                            (ExperienceManagerUtils *)(unsigned int)windowSize.cy,
                            v14,
                            v23);
          popupWindowPosition = 0LL;
          if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, v21, &excludeRect, &popupWindowPosition) )
          {
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x152,
                          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
                          v24);
LABEL_32:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
            goto LABEL_33;
          }
          PeopleBarScreenEdge = CSingleViewShellExperience::SetPosition(
                                  (CShoulderTapExperienceManager *)((char *)this + 40),
                                  &popupWindowPosition);
          LastError = PeopleBarScreenEdge;
          if ( PeopleBarScreenEdge >= 0 )
          {
            v27 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 8), v25);
            SetWindowPos(v27, 0LL, 0, 0, 0, 0, 0x13u);
            CSingleViewShellExperience::Show(
              (__int64)this + 40,
              (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
            v35 = v32;
            v36 = WindowsGetStringRawBuffer(*((HSTRING *)this + 34), 0LL);
            ShoulderTapExperienceManagerTelemetry::PositionShoulderTapEnd<unsigned short const *,int,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &>(
              &v36,
              &v35,
              (int *)&anchorPoint,
              &anchorPoint.y,
              (int *)&windowSize,
              &windowSize.cy,
              &rc.left,
              &rc.right,
              &excludeRect.top,
              &excludeRect.bottom,
              &popupWindowPosition.left,
              &popupWindowPosition.top,
              &popupWindowPosition.right,
              &popupWindowPosition.bottom);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
            return 0LL;
          }
          v18 = 339LL;
          goto LABEL_28;
        }
LABEL_30:
        LastError = -2147024809;
        v26 = 2147942487LL;
        v18 = 329LL;
        goto LABEL_31;
      }
      left = excludeRect.left;
      v21 = 65560;
    }
    else
    {
      left = excludeRect.right;
      v21 = 65552;
    }
    anchorPoint.x = left;
    v19 = 202;
    windowSize.cx = 202;
    bottom = (rc.bottom + rc.top) / 2;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x112,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
  return LastError;
}
