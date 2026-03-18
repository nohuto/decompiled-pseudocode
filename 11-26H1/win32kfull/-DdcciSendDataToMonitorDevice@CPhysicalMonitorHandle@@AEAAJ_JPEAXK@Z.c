/*
 * XREFs of ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x14022E44C
 * Callers:
 *     ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z @ 0x140221B8C (-DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140345838 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z @ 0x140345B8C (-DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z.c)
 *     ?DdcciSaveCurrentSettings@CMonitorAPI@@QEAAJPEAX@Z @ 0x140345CA4 (-DdcciSaveCurrentSettings@CMonitorAPI@@QEAAJPEAX@Z.c)
 *     ?DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z @ 0x140345E9C (-DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z.c)
 * Callees:
 *     ?DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z @ 0x14022E4C4 (-DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(
        CPhysicalMonitorHandle *this,
        __int64 a2,
        _BYTE *a3,
        int a4)
{
  __int64 v5; // r10
  char v6; // r11
  _BYTE *v7; // rax
  __int64 v8; // r8
  _DWORD v10[2]; // [rsp+40h] [rbp-18h] BYREF
  _BYTE *v11; // [rsp+48h] [rbp-10h]

  v5 = (unsigned int)(a4 - 1);
  v6 = 110;
  if ( a4 != 1 )
  {
    v7 = a3;
    v8 = (unsigned int)v5;
    do
    {
      v6 ^= *v7++;
      --v8;
    }
    while ( v8 );
  }
  v10[1] = a4;
  a3[v5] = v6;
  v10[0] = 110;
  v11 = a3;
  return CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(this, 0x232443u, a2, v10, 0x10u, 0LL, 0);
}
