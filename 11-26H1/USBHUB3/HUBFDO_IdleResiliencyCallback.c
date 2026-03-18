/*
 * XREFs of HUBFDO_IdleResiliencyCallback @ 0x14000E3D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBFDO_IdleResiliencyCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, _DWORD *Context)
{
  int v5; // eax

  if ( Context )
  {
    v5 = *Value;
    if ( Context[666] != *Value )
    {
      Context[666] = v5;
      if ( v5 == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(Value) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 317),
            (_DWORD)Value,
            3,
            115,
            (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, POWER_SETTING_CALLBACK *, __int64, const char *))(WdfFunctions_01015 + 3512))(
          WdfDriverGlobals,
          *((_QWORD *)Context + 2),
          HUBFDO_IdleResiliencyCallback,
          7359LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      }
      else if ( !v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(Value) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 317),
            (_DWORD)Value,
            3,
            116,
            (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, POWER_SETTING_CALLBACK *, int, const char *))(WdfFunctions_01015 + 3504))(
          WdfDriverGlobals,
          *((_QWORD *)Context + 2),
          0LL,
          HUBFDO_IdleResiliencyCallback,
          7365,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      }
    }
  }
  return 0LL;
}
