/*
 * XREFs of DrvUpdateRemoteGraphicsDeviceList @ 0x1401CFD88
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AFF08 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x14014BE70 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140160728 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 DrvUpdateRemoteGraphicsDeviceList()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 i; // rdi
  __int64 DxgkWin32kInterface; // rax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  char v11; // [rsp+40h] [rbp+8h] BYREF

  if ( !IS_USERCRIT_OWNED_AT_ALL() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10089;
  }
  v1 = *(_QWORD *)(W32GetSessionState(v0) + 88);
  GreCleanupRemoteAdapterContext((struct tagREMOTE_CONTEXT *)(v1 + 2856));
  if ( !*(_DWORD *)(W32GetUserSessionState(v3, v2) + 68704) )
  {
    for ( i = *(_QWORD *)(v1 + 1184); i; i = *(_QWORD *)(i + 128) )
    {
      if ( (*(_DWORD *)(i + 160) & 0x4000000) != 0 && !*(_QWORD *)(i + 272) )
      {
        v11 = 0;
        *(_QWORD *)(i + 288) = 0LL;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v4);
        v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, char *))(DxgkWin32kInterface + 392))(
               i + 272,
               i + 288,
               i + 296,
               i + 280,
               &v11);
        if ( v7 >= 0 )
        {
          v8 = *(_DWORD *)(i + 164);
          if ( v11 )
            v9 = v8 | 4;
          else
            v9 = v8 & 0xFFFFFFFB;
          *(_DWORD *)(i + 164) = v9;
          DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)i);
        }
        else
        {
          WdLogSingleEntry2(2LL, i, v7);
          WdLogGlobalForLineNumber = 10125;
        }
      }
    }
  }
  return 1LL;
}
