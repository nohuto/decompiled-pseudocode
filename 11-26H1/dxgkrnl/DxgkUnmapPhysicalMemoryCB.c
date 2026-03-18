/*
 * XREFs of DxgkUnmapPhysicalMemoryCB @ 0x14003F200
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x14003F220 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 */

void __fastcall DxgkUnmapPhysicalMemoryCB(__int64 a1)
{
  SysMmUnmapPhysicalObject(*(struct SYSMM_PHYSICAL_OBJECT **)a1, *(PVOID *)(a1 + 8), *(_QWORD *)(a1 + 16));
}
