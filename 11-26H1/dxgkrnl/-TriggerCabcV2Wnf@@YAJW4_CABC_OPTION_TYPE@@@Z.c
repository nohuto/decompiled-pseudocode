/*
 * XREFs of ?TriggerCabcV2Wnf@@YAJW4_CABC_OPTION_TYPE@@@Z @ 0x1401CF8D4
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402C9AB8 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TriggerCabcV2Wnf(int a1)
{
  int ValueData; // [rsp+50h] [rbp+8h] BYREF

  ValueData = a1;
  if ( RtlWriteRegistryValue(2u, L"GraphicsDrivers", L"CABCOption", 4u, &ValueData, 4u) < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 5123;
  }
  return ZwUpdateWnfStateData(&WNF_DXGK_CABC_OPTION_CHANGED, &ValueData, 4LL);
}
