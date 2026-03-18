/*
 * XREFs of DrvUpdateRemoteGraphicsDeviceList @ 0x1401F96EC
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D55B8 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x14002CE50 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401A5664 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvUpdateRemoteGraphicsDeviceList(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 i; // rbp
  __int64 DxgkWin32kInterface; // rax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  char v15; // [rsp+50h] [rbp+8h] BYREF

  if ( !(unsigned int)GET_USERCRIT_DISPOSITION(a1, a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9877;
  }
  v3 = *(_QWORD *)(W32GetSessionState(v2) + 88);
  GreCleanupRemoteAdapterContext((struct tagREMOTE_CONTEXT *)(v3 + 2936));
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4, v6) + 68696) )
  {
    for ( i = *(_QWORD *)(v3 + 1272); i; i = *(_QWORD *)(i + 128) )
    {
      if ( (*(_DWORD *)(i + 160) & 0x4000000) != 0 && !*(_QWORD *)(i + 272) )
      {
        v15 = 0;
        *(_QWORD *)(i + 288) = 0LL;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8, v7);
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, char *))(DxgkWin32kInterface + 392))(
                i + 272,
                i + 288,
                i + 296,
                i + 280,
                &v15);
        if ( v11 >= 0 )
        {
          v12 = *(_DWORD *)(i + 164);
          if ( v15 )
            v13 = v12 | 4;
          else
            v13 = v12 & 0xFFFFFFFB;
          *(_DWORD *)(i + 164) = v13;
          DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)i);
        }
        else
        {
          WdLogSingleEntry2(2LL, i, v11);
          WdLogGlobalForLineNumber = 9913;
        }
      }
    }
  }
  return 1LL;
}
