/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x180545EC4
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x1805461C0 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_ed8ffcce051.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d_____lambda_ed8ffcce05179564df35e7d067b53c30__&__lambda_d7ed0ff1ab0fb52f1367a70480edc44d__&_IDCompBatchAnimationCallback___&_ @ 0x180546484 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lam_ea_180546484.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v7; // edi
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  *a4 = 0LL;
  Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d_____lambda_ed8ffcce05179564df35e7d067b53c30_____lambda_d7ed0ff1ab0fb52f1367a70480edc44d____IDCompBatchAnimationCallback_____(
    &v9,
    a1,
    a2,
    &v10);
  v6 = v9;
  if ( v9 )
    v7 = (**v9)(v9, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
  else
    v7 = -2147024882;
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v6)[2])(v6);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a2);
  return v7;
}
