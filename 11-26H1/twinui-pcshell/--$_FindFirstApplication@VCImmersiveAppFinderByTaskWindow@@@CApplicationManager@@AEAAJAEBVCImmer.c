/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18016F3FC
 * Callers:
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x18006647C (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18016E450 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x18016EA30 (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18016ED50 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x1802A09EC (-_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerIntero.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v8; // rbp
  unsigned __int64 i; // rsi
  void (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rbx
  void (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  char v12; // di
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h]

  if ( a3 )
    *a3 = 0LL;
  v17 = 0LL;
  v8 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= *(_QWORD *)(a1 + 640) )
    {
      result = 2147647531LL;
      goto LABEL_12;
    }
    v10 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 632) + 8 * i);
    if ( v10 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[1])(v10);
    v16 = 0LL;
    v11 = **v10;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v11(v10, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v16);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v16 + 296LL))(
            v16,
            a2,
            *(unsigned int *)(a2 + 24));
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[2])(v10);
    if ( v12 )
      break;
  }
  v8 = i;
  result = 0LL;
LABEL_12:
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)(a1 + 632) + 8 * v8);
      result = (**v15)(v15, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a3);
    }
    if ( a4 )
      *a4 = v8;
  }
  return result;
}
