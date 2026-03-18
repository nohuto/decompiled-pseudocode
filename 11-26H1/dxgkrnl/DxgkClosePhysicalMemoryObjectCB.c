/*
 * XREFs of DxgkClosePhysicalMemoryObjectCB @ 0x14003F330
 * Callers:
 *     <none>
 * Callees:
 *     SmmClosePhysicalObject @ 0x14003F43C (SmmClosePhysicalObject.c)
 */

__int64 __fastcall DxgkClosePhysicalMemoryObjectCB(struct SYSMM_ADAPTER_OBJECT **a1)
{
  return SmmClosePhysicalObject(*a1);
}
