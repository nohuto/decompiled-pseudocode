/*
 * XREFs of ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D36E0
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1400D3070 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     rimDoUpdateInputGlobalsWorkItem @ 0x1400D5320 (rimDoUpdateInputGlobalsWorkItem.c)
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     NtMITUpdateInputGlobals @ 0x140163340 (NtMITUpdateInputGlobals.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?UpdateInputGlobals@Power@InputTraceLogging@@SAXW4_LINP_SOURCE@@GK@Z @ 0x1400D3CC4 (-UpdateInputGlobals@Power@InputTraceLogging@@SAXW4_LINP_SOURCE@@GK@Z.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1400D3E48 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     EtwTraceDisplayTimeoutReset @ 0x1400D47F4 (EtwTraceDisplayTimeoutReset.c)
 *     EditionKeepMachineUp @ 0x1400D4908 (EditionKeepMachineUp.c)
 *     McTemplateK0qqm_EtwWriteTransfer @ 0x140128720 (McTemplateK0qqm_EtwWriteTransfer.c)
 *     ApiSetTraceLoggingUserIsActive @ 0x1401A2668 (ApiSetTraceLoggingUserIsActive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall CInputGlobals::UpdateInputGlobals(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int16 a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // esi
  unsigned int v8; // r15d
  int v11; // ecx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  signed __int32 *v17; // rcx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  LONGLONG TimeQuadPart; // rbx
  __int64 v24; // rcx
  int v25; // edx
  int v26; // r8d
  __int64 UserSessionState; // rax
  int v28; // r8d
  unsigned __int64 v29; // rdx
  unsigned int v30; // ecx
  unsigned __int16 v31; // cx
  __int64 v32; // rcx
  int (*v33)(void); // rax
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rcx
  int v39; // edx
  int v40; // r8d
  __int64 v41; // rax
  int v42; // edx
  int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rax
  int CurrentWin32kSessionId; // eax
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // rax
  LONGLONG v51; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v8 = 0;
  if ( (a6 & 0x20) != 0 )
  {
    switch ( a3 )
    {
      case 1:
        v11 = 4;
        break;
      case 3:
        v11 = 2;
        break;
      case 11:
        v11 = 8;
        break;
      case 13:
        v11 = 16;
        break;
      case 17:
        v11 = 32;
        break;
      default:
        v11 = 0;
        break;
    }
    if ( (v11 & *(_DWORD *)(a1 + 148)) != 0 )
      v6 = a6 | 4;
    switch ( a3 )
    {
      case 1:
        v12 = 4;
        break;
      case 3:
        v12 = 2;
        break;
      case 11:
        v12 = 8;
        break;
      case 13:
        v12 = 16;
        break;
      case 17:
        v12 = 32;
        break;
      default:
        v12 = 0;
        break;
    }
    if ( (v12 & *(_DWORD *)(a1 + 144)) != 0 )
      v6 |= 2u;
  }
  InputTraceLogging::Power::UpdateInputGlobals((unsigned int)a3, a4, v6);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v17 = *(signed __int32 **)(W32GetUserSessionState(v14, v13, v15) + 19904);
  if ( _bittest(v17, 0xDu) )
  {
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1);
    return 1;
  }
  *(_DWORD *)(a1 + 136) = a3;
  *(_BYTE *)(a1 + 140) = (v6 & 8) != 0;
  if ( a3 != 1 )
  {
    v17 = *(signed __int32 **)(W32GetUserSessionState((_DWORD)v17, v16, v18) + 19904);
    _InterlockedAnd(v17, 0xFFFFFFBF);
  }
  if ( (v6 & 0x10) == 0 )
  {
    if ( (unsigned __int64)(a2 - *(_QWORD *)(a1 + 64)) > 0x1F4 )
    {
      LODWORD(v51) = W32GetCurrentWin32kSessionId((__int64)v17);
      if ( (int)ZwUpdateWnfStateData(&WNF_ISM_LAST_USER_ACTIVITY, 0LL, 0LL, 0LL, &v51, 0, 0) < 0 )
      {
        a6 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 255LL);
      }
      *(_QWORD *)(a1 + 64) = a2;
      v50 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 128) = v50;
      *(_QWORD *)(a1 + 72) = v50 + 1;
    }
    if ( !*(_DWORD *)(W32GetUserSessionState((_DWORD)v17, v16, v18) + 19112) || (v6 & 8) == 0 )
    {
      EtwTraceDisplayTimeoutReset(*(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 8) = a2;
      if ( a3 <= 11 )
      {
        if ( a3 == 11 || a3 == 1 || a3 == 3 || a3 == 4 || a3 == 5 || a3 == 9 )
          goto LABEL_22;
      }
      else if ( a3 == 13 || a3 == 14 || (unsigned int)(a3 - 16) <= 1 )
      {
LABEL_22:
        v19 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 80) = v19;
        *(_QWORD *)(a1 + 72) = v19 + 1;
        *(_QWORD *)(a1 + 16) = a2;
      }
    }
  }
  ExReleasePushLockExclusiveEx(a1);
  KeLeaveCriticalRegion();
  TimeQuadPart = 0LL;
  v24 = *(_QWORD *)(W32GetUserSessionState(v21, v20, v22) + 19904);
  *(_DWORD *)(v24 + 4968) = a2;
  UserSessionState = W32GetUserSessionState(v24, v25, v26);
  v29 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v30 = v29 - *(_DWORD *)(UserSessionState + 69160);
  if ( v30 >= 0xEA60 )
  {
    *(_DWORD *)(UserSessionState + 69160) = v29;
    if ( *(_QWORD *)(W32GetUserSessionState(v30, v29, v28) + 18944) )
    {
      v38 = *(_QWORD *)(W32GetUserSessionState(v36, v35, v37) + 18944);
      v8 = *(_DWORD *)(*(_QWORD *)(v38 + 456) + 56LL);
      v41 = W32GetUserSessionState(v38, v39, v40);
      v44 = 0LL;
      if ( **(_QWORD **)(*(_QWORD *)(v41 + 18944) + 456LL) )
      {
        v45 = W32GetUserSessionState(0, v42, v43);
        TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(*(_QWORD *)(v45 + 18944) + 456LL));
        v51 = TimeQuadPart;
        goto LABEL_67;
      }
    }
    else
    {
      v44 = 0LL;
    }
    v51 = 0LL;
LABEL_67:
    if ( (W32kEtwEnabledKeyword & 0x8000000000020000uLL) != 0
      && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
      && (qword_1402A9DC0 & 0x8000000000020000uLL) != 0
      && (qword_1402A9DC8 & 0x8000000000020000uLL) == qword_1402A9DC8
      && (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v44);
      McTemplateK0qqm_EtwWriteTransfer(v48, v47, v49, CurrentWin32kSessionId, v8, (__int64)&v51);
    }
    ApiSetTraceLoggingUserIsActive(v8, TimeQuadPart);
  }
  if ( (v6 & 0x10) == 0 )
  {
    switch ( a3 )
    {
      case 1:
        if ( (v6 & 0x40) != 0 )
        {
          v31 = 512;
        }
        else if ( (v6 & 8) != 0 )
        {
          v31 = 1024;
        }
        else
        {
          v31 = 1;
        }
        break;
      case 3:
        if ( (v6 & 8) != 0 )
          v31 = 2048;
        else
          v31 = 2;
        break;
      case 4:
        v31 = 16;
        break;
      case 5:
        v31 = 32;
        break;
      case 11:
        if ( (v6 & 8) != 0 )
          v31 = 4096;
        else
          v31 = 4;
        break;
      case 13:
        if ( (v6 & 8) != 0 )
        {
          v31 = 0x2000;
        }
        else if ( (v6 & 0x80u) == 0 )
        {
          v31 = 8;
        }
        else
        {
          v31 = 0x8000;
        }
        break;
      case 17:
        if ( (v6 & 8) != 0 )
          v31 = 0x4000;
        else
          v31 = 256;
        break;
      default:
        v31 = 0;
        break;
    }
    CitpLastInputUpdate(v31, a2);
    v33 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v32) + 48) + 3936LL);
    if ( v33 )
    {
      if ( v33() >= 0 )
        EditionKeepMachineUp((unsigned int)a2, (unsigned int)a3, a5, v6);
    }
  }
  return 1;
}
