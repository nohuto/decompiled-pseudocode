/*
 * XREFs of ZwProtectVirtualMemory @ 0x140723DF0
 * Callers:
 *     CmSiProtectViewOfSection @ 0x1404A2CD4 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x1405F8128 (KiOpPatchCode.c)
 *     DifZwProtectVirtualMemoryWrapper @ 0x1406AF380 (DifZwProtectVirtualMemoryWrapper.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409F0D3C (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x140AA2744 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwProtectVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
