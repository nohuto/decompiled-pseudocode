/*
 * XREFs of ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x14022E308
 * Callers:
 *     ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z @ 0x140221B8C (-DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140345838 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z @ 0x140345B8C (-DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z.c)
 * Callees:
 *     ?VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEPEBEK@Z @ 0x14022E364 (-VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEPEBEK@Z.c)
 *     ?DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z @ 0x14022E4C4 (-DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z.c)
 */

int __fastcall CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(
        CPhysicalMonitorHandle *this,
        __int64 a2,
        void *a3,
        unsigned int a4)
{
  int result; // eax
  unsigned __int8 v7; // cl
  __int64 v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v8[0] = 111LL;
  result = CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(this, 0x232447u, a2, v8, 8u, a3, a4);
  if ( result >= 0 )
    return CPhysicalMonitorHandle::VerifyDDCCIMessageChecksum(v7, (const unsigned __int8 *)a3, a4);
  return result;
}
