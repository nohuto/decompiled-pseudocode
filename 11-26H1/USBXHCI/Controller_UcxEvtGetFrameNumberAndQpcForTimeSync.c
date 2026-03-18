/*
 * XREFs of Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1400165A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     Controller_TranslateFrameNumberToQpcValue @ 0x1400162F8 (Controller_TranslateFrameNumberToQpcValue.c)
 *     Controller_IsHandlePresentInCollection @ 0x1400169E8 (Controller_IsHandlePresentInCollection.c)
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x140038B04 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_II @ 0x1400454A8 (WPP_RECORDER_SF_II.c)
 *     WPP_RECORDER_SF_qqqd @ 0x140046214 (WPP_RECORDER_SF_qqqd.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_UcxEvtGetFrameNumberAndQpcForTimeSync(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // rbp
  LARGE_INTEGER *v9; // rdi
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  char v13; // r12
  int v14; // ebx
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // edx
  LARGE_INTEGER *v18; // rcx
  int v20; // [rsp+20h] [rbp-68h]
  __int64 *v21; // [rsp+50h] [rbp-38h] BYREF
  LARGE_INTEGER *v22; // [rsp+A8h] [rbp+20h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  LOBYTE(v7) = 0;
  LOBYTE(v8) = 0;
  v9 = (LARGE_INTEGER *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                          WdfDriverGlobals,
                          a1,
                          off_14006B290);
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2240))(WdfDriverGlobals, a2);
  if ( a4 < 0x3C )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(v9[9].QuadPart, v10, v11, 322);
    v14 = -1073741811;
    goto LABEL_33;
  }
  v20 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **))(WdfFunctions_01033 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v21);
  if ( v14 >= 0 )
  {
    v15 = *v21;
    if ( !*v21 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_(v9[9].QuadPart, v10, 4, 323, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      }
LABEL_9:
      v14 = -1073741811;
      goto LABEL_33;
    }
    if ( v13 == 1 )
    {
      v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2216))(WdfDriverGlobals, a2);
      v8 = v16;
      if ( !v16 )
      {
        v14 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01033 + 2120))(
                   WdfDriverGlobals,
                   a2,
                   (unsigned int)v14,
                   a3);
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_D(v9[9].QuadPart, v17, 4, 324, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, 120);
        goto LABEL_33;
      }
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
             WdfDriverGlobals,
             v16,
             off_14006B218);
      if ( *(_QWORD *)(v7 + 24) != *v21 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_qq(
            v9[9].QuadPart,
            v10,
            4,
            325,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
            *v21,
            *(_QWORD *)(v7 + 24));
        }
        goto LABEL_9;
      }
    }
    else
    {
      v8 = *v21;
      if ( !(unsigned __int8)Controller_IsHandlePresentInCollection(v9, *v21) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_q(v9[9].QuadPart, v10, 4, 326, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v15);
        }
        goto LABEL_9;
      }
    }
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
           WdfDriverGlobals,
           v8,
           off_14006B218);
    if ( !*(_BYTE *)(v7 + 48) )
    {
      v14 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01033
                                                                                                 + 2120))(
                 WdfDriverGlobals,
                 a2,
                 (unsigned int)v14,
                 a3);
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_q(v9[9].QuadPart, v10, 4, 327, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v8);
      goto LABEL_33;
    }
    if ( a3 >= 0x3C )
    {
      v20 = 0;
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, LARGE_INTEGER **))(WdfFunctions_01033 + 2160))(
              WdfDriverGlobals,
              a2,
              a3,
              &v22);
      if ( v14 >= 0 )
      {
        if ( v9[99].LowPart == 1 )
        {
          ++*(_DWORD *)(v7 + 52);
          v18 = v22;
          if ( v22[1].LowPart || v22[1].HighPart )
          {
            ++*(_DWORD *)(v7 + 56);
            v18 = v22;
          }
          v18[4].HighPart = v9[135].LowPart;
          v22[3] = v9[148];
          v14 = Controller_TranslateFrameNumberToQpcValue((__int64)v9, v22);
        }
        else
        {
          v14 = -1073741436;
        }
      }
      goto LABEL_33;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(v9[9].QuadPart, v10, v11, 328);
    goto LABEL_9;
  }
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqqd(v9[9].QuadPart, v10, v11, v12, v20, a2, v8, v7, v14);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01033 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v14,
           a3);
}
