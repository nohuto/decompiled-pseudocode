/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x14005A710
 * Callers:
 *     ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x14005A104 (-RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     NtUserRemoveInjectionDevice @ 0x1401B83E0 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1401FDF14 (RIMIDEProcessRemoveInjectionDevices.c)
 *     RIMRemoveInjectionDevice @ 0x1402023F0 (RIMRemoveInjectionDevice.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021F140 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 *     RIMFreeDev @ 0x140092664 (RIMFreeDev.c)
 *     RIMFreeSpecificDev @ 0x14009270C (RIMFreeSpecificDev.c)
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMIDERemoveInjectionDevice(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rsi
  int v5; // r8d
  int v6; // eax
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rbx
  int v15; // edx
  int v16; // r8d
  char v17; // bl
  bool v18; // bp
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rax
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // rax

  v2 = 1;
  if ( (*(_DWORD *)(a1 + 240) & 0x2000) == 0 || (*(_DWORD *)(a1 + 256) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1619LL);
  v3 = *(_QWORD *)(a1 + 392);
  RIMLockExclusive(v3 + 760);
  if ( (*(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xB8) & 0x80u) != 0
    && !*(_BYTE *)(v3 + 80)
    && !*(_BYTE *)(v3 + 81) )
  {
    rimEndAllActiveContactsWorker((struct RawInputManagerObject *)v3);
  }
  if ( (*(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xA8) & 0x20) == 0
    && *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x30) != 3 )
  {
    v6 = *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xAC);
    if ( (v6 & 8) != 0 || *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xB0) || (v6 & 0x10) != 0 )
    {
      v4 = (a1 + 72) & -(__int64)(a1 != 0);
      *(_DWORD *)(v4 + 184) |= 1u;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        LOBYTE(v2) = 0;
      }
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(
                             (_DWORD)WPP_GLOBAL_Control,
                             (unsigned int)&WPP_RECORDER_INITIALIZED,
                             v5);
        LOBYTE(v9) = v7;
        LOBYTE(v10) = v2;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v10,
          v9,
          *(_QWORD *)(UserSessionState + 19368),
          4,
          1,
          55,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
          a1 != 0 ? a1 + 72 : 0);
      }
      v2 = 0;
    }
  }
  RIMUnlockExclusive(v3 + 760);
  if ( v2 )
  {
    if ( (*(_QWORD *)(v3 + 832) || *(_DWORD *)(v3 + 1056))
      && (v14 = *(_QWORD *)(v3 + 32), v14 != PsGetCurrentProcess(v12))
      || *(_BYTE *)(v3 + 82) )
    {
      *(_DWORD *)(a1 + 240) |= 0x100000u;
      v22 = W32GetUserSessionState(v12, v11, v13);
      RIMLockExclusive(v22 + 56);
      *(_DWORD *)(a1 + 256) |= 4u;
      v26 = W32GetUserSessionState(v24, v23, v25);
      RIMUnlockExclusive(v26 + 56);
      *(_DWORD *)(a1 + 240) |= 0x800000u;
      ZwSetEvent(*(HANDLE *)(v3 + 344), 0LL);
    }
    else
    {
      rimDoRimDevChange(v3, (a1 + 72) & -(__int64)(a1 != 0), 3LL);
      if ( *(_BYTE *)(v3 + 81) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v17 = 0;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
          LOBYTE(v20) = v18;
          LOBYTE(v21) = v17;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(v19 + 19368),
            3,
            1,
            56,
            (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
        }
        RIMFreeSpecificDev((struct RawInputManagerObject *)v3);
      }
      else if ( !*(_BYTE *)(v3 + 82) )
      {
        RIMFreeDev((struct RawInputManagerObject *)v3, (struct RIMDEV *)((a1 + 72) & -(__int64)(a1 != 0)));
      }
    }
  }
}
