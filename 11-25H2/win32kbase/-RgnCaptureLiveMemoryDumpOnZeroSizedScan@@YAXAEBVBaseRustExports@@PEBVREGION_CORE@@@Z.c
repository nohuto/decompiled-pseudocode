/*
 * XREFs of ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140099180
 * Callers:
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140011330 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_vScale@Win32kRS@@YAXPEAVREGION_CORE@@VPOINTFL@@@Z @ 0x140092664 (-RegionCore_vScale@Win32kRS@@YAXPEAVREGION_CORE@@VPOINTFL@@@Z.c)
 *     ?RegionCore_upload_for_floodfill@Win32kRS@@YAJPEAVREGION_CORE@@PEBJKPEAJK@Z @ 0x140094A0C (-RegionCore_upload_for_floodfill@Win32kRS@@YAJPEAVREGION_CORE@@PEBJKPEAJK@Z.c)
 *     ?RegionCore_set_from_path@Win32kRS@@YAHPEAVREGION_CORE@@AEAVEPATHOBJ@@KPEBU_RECTL@@@Z @ 0x140095BA8 (-RegionCore_set_from_path@Win32kRS@@YAHPEAVREGION_CORE@@AEAVEPATHOBJ@@KPEBU_RECTL@@@Z.c)
 *     ?RegionCore_tighten@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140096B54 (-RegionCore_tighten@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_to_rectls@Win32kRS@@YAHPEAVREGION_CORE@@_KPEBU_RECTL@@@Z @ 0x140098984 (-RegionCore_set_to_rectls@Win32kRS@@YAHPEAVREGION_CORE@@_KPEBU_RECTL@@@Z.c)
 *     ?RegionCore_iReduce@Win32kRS@@YAJPEAVREGION_CORE@@PEBV2@@Z @ 0x140098EF8 (-RegionCore_iReduce@Win32kRS@@YAJPEAVREGION_CORE@@PEBV2@@Z.c)
 *     ?RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z @ 0x14013E95C (-RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z.c)
 *     ?RegionCore_bExpand@Win32kRS@@YAHPEAVREGION_CORE@@K@Z @ 0x14019C64C (-RegionCore_bExpand@Win32kRS@@YAHPEAVREGION_CORE@@K@Z.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C40E4 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C4370 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 *     ?RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z @ 0x1401C44D0 (-RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z @ 0x1401C4560 (-bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z @ 0x1401C4680 (-bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall RgnCaptureLiveMemoryDumpOnZeroSizedScan(
        unsigned int (__fastcall **a1)(const struct REGION_CORE *),
        const struct REGION_CORE *a2)
{
  if ( !a1[21](a2) )
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, a2, 0LL, 0LL, 0LL, 0LL, 0);
}
