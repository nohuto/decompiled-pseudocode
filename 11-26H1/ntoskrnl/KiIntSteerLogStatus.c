/*
 * XREFs of KiIntSteerLogStatus @ 0x140256580
 * Callers:
 *     KeIntSteerPeriodic @ 0x1402563C0 (KeIntSteerPeriodic.c)
 *     KiIntSteerEventTraceControlCallback @ 0x1407BE370 (KiIntSteerEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     KiIntSteerLogProc @ 0x140256278 (KiIntSteerLogProc.c)
 *     KiIntSteerEtwEventEnabled @ 0x140256674 (KiIntSteerEtwEventEnabled.c)
 *     KiIntSteerLogState @ 0x140430D30 (KiIntSteerLogState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiIntSteerLogStatus(char a1)
{
  __int64 *v2; // r11
  __int64 *v3; // r14
  __int64 result; // rax
  __int64 *i; // rbx
  __int64 *j; // rdi
  __int64 v7; // r9
  PCEVENT_DESCRIPTOR v8; // r11
  int v9; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  int *v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  int *v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  __int64 v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  void **p_KernelShadowStackInitial; // [rsp+90h] [rbp+17h]
  int v18; // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+9Ch] [rbp+23h]

  v2 = PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE;
  if ( a1 )
    v2 = PPM_ETW_INTERRUPT_STEERING_MASK_RUNDOWN;
  if ( (unsigned __int8)KiIntSteerEtwEventEnabled(v2) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v12 = 4LL;
    v11 = &KiIntTrackRootCount;
    v9 = RtlCountSetBitsAffinityEx((unsigned __int16 *)&KsepShimDbLock.KernelShadowStack);
    v15 = v7;
    v13 = &v9;
    v14 = 4LL;
    p_KernelShadowStackInitial = &KsepShimDbLock.KernelShadowStackInitial;
    v18 = 8 * LOWORD(KsepShimDbLock.KernelShadowStack);
    v16 = 2LL;
    v19 = 0;
    EtwWriteEx(KiIntSteerEtwHandle, v8, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  KiIntSteerLogProc(a1);
  v3 = PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET;
  if ( a1 )
    v3 = PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN;
  result = KiIntSteerEtwEventEnabled(v3);
  if ( (_BYTE)result )
  {
    for ( i = (__int64 *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (__int64 *)*i )
    {
      if ( !a1 )
      {
        result = i[20];
        if ( i[22] == result )
          continue;
      }
      for ( j = (__int64 *)i[2]; j != i + 2; j = (__int64 *)*j )
        result = KiIntSteerLogState(j, v3);
    }
  }
  return result;
}
