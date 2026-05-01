/*
 * XREFs of ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804C89BC
 * Callers:
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x1804C9258 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804C850C (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdx
  int AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  v12 = *(_QWORD *)a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  v13 = *(_DWORD *)(a4 + 8);
  AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
                                                                (__int64)&v12,
                                                                v7,
                                                                &v15);
  v9 = AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413;
  if ( AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 < 0 )
  {
    v10 = 458LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413);
    goto LABEL_6;
  }
  AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 48) + 24LL))(
                                                                *(_QWORD *)(a1 + 48),
                                                                a2,
                                                                3LL,
                                                                v15);
  v9 = AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413;
  if ( AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 < 0 )
  {
    v10 = 459LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  return v9;
}
