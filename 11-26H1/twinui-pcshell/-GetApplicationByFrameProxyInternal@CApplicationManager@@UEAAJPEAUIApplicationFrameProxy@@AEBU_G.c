/*
 * XREFs of ?GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x180062570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByFrameProxy@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByFrameProxy@@_KPEA_K@Z @ 0x180063380 (--$GetAppPosition@VCImmersiveAppFinderByFrameProxy@@@-$CActivationBasedCollection@V-$ComPtr@UIIm.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::GetApplicationByFrameProxyInternal(
        CApplicationManager *this,
        struct IApplicationFrameProxy *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v7; // r8
  int App; // ebx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v10)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 (__fastcall ***v12)(_QWORD, const struct _GUID *, void **); // [rsp+50h] [rbp+30h] BYREF
  struct IApplicationFrameProxy *v13; // [rsp+58h] [rbp+38h] BYREF
  __int64 v14; // [rsp+68h] [rbp+48h] BYREF

  *a4 = 0LL;
  v12 = 0LL;
  v13 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v12 = 0LL;
  v14 = 0LL;
  App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByFrameProxy>(
          (char *)this + 384,
          &v13,
          v7,
          &v14);
  if ( App >= 0 )
  {
    v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 49) + 8 * v14);
    App = (**v9)(v9, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v12);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  if ( App >= 0 )
    App = (**v12)(v12, a3, a4);
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v10)[2])(v10);
  }
  return (unsigned int)App;
}
