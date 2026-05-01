/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x1804E0ECC
 * Callers:
 *     ?AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1804E12C0 (-AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@Item.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73_____lambda_34f025963987b113629715f07186fc4a__&__lambda_ebf7812295cd6a46fe62472baa772b73__&_IDCompBatchAnimationCallback___&_ @ 0x1804E0F68 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_34f025963.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___(
        __int64 a1,
        __int64 *a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, _QWORD *),
        _QWORD *a4)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v7; // edi
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v9[0] = 0LL;
  *a4 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *), __int64 *, __int64 *, __int64 *))Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73_____lambda_34f025963987b113629715f07186fc4a_____lambda_ebf7812295cd6a46fe62472baa772b73____IDCompBatchAnimationCallback_____)(
    &v10,
    a2,
    a2,
    v9);
  v6 = v10;
  if ( v10 )
    v7 = (**v10)(v10, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
  else
    v7 = -2147024882;
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v6)[2])(v6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v7;
}
