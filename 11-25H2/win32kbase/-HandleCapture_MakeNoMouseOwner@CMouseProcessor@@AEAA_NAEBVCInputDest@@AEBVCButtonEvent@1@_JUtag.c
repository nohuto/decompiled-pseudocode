/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x140220B58
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     PhysicalToLogicalDPIPoint @ 0x140041FA0 (PhysicalToLogicalDPIPoint.c)
 *     HMValidateSharedHandleNoRip @ 0x140064D58 (HMValidateSharedHandleNoRip.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1400B7CE0 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     IsWindowDesktopComposed @ 0x1400BD0E0 (IsWindowDesktopComposed.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E67D0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1400E88C4 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x140124C94 (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ApiSetEditionPostInputMessage @ 0x140196610 (ApiSetEditionPostInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x140220800 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x140222170 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1402225F8 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

char __fastcall CMouseProcessor::HandleCapture_MakeNoMouseOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4,
        struct tagPOINT a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  char v11; // bl
  bool v12; // si
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  _OWORD *InputDestFromForegroundCapture; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  char v24; // di
  struct tagWND *UserWindow; // rax
  struct tagWND *v26; // rbx
  unsigned int DpiAwarenessContext; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // xmm0_8
  int v33; // eax
  struct tagWND *v34; // rax
  __int64 *v35; // r8
  struct tagWND *v36; // rax
  unsigned int v37; // r8d
  __int64 *v38; // r9
  __int64 PtiFromInputDest; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  int HardwareButton; // eax
  bool v43; // zf
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h]
  _OWORD v47[7]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v48[7]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v49[32]; // [rsp+170h] [rbp+70h] BYREF

  v10 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 19600);
  if ( (*(_DWORD *)(v10 + 8) & 2) != 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        6,
        42,
        (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
    }
    return 1;
  }
  else
  {
    InputDestFromForegroundCapture = QHelper::GetInputDestFromForegroundCapture(v48);
    v18 = InputDestFromForegroundCapture[1];
    v47[0] = *InputDestFromForegroundCapture;
    v19 = InputDestFromForegroundCapture[2];
    v47[1] = v18;
    v20 = InputDestFromForegroundCapture[3];
    v47[2] = v19;
    v21 = InputDestFromForegroundCapture[4];
    v47[3] = v20;
    v22 = InputDestFromForegroundCapture[5];
    v47[4] = v21;
    v23 = InputDestFromForegroundCapture[6];
    v47[5] = v22;
    v47[6] = v23;
    CInputDest::CInputDest((CInputDest *)v49, (const struct tagINPUTDEST *)v47);
    v24 = 0;
    if ( !v49[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v49) )
      goto LABEL_27;
    UserWindow = CInputDest::GetUserWindow((CInputDest *)v49);
    v26 = UserWindow;
    if ( !UserWindow || (unsigned int)IsWindowDesktopComposed((__int64)UserWindow) )
    {
      CInputDest::GetDpiAwarenessContext(a2);
      DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v49);
      LOWORD(v28) = (DpiAwarenessContext >> 8) ^ v28;
      if ( (v28 & 0x1FF) != 0 )
      {
        v44 = 0LL;
        if ( v26 )
          v29 = HMValidateSharedHandleNoRip(*(_QWORD *)(*((_QWORD *)v26 + 5) + 256LL), v28);
        else
          v29 = 0LL;
        *(_QWORD *)&v45 = v29;
        v30 = CInputDest::GetDpiAwarenessContext((CInputDest *)v49);
        PhysicalToLogicalDPIPoint((__int64)&v44, (__int64 *)&a5, v30, (__int64 *)&v45);
        a4 = (unsigned __int16)v44 | (WORD2(v44) << 16);
      }
    }
    v31 = *((_QWORD *)a3 + 1);
    if ( *(_DWORD *)(v31 + 116) == 1
      || (v32 = *(_QWORD *)(v31 + 144),
          v33 = *(_DWORD *)(v31 + 152),
          *(_QWORD *)&v45 = v32,
          DWORD2(v45) = v33,
          (unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v45)) )
    {
      v46 = 0LL;
      v45 = 0LL;
      v34 = CInputDest::GetUserWindow((CInputDest *)v49);
      ApiSetEditionPostInputMessage((__int64)v49, (__int64)v34, a6, 0LL, a4, 0, 0LL, 0LL, 0, v35, (__int64)&v45);
      v36 = CInputDest::GetUserWindow((CInputDest *)v49);
      ApiSetEditionPostInputMessage((__int64)v49, (__int64)v36, v37, 0LL, a4, 0, 0LL, 0LL, 0, v38, (__int64)&v45);
    }
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((CInputDest *)v49, 2LL);
    if ( !PtiFromInputDest
      || !*(_QWORD *)(PtiFromInputDest + 712)
      || (v40 = anonymous_namespace_::GetPtiFromInputDest((CInputDest *)v49, 2LL)) != 0
      && (v41 = *(_QWORD *)(v40 + 648)) != 0
      && (*(_DWORD *)(v41 + 8) & 1) != 0 )
    {
LABEL_27:
      HardwareButton = CMouseProcessor::CButtonEvent::GetHardwareButton((__int64)a3);
      v43 = (HardwareButton | *((_DWORD *)this + 943)) == 0;
      *((_DWORD *)this + 943) |= HardwareButton;
      if ( v43 )
      {
        LODWORD(v44) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4383);
      }
      CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3776), a2);
      v24 = 1;
    }
    CInputDest::~CInputDest((CInputDest *)v49);
    return v24;
  }
}
