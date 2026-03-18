/*
 * XREFs of WMI_AcquireBusInfo @ 0x14008F700
 * Callers:
 *     WMI_ExecuteMethodUsbWmiStdData @ 0x14008F9E0 (WMI_ExecuteMethodUsbWmiStdData.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBUCX_GetControllerName @ 0x1400275A8 (HUBUCX_GetControllerName.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 */

__int64 __fastcall WMI_AcquireBusInfo(__int64 a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  int ControllerName; // ebx
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int16 v11; // [rsp+34h] [rbp-24h]

  *a3 = 0;
  if ( a2 >= 0x10 )
  {
    v10 = 0;
    v11 = 0;
    ControllerName = HUBUCX_GetControllerName(a1, &v10, 6u);
    if ( ControllerName >= 0 )
    {
      *(_DWORD *)(a4 + 12) = v10;
      *(_QWORD *)(a4 + 4) = 0LL;
      *a3 = 16;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = ControllerName;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2536),
        2u,
        3u,
        0xCu,
        (__int64)&WPP_b48bfb8efb7f3208dce8b8d3052aa366_Traceguids,
        v9);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), a2, 3, 11, (__int64)&WPP_b48bfb8efb7f3208dce8b8d3052aa366_Traceguids);
    }
    return (unsigned int)-1073741789;
  }
  return (unsigned int)ControllerName;
}
