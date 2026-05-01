/*
 * XREFs of __tailMerge_msi_dll @ 0x1802D3A64
 * Callers:
 *     __imp_load_MsiQueryFeatureStateFromDescriptorW @ 0x1802D3AE3 (__imp_load_MsiQueryFeatureStateFromDescriptorW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801B9A40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_msi_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_msi_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
