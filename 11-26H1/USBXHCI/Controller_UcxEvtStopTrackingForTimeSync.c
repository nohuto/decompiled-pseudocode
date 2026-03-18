/*
 * XREFs of Controller_UcxEvtStopTrackingForTimeSync @ 0x140044080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qd @ 0x1400071EC (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     Controller_IsHandlePresentInCollection @ 0x1400169E8 (Controller_IsHandlePresentInCollection.c)
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_dqd @ 0x140034850 (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_qq @ 0x140038B04 (WPP_RECORDER_SF_qq.c)
 *     Controller_StopTimeTrackingForHandle @ 0x140042DD4 (Controller_StopTimeTrackingForHandle.c)
 *     WPP_RECORDER_SF_II @ 0x1400454A8 (WPP_RECORDER_SF_II.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_UcxEvtStopTrackingForTimeSync(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rsi
  int v8; // r14d
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdi
  unsigned int v13; // ebx
  int v15; // edx
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rax
  int v20; // edx
  int v21; // edx
  int v22; // eax
  __int64 v23; // [rsp+28h] [rbp-40h]
  __int64 *v24; // [rsp+88h] [rbp+20h] BYREF

  v24 = 0LL;
  v7 = 0LL;
  v8 = (*(char (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 2240))(WdfDriverGlobals);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  v12 = v9;
  if ( a4 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      HIDWORD(v23) = 0;
      WPP_RECORDER_SF_II(*(_QWORD *)(v9 + 72), v10, v11, 310);
    }
    v13 = -1073741811;
    goto LABEL_5;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01033 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v24,
          0LL);
  if ( (v13 & 0x80000000) == 0 )
  {
    v16 = *v24;
    if ( !*v24 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v12 + 72), v15, 4, 311, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      }
LABEL_13:
      v13 = -1073741811;
      goto LABEL_5;
    }
    if ( (_BYTE)v8 == 1 )
    {
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2216))(WdfDriverGlobals, a2);
      v7 = v17;
      if ( !v17 )
      {
        v13 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v13);
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(v12 + 72),
          v18,
          4,
          312,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          124);
        goto LABEL_5;
      }
      v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
              WdfDriverGlobals,
              v17,
              off_14006B218);
      if ( *(_QWORD *)(v19 + 24) != *v24 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *(_QWORD *)(v12 + 72),
            2u,
            4u,
            0x139u,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
            *v24,
            *(_QWORD *)(v19 + 24));
        goto LABEL_13;
      }
    }
    else
    {
      v7 = *v24;
      if ( !Controller_IsHandlePresentInCollection(v12, *v24) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 2;
          WPP_RECORDER_SF_q(
            *(_QWORD *)(v12 + 72),
            v20,
            4,
            314,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
            v16);
        }
        goto LABEL_13;
      }
    }
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                      WdfDriverGlobals,
                      v7,
                      off_14006B218)
                  + 48) )
    {
      if ( *(_DWORD *)(v12 + 792) == 1 )
      {
        v22 = Controller_StopTimeTrackingForHandle(v12, v7, 1);
        v13 = v22;
        if ( v22 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qd(
              *(_QWORD *)(v12 + 72),
              2u,
              4u,
              0x13Cu,
              (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
              v7,
              v22);
          if ( !(_BYTE)v8 )
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1664))(WdfDriverGlobals, v7);
        }
      }
      else
      {
        v13 = -1073741436;
      }
    }
    else
    {
      v13 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v13);
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v12 + 72),
        v21,
        4,
        315,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v7);
    }
  }
LABEL_5:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v23) = v13;
    WPP_RECORDER_SF_dqd(
      *(_QWORD *)(v12 + 72),
      5u,
      4u,
      0x13Du,
      (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      v23,
      v7,
      v8);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v13);
}
