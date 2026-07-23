/*
 * XREFs of PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x140614CA4
 * Callers:
 *     PopFxEnforceDirectedPowerTransition @ 0x1406079E8 (PopFxEnforceDirectedPowerTransition.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDirectedDripsDiagTraceDfxPowerStateFailure(__int64 a1)
{
  __int64 v1; // r8
  int v2; // ecx
  int v3; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  __int64 v5; // [rsp+60h] [rbp+17h]
  __int64 v6; // [rsp+68h] [rbp+1Fh]
  int *v7; // [rsp+70h] [rbp+27h]
  __int64 v8; // [rsp+78h] [rbp+2Fh]
  __int64 v9; // [rsp+80h] [rbp+37h]
  int v10; // [rsp+88h] [rbp+3Fh]
  int v11; // [rsp+8Ch] [rbp+43h]
  __int64 v12; // [rsp+B0h] [rbp+67h] BYREF

  v12 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_FX_POWER_STATE_FAILURE) )
    {
      v1 = *(_QWORD *)(v12 + 48);
      v3 = *(unsigned __int16 *)(v1 + 40) >> 1;
      UserData.Ptr = (ULONGLONG)&v12;
      v7 = &v3;
      v5 = v12 + 48;
      v8 = 4LL;
      *(_QWORD *)&UserData.Size = 8LL;
      v6 = 8LL;
      v2 = *(unsigned __int16 *)(v1 + 40);
      v9 = *(_QWORD *)(v1 + 48);
      v10 = v2;
      v11 = 0;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_FX_POWER_STATE_FAILURE, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
}
