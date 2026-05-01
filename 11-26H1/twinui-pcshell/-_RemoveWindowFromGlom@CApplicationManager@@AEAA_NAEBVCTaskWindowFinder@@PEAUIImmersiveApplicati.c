/*
 * XREFs of ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x1801E042C
 * Callers:
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x18016EA30 (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1802DF040 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 *     ?TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x1802E6690 (-TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800A63B8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800A7BF8 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800A8B0C (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800A93C8 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall CApplicationManager::_RemoveWindowFromGlom(
        CApplicationManager *a1,
        __int64 a2,
        void (__fastcall ***a3)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *),
        __int64 a4,
        void *ppv)
{
  _QWORD *v8; // rsi
  void *v9; // rcx
  CImmersiveAppFinderByApplication *v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  void (__fastcall ***v14)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *); // [rsp+70h] [rbp+30h] BYREF

  v8 = ppv;
  *(_QWORD *)ppv = 0LL;
  if ( ((unsigned __int8 (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a3)[56])(a3) )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    if ( IUnknown_GetSite((IUnknown *)a3, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv) >= 0
      && (*(unsigned int (__fastcall **)(void *, void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *), __int64, _QWORD *))(*(_QWORD *)ppv + 56LL))(
           ppv,
           a3,
           a2,
           v8) == 5 )
    {
      if ( ((unsigned __int8 (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a3)[24])(a3) )
      {
        v13 = 0LL;
        v11 = CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
                (CImmersiveAppFinderByApplication *)&v14,
                a3);
        CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
          (__int64)a1 + 624,
          v11,
          v12,
          &v13);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
        v14 = a3;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
        CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
          (_QWORD *)a1 + 78,
          (__int64 *)&v14,
          v13);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      }
      else
      {
        CApplicationManager::_ForgetApplicationNoLock(a1, (struct IImmersiveApplicationInternal *)a3, 3u);
      }
    }
    v9 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return *v8 != 0LL;
}
