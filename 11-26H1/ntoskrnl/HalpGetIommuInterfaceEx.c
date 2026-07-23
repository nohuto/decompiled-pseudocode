/*
 * XREFs of HalpGetIommuInterfaceEx @ 0x140789350
 * Callers:
 *     <none>
 * Callees:
 *     Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline @ 0x140589D58 (Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpGetIommuInterfaceEx(int a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // eax
  void *v8; // rcx
  void *v9; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  void *v11; // rcx
  void *v12; // rcx

  if ( (unsigned int)(a1 - 1) <= 2 )
  {
    if ( !a3 )
      return 3221225712LL;
    if ( a2 )
      return 3221225713LL;
    switch ( a1 )
    {
      case 1:
        v6 = 120LL;
        *((_DWORD *)a3 + 3) = 0;
        a3[2] = (__int64)IommuDomainCreate;
        a3[3] = (__int64)IommuDomainDelete;
        a3[4] = (__int64)IommuDomainAttachDevice;
        a3[5] = (__int64)IommuDomainDetachDevice;
        a3[6] = (__int64)IommuFlushDomain;
        a3[7] = (__int64)IommuFlushDomainVaList;
        a3[8] = (__int64)xHalUnmaskInterrupt;
        a3[9] = (__int64)IommuMapLogicalRange;
        a3[10] = (__int64)IommuUnmapLogicalRange;
        a3[11] = (__int64)IommuMapIdentityRange;
        a3[12] = (__int64)IommuUnmapIdentityRange;
        a3[13] = (__int64)IommuSetDeviceFaultReporting;
        a3[14] = (__int64)IommuDomainConfigure;
LABEL_20:
        *((_DWORD *)a3 + 2) = a1;
        result = 0LL;
        *a3 = v6;
        return result;
      case 2:
        v6 = 192LL;
        memset_0(a3, 0, 0xC0uLL);
        a3[2] = (__int64)IommuDomainCreateEx;
        a3[3] = (__int64)IommuDomainDelete;
        a3[4] = (__int64)IommuDomainAttachDeviceEx;
        a3[5] = (__int64)IommuDomainDetachDeviceEx;
        a3[6] = (__int64)IommuFlushDomain;
        a3[7] = (__int64)IommuFlushDomainVaList;
        a3[8] = (__int64)xHalUnmaskInterrupt;
        a3[9] = (__int64)IommuMapLogicalRangeEx;
        a3[10] = (__int64)IommuUnmapLogicalRange;
        a3[11] = (__int64)IommuMapIdentityRangeEx;
        a3[12] = (__int64)IommuUnmapIdentityRangeEx;
        a3[13] = (__int64)IommuSetDeviceFaultReportingEx;
        a3[14] = (__int64)IommuDomainConfigure;
        a3[15] = (__int64)IommuDeviceQueryDomainTypes;
        IsEnabledDeviceUsageNoInline = Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline();
        v11 = IommuRegisterInterfaceStateChangeCallback;
        if ( !IsEnabledDeviceUsageNoInline )
          v11 = IommuRegisterInterfaceStateChangeCallbackLegacy;
        a3[16] = (__int64)v11;
        v12 = IommuUnregisterInterfaceStateChangeCallback;
        if ( !IsEnabledDeviceUsageNoInline )
          v12 = IommuUnregisterInterfaceStateChangeCallbackLegacy;
        a3[17] = (__int64)v12;
        a3[18] = (__int64)IommuReserveLogicalAddressRange;
        a3[19] = (__int64)IommuFreeReservedLogicalAddressRange;
        a3[20] = (__int64)IommuMapReservedLogicalRange;
        a3[21] = (__int64)IommuUnmapReservedLogicalRange;
        a3[22] = (__int64)IommuDeviceCreate;
        a3[23] = (__int64)IommuDeviceDelete;
        goto LABEL_20;
      case 3:
        v6 = 232LL;
        memset_0(a3, 0, 0xE8uLL);
        a3[2] = (__int64)IommuDomainCreateEx;
        a3[3] = (__int64)IommuDomainDelete;
        a3[4] = (__int64)IommuDomainAttachDeviceEx;
        a3[5] = (__int64)IommuDomainDetachDeviceEx;
        a3[6] = (__int64)IommuFlushDomain;
        a3[7] = (__int64)IommuFlushDomainVaList;
        a3[8] = (__int64)xHalUnmaskInterrupt;
        a3[9] = (__int64)IommuMapLogicalRangeEx;
        a3[10] = (__int64)IommuUnmapLogicalRange;
        a3[11] = (__int64)IommuMapIdentityRangeEx;
        a3[12] = (__int64)IommuUnmapIdentityRangeEx;
        a3[13] = (__int64)IommuSetDeviceFaultReportingEx;
        a3[14] = (__int64)IommuDomainConfigure;
        a3[15] = (__int64)IommuDeviceQueryDomainTypes;
        v7 = Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline();
        v8 = IommuRegisterInterfaceStateChangeCallback;
        if ( !v7 )
          v8 = IommuRegisterInterfaceStateChangeCallbackLegacy;
        a3[16] = (__int64)v8;
        v9 = IommuUnregisterInterfaceStateChangeCallback;
        if ( !v7 )
          v9 = IommuUnregisterInterfaceStateChangeCallbackLegacy;
        a3[17] = (__int64)v9;
        a3[18] = (__int64)IommuReserveLogicalAddressRange;
        a3[19] = (__int64)IommuFreeReservedLogicalAddressRange;
        a3[20] = (__int64)IommuMapReservedLogicalRange;
        a3[21] = (__int64)IommuUnmapReservedLogicalRange;
        a3[22] = (__int64)IommuDeviceCreate;
        a3[23] = (__int64)IommuDeviceDelete;
        a3[24] = (__int64)IommuPasidDeviceCreate;
        a3[25] = (__int64)IommuPasidDeviceDelete;
        a3[26] = (__int64)IommuDomainAttachPasidDevice;
        a3[27] = (__int64)IommuDomainDetachPasidDevice;
        a3[28] = (__int64)IommuDeviceQueryInformation;
        goto LABEL_20;
    }
  }
  return 3221225711LL;
}
