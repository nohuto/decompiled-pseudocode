/*
 * XREFs of DrvNeedToSwitchAdapterForRemoteSession @ 0x14019B368
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D55B8 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DrvIsUsedByRemoteGraphicsDevices@@YAHPEAX@Z @ 0x1401F540C (-DrvIsUsedByRemoteGraphicsDevices@@YAHPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvNeedToSwitchAdapterForRemoteSession(void *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // rcx
  __int64 i; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 && (unsigned int)DrvIsUsedByRemoteGraphicsDevices(a1) )
    return 1LL;
  v7 = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  if ( (*(int (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _QWORD))(DxgkWin32kInterface + 392))(
         0LL,
         &v7,
         0LL,
         0LL,
         0LL) < 0 )
    return 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v5) + 88) + 1272LL); i; i = *(_QWORD *)(i + 128) )
  {
    if ( (*(_DWORD *)(i + 160) & 0x4000000) != 0 && *(_QWORD *)(i + 288) != v7 )
      return 1;
  }
  return v2;
}
