/*
 * XREFs of ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800D6EB8
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x18003F800 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x180137AA8 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z @ 0x180304200 (-SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z.c)
 * Callees:
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x1800D71E8 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  int v7; // eax
  const RECT *v8; // rdx
  unsigned int v9; // ecx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 144);
  v11 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 128LL))(v4, &v11);
  v8 = (const RECT *)&v11;
  if ( v7 < 0 )
    v8 = 0LL;
  if ( v8 )
    CopyRect((LPRECT)(a1 + 16), v8);
  if ( a2 )
  {
    *(_OWORD *)(a1 + 72) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 40);
  }
  v9 = 2;
  if ( *(_QWORD *)(a1 + 168) && (a3 & 1) != 0 )
    return (unsigned int)CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(a1) == 1;
  return v9;
}
