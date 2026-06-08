/*
 * XREFs of RegisterWmi @ 0x14002DB70
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1400252A0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     memset @ 0x14000EA40 (memset.c)
 */

__int64 __fastcall RegisterWmi(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  int v4; // eax
  int v5; // edx
  __int64 i; // rdi
  __int128 *v7; // rax
  __int128 v8; // xmm0
  int v9; // edx
  int v10; // ebx
  int v11; // r9d
  unsigned int j; // edi
  __int128 v14; // xmm0
  __int64 v15; // rsi
  _QWORD v16[2]; // [rsp+38h] [rbp-99h] BYREF
  _OWORD v17[4]; // [rsp+48h] [rbp-89h] BYREF
  void *v18; // [rsp+88h] [rbp-49h]
  _QWORD v19[5]; // [rsp+90h] [rbp-41h]
  _OWORD v20[2]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v21; // [rsp+D8h] [rbp+7h]
  __int128 v22; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+F0h] [rbp+1Fh]
  wchar_t v24; // [rsp+F8h] [rbp+27h]

  v16[0] = 1703960LL;
  v21 = 0LL;
  v24 = aProcessorwmi[12];
  v16[1] = &v22;
  v18 = &ProcessorPerfStateEvent_GUID;
  v19[0] = a1 + 166;
  v19[1] = &ProcessorCStateEvent_GUID;
  v19[2] = a1 + 170;
  v19[3] = &ProcessorThrottleStateEvent_GUID;
  memset(v17, 0, 60);
  v19[4] = a1 + 174;
  memset(v20, 0, sizeof(v20));
  v22 = *(_OWORD *)L"PROCESSORWMI";
  v23 = *(_QWORD *)L"RWMI";
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  a1[172] = 0;
  v3 = v2;
  a1[168] = 4;
  a1[176] = 4;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 328))(
         WdfDriverGlobals,
         v2,
         v16);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      4,
      10,
      (__int64)&WPP_03f51a9042f5341de75bcf077a49bb6a_Traceguids,
      v4);
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 4 )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= 3 )
          return 0LL;
        memset(v20, 0, sizeof(v20));
        v21 = 0LL;
        LODWORD(v20[0]) = 40;
        v14 = *(_OWORD *)v19[2 * j - 1];
        DWORD1(v20[1]) = 2;
        *(_OWORD *)((char *)v20 + 4) = v14;
        memset(v17, 0, sizeof(v17));
        *(_QWORD *)&v17[1] = v20;
        LODWORD(v17[0]) = 64;
        v15 = v19[2 * j];
        BYTE9(v17[1]) = 1;
        v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *, _QWORD, __int64))(WdfFunctions_01015
                                                                                                 + 2984))(
                WdfDriverGlobals,
                v3,
                v17,
                0LL,
                v15);
        if ( v10 < 0 )
          break;
        *(_BYTE *)(v15 + 12) = 1;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v10;
      v11 = 12;
      goto LABEL_10;
    }
    v21 = 0LL;
    v7 = (__int128 *)*(&off_140010000 + 3 * i);
    memset(v20, 0, sizeof(v20));
    LODWORD(v20[0]) = 40;
    v8 = *v7;
    DWORD2(v20[1]) = *((_DWORD *)&off_140010000 + 6 * i + 4);
    *(_OWORD *)((char *)v20 + 4) = v8;
    memset(v17, 0, sizeof(v17));
    *(_QWORD *)&v17[1] = v20;
    LODWORD(v17[0]) = 64;
    *(_QWORD *)&v17[2] = *(&off_140010000 + 3 * i + 1);
    BYTE9(v17[1]) = 1;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
            WdfDriverGlobals,
            v3,
            v17,
            0LL,
            0LL);
    if ( v10 < 0 )
      break;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (unsigned int)v10;
  v11 = 11;
LABEL_10:
  LOBYTE(v9) = 2;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v9,
    4,
    v11,
    (__int64)&WPP_03f51a9042f5341de75bcf077a49bb6a_Traceguids,
    v10);
  return (unsigned int)v10;
}
