/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x140237B0C
 * Callers:
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140276408 (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x1402769F4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x140060AC0 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x140060B3C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     CheckGrantedAccess @ 0x1401768E8 (CheckGrantedAccess.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x14019E444 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     GetPhysicalScreenRect @ 0x1401E2F60 (GetPhysicalScreenRect.c)
 *     GetScreenRect @ 0x14022EE5C (GetScreenRect.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x140270A34 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline @ 0x1402770A4 (Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMouseEventDirect(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  unsigned int v10; // esi
  unsigned int v11; // ebx
  struct tagTHREADINFO *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // di
  __int64 v16; // rdx
  bool v17; // bl
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v28; // bl
  bool v29; // r14
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned int v42; // eax
  bool v43; // bl
  __int64 UserSessionState; // rax
  int v45; // r8d
  int v46; // edx
  int v48; // r8d
  unsigned int v49; // edx
  int v50; // eax
  unsigned int v51; // ecx
  unsigned int v52; // edx
  __int16 v53; // ax
  BOOL v54; // ebx
  __int16 v55; // ax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __m128i *ScreenRect; // rax
  __m128i v59; // xmm6
  int v60; // ebx
  int v61; // eax
  int v62; // ebx
  __int64 v63; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v65; // rdx
  __m128i *PhysicalScreenRect; // rax
  __int32 v67; // r8d
  __m128i v68; // xmm6
  unsigned int v69; // esi
  int v70; // eax
  __int64 v71; // rcx
  UIPrivilegeIsolation *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int16 v76; // [rsp+38h] [rbp-A1h]
  __int16 v77; // [rsp+38h] [rbp-A1h]
  _BYTE v78[4]; // [rsp+58h] [rbp-81h] BYREF
  INT a; // [rsp+5Ch] [rbp-7Dh]
  INT v80; // [rsp+60h] [rbp-79h]
  BOOL v81; // [rsp+64h] [rbp-75h]
  __int64 v82; // [rsp+68h] [rbp-71h] BYREF
  _DWORD v83[2]; // [rsp+70h] [rbp-69h] BYREF
  LARGE_INTEGER v84; // [rsp+78h] [rbp-61h]
  __m128i v85; // [rsp+80h] [rbp-59h] BYREF
  __int128 v86; // [rsp+90h] [rbp-49h] BYREF
  __int16 v87; // [rsp+A0h] [rbp-39h]
  __int16 v88; // [rsp+A2h] [rbp-37h]
  unsigned int v89; // [rsp+A4h] [rbp-35h]
  int v90; // [rsp+A8h] [rbp-31h]
  unsigned int v91; // [rsp+ACh] [rbp-2Dh]
  INT v92; // [rsp+B0h] [rbp-29h]
  int v93; // [rsp+B4h] [rbp-25h]

  v80 = a2;
  v88 = 0;
  a = a1;
  v10 = a2;
  v11 = a1;
  v12 = PtiCurrent(a1, a2);
  v15 = 1;
  if ( !(unsigned int)Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((_QWORD *)v12 + 62) != *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19144) )
    {
      SetLastNtError(-1073741790);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v15 = 0;
      }
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v20 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16) + 69160);
      v76 = 24;
LABEL_19:
      LOBYTE(v19) = v17;
      LOBYTE(v18) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v19,
        v20,
        2,
        20,
        v76,
        (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
      return 0LL;
    }
    if ( !(unsigned int)CheckGrantedAccess(*((_DWORD *)v12 + 234), 0x20u) )
    {
      v23 = *(_QWORD *)(W32GetUserGdiSessionState(v22) + 40);
      if ( PsGetCurrentProcess(v24) != v23 )
      {
        SetLastNtError(-1073741790);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
        {
          v15 = 0;
        }
        v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v20 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25) + 69160);
        v76 = 25;
        goto LABEL_19;
      }
      v11 = a;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v22, v21) + 18944)
      && *(struct tagTHREADINFO **)(W32GetUserSessionState(v27, v26) + 18944) != v12 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
      {
        v28 = 0;
      }
      v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v28 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 1LL;
      v32 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26) + 69160);
      v77 = 26;
      goto LABEL_38;
    }
    if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1LL, v26) )
    {
      MSGLUA_GPQFOREGROUND(v34, v33);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
      {
        v28 = 0;
      }
      v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v28 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 1LL;
      v32 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v35) + 69160);
      v77 = 27;
