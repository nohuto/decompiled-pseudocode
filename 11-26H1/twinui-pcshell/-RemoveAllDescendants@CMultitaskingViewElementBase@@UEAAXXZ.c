/*
 * XREFs of ?RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804C2C70
 * Callers:
 *     ?RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ @ 0x1804C72D0 (-RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?RemoveAllDescendants@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804CA860 (-RemoveAllDescendants@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewElementBase::RemoveAllDescendants(CMultitaskingViewElementBase *this)
{
  __int64 i; // rdi
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  for ( i = *((_QWORD *)this + 3); i; --i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * i - 8);
    v3 = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
    LOBYTE(v4) = i == 1;
    (*(void (__fastcall **)(CMultitaskingViewElementBase *, __int64, __int64))(*(_QWORD *)this + 72LL))(this, v3, v4);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v5);
  }
}
