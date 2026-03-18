/*
 * XREFs of GreDxgkRegisterDwmProcess @ 0x1401C5CB0
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1401ADDE8 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDxgkRegisterDwmProcess(__int64 a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(__int64 (**)(void))(DxgkWin32kInterface + 464))();
}
