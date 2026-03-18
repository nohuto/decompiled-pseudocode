/*
 * XREFs of DxgkOpenPhysicalMemoryObjectCB @ 0x14003F350
 * Callers:
 *     <none>
 * Callees:
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x140040410 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x1400407B4 (DpiGetSysMmAdapterFromDevice.c)
 */

__int64 __fastcall DxgkOpenPhysicalMemoryObjectCB(__int64 a1)
{
  struct SYSMM_ADAPTER *SysMmAdapterFromDevice; // rax
  struct SYSMM_PHYSICAL_OBJECT *v3; // rbx
  __int64 result; // rax

  SysMmAdapterFromDevice = (struct SYSMM_ADAPTER *)DpiGetSysMmAdapterFromDevice(*(_QWORD *)(a1 + 8));
  v3 = *(struct SYSMM_PHYSICAL_OBJECT **)a1;
  result = SmmOpenPhysicalObject(*(struct SYSMM_PHYSICAL_OBJECT **)a1, SysMmAdapterFromDevice);
  *(_QWORD *)(a1 + 16) = (char *)v3 + 64;
  return result;
}
