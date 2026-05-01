/*
 * XREFs of ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1804AF33C
 * Callers:
 *     _lambda_3f3d9ba04ec2c8622cba6a99ff36500b_::operator() @ 0x1804ADCA4 (_lambda_3f3d9ba04ec2c8622cba6a99ff36500b_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180158B8C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?CreateSolidColorBrush@ID2D1RenderTarget@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAUID2D1SolidColorBrush@@@Z @ 0x1804ADFA8 (-CreateSolidColorBrush@ID2D1RenderTarget@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAUID2D1SolidColorBrush@@.c)
 *     ?DrawTextW@ID2D1RenderTarget@@QEAAXPEBGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@PEAUID2D1Brush@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x1804AE0DC (-DrawTextW@ID2D1RenderTarget@@QEAAXPEBGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@PEAUID2D1Brush@@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemElement::_RenderText(
        CSwitchItemElement *this,
        const struct D2D_RECT_F *a2,
        struct ID2D1DeviceContext *a3)
{
  __int64 Color; // rax
  int v7; // eax
  unsigned int v8; // ebx
  const unsigned __int16 **v9; // rax
  const unsigned __int16 **v10; // rdx
  __int64 v11; // r8
  const unsigned __int16 *v12; // rax
  struct ID2D1SolidColorBrush *v14[2]; // [rsp+40h] [rbp-30h] BYREF
  _D3DCOLORVALUE v15; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v14);
  Color = CImmersiveColor::GetColor(0xB0u);
  v15.r = (float)(unsigned __int8)Color / 255.0;
  v15.g = (float)(unsigned __int8)((unsigned __int16)(Color & 0xFF00) >> 8) / 255.0;
  v15.b = (float)BYTE2(Color) / 255.0;
  v15.a = 1.0;
  v7 = ID2D1RenderTarget::CreateSolidColorBrush(a3, &v15, v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = (const unsigned __int16 **)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 73) + 24LL))(*((_QWORD *)this + 73));
    v10 = v9;
    v11 = (__int64)v9[1];
    if ( v11 == -1 )
    {
      v12 = *v9;
      if ( v12 )
      {
        do
          ++v11;
        while ( v12[v11] );
      }
      else
      {
        v11 = 0LL;
      }
    }
    ID2D1RenderTarget::DrawTextW(a3, *v10, v11, *((struct IDWriteTextFormat **)this + 72), a2, v14[0]);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FA,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v14);
  return v8;
}
