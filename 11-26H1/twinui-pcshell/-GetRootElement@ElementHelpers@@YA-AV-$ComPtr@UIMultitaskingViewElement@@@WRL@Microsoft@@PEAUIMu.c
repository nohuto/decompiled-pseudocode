/*
 * XREFs of ?GetRootElement@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1804CCA78
 * Callers:
 *     ?_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ @ 0x1804C3D6C (-_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ.c)
 *     ?ItemOperationBegin@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation@@PEAUIObservableItem@@@Z @ 0x1804C6700 (-ItemOperationBegin@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation.c)
 *     ?ItemOperationEnd@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation@@PEAUIObservableItem@@@Z @ 0x1804C67B0 (-ItemOperationEnd@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation@@.c)
 *     ?ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z @ 0x1804DD688 (-ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18020E5D4 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ElementHelpers::GetRootElement(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  char *v4; // rax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  *a1 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  while ( 1 )
  {
    v3 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 24LL))(*a1, &v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
    if ( !v3 )
      break;
    v4 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 24LL))(*a1, &v7);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a1, v4);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  }
  return a1;
}
