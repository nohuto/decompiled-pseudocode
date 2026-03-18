/*
 * XREFs of HUBREG_DeleteUxdSettings @ 0x140087A9C
 * Callers:
 *     HUBPDO_NotifyDeviceDisconnected @ 0x140019864 (HUBPDO_NotifyDeviceDisconnected.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1400836F0 (HUBPDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBREG_DeleteUxdDeviceKey @ 0x1400876D8 (HUBREG_DeleteUxdDeviceKey.c)
 *     HUBREG_DeleteUxdPortKey @ 0x14008783C (HUBREG_DeleteUxdPortKey.c)
 *     HUBREG_QueryGlobalUxdSettings @ 0x1400899A0 (HUBREG_QueryGlobalUxdSettings.c)
 */

__int64 __fastcall HUBREG_DeleteUxdSettings(__int64 a1, int a2)
{
  __int64 v4; // rsi
  int v5; // edi
  bool v6; // zf

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  HUBREG_QueryGlobalUxdSettings(v4);
  v5 = a2 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 0LL;
    if ( !*(_DWORD *)(a1 + 1716) )
    {
      v6 = (*(_DWORD *)(v4 + 4) & 0x400) == 0;
      goto LABEL_7;
    }
LABEL_8:
    HUBREG_DeleteUxdPortKey(*(_QWORD *)a1, *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL));
    HUBREG_DeleteUxdDeviceKey(a1);
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 1712) == 1 )
    goto LABEL_8;
  v6 = (*(_DWORD *)(v4 + 4) & 0x200) == 0;
LABEL_7:
  if ( !v6 )
    goto LABEL_8;
  return 0LL;
}
