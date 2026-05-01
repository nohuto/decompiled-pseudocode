/*
 * XREFs of Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe__&_void___&_ @ 0x1804BBD88
 * Callers:
 *     ObservableProperty_bool_::AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___ @ 0x1804BBBEC (ObservableProperty_bool_--AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18023062C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A1BF0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 **__fastcall Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe_____lambda_2481c7aedd1faa0c0b80517e0ae6abbe____void_____(
        __int64 **a1,
        void **a2,
        __int64 *a3)
{
  __int64 *v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (__int64 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( v6 )
  {
    v7 = *a3;
    v8 = (__int64 *)*a2;
    v10 = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>(v6);
    *v6 = (__int64)&off_180722880;
    v6[2] = (__int64)v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6 + 2);
    v6[3] = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    if ( *a1 )
      (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
    *a1 = v6;
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____((void **)&v10);
  return a1;
}
