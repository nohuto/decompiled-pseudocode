/*
 * XREFs of ?UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802E69C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800A63B8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800A7BF8 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800A93C8 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::UnensureApplication(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *))
{
  unsigned int v4; // edi
  char v5; // bp
  CImmersiveAppFinderByApplication *v6; // rax
  __int64 v7; // r8
  char v8; // bl
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  if ( ((unsigned __int8 (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a2)[24])(a2) )
  {
    ((void (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a2)[23])(a2);
    if ( ((unsigned __int8 (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a2)[24])(a2)
      || ((unsigned __int8 (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a2)[56])(a2)
      || (v6 = CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
                 (CImmersiveAppFinderByApplication *)&v10,
                 a2),
          v5 = 1,
          v8 = 1,
          (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
                 (__int64)this + 384,
                 v6,
                 v7,
                 &v11) < 0) )
    {
      v8 = 0;
    }
    if ( (v5 & 1) != 0 )
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    if ( v8 )
      CApplicationManager::_ForgetApplicationNoLock(
        (CApplicationManager *)((char *)this - 240),
        (struct IImmersiveApplicationInternal *)a2,
        2u);
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v4;
}
