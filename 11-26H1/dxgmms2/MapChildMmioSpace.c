/*
 * XREFs of MapChildMmioSpace @ 0x140046F74
 * Callers:
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x140104998 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MapChildMmioSpace(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))DxgCoreInterface[78])(a1);
}
