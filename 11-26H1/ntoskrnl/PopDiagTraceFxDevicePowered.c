/*
 * XREFs of PopDiagTraceFxDevicePowered @ 0x1403BCD0C
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x1403BCB54 (PopFxCompleteDevicePowerRequired.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDevicePowered(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  v4 = a1;
  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 80);
    if ( v1 )
    {
      v2 = 3LL
         * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 896), 1u) % *(_DWORD *)(v1 + 880));
      v3 = *(_QWORD *)(v1 + 888);
      *(_QWORD *)(v3 + 8 * v2) = MEMORY[0xFFFFF78000000008];
      *(_WORD *)(v3 + 8 * v2 + 8) = 7;
      *(_WORD *)(v3 + 8 * v2 + 10) = KeGetCurrentPrcb()->Number;
      *(_WORD *)(v3 + 8 * v2 + 12) = KeGetCurrentThread()[1].CycleTime;
      *(_WORD *)(v3 + 8 * v2 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_QWORD *)(v3 + 8 * v2 + 16) = 0LL;
    }
  }
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWERED) )
    {
      UserData.Ptr = (ULONGLONG)&v4;
      *(_QWORD *)&UserData.Size = 8LL;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWERED, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
}
