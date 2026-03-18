/*
 * XREFs of DxgkFreeUnicodeString @ 0x140194C6C
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x140087EC0 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastTargetDeviceChange @ 0x140088AC0 (DpiMiracastTargetDeviceChange.c)
 *     DpiFreeAdapterInfo @ 0x140238878 (DpiFreeAdapterInfo.c)
 *     DpiGetAdapterInfo @ 0x140238980 (DpiGetAdapterInfo.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x14023ABEC (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x14023AE00 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     DpiFdoResetFdo @ 0x140424504 (DpiFdoResetFdo.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_OWORD *)a1 = 0LL;
  }
}
