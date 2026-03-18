/*
 * XREFs of ApiSetApplyGatheredDeviceInfoSummaryInformation @ 0x1401BD3AC
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x14013E738 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x140178FA4 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetApplyGatheredDeviceInfoSummaryInformation(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6))(void)
{
  unsigned int v9; // ebp
  __int64 (*result)(void); // rax

  v9 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5040LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))ApplyGatheredDeviceInfoSummaryInformation(v9, a2, a3, a4, a5, a6);
  }
  return result;
}
