/*
 * XREFs of KiIntSteerLogStatus @ 0x140254C20
 * Callers:
 *     KeIntSteerPeriodic @ 0x140254A60 (KeIntSteerPeriodic.c)
 *     KiIntSteerEventTraceControlCallback @ 0x1407BB310 (KiIntSteerEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     RtlCountSetBitsAffinityEx @ 0x140251920 (RtlCountSetBitsAffinityEx.c)
 *     KiIntSteerLogProc @ 0x140254918 (KiIntSteerLogProc.c)
 *     KiIntSteerEtwEventEnabled @ 0x140254D14 (KiIntSteerEtwEventEnabled.c)
 *     KiIntSteerLogState @ 0x140423C40 (KiIntSteerLogState.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall KiIntSteerLogStatus(char a1)
{
  __int64 *v2; // r11
  __int64 *v3; // r14
  __int64 result; // rax
  unsigned __int64 i; // rbx
  _QWORD *j; // rdi
  __int64 v7; // r9
  PCEVENT_DESCRIPTOR v8; // r11
  int v9; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 *p_ExtendedFeatureDisableMask; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  int *v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  __int64 v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  unsigned __int8 *p_ResourceIndex; // [rsp+90h] [rbp+17h]
  int v18; // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+9Ch] [rbp+23h]

  v2 = PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE;
  if ( a1 )
    v2 = PPM_ETW_INTERRUPT_STEERING_MASK_RUNDOWN;
  if ( (unsigned __int8)KiIntSteerEtwEventEnabled(v2) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&KsepShimDbLock.Spare36;
    v12 = 4LL;
    p_ExtendedFeatureDisableMask = &KsepShimDbLock.ExtendedFeatureDisableMask;
    v9 = RtlCountSetBitsAffinityEx((unsigned __int16 *)&KsepShimDbLock.IptSaveArea);
    v15 = v7;
    v13 = &v9;
    v14 = 4LL;
    p_ResourceIndex = &KsepShimDbLock.ResourceIndex;
    v18 = 8 * LOWORD(KsepShimDbLock.IptSaveArea);
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
    for ( i = KsepShimDbLock.Spare35[0]; (unsigned __int64 *)i != KsepShimDbLock.Spare35; i = *(_QWORD *)i )
    {
      if ( !a1 )
      {
        result = *(_QWORD *)(i + 160);
        if ( *(_QWORD *)(i + 176) == result )
          continue;
      }
      for ( j = *(_QWORD **)(i + 16); j != (_QWORD *)(i + 16); j = (_QWORD *)*j )
        result = KiIntSteerLogState(j, v3);
    }
  }
  return result;
}
