/*
 * XREFs of DrvLogAndUpdateQDCCacheForDatabaseQuery @ 0x14007DB68
 * Callers:
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x14007D67C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvLogAndUpdateQDCCacheForDatabaseQuery(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v10; // esi
  unsigned int v11; // ebp
  __int64 DxgkWin32kInterface; // rax

  v10 = a2;
  v11 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64, int, __int64))(DxgkWin32kInterface
                                                                                               + 792))(
           v11,
           v10,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
