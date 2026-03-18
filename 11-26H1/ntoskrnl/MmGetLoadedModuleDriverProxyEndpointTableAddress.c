/*
 * XREFs of MmGetLoadedModuleDriverProxyEndpointTableAddress @ 0x1406E6FE8
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140AC705C (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403F3B30 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 */

unsigned __int64 __fastcall MmGetLoadedModuleDriverProxyEndpointTableAddress(__int64 a1)
{
  unsigned __int64 result; // rax
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  result = MmGetLoadedModuleImageAdditionalTablesAddress(a1, &v2);
  if ( result )
    result += HIDWORD(stru_140E36558.SListFaultAddress);
  return result;
}
