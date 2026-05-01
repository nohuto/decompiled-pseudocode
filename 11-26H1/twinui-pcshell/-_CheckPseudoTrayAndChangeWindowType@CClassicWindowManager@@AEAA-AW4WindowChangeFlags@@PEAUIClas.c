/*
 * XREFs of ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800955FC
 * Callers:
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180096330 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___ @ 0x1801D8534 (CClassicWindowManager--ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@PEA_N@Z @ 0x18027D9E0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18004B1B4 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180094830 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800955AC (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z @ 0x180095E48 (-RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x18010E8C4 (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18012A618 (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 *     ?_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1801893E0 (-_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___ @ 0x18027E710 (CIAMGlobals--QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(
        CClassicWindowManager *a1,
        struct IClassicWindow *a2,
        int a3)
{
  char v6; // r15
  HWND v7; // rax
  int v8; // esi
  unsigned int v9; // esi
  struct IClassicWindow **v10; // rax
  struct IClassicWindow *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  int v15; // ebp
  HWND v17; // rbx
  CApplicationManagerUtility *v18; // rax
  HWND v19; // rdx
  HWND v20; // rax
  HWND v21; // rbx
  HWND v22; // rax
  HWND v23; // rax
  HWND v24; // r14
  HWND Window; // rsi
  HWND v26; // rdx
  bool IsForcedAppWindow; // al
  char v28; // dl
  __int64 v29; // rcx
  struct IClassicWindow *v30; // [rsp+20h] [rbp-28h] BYREF
  int v31; // [rsp+28h] [rbp-20h]

  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 136LL))(a2) && (a3 & 8) == 0 )
    goto LABEL_6;
  if ( (a3 & 4) != 0 )
    goto LABEL_6;
  v6 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 160LL))(a2) && (a3 & 1) == 0 )
    goto LABEL_6;
  if ( (a3 & 2) == 0
    && (v7 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2), IsWindowVisible(v7))
    && ((v17 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2),
         (GetWindowLongPtrW(v17, -20) & 0x40000) != 0)
     || (GetWindowLongPtrW(v17, -20) & 0x8000080) == 0)
    && (v18 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2),
        !CApplicationManagerUtility::IsForcedAppWindow(v18, v19))
    && (v20 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2),
        (v21 = GetWindow(v20, 4u)) != 0LL)
    && (v22 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2), IsWindowEnabled(v22))
    && (v23 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2), IsWindowVisible(v23))
    && (!IsWindowVisible(v21) || !IsWindowEnabled(v21)) )
  {
    v24 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    while ( v21 )
    {
      Window = GetWindow(v21, 4u);
      if ( IsWindowVisible(v21)
        && CApplicationManagerUtility::IsTrayWindowStyleCheck(v21, v26)
        && (!Window || CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)v21, v26)) )
      {
        goto LABEL_6;
      }
      IsForcedAppWindow = CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)v21, v26);
      v28 = 0;
      if ( !IsForcedAppWindow )
        v28 = v6;
      v6 = v28;
      if ( v28 )
      {
        if ( (GetWindowLongPtrW(v21, -20) & 0x80u) != 0LL && ((GetWindowLongPtrW(v24, -20) & 0x10000) == 0 || Window) )
          goto LABEL_6;
      }
      v24 = v21;
      v21 = Window;
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
  v12 = (*(__int64 (__fastcall **)(struct IClassicWindow *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, v9);
  v14 = v12;
  v15 = v12 & 0x80;
  if ( (v12 & 0x80) != 0 )
  {
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v30 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
    v31 = 0;
    CIAMGlobals::QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___(v29, &v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 16LL))(a2);
  }
  else if ( (v12 & 0x100) != 0 )
  {
    CClassicWindowManager::RemoveApplicationView(v13, (__int64)a2, 0);
  }
  if ( (v14 & 0x11) != 0 )
    CClassicWindowManager::RecomputeOwner(a1, a2);
  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 120LL))(a2)
    && (v14 & 0xC) != 0
    && !v15 )
  {
    RaiseApplicationViewChangeNotification(a2, 16LL);
  }
  if ( (v14 & 0x800) != 0 )
  {
    if ( !v15 )
      RaiseApplicationViewChangeNotification(a2, 10LL);
    goto LABEL_51;
  }
  if ( (v14 & 0x1000) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 128LL))(a2)
      || *(struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2) == v11 )
    {
      goto LABEL_20;
    }
LABEL_51:
    CClassicWindowManager::RecomputeOwnerForDirectOwnees(a1, v11, a2);
    goto LABEL_20;
  }
  if ( (v14 & 0x100) == 0 )
    RaiseApplicationViewChangeNotification(a2, 11LL);
  CClassicWindowManager::_HandleOwnerBecameDestroyed(a1, a2);
LABEL_20:
  if ( v11 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v11 + 16LL))(v11);
  return v14;
}
