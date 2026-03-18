/*
 * XREFs of ?GetCcdRawmodeFlag@@YAIXZ @ 0x140157D0C
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x140157D40 (DrvFunctionalizeDisplayConfig.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBURETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019CE28 (-DrvFunctionalizeBaseVidMode@@YAJAEBURETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetCcdRawmodeFlag(__int64 a1)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 328))() != 0 ? 0x20000 : 0;
}
