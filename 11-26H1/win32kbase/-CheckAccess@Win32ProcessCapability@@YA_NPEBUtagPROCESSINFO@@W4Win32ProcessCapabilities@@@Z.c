/*
 * XREFs of ?CheckAccess@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401CCD80
 * Callers:
 *     ?Injection@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401CCEC0 (-Injection@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?HasCapabilities@tagPROCESSINFO@@QEBA_NW4Win32ProcessCapabilities@@@Z @ 0x1401CCDD4 (-HasCapabilities@tagPROCESSINFO@@QEBA_NW4Win32ProcessCapabilities@@@Z.c)
 *     ?SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401CCEE0 (-SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z.c)
 */

char __fastcall Win32ProcessCapability::CheckAccess(__int64 a1, __int64 a2)
{
  char HasCapabilities; // di

  HasCapabilities = tagPROCESSINFO::HasCapabilities();
  if ( HasCapabilities && _bittest64((const signed __int64 *)(a1 + 808), 0x27u) )
    SendCapabilityUsageReport(a1, a2);
  return HasCapabilities;
}
