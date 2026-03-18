/*
 * XREFs of DrvCleanupRemoteGraphicsDevices @ 0x1401F6734
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D55B8 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvCleanupRemoteGraphicsDevices(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 i; // rbx
  __int64 DxgkWin32kInterface; // rax

  if ( !(unsigned int)GET_USERCRIT_DISPOSITION(a1, a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10298;
  }
  result = W32GetSessionState(v2);
  v5 = *(_QWORD *)(result + 88);
  for ( i = *(_QWORD *)(v5 + 1272); i; i = *(_QWORD *)(i + 128) )
  {
    if ( (*(_DWORD *)(i + 160) & 0x4000000) != 0 )
    {
      if ( *(_QWORD *)(i + 296) )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5, v4);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(DxgkWin32kInterface + 400))(
          *(_QWORD *)(i + 272),
          0LL,
          *(_QWORD *)(i + 280));
        result = 0LL;
        *(_QWORD *)(i + 272) = 0LL;
        *(_QWORD *)(i + 288) = 0LL;
        *(_QWORD *)(i + 296) = 0LL;
      }
    }
  }
  return result;
}
