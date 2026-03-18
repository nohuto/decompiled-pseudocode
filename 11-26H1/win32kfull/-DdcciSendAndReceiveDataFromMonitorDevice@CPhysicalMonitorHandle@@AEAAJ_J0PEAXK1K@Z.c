/*
 * XREFs of ?DdcciSendAndReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_J0PEAXK1K@Z @ 0x140345D4C
 * Callers:
 *     ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z @ 0x140221B8C (-DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140345838 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z @ 0x140345B8C (-DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z.c)
 * Callees:
 *     ?VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEPEBEK@Z @ 0x14022E364 (-VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEPEBEK@Z.c)
 *     ?DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z @ 0x14022E4C4 (-DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z.c)
 *     ?ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEPEBEK@Z @ 0x140235E44 (-ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEPEBEK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciSendAndReceiveDataFromMonitorDevice(
        struct OPM::CMutex **this,
        __int64 a2,
        union _LARGE_INTEGER a3,
        const unsigned __int8 *a4,
        unsigned int a5,
        unsigned __int8 *a6,
        unsigned int a7)
{
  char v9; // al
  __int64 v10; // r8
  __int64 v11; // r11
  int v12; // r10d
  __int64 result; // rax
  __int64 v14; // rcx
  _DWORD v15[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-18h]
  __int64 v18; // [rsp+58h] [rbp-10h]

  v9 = CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum(110, a4, a5 - 1);
  *(_BYTE *)(v10 + v11) = v9;
  v15[0] = 110;
  v16 = v11;
  v15[1] = v12;
  v17 = 111LL;
  v18 = -500000LL;
  result = CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(this, 0x2324DFu, a3, v15, 0x20u, a6, a7);
  if ( (int)result >= 0 )
    return CPhysicalMonitorHandle::VerifyDDCCIMessageChecksum(v14, a6, a7);
  return result;
}
