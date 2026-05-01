/*
 * XREFs of ?_RenderIcon@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1804C0DC0
 * Callers:
 *     _lambda_3f3d9ba04ec2c8622cba6a99ff36500b_::operator() @ 0x1804BF85C (_lambda_3f3d9ba04ec2c8622cba6a99ff36500b_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DrawBitmap@ID2D1RenderTarget@@QEAAXPEAUID2D1Bitmap@@AEBUD2D_RECT_F@@MW4D2D1_BITMAP_INTERPOLATION_MODE@@PEBU3@@Z @ 0x1804BFC6C (-DrawBitmap@ID2D1RenderTarget@@QEAAXPEAUID2D1Bitmap@@AEBUD2D_RECT_F@@MW4D2D1_BITMAP_INTERPOLATIO.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemElement::_RenderIcon(
        CSwitchItemElement *this,
        const struct D2D_RECT_F *a2,
        struct ID2D1DeviceContext *a3)
{
  __int64 v5; // rbx
  unsigned int v6; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ID2D1Bitmap *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v5 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 73) + 32LL))(*((_QWORD *)this + 73));
  v11 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    v7 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, __int64, _QWORD, struct ID2D1Bitmap **))(*(_QWORD *)a3 + 40LL))(
           a3,
           v5,
           0LL,
           &v10);
    v6 = v7;
    if ( v7 >= 0 )
    {
      ID2D1RenderTarget::DrawBitmap(a3, v10, a2, 1.0);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F2,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    }
  }
  else
  {
    v6 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v11);
  return v6;
}
