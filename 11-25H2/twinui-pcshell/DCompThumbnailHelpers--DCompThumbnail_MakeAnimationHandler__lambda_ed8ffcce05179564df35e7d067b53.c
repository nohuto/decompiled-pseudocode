/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___ @ 0x180522E34
 * Callers:
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180524AF8 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f_____lambda_ed8ffcce05179564df35e7d067b53c30__&__lambda_56efceb929603a68680b7e7e2fb7301f__&_IDCompBatchAnimationCallback___&_ @ 0x1805233BC (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lam_ea_1805233BC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___(
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
  Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f_____lambda_ed8ffcce05179564df35e7d067b53c30_____lambda_56efceb929603a68680b7e7e2fb7301f____IDCompBatchAnimationCallback_____(
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