LABEL_38:
      LOBYTE(v31) = v29;
      LOBYTE(v30) = v28;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v30,
        v31,
        v32,
        2,
        20,
        v77,
        (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
      return 1LL;
    }
  }
  LODWORD(v36) = a5;
  EtwTraceBeginInjectMouse((unsigned int)a5, v11, v10);
  if ( a5 )
  {
    PerformanceCounter.QuadPart = a6;
  }
  else
  {
    v36 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  v84 = PerformanceCounter;
  InputTraceLogging::Mouse::InjectInput();
  v38 = *((_QWORD *)v12 + 58);
  *(_QWORD *)(W32GetUserSessionState(v40, v39) + 18832) = v38;
  if ( !(unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    v42 = ((a4 >> 18) & 1) + 1;
    if ( (a4 & 0x10000) == 0 )
      v42 = (a4 >> 18) & 1;
    if ( v42 > 1 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v15 = 0;
      }
      v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v41);
        LOBYTE(v45) = v43;
        LOBYTE(v46) = v15;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v46,
          v45,
          *(_QWORD *)(UserSessionState + 69160),
          2,
          20,
          28,
          (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids,
          a4);
      }
      return 0LL;
    }
  }
  v48 = 0;
  v49 = a4 & 0x187E;
  if ( ((a4 & 0x800) != 0 || (a4 & 0x1000) != 0) && (a4 & 0x180) != 0 )
  {
    v49 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) == 0x1800 )
  {
    v49 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) != 0 )
  {
    v48 = 0x7FFF;
    v50 = -32768;
    if ( a3 >= -32768 )
      v50 = a3;
    if ( v50 < 0x7FFF )
    {
      v48 = -32768;
      if ( a3 >= -32768 )
        v48 = a3;
    }
  }
  else if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( (a4 & 0x80u) != 0 )
    {
      if ( (a3 & 1) != 0 )
        v49 |= 0x80u;
      if ( (a3 & 2) != 0 )
        v49 |= 0x200u;
    }
    v51 = v49;
    if ( (a4 & 0x100) != 0 )
    {
      v49 |= 0x100u;
      if ( (a3 & 1) == 0 )
        v49 = v51;
      if ( (a3 & 2) != 0 )
        v49 |= 0x400u;
    }
  }
  v52 = v49 >> 1;
  v87 = -2;
  v53 = (a4 & 0x8000) != 0;
  v88 = v53;
  if ( (a4 & 0x4000) != 0 )
  {
    v53 |= 2u;
    v88 = v53;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v53 |= 8u;
    v88 = v53;
  }
  if ( (a4 & 0x20000) != 0 )
  {
    v53 |= 0x20u;
    v88 = v53;
  }
  if ( (a4 & 0x10000) != 0 )
  {
    v53 |= 0x10u;
    v88 = v53;
  }
  if ( (a4 & 0x40000) != 0 )
    v88 = v53 | 0x40;
  v54 = 0;
  v89 = v52;
  v55 = HIWORD(v52);
  if ( (a4 & 0x40000) == 0 )
    v54 = (a4 & 0x10000) == 0;
  v81 = v54;
  if ( v48 )
    v55 = v48;
  HIWORD(v89) = v55;
  if ( (a4 & 0xC001) != 0xC001
    || (W32GetCurrentThreadDpiAwarenessContext(49153LL) & 0xF) == 2
    || ***(_DWORD ***)(W32GetUserSessionState(v57, v56) + 56968) <= 1u )
  {
    v69 = a;
  }
  else
  {
    ScreenRect = GetScreenRect(&v85);
    v59 = *ScreenRect;
    v60 = _mm_cvtsi128_si32(*ScreenRect);
    v61 = v60 + EngMulDiv(a, ScreenRect->m128i_i32[2] - v60, 0xFFFF);
    v62 = _mm_cvtsi128_si32(_mm_srli_si128(v59, 4));
    v83[0] = v61;
    v82 = 0LL;
    v83[1] = v62 + EngMulDiv(v80, _mm_cvtsi128_si32(_mm_srli_si128(v59, 12)) - v62, 0xFFFF);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v63);
    LogicalToPhysicalDPIPoint(&v82, v83, CurrentThreadDpiAwarenessContext, 0LL);
    PhysicalScreenRect = (__m128i *)GetPhysicalScreenRect(&v86, v65);
    v67 = PhysicalScreenRect->m128i_i32[2];
    v68 = *PhysicalScreenRect;
    LODWORD(PhysicalScreenRect) = _mm_cvtsi128_si32(*PhysicalScreenRect);
    v69 = EngMulDiv(v82 - (_DWORD)PhysicalScreenRect, 0xFFFF, v67 - (_DWORD)PhysicalScreenRect);
    v70 = _mm_cvtsi128_si32(_mm_srli_si128(v68, 4));
    v80 = EngMulDiv(HIDWORD(v82) - v70, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v68, 12)) - v70);
  }
  v90 = 0;
  v92 = v80;
  v93 = a7;
  v91 = v69;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v78, 1);
  if ( (a4 & 1) == 0 )
  {
    v91 = 0;
    v92 = 0;
    v88 &= ~1u;
  }
  if ( !(unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline(v71) )
    UIPrivilegeIsolation::Enforced(v72);
  SynthesizeMouseInput(0LL);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v78);
  if ( a8 )
    xxxProcessMouseEvent(v74);
  if ( (*(_DWORD *)(W32GetUserSessionState(v74, v73) + 66800) & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput(v75);
  EtwTraceEndInjectMouse((unsigned int)v36, v69, (unsigned int)v80);
  return 1LL;
}
