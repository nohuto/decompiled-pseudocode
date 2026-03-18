/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14010AB30
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     HMValidateSharedHandleNoRip @ 0x140082658 (HMValidateSharedHandleNoRip.c)
 *     PhysicalToLogicalDPIPoint @ 0x1400847A0 (PhysicalToLogicalDPIPoint.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1400CCB98 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ApiSetEditionPostInputMessage @ 0x1400CE394 (ApiSetEditionPostInputMessage.c)
 *     IsWindowDesktopComposed @ 0x1400FD7B0 (IsWindowDesktopComposed.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x14010AEE0 (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x14010B160 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x14010B214 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x14012D9A4 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1401330B0 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14016C0A8 (_anonymous_namespace_--ValidateUIPI.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
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
  int v11; // r8d
  _OWORD *InputDestFromForegroundCapture; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  int HardwareButton; // eax
  bool v20; // zf
  char v22; // bl
  bool v23; // si
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  struct tagWND *UserWindow; // rax
  struct tagWND *v28; // rbx
  unsigned int DpiAwarenessContext; // eax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // xmm0_8
  int v36; // eax
  __int64 v37; // r8
  struct tagWND *v38; // rax
  __int64 *v39; // r8
  struct tagWND *v40; // rax
  unsigned int v41; // r8d
  __int64 *v42; // r9
  __int64 PtiFromInputDest; // rax
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v48; // [rsp+70h] [rbp-90h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h]
  _OWORD v50[7]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v51[112]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v52[20]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v53; // [rsp+1C0h] [rbp+C0h] BYREF
  int v54; // [rsp+1CCh] [rbp+CCh]

  v10 = *(_QWORD *)(W32GetUserSessionState((_DWORD)this, (_DWORD)a2, (_DWORD)a3) + 19632);
  if ( (*(_DWORD *)(v10 + 8) & 2) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v22 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        6,
        42,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    return 1;
  }
  InputDestFromForegroundCapture = (_OWORD *)QHelper::GetInputDestFromForegroundCapture(v51);
  v13 = InputDestFromForegroundCapture[1];
  v50[0] = *InputDestFromForegroundCapture;
  v14 = InputDestFromForegroundCapture[2];
  v50[1] = v13;
  v15 = InputDestFromForegroundCapture[3];
  v50[2] = v14;
  v16 = InputDestFromForegroundCapture[4];
  v50[3] = v15;
  v17 = InputDestFromForegroundCapture[5];
  v50[4] = v16;
  v18 = InputDestFromForegroundCapture[6];
  v50[5] = v17;
  v50[6] = v18;
  CInputDest::CInputDest((CInputDest *)v52, (const struct tagINPUTDEST *)v50);
  if ( !v52[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v52) )
    goto LABEL_4;
  UserWindow = CInputDest::GetUserWindow((CInputDest *)v52);
  v28 = UserWindow;
  if ( !UserWindow || (unsigned int)IsWindowDesktopComposed((__int64)UserWindow) )
  {
    CInputDest::GetDpiAwarenessContext(a2);
    DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v52);
    LOWORD(v31) = (DpiAwarenessContext >> 8) ^ v31;
    if ( (v31 & 0x1FF) != 0 )
    {
      v47 = 0LL;
      if ( v28 )
        v32 = HMValidateSharedHandleNoRip(*(_QWORD *)(*((_QWORD *)v28 + 5) + 256LL), v31, v30);
      else
        v32 = 0LL;
      *(_QWORD *)&v48 = v32;
      v33 = CInputDest::GetDpiAwarenessContext((CInputDest *)v52);
      PhysicalToLogicalDPIPoint((__int64)&v47, (__int64 *)&a5, v33, (__int64 *)&v48);
      a4 = (unsigned __int16)v47 | (WORD2(v47) << 16);
    }
  }
  v34 = *((_QWORD *)a3 + 1);
  if ( *(_DWORD *)(v34 + 116) == 1
    || (v35 = *(_QWORD *)(v34 + 144),
        v36 = *(_DWORD *)(v34 + 152),
        *(_QWORD *)&v48 = v35,
        DWORD2(v48) = v36,
        (unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v48, (CInputDest *)v52)) )
  {
    v49 = 0LL;
    v48 = 0LL;
    v38 = CInputDest::GetUserWindow((CInputDest *)v52);
    ApiSetEditionPostInputMessage((__int64)v52, (__int64)v38, a6, 0LL, a4, 0, 0LL, 0LL, 0, v39, (__int64)&v48);
    v40 = CInputDest::GetUserWindow((CInputDest *)v52);
    ApiSetEditionPostInputMessage((__int64)v52, (__int64)v40, v41, 0LL, a4, 0, 0LL, 0LL, 0, v42, (__int64)&v48);
  }
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v52, 2LL, v37);
  if ( !PtiFromInputDest
    || !*(_QWORD *)(PtiFromInputDest + 704)
    || (v45 = anonymous_namespace_::GetPtiFromInputDest(v52, 2LL, v44)) != 0
    && (v46 = *(_QWORD *)(v45 + 640)) != 0
    && (*(_DWORD *)(v46 + 8) & 1) != 0 )
  {
LABEL_4:
    HardwareButton = CMouseProcessor::CButtonEvent::GetHardwareButton(a3);
    v20 = (HardwareButton | *((_DWORD *)this + 945)) == 0;
    *((_DWORD *)this + 945) |= HardwareButton;
    if ( v20 )
    {
      LODWORD(v47) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4393LL);
    }
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3784), a2);
    if ( v54 )
      HMAssignmentUnlock(&v53);
    return 1;
  }
  CInputDest::~CInputDest((CInputDest *)v52);
  return 0;
}
