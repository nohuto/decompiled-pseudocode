/*
 * XREFs of ?Initialize@CImmersiveApplicationTransitionHelper@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801C1DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_SubscribeToWNF@CImmersiveApplicationTransitionHelper@@AEAAJXZ @ 0x1801C1E88 (-_SubscribeToWNF@CImmersiveApplicationTransitionHelper@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::Initialize(
        CImmersiveApplicationTransitionHelper *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v5; // ecx
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi

  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveCharmsWindowManager,
         &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee,
         (char *)this + 40);
  if ( v5 >= 0 )
  {
    v6 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v6)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           (char *)this + 48);
    if ( v5 >= 0 )
      v5 = CImmersiveApplicationTransitionHelper::_SubscribeToWNF((CImmersiveApplicationTransitionHelper *)((char *)this - 32));
  }
  *((_BYTE *)this + 16) = v5 >= 0;
  return (unsigned int)v5;
}
