/*
 * XREFs of PopDiagTraceFxDevicePowerRequirement @ 0x14021B810
 * Callers:
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1403BDBD0 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x1404CE4D0 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1404CFA94 (PopFxUpdateDeviceIdleTimer.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDevicePowerRequirement(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  const EVENT_DESCRIPTOR *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // [rsp+40h] [rbp-48h] BYREF
  __int64 v9; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v11; // [rsp+60h] [rbp-28h]
  __int64 v12; // [rsp+68h] [rbp-20h]

  v3 = a3;
  v9 = a1;
  if ( a2 == 1 )
  {
    v4 = &POP_ETW_EVENT_DEVICE_POWER_REQUIREMENT_FROM_PEP;
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 80);
      if ( v5 )
      {
        v6 = 3LL
           * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 896), 1u) % *(_DWORD *)(v5 + 880));
        v7 = *(_QWORD *)(v5 + 888);
        *(_QWORD *)(v7 + 8 * v6) = MEMORY[0xFFFFF78000000008];
        *(_WORD *)(v7 + 8 * v6 + 8) = 4;
        *(_WORD *)(v7 + 8 * v6 + 10) = KeGetCurrentPrcb()->Number;
        *(_WORD *)(v7 + 8 * v6 + 12) = KeGetCurrentThread()[1].CycleTime;
        *(_WORD *)(v7 + 8 * v6 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
        *(_QWORD *)(v7 + 8 * v6 + 16) = v3;
      }
    }
  }
  else
  {
    v4 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_DEVICE_POWER_REQUIREMENT_TO_DEVICE;
    PopFxAddLogEntry(a1, 0LL, 5LL, a3);
  }
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      UserData.Ptr = (ULONGLONG)&v9;
      v8 = v3;
      v11 = &v8;
      *(_QWORD *)&UserData.Size = 8LL;
      v12 = 4LL;
      EtwWriteEx(PopDiagHandle, v4, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
}
