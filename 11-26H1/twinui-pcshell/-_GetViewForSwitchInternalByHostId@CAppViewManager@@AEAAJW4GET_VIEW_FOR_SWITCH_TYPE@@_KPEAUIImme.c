/*
 * XREFs of ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800A6C94
 * Callers:
 *     ?GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1800A8A20 (-GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800A6EB4 (-_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUII.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1801B9430 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 CAppViewManager::_GetViewForSwitchInternalByHostId(CAppViewManager *a1, int a2, unsigned __int64 a3, ...)
{
  __int64 v6; // rbx
  struct IImmersiveMonitor *v7; // r8
  int MostRecentlyUsedViewForAppInstance; // r15d
  RTL_SRWLOCK *v9; // rdi
  __int64 v10; // r14
  __int64 (__fastcall *v11)(__int64, unsigned __int64, __int64 *); // rsi
  int v12; // eax
  __int64 v13; // rcx
  struct IUnknown *v14; // rax
  struct IUnknown *v15; // rcx
  HWND v17; // rsi
  struct IUnknown *v18; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v19; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+48h] BYREF
  va_list va; // [rsp+A8h] [rbp+48h]
  struct IUnknown **v24; // [rsp+B0h] [rbp+50h]
  va_list va1; // [rsp+B8h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, struct IUnknown **);
  *v24 = 0LL;
  v6 = 0LL;
  v21[0] = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  MostRecentlyUsedViewForAppInstance = CAppViewManager::_GetMostRecentlyUsedViewForAppInstance(
                                         a1,
                                         a3,
                                         v7,
                                         (struct IImmersiveApplicationInternal **)&v18);
  if ( MostRecentlyUsedViewForAppInstance >= 0 && a2 == 1 )
  {
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    v21[1] = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v20 = 0LL;
    v10 = *((_QWORD *)a1 + 15);
    v11 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *))(*(_QWORD *)v10 + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    v12 = v11(v10, a3, &v20);
    v13 = v20;
    if ( v12 >= 0 && *(_BYTE *)(v20 + 32) )
    {
      v17 = *(HWND *)(v20 + 24);
      v19 = 0LL;
      LOBYTE(v22) = 0;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      if ( (int)CAppViewManager::_GetGlomForWindow(a1, v17, (struct IImmersiveApplicationInternal **)&v19, (bool *)va) >= 0 )
      {
        if ( (_BYTE)v22 )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(v21, &v19);
          v6 = v21[0];
        }
        else
        {
          if ( !SHIsSameObject(v18, v19) )
            (*(void (__fastcall **)(_QWORD, HWND, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                               + 96LL))(
              *((_QWORD *)a1 + 15),
              v17,
              v19,
              v18,
              0LL);
          ((void (__fastcall *)(struct IUnknown *, HWND, __int64))v18->lpVtbl[4].Release)(v18, v17, 2LL);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      v13 = v20;
    }
    if ( v13 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    if ( v6 )
      goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(v21, &v18);
  v6 = v21[0];
  if ( MostRecentlyUsedViewForAppInstance >= 0 )
  {
LABEL_10:
    v14 = v18;
    v15 = 0LL;
    v18 = 0LL;
    *v24 = v14;
  }
  else
  {
    v15 = v18;
  }
  if ( v15 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)MostRecentlyUsedViewForAppInstance;
}
