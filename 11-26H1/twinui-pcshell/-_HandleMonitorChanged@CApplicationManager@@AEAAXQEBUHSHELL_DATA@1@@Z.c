/*
 * XREFs of ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18012AE68
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800425B0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_c3358bb5e25c1ae9cd6363a05816a228___ @ 0x18012B17C (CIAMGlobals--QueueViewManagementTask__lambda_c3358bb5e25c1ae9cd6363a05816a228___.c)
 *     ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x18012B344 (-_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZB.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18012B5A8 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18012B720 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801562F8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CApplicationManager::_HandleMonitorChanged(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, _QWORD, GUID *, GUID *, struct ISyncIAMEventHandler **); // rbx
  __int64 v6; // r8
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, _QWORD, GUID *, GUID *, struct IObjectArray **); // rbx
  struct ISyncIAMEventHandler *v9; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+48h] [rbp-18h] BYREF
  int v11; // [rsp+50h] [rbp-10h]
  struct ISyncIAMEventHandler *v12; // [rsp+98h] [rbp+38h] BYREF
  struct IObjectArray *v13; // [rsp+A0h] [rbp+40h] BYREF
  struct IObjectArray *v14; // [rsp+A8h] [rbp+48h] BYREF

  v12 = (struct ISyncIAMEventHandler *)*((_QWORD *)a2 + 1);
  CIAMGlobals::QueueViewManagementTask__lambda_c3358bb5e25c1ae9cd6363a05816a228___(this, &v12);
  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    v6 = *((_QWORD *)a2 + 5);
    if ( !v6 )
      v6 = *((_QWORD *)a2 + 1);
    CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow(
      this,
      *((_QWORD *)a2 + 1),
      v6,
      0LL,
      *((_DWORD *)a2 + 6));
  }
  else if ( *((_DWORD *)a2 + 4) == 2 )
  {
    if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
      v10 = *((_QWORD *)a2 + 1);
      v11 = 2;
      if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v10, &v13, 0LL) >= 0 )
      {
        v12 = 0LL;
        v4 = *((_QWORD *)this + 70);
        v5 = *(int (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct ISyncIAMEventHandler **))(*(_QWORD *)v4 + 88LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
        if ( v5(
               v4,
               *((_QWORD *)a2 + 1),
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &v12) >= 0 )
        {
          v10 = *((unsigned int *)this + 240);
          ((void (__fastcall *)(struct IObjectArray *, struct ISyncIAMEventHandler *, __int64 *, __int64))v13->lpVtbl[11].Release)(
            v13,
            v12,
            &v10,
            4LL);
          if ( ((unsigned __int8 (__fastcall *)(struct IObjectArray *))v13->lpVtbl[10].Release)(v13) )
          {
            v9 = 0LL;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
            if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v9) >= 0 )
            {
              v14 = 0LL;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
              if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, v12, &v14) >= 0 )
                (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, _QWORD, _DWORD, int, int))(*(_QWORD *)v9 + 24LL))(
                  v9,
                  v14,
                  ((unsigned __int64)this + 248) & -(__int64)(this != 0LL),
                  0LL,
                  *((_DWORD *)a2 + 6),
                  2,
                  0xFFFF);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    }
  }
  else if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 96) )
  {
    v14 = 0LL;
    v7 = *((_QWORD *)this + 70);
    v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IObjectArray **))(*(_QWORD *)v7 + 88LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    if ( v8(
           v7,
           *((_QWORD *)a2 + 1),
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v14) >= 0 )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
      if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, (struct IImmersiveMonitor *)v14, &v13) >= 0 )
      {
        v12 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
        if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v12) >= 0 )
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, _QWORD, _DWORD, int, int))(*(_QWORD *)v12 + 24LL))(
            v12,
            v13,
            ((unsigned __int64)this + 248) & -(__int64)(this != 0LL),
            0LL,
            *((_DWORD *)a2 + 6),
            2,
            0xFFFF);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  }
}
