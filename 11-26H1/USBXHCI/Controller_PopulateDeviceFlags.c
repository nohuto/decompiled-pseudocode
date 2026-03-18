/*
 * XREFs of Controller_PopulateDeviceFlags @ 0x140075F9C
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140044750 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_Create @ 0x140074010 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     Controller_IsSecureDevice @ 0x1400357A8 (Controller_IsSecureDevice.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x140042268 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_PopulateTestRegistrySettings @ 0x1400428E8 (Controller_PopulateTestRegistrySettings.c)
 *     Feature_FSSM__private_ReportDeviceUsage @ 0x140044CD8 (Feature_FSSM__private_ReportDeviceUsage.c)
 *     Feature_O3BDH__private_IsEnabledDeviceUsageNoInline @ 0x140044D40 (Feature_O3BDH__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x140044D98 (Feature_RH1S__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_USBEXSVP1__private_IsEnabledPreCheck @ 0x140044EA0 (Feature_USBEXSVP1__private_IsEnabledPreCheck.c)
 *     Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline @ 0x140044F0C (Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_USBEXSVPX__private_IsEnabledDeviceUsageNoInline @ 0x140044F64 (Feature_USBEXSVPX__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UXKTV__private_IsEnabledDeviceUsageNoInline @ 0x140044FBC (Feature_UXKTV__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_di @ 0x1400459B4 (WPP_RECORDER_SF_di.c)
 *     Controller_PopulateDeviceFlagsFromACPI @ 0x140076284 (Controller_PopulateDeviceFlagsFromACPI.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x140076380 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateInternalDeviceFlags @ 0x140076C70 (Controller_PopulateInternalDeviceFlags.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x140076E80 (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlags(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  int v5; // edx
  int v6; // edx
  char v7; // al
  _QWORD *v8; // rsi
  __int64 result; // rax
  __int64 v10; // [rsp+28h] [rbp-20h]

  Controller_PopulateDeviceFlagsFromKse(a1, a2, a3);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 2LL);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 1LL);
  Controller_PopulateDeviceFlagsFromACPI(a1);
  Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(a1);
  Controller_PopulateTestRegistrySettings(a1);
  if ( *(_DWORD *)(a1 + 644) == 1 && *(_WORD *)(a1 + 648) == 0x8086 )
  {
    Feature_USBEXSVP1__private_IsEnabledPreCheck();
    *(_BYTE *)(a1 + 1002) = 1;
  }
  v4 = 0;
  if ( (unsigned int)Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline()
    && *(_DWORD *)(a1 + 644) == 1
    && *(_WORD *)(a1 + 648) == 4130 )
  {
    *(_BYTE *)(a1 + 1002) = 1;
  }
  if ( (unsigned int)Feature_USBEXSVPX__private_IsEnabledDeviceUsageNoInline() && *(_DWORD *)(a1 + 644) == 1 )
    *(_BYTE *)(a1 + 1002) = 1;
  if ( (unsigned int)Feature_RH1S__private_IsEnabledDeviceUsageNoInline() )
    *(_QWORD *)(a1 + 744) &= ~0x200000uLL;
  Feature_FSSM__private_ReportDeviceUsage();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v5, 4, 175, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  }
  *(_BYTE *)(a1 + 1003) = 1;
  if ( (unsigned int)Feature_UXKTV__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v6, 4, 177, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
    v7 = 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v6, 4, 178, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
    v7 = 0;
  }
  *(_BYTE *)(a1 + 1004) = v7;
  if ( (unsigned int)Feature_O3BDH__private_IsEnabledDeviceUsageNoInline()
    && *(_DWORD *)(a1 + 644) == 2
    && !_stricmp((const char *)(a1 + 704), "QCOM")
    && (!_stricmp((const char *)(a1 + 709), "0FEF")
     || !_stricmp((const char *)(a1 + 709), "0FED")
     || !_stricmp((const char *)(a1 + 709), "0FEE")
     || !_stricmp((const char *)(a1 + 709), "0F8B")
     || !_stricmp((const char *)(a1 + 709), "0F8C")
     || !_stricmp((const char *)(a1 + 709), "0F9A")) )
  {
    *(_QWORD *)(a1 + 744) &= ~0x80000uLL;
  }
  v8 = (_QWORD *)(a1 + 736);
  if ( Controller_IsSecureDevice(a1) )
    *v8 |= 0x20080uLL;
  if ( !*(_BYTE *)(a1 + 1033) )
    *(_QWORD *)(a1 + 744) &= ~1uLL;
  result = Controller_PopulateInternalDeviceFlags();
  do
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = v4;
      result = WPP_RECORDER_SF_di(
                 *(_QWORD *)(a1 + 72),
                 4u,
                 4u,
                 0xB3u,
                 (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                 v10,
                 *v8);
    }
    ++v4;
    ++v8;
  }
  while ( v4 < 2 );
  return result;
}
