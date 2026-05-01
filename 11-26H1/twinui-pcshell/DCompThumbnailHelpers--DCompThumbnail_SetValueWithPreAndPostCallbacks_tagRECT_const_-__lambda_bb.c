/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___ @ 0x180540190
 * Callers:
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180544400 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1802DA8B0 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc_____lambda_bbeb76a51bfb926050d075f4007d064b__&__lambda_ce3300e2c568934d15624d64d17a11bc__&_IDCompBatchAnimationCallback___&_ @ 0x180540330 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_bbeb76a51.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rbx
  int v11; // edi
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  v14 = 0LL;
  Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc_____lambda_bbeb76a51bfb926050d075f4007d064b_____lambda_ce3300e2c568934d15624d64d17a11bc____IDCompBatchAnimationCallback_____(
    &v13,
    v8,
    v9,
    &a7);
  v10 = v13;
  if ( v13 )
    v11 = (**v13)(v13, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, &v14);
  else
    v11 = -2147024882;
  if ( v10 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[2])(v10);
  if ( v11 >= 0 )
    v11 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  return (unsigned int)v11;
}
