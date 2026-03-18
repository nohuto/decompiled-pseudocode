/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1400339A4
 * Callers:
 *     ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x140033CF0 (-RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     NtUserRemoveInjectionDevice @ 0x14019B810 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1401D6A24 (RIMIDEProcessRemoveInjectionDevices.c)
 *     RIMRemoveInjectionDevice @ 0x1401DBD60 (RIMRemoveInjectionDevice.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A7D0 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     rimEndAllActiveContactsWorker @ 0x14002F41C (rimEndAllActiveContactsWorker.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 *     RIMFreeSpecificDev @ 0x1401D5330 (RIMFreeSpecificDev.c)
 */

NTSTATUS __fastcall RIMIDERemoveInjectionDevice(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // rbx
  __int64 v4; // rdi
  _UNKNOWN **v5; // rdx
  _UNKNOWN **v6; // r8
  int v7; // eax
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  NTSTATUS result; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  char v16; // si
  bool v17; // bp
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8

  v2 = 1;
  if ( (*(_DWORD *)(a1 + 240) & 0x2000) == 0 || (*(_DWORD *)(a1 + 256) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1659LL);
  v3 = *(_QWORD *)(a1 + 392);
  RIMLockExclusive(v3 + 760);
  if ( (*(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xB8) & 0x80u) != 0
    && !*(_BYTE *)(v3 + 80)
    && !*(_BYTE *)(v3 + 81) )
  {
    rimEndAllActiveContactsWorker(
      (struct RawInputManagerObject *)v3,
      *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x1C8),
      0LL);
  }
  v5 = &WPP_GLOBAL_Control;
  v6 = &WPP_RECORDER_INITIALIZED;
  if ( (*(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xA8) & 0x20) == 0
    && *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x30) != 3 )
  {
    v7 = *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xAC);
    if ( (v7 & 8) != 0 || *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xB0) || (v7 & 0x10) != 0 )
    {
      v4 = (a1 + 72) & -(__int64)(a1 != 0);
      *(_DWORD *)(v4 + 184) |= 1u;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        LOBYTE(v2) = 0;
      }
      v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        LOBYTE(v10) = v8;
        LOBYTE(v11) = v2;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v10,
          *(_QWORD *)(UserSessionState + 19336),
          4,
          1,
          56,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
          a1 != 0 ? a1 + 72 : 0);
      }
      v2 = 0;
    }
  }
  result = RIMUnlockExclusive(v3 + 760, v5, v6);
  if ( v2 )
  {
    if ( (*(_QWORD *)(v3 + 832) || *(_DWORD *)(v3 + 1056)) && *(_QWORD *)(v3 + 32) != PsGetCurrentProcess()
      || *(_BYTE *)(v3 + 82) )
    {
      *(_DWORD *)(a1 + 240) |= 0x100000u;
      v21 = W32GetUserSessionState(v14, v13);
      RIMLockExclusive(v21 + 56);
      *(_DWORD *)(a1 + 256) |= 4u;
      v24 = W32GetUserSessionState(v23, v22);
      RIMUnlockExclusive(v24 + 56, v25, v26);
      *(_DWORD *)(a1 + 240) |= 0x800000u;
      return ZwSetEvent(*(HANDLE *)(v3 + 344), 0LL);
    }
    else
    {
      result = rimDoRimDevChange(v3, (a1 + 72) & -(__int64)(a1 != 0), 3LL);
      if ( *(_BYTE *)(v3 + 81) )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v16 = 0;
        }
        v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
          LOBYTE(v19) = v17;
          LOBYTE(v20) = v16;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v20,
            v19,
            *(_QWORD *)(v18 + 19336),
            3,
            1,
            57,
            (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
        }
        return RIMFreeSpecificDev((struct RawInputManagerObject *)v3);
      }
      else if ( !*(_BYTE *)(v3 + 82) )
      {
        return RIMFreeDev((struct RawInputManagerObject *)v3, (struct RIMDEV *)((a1 + 72) & -(__int64)(a1 != 0)));
      }
    }
  }
  return result;
}
