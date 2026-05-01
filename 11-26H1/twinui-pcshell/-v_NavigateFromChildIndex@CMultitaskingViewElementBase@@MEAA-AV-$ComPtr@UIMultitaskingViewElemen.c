/*
 * XREFs of ?v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1804C4010
 * Callers:
 *     ?v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1804C81F0 (-v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Micro.c)
 *     ?v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1804CEC70 (-v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA-AV-$ComPtr@UIMultitaskingViewElement@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CMultitaskingViewElementBase::v_NavigateFromChildIndex(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rdi
  __int64 v9[2]; // [rsp+28h] [rbp-10h] BYREF

  v5 = a3;
  v9[0] = 0LL;
  if ( a4 == 5 )
  {
    while ( v5 < *(_QWORD *)(a1 + 24) - 1LL )
    {
      ++v5;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(v9, (_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v5));
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9[0] + 160LL))(v9[0], a5) )
        goto LABEL_9;
    }
  }
  else if ( a4 == 6 && a3 )
  {
    while ( v5 )
    {
      --v5;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(v9, (_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v5));
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9[0] + 160LL))(v9[0], a5) )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(a2, v9);
        goto LABEL_11;
      }
    }
  }
  *a2 = 0LL;
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  return a2;
}
