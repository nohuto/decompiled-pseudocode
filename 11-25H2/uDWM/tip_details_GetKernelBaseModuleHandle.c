/*
 * XREFs of tip_details_GetKernelBaseModuleHandle @ 0x180099934
 * Callers:
 *     TestUnlockData @ 0x180089FC8 (TestUnlockData.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18008AA30 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     TestReport @ 0x1800998E0 (TestReport.c)
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1800D72E0 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 *     TestClose @ 0x1800D8D04 (TestClose.c)
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
