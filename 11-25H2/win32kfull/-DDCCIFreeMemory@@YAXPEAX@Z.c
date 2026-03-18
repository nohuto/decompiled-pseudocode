/*
 * XREFs of ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x14020B8B8
 * Callers:
 *     ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x14020B720 (--_GCPhysicalMonitorHandle@@UEAAPEAXI@Z.c)
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x14020B7A8 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?Destroy@CPhysicalMonitorHandle@@UEAAJXZ @ 0x14020B850 (-Destroy@CPhysicalMonitorHandle@@UEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140263120 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140267610 (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     DDCCICleanUpWrap @ 0x140285460 (DDCCICleanUpWrap.c)
 * Callees:
 *     <none>
 */

void __fastcall DDCCIFreeMemory(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x63326947u);
}
