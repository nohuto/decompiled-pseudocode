/*
 * XREFs of HUBPDO_IdleResiliencyCallback @ 0x1400194D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF__guid_dd @ 0x14001DA2C (WPP_RECORDER_SF__guid_dd.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_IdleResiliencyCallback(__int64 SettingGuid, char *Value, ULONG ValueLength, _QWORD *Context)
{
  char v4; // bp
  unsigned int v5; // ebx
  __int64 v8; // rdi
  __int64 v9; // rax
  const char *v11; // [rsp+20h] [rbp-28h]

  v4 = *Value;
  v5 = 0;
  if ( !*Value )
  {
    v8 = Context[2];
    if ( *(_DWORD *)(v8 + 404) )
    {
      PoUnregisterPowerSettingCallback(*(PVOID *)(v8 + 416));
      *(_QWORD *)(v8 + 416) = 0LL;
      _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 404), 0, 1);
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v8);
      v11 = "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c";
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64))(WdfFunctions_01015 + 1648))(
        WdfDriverGlobals,
        v9,
        "DRIPS IO Tag",
        12184LL);
    }
    else
    {
      v5 = -1073741811;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_dd(
      *(_QWORD *)(Context[1] + 1432LL),
      (_DWORD)Value,
      ValueLength,
      182,
      (_DWORD)v11,
      SettingGuid,
      v4,
      v5);
  return v5;
}
