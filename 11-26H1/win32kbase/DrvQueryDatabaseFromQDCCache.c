/*
 * XREFs of DrvQueryDatabaseFromQDCCache @ 0x14007D948
 * Callers:
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x14007D67C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvQueryDatabaseFromQDCCache(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // ebp
  __int64 DxgkWin32kInterface; // rax

  v8 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64))(DxgkWin32kInterface + 800))(
           v8,
           a2,
           a3,
           a4,
           a5);
}
