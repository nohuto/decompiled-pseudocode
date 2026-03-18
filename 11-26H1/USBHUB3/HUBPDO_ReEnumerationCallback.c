/*
 * XREFs of HUBPDO_ReEnumerationCallback @ 0x14001A1C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x140014A3C (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     McTemplateK0pthhhtq_EtwWriteTransfer @ 0x14001D2C4 (McTemplateK0pthhhtq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF__guid_dd @ 0x14001DA2C (WPP_RECORDER_SF__guid_dd.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_ReEnumerationCallback(__int64 SettingGuid, PVOID Value, __int64 ValueLength, _QWORD *Context)
{
  char v4; // r14
  int v5; // esi
  char v6; // bl
  int v9; // edx
  __int64 v10; // r9
  const char *v12; // [rsp+20h] [rbp-58h]

  v4 = *(_BYTE *)Value;
  v5 = 0;
  v6 = 0;
  if ( !*(_BYTE *)Value )
  {
    Value = (PVOID)Context[2];
    v6 = 1;
    if ( *((_DWORD *)Value + 100) != 1 )
    {
      v5 = -1073741811;
      v6 = 0;
      goto LABEL_14;
    }
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)Value + 1, 1, 0) )
    {
      LOBYTE(ValueLength) = 1;
      LODWORD(v12) = 11774;
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 3504))(
             WdfDriverGlobals,
             *(_QWORD *)(*Context + 16LL),
             ValueLength,
             0LL);
      if ( v5 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_10:
          EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper((__int64)Context, 2228255, 0);
          (*(void (__fastcall **)(_QWORD, __int64))(Context[1] + 1240LL))(Context[1], 3011LL);
          if ( v5 >= 0 )
          {
            v12 = "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c";
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 3512))(
              WdfDriverGlobals,
              *(_QWORD *)(*Context + 16LL),
              0LL,
              11799LL);
          }
          goto LABEL_14;
        }
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*Context + 2536LL),
          2u,
          3u,
          0xA9u,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_(
          *(_QWORD *)(Context[1] + 1432LL),
          v9,
          2,
          170,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
      }
      goto LABEL_10;
    }
    v6 = 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    LOBYTE(Value) = 3;
    WPP_RECORDER_SF_(
      *(_QWORD *)(Context[1] + 1432LL),
      (_DWORD)Value,
      5,
      171,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
  }
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_dd(
      *(_QWORD *)(Context[1] + 1432LL),
      (_DWORD)Value,
      ValueLength,
      172,
      (_DWORD)v12,
      SettingGuid,
      v4,
      v5);
LABEL_16:
  if ( (byte_140070D4B & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(Context[2] + 24LL);
    McTemplateK0pthhhtq_EtwWriteTransfer(
      SettingGuid,
      (_DWORD)Value,
      v10 + 1524,
      *(_QWORD *)(v10 + 24),
      v6,
      *(_WORD *)(v10 + 2004),
      *(_WORD *)(v10 + 2006),
      *(_WORD *)(v10 + 2008),
      v4,
      v5);
  }
  return (unsigned int)v5;
}
