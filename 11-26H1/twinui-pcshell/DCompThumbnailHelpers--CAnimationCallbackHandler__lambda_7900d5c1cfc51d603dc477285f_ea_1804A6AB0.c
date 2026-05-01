/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___::OnStoryboardStatusChanged @ 0x1804A6AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ @ 0x1802AD614 (-RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ.c)
 *     ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802B99A0 (--$As@UIStoryboardExtraData@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ?Uninitialize@CAppThumbnailWindow@@IEAAXXZ @ 0x1804A9DE8 (-Uninitialize@CAppThumbnailWindow@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___::OnStoryboardStatusChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int (__fastcall *v5)(__int64, _QWORD, _QWORD); // rbx
  __int64 v6; // rcx
  MultitaskingViewGestureHandlerHelpers *v7; // rcx
  __int64 v8; // rcx
  void (*v9)(void); // rax
  __int64 v10; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-18h] BYREF
  __int64 v13[2]; // [rsp+28h] [rbp-10h] BYREF

  if ( a3 == 1 )
  {
    v12 = 0LL;
    v5 = *(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 136LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    if ( v5(a2, &v12, 0LL) >= 0 )
    {
      v13[0] = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(&v12, v13) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13[0] + 40LL))(v13[0]);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
    }
    v6 = *(_QWORD *)(a1 + 48);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    return 0LL;
  }
  if ( a3 != 5 )
  {
    if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
      return 0LL;
    v10 = *(_QWORD *)(a1 + 48);
    if ( !v10 )
      return 0LL;
    v9 = *(void (**)(void))(*(_QWORD *)v10 + 56LL);
LABEL_17:
    v9();
    return 0LL;
  }
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(*(_QWORD *)(a1 + 24) + 120LL));
  CAppThumbnailWindow::Uninitialize(*(CAppThumbnailWindow **)(a1 + 24));
  if ( *(_BYTE *)(a1 + 40) )
    MultitaskingViewGestureHandlerHelpers::RaiseDesktop(v7);
  v8 = *(_QWORD *)(a1 + 48);
  if ( v8 )
  {
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 48LL);
    goto LABEL_17;
  }
  return 0LL;
}
