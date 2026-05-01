/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___ @ 0x180095128
 * Callers:
 *     ?RefreshCollection@CClassicWindowManager@@UEAAJXZ @ 0x1800950D0 (-RefreshCollection@CClassicWindowManager@@UEAAJXZ.c)
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
char __fastcall CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___(
        __int64 a1,
        CClassicWindowManager *a2)
{
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  unsigned int i; // ebp
  struct IClassicWindow *v7; // rbx
  HWND v8; // rax
  struct IClassicWindow **v9; // rax
  struct IClassicWindow *v10; // rdi
  __int16 v11; // ax
  __int64 v12; // rcx
  __int16 v13; // bp
  int v14; // r14d
  HWND v16; // rax
  HWND v17; // rdx
  CApplicationManagerUtility *v18; // rax
  HWND v19; // rdx
  HWND v20; // rax
  HWND Window; // rdi
  HWND v22; // rax
  HWND v23; // rax
  HWND v24; // r14
  char v25; // r15
  HWND v26; // rbp
  HWND v27; // rdx
  __int64 v28; // rcx
  bool IsForcedAppWindow; // cl
  char v30; // dl
  struct IClassicWindow *v31; // [rsp+20h] [rbp-38h] BYREF
  int v32; // [rsp+28h] [rbp-30h]
  unsigned __int64 v33; // [rsp+60h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 200);
  v33 = v4;
  v5 = 0LL;
  if ( v4 )
  {
    for ( i = 64; ; i = 64 )
    {
      v7 = *(struct IClassicWindow **)(*(_QWORD *)(a1 + 192) + 8 * v5);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v5));
      if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 136LL))(v7) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 160LL))(v7) )
        {
          v8 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
          if ( IsWindowVisible(v8) )
          {
            v16 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
            if ( CApplicationManagerUtility::IsTrayWindowStyleCheck(v16, v17) )
            {
              v18 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
              if ( !CApplicationManagerUtility::IsForcedAppWindow(v18, v19) )
              {
                v20 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
                Window = GetWindow(v20, 4u);
                if ( Window )
                {
                  v22 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
                  if ( IsWindowEnabled(v22) )
                  {
                    v23 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
                    if ( IsWindowVisible(v23) )
                    {
                      if ( !IsWindowVisible(Window) || !IsWindowEnabled(Window) )
                      {
                        v24 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
                        v25 = 1;
                        while ( Window )
                        {
                          v26 = GetWindow(Window, 4u);
                          if ( IsWindowVisible(Window)
                            && CApplicationManagerUtility::IsTrayWindowStyleCheck(Window, v27)
                            && (!v26
                             || CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)Window, v27)) )
                          {
                            goto LABEL_37;
                          }
                          IsForcedAppWindow = CApplicationManagerUtility::IsForcedAppWindow(
                                                (CApplicationManagerUtility *)Window,
                                                v27);
                          v30 = 0;
                          if ( !IsForcedAppWindow )
                            v30 = v25;
                          v25 = v30;
                          if ( v30 )
                          {
                            if ( (GetWindowLongPtrW(Window, -20) & 0x80u) != 0LL
                              && ((GetWindowLongPtrW(v24, -20) & 0x10000) == 0 || v26) )
                            {
LABEL_37:
                              i = 64;
                              goto LABEL_38;
                            }
                          }
                          v24 = Window;
                          Window = v26;
                        }
                        i = 32;
LABEL_38:
                        v4 = v33;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v9 = (struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 96LL))(v7);
      v10 = *v9;
      if ( *v9 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 8LL))(*v9);
      v11 = (*(__int64 (__fastcall **)(struct IClassicWindow *, _QWORD))(*(_QWORD *)v7 + 112LL))(v7, i);
      v13 = v11;
      v14 = v11 & 0x80;
      if ( (v11 & 0x80) != 0 )
      {
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 8LL))(v7);
        v31 = v7;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
        v32 = 0;
        CIAMGlobals::QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___(v28, &v31);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 16LL))(v7);
      }
      else if ( (v11 & 0x100) != 0 )
      {
        CClassicWindowManager::RemoveApplicationView(v12, (__int64)v7, 0);
      }
      if ( (v13 & 0x11) != 0 )
        CClassicWindowManager::RecomputeOwner(a2, v7);
      if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 120LL))(v7)
        && (v13 & 0xC) != 0
        && !v14 )
      {
        RaiseApplicationViewChangeNotification(v7, 16LL);
      }
      if ( (v13 & 0x800) != 0 )
        break;
      if ( (v13 & 0x1000) != 0 )
      {
        if ( (v13 & 0x100) == 0 )
          RaiseApplicationViewChangeNotification(v7, 11LL);
        CClassicWindowManager::_HandleOwnerBecameDestroyed(a2, v7);
        goto LABEL_21;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 128LL))(v7)
        && *(struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 96LL))(v7) != v10 )
      {
        goto LABEL_42;
      }
LABEL_21:
      if ( v10 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 16LL))(v10);
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 16LL))(v7);
      if ( ++v5 >= v4 )
        return 1;
    }
    if ( !v14 )
      RaiseApplicationViewChangeNotification(v7, 10LL);
LABEL_42:
    CClassicWindowManager::RecomputeOwnerForDirectOwnees(a2, v10, v7);
    goto LABEL_21;
  }
  return 1;
}
