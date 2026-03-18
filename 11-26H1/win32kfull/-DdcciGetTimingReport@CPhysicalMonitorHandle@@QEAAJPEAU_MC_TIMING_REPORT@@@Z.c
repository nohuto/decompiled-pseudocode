/*
 * XREFs of ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z @ 0x140345B8C
 * Callers:
 *     ?DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z @ 0x14028F43C (-DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z.c)
 * Callees:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x14022E308 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x14022E44C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendAndReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_J0PEAXK1K@Z @ 0x140345D4C (-DdcciSendAndReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_J0PEAXK1K@Z.c)
 *     Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline @ 0x140345FC8 (Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetTimingReport(
        CPhysicalMonitorHandle *this,
        struct _MC_TIMING_REPORT *a2)
{
  __int64 v4; // rdx
  int v5; // eax
  int v6; // edx
  unsigned __int16 v7; // ax
  int v8; // ecx
  unsigned __int16 v9; // ax
  int v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  char v13; // [rsp+50h] [rbp-10h]

  v11 = 0;
  v12 = 0LL;
  v13 = 0;
  if ( (unsigned int)Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = CPhysicalMonitorHandle::DdcciSendAndReceiveDataFromMonitorDevice(this, v4, -500000LL, &v11, 4u, &v12, 9u);
  }
  else
  {
    v11 = 491857;
    v6 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, -500000LL, &v11, 4);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v5 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(this, -500000LL, &v12, 9u);
  }
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( (v12 & 0x3C000000) != 0 )
    {
      return (unsigned int)-1071774330;
    }
    else
    {
      v7 = BYTE4(v12) << 8;
      *((_BYTE *)a2 + 8) = BYTE3(v12);
      v8 = BYTE5(v12) | v7;
      v9 = BYTE6(v12) << 8;
      *(_DWORD *)a2 = v8;
      *((_DWORD *)a2 + 1) = HIBYTE(v12) | v9;
    }
  }
  return (unsigned int)v6;
}
