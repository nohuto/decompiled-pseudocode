/*
 * XREFs of ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804DA6D8
 * Callers:
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x1804DB388 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804DA678 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31.c)
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x1804DAF68 (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // edi
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  int AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13[2]; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  if ( (_DWORD)a2 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    *(_QWORD *)v13 = *(_QWORD *)a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v13);
    v14 = *(_DWORD *)(a3 + 8);
    AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
                                                                  (__int64)v13,
                                                                  v9,
                                                                  &v16);
    v11 = AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413;
    if ( AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 >= 0 )
    {
      AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 48) + 40LL))(
                                                                    *(_QWORD *)(a1 + 48),
                                                                    v4,
                                                                    v16);
      v11 = AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413;
      if ( AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
        return v11;
      }
      v12 = 450LL;
    }
    else
    {
      v12 = 449LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413);
    goto LABEL_10;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(
         *(_QWORD *)(a1 + 48),
         a2,
         0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator()(a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B7,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
