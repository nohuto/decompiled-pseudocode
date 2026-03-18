/*
 * XREFs of ?GetCcdRawmodeFlag@@YAIXZ @ 0x14002D5F8
 * Callers:
 *     DrvFunctionalizeDisplayConfig @ 0x14002E708 (DrvFunctionalizeDisplayConfig.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBURETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401B8CE8 (-DrvFunctionalizeBaseVidMode@@YAJAEBURETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetCcdRawmodeFlag(__int64 a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 328))() != 0 ? 0x20000 : 0;
}
