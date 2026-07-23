/*
 * XREFs of PiAuditDeviceEnableDisableRequest @ 0x1407B8054
 * Callers:
 *     PiPnpRtlSetDeviceRegProperty @ 0x14094DB54 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 * Callees:
 *     PiAuditDeviceOperation @ 0x140B15BF8 (PiAuditDeviceOperation.c)
 */

__int64 __fastcall PiAuditDeviceEnableDisableRequest(__int64 a1, char a2, char a3, char a4)
{
  __int64 result; // rax
  __int64 v5; // r8

  result = 1LL;
  v5 = a3 & 1;
  if ( (a2 & 1) != 0 )
  {
    if ( (_DWORD)v5 )
      return result;
    LODWORD(result) = 3;
  }
  else if ( !(_DWORD)v5 )
  {
    return result;
  }
  LOBYTE(v5) = a4;
  return PiAuditDeviceOperation(a1, (unsigned int)result, v5);
}
