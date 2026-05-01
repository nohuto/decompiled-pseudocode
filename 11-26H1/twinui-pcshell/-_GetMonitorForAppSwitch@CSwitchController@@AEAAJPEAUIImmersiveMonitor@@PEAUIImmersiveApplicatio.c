/*
 * XREFs of ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x180090464
 * Callers:
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x18009031C (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSwitchController::_GetMonitorForAppSwitch(
        IUnknown **this,
        struct IImmersiveMonitor *a2,
        struct IImmersiveApplication *a3,
        struct IImmersiveMonitor **a4)
{
  HRESULT v8; // edi
  struct IImmersiveMonitor *v9; // rcx
  void *v11; // rbx
  __int64 (__fastcall *v12)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rdi
  int (__fastcall *v13)(struct IImmersiveApplication *, __int64 *); // rbx
  struct IImmersiveMonitor *v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h] BYREF
  int v16; // [rsp+80h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 0LL;
  v14 = 0LL;
  v8 = -2147023728;
  v16 = 0;
  (*(void (__fastcall **)(struct IImmersiveApplication *, int *))(*(_QWORD *)a3 + 64LL))(a3, &v16);
  if ( !v16 && a2 )
    goto LABEL_3;
  v15 = 0LL;
  LODWORD(ppvOut) = 0;
  v13 = *(int (__fastcall **)(struct IImmersiveApplication *, __int64 *))(*(_QWORD *)a3 + 232LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  if ( v13(a3, &v15) >= 0
    && (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v15 + 48LL))(v15, &ppvOut) >= 0
    && (_DWORD)ppvOut )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v14, &v15);
    v8 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  if ( v8 >= 0 )
    goto LABEL_4;
  if ( a2 )
  {
LABEL_3:
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v14, (__int64)a2);
    v8 = 0;
LABEL_4:
    v9 = 0LL;
    *a4 = v14;
    goto LABEL_5;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         this[2],
         (const GUID *const)&SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &ppvOut);
  if ( v8 >= 0 )
  {
    v11 = ppvOut;
    v12 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)ppvOut
                                                                                                + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    v8 = v12(v11, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v14);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  if ( v8 >= 0 )
    goto LABEL_4;
  v9 = v14;
LABEL_5:
  if ( v9 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v8;
}
