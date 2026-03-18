/*
 * XREFs of ZwProtectVirtualMemory @ 0x14069BB40
 * Callers:
 *     CmSiProtectViewOfSection @ 0x14046BB00 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x1405C0FB8 (KiOpPatchCode.c)
 *     DifZwProtectVirtualMemoryWrapper @ 0x140637B10 (DifZwProtectVirtualMemoryWrapper.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E21A8 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x140A296B4 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwProtectVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
