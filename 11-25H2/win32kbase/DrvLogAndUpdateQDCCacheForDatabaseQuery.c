/*
 * XREFs of DrvLogAndUpdateQDCCacheForDatabaseQuery @ 0x1401CE6B4
 * Callers:
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x1401ABA3C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvLogAndUpdateQDCCacheForDatabaseQuery(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v11; // ebp
  __int64 DxgkWin32kInterface; // rax

  v11 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64, int, __int64))(DxgkWin32kInterface
                                                                                               + 792))(
           v11,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
