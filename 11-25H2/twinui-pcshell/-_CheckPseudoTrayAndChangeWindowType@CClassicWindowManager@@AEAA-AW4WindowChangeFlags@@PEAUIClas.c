/*
 * XREFs of ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180023714
 * Callers:
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180022030 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___ @ 0x1801E2650 (CClassicWindowManager--ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@PEA_N@Z @ 0x180286450 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z @ 0x180022D94 (-RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180023D68 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180101084 (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180144434 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180144484 (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1801904BC (-_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1801AE2F4 (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___ @ 0x1802871A4 (CIAMGlobals--QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(
        CClassicWindowManager *a1,
        struct IClassicWindow *a2,
        int a3)
{
  char v6; // si
  HWND v7; // rax
  int v8; // esi
  unsigned int v9; // esi
  struct IClassicWindow **v10; // rax
  struct IClassicWindow *v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rcx
  HWND v16; // rbx
  CApplicationManagerUtility *v17; // rax
  HWND v18; // rdx
  HWND v19; // rax
  HWND v20; // rbx
  HWND v21; // rax
  HWND v22; // rax
  HWND v23; // r15
  HWND Window; // r14
  HWND v25; // rdx
  struct IClassicWindow *v26; // [rsp+20h] [rbp-28h] BYREF
  int v27; // [rsp+28h] [rbp-20h]

  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 136LL))(a2) && (a3 & 8) == 0 )
    goto LABEL_6;
  if ( (a3 & 4) != 0 )
    goto LABEL_6;
  v6 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 160LL))(a2) && (a3 & 1) == 0 )
    goto LABEL_6;
  if ( (a3 & 2) == 0
    && (v7 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2), IsWindowVisible(v7))
    && ((v16 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2),
         (GetWindowLongPtrW(v16, -20) & 0x40000) != 0)
     || (GetWindowLongPtrW(v16, -20) & 0x8000080) == 0)
    && (v17 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2),
        !CApplicationManagerUtility::IsForcedAppWindow(v17, v18))
    && (v19 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2),
        (v20 = GetWindow(v19, 4u)) != 0LL)
    && (v21 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2), IsWindowEnabled(v21))
    && (v22 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2), IsWindowVisible(v22))
    && (!IsWindowVisible(v20) || !IsWindowEnabled(v20)) )
  {
    v23 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    while ( v20 )
    {
      Window = GetWindow(v20, 4u);
      if ( IsWindowVisible(v20)
        && CApplicationManagerUtility::IsTrayWindowStyleCheck(v20, v25)
        && (!Window || CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)v20, v25)) )
      {
        goto LABEL_6;
      }
      if ( CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)v20, v25) )
      {
        v6 = 0;
      }
      else if ( v6
             && (GetWindowLongPtrW(v20, -20) & 0x80u) != 0LL
             && ((GetWindowLongPtrW(v23, -20) & 0x10000) == 0 || Window) )
      {
        goto LABEL_6;
      }
      v23 = v20;
      v20 = Window;
    }
    v8 = 32;
  }
  else
  {
LABEL_6:
    v8 = 64;
  }
  v9 = a3 | v8;
  v10 = (struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2);
  v11 = *v10;
  if ( *v10 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v11 + 8LL))(*v10);
  v13 = (*(__int64 (__fastcall **)(struct IClassicWindow *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, v9);
  if ( (v13 & 0x80) != 0 )
  {
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v26 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
    v27 = 0;
    CIAMGlobals::QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___(v14, &v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 16LL))(a2);
  }
  else if ( (v13 & 0x100) != 0 )
  {
    CClassicWindowManager::RemoveApplicationView(v12, a2, 0LL);
  }
  if ( (v13 & 0x11) != 0 )
    CClassicWindowManager::RecomputeOwner(a1, a2);
  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 120LL))(a2)
    && (v13 & 0xC) != 0
    && (v13 & 0x80) == 0 )
  {
    RaiseApplicationViewChangeNotification(a2, 16LL);
  }
  if ( (v13 & 0x800) != 0 )
  {
    if ( (v13 & 0x80) == 0 )
      RaiseApplicationViewChangeNotification(a2, 10LL);
    goto LABEL_18;
  }
  if ( (v13 & 0x1000) != 0 )
  {
    if ( (v13 & 0x100) == 0 )
      RaiseApplicationViewChangeNotification(a2, 11LL);
    CClassicWindowManager::_HandleOwnerBecameDestroyed(a1, a2);
  }
  else if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 128LL))(a2)
         && *(struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2) != v11 )
  {
LABEL_18:
    CClassicWindowManager::RecomputeOwnerForDirectOwnees(a1, v11, a2);
  }
  if ( v11 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v11 + 16LL))(v11);
  return v13;
}
