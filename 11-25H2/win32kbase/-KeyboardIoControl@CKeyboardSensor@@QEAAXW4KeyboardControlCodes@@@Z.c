/*
 * XREFs of ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1402138CC
 * Callers:
 *     IoControl @ 0x140216750 (IoControl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x14020F870 (-GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z.c)
 *     ?GetInfo@SensorLocalityEx@CBaseInput@@QEBA?AW4SensorLocalityInfo@@XZ @ 0x14020F968 (-GetInfo@SensorLocalityEx@CBaseInput@@QEBA-AW4SensorLocalityInfo@@XZ.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140214114 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 */

void __fastcall CKeyboardSensor::KeyboardIoControl(__int64 a1, int a2)
{
  int v3; // ebp
  char v4; // di
  bool v5; // si
  bool v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  bool v10; // bl
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  struct _KEVENT *DispatcherObjectByName; // rax
  bool v20; // si
  char CurrentThreadId; // bl
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx

  v3 = *(_DWORD *)(a1 + 1344) | a2;
  *(_DWORD *)(a1 + 1344) = v3;
  v4 = 1;
  v5 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      2,
      10,
      (__int64)&WPP_7014694eff553aa71cd58005cdcfbade_Traceguids,
      v3);
  }
  if ( *(_QWORD *)(a1 + 1256) )
  {
    if ( (CBaseInput::SensorLocalityEx::GetInfo(a1 + 1320) & 4) != 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v4 = 0;
      }
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v4;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(v16 + 69144),
          4,
          2,
          12,
          (__int64)&WPP_7014694eff553aa71cd58005cdcfbade_Traceguids);
      }
      CKeyboardSensor::_KeyboardIOControl((CKeyboardSensor *)a1);
    }
    else
    {
      DispatcherObjectByName = (struct _KEVENT *)CRIMBase::GetDispatcherObjectByName(a1, 0x12u);
      KeSetEvent(DispatcherObjectByName, 1, 0);
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v4 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        CurrentThreadId = (unsigned __int8)PsGetCurrentThreadId();
        v24 = W32GetUserSessionState(v23, v22);
        LOBYTE(v25) = v20;
        LOBYTE(v26) = v4;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 69144),
          4,
          2,
          13,
          (__int64)&WPP_7014694eff553aa71cd58005cdcfbade_Traceguids,
          CurrentThreadId);
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v4 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(v11 + 69144),
        4,
        2,
        11,
        (__int64)&WPP_7014694eff553aa71cd58005cdcfbade_Traceguids);
    }
  }
}
