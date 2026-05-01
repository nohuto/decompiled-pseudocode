/*
 * XREFs of ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEBGPEAPEAU2@@Z @ 0x1801C62E4
 * Callers:
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1801C6144 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1801C6144.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z @ 0x1802B04C0 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSwitchController::_GetMonitorForAppSwitch(
        CallerIdentity **this,
        struct IImmersiveMonitor *a2,
        struct IUnknown *a3,
        struct IImmersiveMonitor **a4)
{
  struct IObjectArray **v8; // r9
  HRESULT v9; // ebx
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, struct IImmersiveMonitor **); // rdi
  __int64 v15; // rcx
  void *v16; // rbx
  __int64 (__fastcall *v17)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rdi
  struct IImmersiveMonitor *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct IImmersiveMonitor *v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int16 v24[4]; // [rsp+40h] [rbp-10h] BYREF
  void *ppvOut; // [rsp+90h] [rbp+40h] BYREF
  int v26; // [rsp+A8h] [rbp+58h] BYREF

  *a4 = 0LL;
  v22 = 0LL;
  *(_QWORD *)v24 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v24);
  if ( (int)CallerIdentity::FindAllApplicationsByAppID(this[2], a3, v24, v8) >= 0 )
  {
    LODWORD(ppvOut) = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)v24 + 24LL))(*(_QWORD *)v24, &ppvOut);
    v10 = 0;
    while ( v9 >= 0 )
    {
      if ( v10 >= (unsigned int)ppvOut )
        goto LABEL_13;
      v23 = 0LL;
      v11 = *(_QWORD *)v24;
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)v24 + 32LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
      v9 = v12(v11, v10, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v23);
      if ( v9 >= 0 )
      {
        v26 = 0;
        v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 64LL))(v23, &v26);
        if ( v9 >= 0 )
        {
          if ( v26 )
          {
            v13 = v23;
            v14 = *(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)v23 + 232LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
            v9 = v14(v13, &v22);
            if ( v9 >= 0 )
            {
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
LABEL_13:
              if ( v22 )
                goto LABEL_19;
              break;
            }
          }
        }
      }
      v15 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      ++v10;
    }
  }
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v22, (__int64)a2);
    v9 = 0;
LABEL_19:
    v18 = v22;
    v22 = 0LL;
    *a4 = v18;
    goto LABEL_20;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v9 = IUnknown_QueryService(
         (IUnknown *)this[2],
         (const GUID *const)&SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &ppvOut);
  if ( v9 >= 0 )
  {
    v16 = ppvOut;
    v17 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)ppvOut
                                                                                                + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    v9 = v17(v16, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v22);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  if ( v9 >= 0 )
    goto LABEL_19;
LABEL_20:
  v19 = *(_QWORD *)v24;
  if ( *(_QWORD *)v24 )
  {
    *(_QWORD *)v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = (__int64)v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v9;
}
