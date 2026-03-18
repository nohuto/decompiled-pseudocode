/*
 * XREFs of WMI_ResetOvercurrent @ 0x140090B5C
 * Callers:
 *     WMI_ExecuteMethodUsbWmiStdData @ 0x14008F9E0 (WMI_ExecuteMethodUsbWmiStdData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WMI_ResetOvercurrent(__int64 a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  int v5; // edi
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  int v8; // edx
  _QWORD *v9; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax

  *a3 = 0;
  if ( a2 >= 0x18 )
  {
    v6 = (_QWORD *)(a1 + 2376);
    v7 = *v6 - 248LL;
    if ( v6 == (_QWORD *)*v6 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v8 = *(_DWORD *)(a4 + 4);
      while ( *(unsigned __int16 *)(v7 + 200) != v8 )
      {
        v9 = *(_QWORD **)(v7 + 248);
        v7 = (__int64)(v9 - 31);
        if ( v6 == v9 )
          return (unsigned int)-1073741811;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(v7 + 1432), v8, 3, 15, (__int64)&WPP_b48bfb8efb7f3208dce8b8d3052aa366_Traceguids);
      }
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
      LOBYTE(v12) = 1;
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
             WdfDriverGlobals,
             v11,
             v12,
             0LL,
             349,
             "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wmi.c");
      if ( (*(_DWORD *)(v7 + 1336) & 4) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v7 + 1336), 0xFFFFFFFB);
        (*(void (__fastcall **)(__int64, __int64))(v7 + 1240))(v7, 3054LL);
      }
      if ( v5 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
          WdfDriverGlobals,
          v13,
          0LL,
          358LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wmi.c");
      }
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)v5;
}
