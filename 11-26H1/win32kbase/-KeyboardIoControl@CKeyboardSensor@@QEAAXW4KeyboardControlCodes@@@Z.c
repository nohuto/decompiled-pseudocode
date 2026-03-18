/*
 * XREFs of ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1401B0948
 * Callers:
 *     IoControl @ 0x1401C4530 (IoControl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x140111340 (-GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z.c)
 *     ?GetInfo@SensorLocality@CBaseInput@@QEBA?AW4SensorLocalityInfo@@XZ @ 0x1401C615C (-GetInfo@SensorLocality@CBaseInput@@QEBA-AW4SensorLocalityInfo@@XZ.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140219D44 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 */

void __fastcall CKeyboardSensor::KeyboardIoControl(__int64 a1, int a2, int a3)
{
  int v4; // ebp
  char v5; // di
  bool v6; // si
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  bool v11; // bl
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // edx
  int v16; // r8d
  bool v17; // si
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  struct _KEVENT *DispatcherObjectByName; // rax
  bool v22; // si
  char CurrentThreadId; // bl
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx

  v4 = *(_DWORD *)(a1 + 1336) | a2;
  *(_DWORD *)(a1 + 1336) = v4;
  v5 = 1;
  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_GLOBAL_Control, a3);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      2,
      10,
      (__int64)&WPP_14ad0bfeaf2b3540facc3bd591c39789_Traceguids,
      v4);
  }
  if ( *(_QWORD *)(a1 + 1256) )
  {
    if ( (CBaseInput::SensorLocality::GetInfo(a1 + 1312) & 4) != 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v5 = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(v18 + 69136),
          4,
          2,
          12,
          (__int64)&WPP_14ad0bfeaf2b3540facc3bd591c39789_Traceguids);
      }
      CKeyboardSensor::_KeyboardIOControl((CKeyboardSensor *)a1);
    }
    else
    {
      DispatcherObjectByName = (struct _KEVENT *)CRIMBase::GetDispatcherObjectByName(a1, 0x12u);
      KeSetEvent(DispatcherObjectByName, 1, 0);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v5 = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        CurrentThreadId = (unsigned __int8)PsGetCurrentThreadId();
        v27 = W32GetUserSessionState(v25, v24, v26);
        LOBYTE(v28) = v22;
        LOBYTE(v29) = v5;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(v27 + 69136),
          4,
          2,
          13,
          (__int64)&WPP_14ad0bfeaf2b3540facc3bd591c39789_Traceguids,
          CurrentThreadId);
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v5 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_GLOBAL_Control, a3);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 69136),
        4,
        2,
        11,
        (__int64)&WPP_14ad0bfeaf2b3540facc3bd591c39789_Traceguids);
    }
  }
}
