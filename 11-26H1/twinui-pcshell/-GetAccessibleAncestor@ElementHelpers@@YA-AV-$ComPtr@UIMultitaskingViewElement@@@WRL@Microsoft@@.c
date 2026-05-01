/*
 * XREFs of ?GetAccessibleAncestor@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1804CC82C
 * Callers:
 *     ?_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ @ 0x1804C3D6C (-_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ.c)
 *     ?ElementProviderFromPoint@AccessibleElementBase@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z @ 0x1804D0C90 (-ElementProviderFromPoint@AccessibleElementBase@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z.c)
 *     ?GetFocus@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z @ 0x1804D0E00 (-GetFocus@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18020E5D4 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ElementHelpers::GetAccessibleAncestor(__int64 *a1, __int64 a2)
{
  char *v3; // rax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  *a1 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  while ( *a1 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a1 + 168LL))(*a1) )
  {
    v3 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 24LL))(*a1, &v5);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a1, v3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v5);
  }
  return a1;
}
