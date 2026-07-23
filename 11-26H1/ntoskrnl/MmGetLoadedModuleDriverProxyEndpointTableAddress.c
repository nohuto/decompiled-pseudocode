/*
 * XREFs of MmGetLoadedModuleDriverProxyEndpointTableAddress @ 0x1406EBC98
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140AC8C4C (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403ED4E0 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 */

unsigned __int64 __fastcall MmGetLoadedModuleDriverProxyEndpointTableAddress(__int64 a1)
{
  unsigned __int64 result; // rax
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  result = MmGetLoadedModuleImageAdditionalTablesAddress(a1, &v2);
  if ( result )
    result += HIDWORD(stru_140E366D8.SListFaultAddress);
  return result;
}
