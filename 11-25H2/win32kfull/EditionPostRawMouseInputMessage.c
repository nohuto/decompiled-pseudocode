/*
 * XREFs of EditionPostRawMouseInputMessage @ 0x1402386D0
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x140177CAC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 * Callees:
 *     FreeHidData @ 0x1400C7E10 (FreeHidData.c)
 *     PtiMouseFromQ @ 0x14011F4F0 (PtiMouseFromQ.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14011F944 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     ?DeliverRawInput@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@QEAUtagHIDDATA@@PEBUtagRAWMOUSE@@_N@Z @ 0x140120BE0 (-DeliverRawInput@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@QEAUtagHIDDATA@@PEBUtagRAWMOUSE@@_N@Z.c)
 *     AllocateHidData @ 0x140120CE4 (AllocateHidData.c)
 *     ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x14017F348 (-FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z.c)
 *     RawInputRequestedForMouse @ 0x14017F49C (RawInputRequestedForMouse.c)
 *     ?SkipBackgroundListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@PEAXW4WhyBgInputSkipped@12@@Z @ 0x1401AC68C (-SkipBackgroundListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@PEAXW4WhyBgInpu.c)
 *     ?ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x140237898 (-ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_.c)
 *     Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline @ 0x1402750BC (Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall EditionPostRawMouseInputMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        struct tagRAWMOUSE *a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rax
  struct tagQ *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  void *v16; // rsi
  char v17; // bp
  LARGE_INTEGER *v18; // rdi
  __int64 HidData; // r14
  HWND QuadPart; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 *v24; // rdi
  int v25; // r9d
  __int64 v26; // rax
  int v27; // ecx
  __int64 i; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rcx
  const struct tagUIPI_INFO *v33; // r8
  __int64 v34; // rax
  int v35; // r8d
  __int64 v36; // rcx
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 j; // rcx
  __int64 v43; // [rsp+90h] [rbp-68h] BYREF
  int v44; // [rsp+98h] [rbp-60h]
  __int64 v45; // [rsp+A0h] [rbp-58h] BYREF
  int v46; // [rsp+A8h] [rbp-50h]

  v10 = 0LL;
  if ( !(unsigned int)RawInputRequestedForMouse(a1, a2) )
    return 0LL;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 92) == 2 )
      v11 = *(_QWORD *)(a1 + 80);
    else
      v11 = 0LL;
    v12 = *(struct tagQ **)(*(_QWORD *)(v11 + 16) + 472LL);
  }
  else
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18904) )
    {
      UserSessionState = W32GetUserSessionState(v14, v13);
      if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(*(_QWORD *)(UserSessionState + 18904)) )
        return 0LL;
    }
    v12 = *(struct tagQ **)(W32GetUserSessionState(v14, v13) + 18888);
  }
  if ( *(_DWORD *)a4 == 2 )
    v16 = *(void **)(a4 + 8);
  else
    v16 = 0LL;
  v17 = 1;
  if ( v12 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(PtiMouseFromQ((__int64)v12) + 464) + 824LL);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 100) & 1) != 0 )
      {
        FlushThrottledRawMouseInput((struct tagPROCESS_HID_TABLE *)v9, a3);
        v18 = *(LARGE_INTEGER **)(*(_QWORD *)(*(_QWORD *)(PtiMouseFromQ((__int64)v12) + 464) + 824LL) + 64LL);
        if ( !(unsigned int)Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline() && v18 )
          v12 = *(struct tagQ **)(v18[2].QuadPart + 472);
        Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline();
        HidData = AllocateHidData(v16, 0, 24LL, 0LL, (__int64)v18);
        if ( HidData )
        {
          if ( (unsigned int)Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline() )
          {
            v18 = *(LARGE_INTEGER **)(HidData + 24);
            v12 = *(struct tagQ **)(v18[2].QuadPart + 472);
          }
          QuadPart = 0LL;
          if ( v18 )
            QuadPart = (HWND)v18->QuadPart;
          InputTraceLogging::Mouse::DeliverRawInput(a2, QuadPart, (struct tagHIDDATA *const)HidData, a5, 0);
          *(_OWORD *)(HidData + 80) = *(_OWORD *)a5;
          *(_QWORD *)(HidData + 96) = *((_QWORD *)a5 + 2);
          if ( (unsigned int)PostInputMessage(
                               v12,
                               v18,
                               0xFFu,
                               0LL,
                               *(_QWORD *)HidData,
                               a3,
                               0LL,
                               *((unsigned int *)a5 + 5),
                               0,
                               0LL,
                               0LL,
                               0LL,
                               0,
                               0,
                               0LL) )
            v17 = 0;
          else
            FreeHidData(HidData);
          goto LABEL_27;
        }
        return 0LL;
      }
    }
  }
LABEL_27:
  if ( !*(_DWORD *)(W32GetUserSessionState(v9, v8) + 16852) )
    return 1LL;
  v24 = (__int64 *)(W32GetUserSessionState(v22, v21) + 224);
  v45 = 0LL;
  v46 = 0;
  if ( v12 )
  {
    v26 = PtiMouseFromQ((__int64)v12);
    v27 = *((_DWORD *)v12 + 112);
    v10 = *(_QWORD *)(v26 + 464);
    HIDWORD(v45) = *((_DWORD *)v12 + 113);
    LODWORD(v45) = v27;
  }
  for ( i = *v24; (__int64 *)i != v24; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 100) & 4) == 0 )
      continue;
    v29 = *(_QWORD *)(i + 64);
    if ( !v29 || (v30 = *(_QWORD *)(v29 + 40), *(char *)(v30 + 20) < 0) || *(char *)(v30 + 19) < 0 )
    {
      v35 = 0;
      goto LABEL_48;
    }
    v31 = *(_QWORD *)(*(_QWORD *)(v29 + 16) + 472LL);
    v32 = *(_QWORD *)(W32GetUserSessionState(v30, v23) + 19144);
    v34 = *(_QWORD *)(i + 64);
    if ( *(_QWORD *)(v34 + 24) != v32 )
    {
      v35 = 1;
LABEL_48:
      v38 = (__int64)v16;
      v39 = i;
      goto LABEL_49;
    }
    if ( !UIPrivilegeIsolation::CheckAccess(
            (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 464LL) + 864LL),
            (const struct tagUIPI_INFO *)&v45,
            v33) )
    {
      v36 = *(_QWORD *)(*(_QWORD *)(i + 64) + 16LL);
      if ( *(int *)(*(_QWORD *)(v36 + 464) + 12LL) >= 0 )
      {
        v43 = v45;
        v44 = v46;
        EtwTraceUIPIInputError(v36, 0LL, v31, &v43, 5);
        v35 = 2;
        goto LABEL_48;
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i + 64) + 16LL) + 464LL) == v10 )
      continue;
    if ( (*(_DWORD *)(i + 100) & 8) != 0 && !v17 )
    {
      v35 = 3;
      goto LABEL_48;
    }
    v37 = ThrottleRawMouseInputToBackgroundListener((struct tagPROCESS_HID_TABLE *)i, v16, a5, a2, a3);
    v38 = (__int64)v16;
    v39 = i;
    if ( !v37 )
    {
      PostRawMouseInputToBackgroundListener((struct tagPROCESS_HID_TABLE *)i, v16, a5, a2, a3);
      continue;
    }
    v35 = 4;
LABEL_49:
    InputTraceLogging::RawInput::SkipBackgroundListener(v39, v38, v35, v25);
  }
  if ( (unsigned __int8)RawMouseThrottlingTimerActive() )
  {
    for ( j = *v24; (__int64 *)j != v24; j = *(_QWORD *)j )
    {
      if ( (*(_DWORD *)(j + 100) & 1) != 0 && *(_DWORD *)(j + 112) == 2 )
        return 1LL;
    }
    ArmRawMouseThrottlingTimer(0LL, 0LL);
  }
  return 1LL;
}
