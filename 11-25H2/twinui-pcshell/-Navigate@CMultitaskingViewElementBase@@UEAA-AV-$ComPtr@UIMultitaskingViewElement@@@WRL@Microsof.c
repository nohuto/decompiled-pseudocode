/*
 * XREFs of ?Navigate@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@IW4NavigationType@@@Z @ 0x1804B0A90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801B9298 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$FindEx@VElementCompare@ElementHelpers@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVElementCompare@ElementHelpers@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804AF834 (--$FindEx@VElementCompare@ElementHelpers@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElem.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall CMultitaskingViewElementBase::Navigate(
        __int64 a1,
        __int64 *a2,
        struct IUnknown *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v8; // esi
  __int64 v9; // r9
  __int64 v10; // r8
  char *v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  char *v15; // rax
  struct IUnknown *v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-10h] BYREF

  v5 = a4;
  *a2 = 0LL;
  if ( (_DWORD)a4 == 7 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(a2, *(_QWORD **)(a1 + 16));
      v8 = a5;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a2 + 160LL))(*a2, a5) )
      {
        v9 = 5LL;
        v10 = 0LL;
LABEL_5:
        v11 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64, unsigned int))(*(_QWORD *)a1 + 536LL))(
                        a1,
                        v18,
                        v10,
                        v9,
                        v8);
LABEL_6:
        Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a2, v11);
        v12 = v18;
LABEL_17:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12);
      }
    }
  }
  else if ( (_DWORD)a4 == 8 )
  {
    v13 = *(_QWORD *)(a1 + 24);
    if ( v13 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(a2, (_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * (v13 - 1)));
      v8 = a5;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a2 + 160LL))(*a2, a5) )
      {
        v10 = *(_QWORD *)(a1 + 24) - 1LL;
        v9 = 6LL;
        goto LABEL_5;
      }
    }
  }
  else
  {
    if ( !a3 )
    {
      v11 = (char *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, __int64, unsigned int))(**(_QWORD **)(a1 + 80)
                                                                                                 + 272LL))(
                      *(_QWORD *)(a1 + 80),
                      v18,
                      a1,
                      a4,
                      a5);
      goto LABEL_6;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      v17 = a3;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      v18[0] = 0LL;
      if ( (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<ElementHelpers::ElementCompare>(
                  (_QWORD *)(a1 + 16),
                  v14,
                  &v17,
                  (unsigned __int64 *)v18) >= 0 )
      {
        v15 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64, _QWORD, unsigned int))(*(_QWORD *)a1 + 536LL))(
                        a1,
                        v18,
                        v18[0],
                        v5,
                        a5);
        Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a2, v15);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
      }
      v12 = (__int64 *)&v17;
      goto LABEL_17;
    }
  }
  return a2;
}
