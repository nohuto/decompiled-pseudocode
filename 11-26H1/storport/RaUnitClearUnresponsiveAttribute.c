/*
 * XREFs of RaUnitClearUnresponsiveAttribute @ 0x14009A0D8
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1400A66AC (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x140098274 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1400BD3A0 (StorpTelemetryMarkUnitResponsive.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitClearUnresponsiveAttribute(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rbx
  _DWORD *v4; // rax

  if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
  {
    if ( (byte_140173444 & 4) != 0 )
    {
      v2 = *(_DWORD *)(a1 + 104);
      McTemplateK0zqjuuujsssq_EtwWriteTransfer(
        v2 >> 8,
        &EventUnitResponsive,
        a1 + 242,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4784LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5128LL,
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 2104,
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        4);
    }
    StorpTelemetryMarkUnitResponsive(a1);
    *(_BYTE *)(a1 + 506) &= ~2u;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x32u,
        (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
        a1);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 112LL) & 2) != 0 )
    {
      v3 = 0LL;
      if ( RaidIsUnitControlSupported(a1, 31) )
      {
        Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline();
        v4 = *(_DWORD **)(a1 + 24);
        if ( *v4 == 1094997074 )
        {
          v3 = (__int64)(v4 + 94);
        }
        else if ( *v4 == 1314275652 )
        {
          v3 = (__int64)(v4 + 42);
        }
        RaCallMiniportUnitControl(v3);
      }
    }
  }
  return 0LL;
}
