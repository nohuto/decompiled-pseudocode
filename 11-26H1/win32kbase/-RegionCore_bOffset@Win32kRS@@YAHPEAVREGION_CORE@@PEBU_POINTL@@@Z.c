/*
 * XREFs of ?RegionCore_bOffset@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_POINTL@@@Z @ 0x140183600
 * Callers:
 *     ?bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z @ 0x1401FB550 (-bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z.c)
 * Callees:
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_bOffset(Win32kRS *this, struct REGION_CORE *a2, const struct _POINTL *a3)
{
  unsigned int (__fastcall **v4)(const struct REGION_CORE *); // rdi
  unsigned int v5; // ebx

  v4 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
  v5 = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *, const struct _POINTL *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                                           + 96LL))(
         this,
         a2,
         a3);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan(v4, this);
  return v5;
}
