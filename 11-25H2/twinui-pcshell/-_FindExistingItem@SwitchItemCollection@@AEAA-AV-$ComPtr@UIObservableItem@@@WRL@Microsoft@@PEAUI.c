/*
 * XREFs of ?_FindExistingItem@SwitchItemCollection@@AEAA?AV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1804A02D4
 * Callers:
 *     ?GetItemForView@SwitchItemCollection@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18049FAB0 (-GetItemForView@SwitchItemCollection@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18049FBF0 (-OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804A03F8 (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1804A04A4 (-_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall SwitchItemCollection::_FindExistingItem(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // r14d
  int (__fastcall ****v6)(_QWORD, GUID *, __int64 *); // r15
  int (__fastcall ****v7)(_QWORD, GUID *, __int64 *); // r12
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  bool v10; // bl
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v13; // [rsp+70h] [rbp+40h] BYREF
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+48h] BYREF
  __int64 v15; // [rsp+88h] [rbp+58h] BYREF

  v14 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  *a2 = 0LL;
  v5 = 1;
  v6 = *(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(a1 + 24);
  v7 = &v6[*(_QWORD *)(a1 + 32)];
  while ( v6 != v7 )
  {
    v13 = 0LL;
    v8 = *v6;
    v9 = ***v6;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    v10 = 0;
    if ( v9(v8, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v13) >= 0 )
    {
      v5 |= 2u;
      if ( *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v15) == a3 )
        v10 = 1;
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    }
    if ( v10 )
    {
      v11 = *v6;
      if ( (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2 != *v6 )
      {
        v14 = *v6;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
        v14 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2;
        *a2 = v11;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      return a2;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    ++v6;
  }
  return a2;
}
