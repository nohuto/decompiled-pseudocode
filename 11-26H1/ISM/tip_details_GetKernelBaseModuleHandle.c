/*
 * XREFs of tip_details_GetKernelBaseModuleHandle @ 0x1800A52B0
 * Callers:
 *     TestClose @ 0x1800A4FBC (TestClose.c)
 *     TestCreate @ 0x1800A5010 (TestCreate.c)
 *     TestQueryData @ 0x1800A50AC (TestQueryData.c)
 *     TestReport @ 0x1800A513C (TestReport.c)
 *     TestUnlockData @ 0x1800A5190 (TestUnlockData.c)
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
