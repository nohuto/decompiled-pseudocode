/*
 * XREFs of tip_details_GetKernelBaseModuleHandle @ 0x18008D110
 * Callers:
 *     TestUnlockData @ 0x180078A88 (TestUnlockData.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800797B4 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     TestReport @ 0x18008D0BC (TestReport.c)
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1800D43B8 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 *     TestClose @ 0x1800D5D98 (TestClose.c)
 * Callees:
 *     <none>
 */

HMODULE tip_details_GetKernelBaseModuleHandle()
{
  HMODULE result; // rax

  result = (HMODULE)g_tip_details_kernelbaseModuleHandle;
  if ( !g_tip_details_kernelbaseModuleHandle )
  {
    result = GetModuleHandleW(L"kernelbase.dll");
    g_tip_details_kernelbaseModuleHandle = (__int64)result;
  }
  return result;
}
