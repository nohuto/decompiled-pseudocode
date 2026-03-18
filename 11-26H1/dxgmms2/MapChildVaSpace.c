/*
 * XREFs of MapChildVaSpace @ 0x14004D0B4
 * Callers:
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x140099D34 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MapChildVaSpace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))DxgCoreInterface[77])(a1, a2, a3, a4);
}
