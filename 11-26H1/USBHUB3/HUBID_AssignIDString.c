/*
 * XREFs of HUBID_AssignIDString @ 0x14001E3CC
 * Callers:
 *     HUBID_BuildClassCompatibleID @ 0x14001E47C (HUBID_BuildClassCompatibleID.c)
 *     HUBID_BuildCompatibleID @ 0x14001E8D0 (HUBID_BuildCompatibleID.c)
 *     HUBID_BuildDeviceCompatibleID @ 0x14001EE7C (HUBID_BuildDeviceCompatibleID.c)
 *     HUBID_BuildDeviceID @ 0x14001F0E4 (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x14001F278 (HUBID_BuildHardwareID.c)
 *     HUBID_BuildHubCompatibleID @ 0x14001F460 (HUBID_BuildHubCompatibleID.c)
 * Callees:
 *     HUBID_AppendStringToIDString @ 0x14001E2F0 (HUBID_AppendStringToIDString.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBID_AssignIDString(const void **a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  int v7; // edx
  int v8; // edx
  int v9; // eax

  v4 = 0;
  if ( !a3 )
    goto LABEL_11;
  if ( !a2 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const void **))(WdfFunctions_01015 + 1696))(
           WdfDriverGlobals,
           a3,
           a1);
LABEL_10:
    v4 = v9;
    if ( v9 < 0 )
      return v4;
    goto LABEL_11;
  }
  v7 = a2 - 1;
  if ( !v7 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const void **))(WdfFunctions_01015 + 1712))(
           WdfDriverGlobals,
           a3,
           a1);
    goto LABEL_10;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const void **))(WdfFunctions_01015 + 1720))(
           WdfDriverGlobals,
           a3,
           a1);
    goto LABEL_10;
  }
  if ( v8 == 1 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const void **))(WdfFunctions_01015 + 3128))(
           WdfDriverGlobals,
           a3,
           a1);
    goto LABEL_10;
  }
LABEL_11:
  if ( a4 )
    return (unsigned int)HUBID_AppendStringToIDString(a1, a4);
  return v4;
}
