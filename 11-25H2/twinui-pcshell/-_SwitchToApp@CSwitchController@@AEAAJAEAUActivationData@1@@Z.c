/*
 * XREFs of ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1801DCFE8
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18007AF20 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1801CEF20 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_RemoveAppWithPendingTermination@CSwitchController@@AEAAJPEAUIImmersiveApplication@@@Z @ 0x18008B6A4 (-_RemoveAppWithPendingTermination@CSwitchController@@AEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D6088 (-CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSwitchController::_SwitchToApp(IUnknown **this, struct CSwitchController::ActivationData *a2)
{
  int Instance; // ebx
  struct IImmersiveApplication **v5; // rsi
  __int64 v6; // rcx
  struct IImmersiveApplication *v7; // rdi
  __int64 (__fastcall *v8)(struct IImmersiveApplication *, LPVOID *); // rbx
  __int64 *v9; // rdi
  __int64 v10; // rcx
  LPVOID v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // [rsp+68h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+40h] BYREF

  Instance = 0;
  v5 = (struct IImmersiveApplication **)((char *)a2 + 16);
  v6 = *((_QWORD *)a2 + 2);
  if ( v6 )
  {
    v16 = 0;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 56LL))(v6, &v16);
    if ( !v16 )
      goto LABEL_7;
    pv = 0LL;
    v7 = *v5;
    v8 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, LPVOID *))(*(_QWORD *)*v5 + 32LL);
    CoTaskMemFree(0LL);
    Instance = v8(v7, &pv);
    if ( Instance >= 0 )
    {
      Instance = CSwitchController::_RemoveAppWithPendingTermination(this, *v5);
      if ( Instance == -2147023598 )
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v5);
    }
    CoTaskMemFree(pv);
    if ( Instance >= 0 )
    {
LABEL_7:
      v9 = (__int64 *)((char *)a2 + 24);
      if ( !*((_QWORD *)a2 + 3)
        || (*(unsigned int (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)*v5 + 328LL))(*v5, 5LL)
        || (*(unsigned int (__fastcall **)(struct IImmersiveApplication *, _QWORD))(*(_QWORD *)*v5 + 328LL))(*v5, 0LL) )
      {
        pv = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pv);
        Instance = IUnknown_QueryService(
                     this[2],
                     &IID_IImmersiveApplicationManager,
                     &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
                     &pv);
        if ( Instance < 0 )
          goto LABEL_13;
        Instance = (*(__int64 (__fastcall **)(LPVOID, struct IImmersiveApplication *, __int64))(*(_QWORD *)pv + 64LL))(
                     pv,
                     *v5,
                     1LL);
        if ( Instance < 0 )
        {
          if ( Instance == -2147024891 )
          {
LABEL_13:
            v11 = pv;
            if ( pv )
            {
              pv = 0LL;
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
            }
            return (unsigned int)Instance;
          }
          v10 = *v9;
          if ( !*v9 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2 + 3);
            v15 = 0x200000LL;
            if ( Instance != -2147023598 )
              v15 = 0LL;
            Instance = CDelayedTileActivation_CreateInstance(*v5, v14, v15);
            goto LABEL_13;
          }
          if ( Instance != -2147023598 )
          {
            if ( Instance == -2147019873 )
              Instance = 0;
            goto LABEL_13;
          }
          Instance = 0;
          v13 = 0x200000LL;
        }
        else
        {
          v10 = *v9;
          if ( !*v9 )
            goto LABEL_13;
          v13 = 0x1000000LL;
        }
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, v13, (unsigned int)v13);
        goto LABEL_13;
      }
    }
  }
  return (unsigned int)Instance;
}
