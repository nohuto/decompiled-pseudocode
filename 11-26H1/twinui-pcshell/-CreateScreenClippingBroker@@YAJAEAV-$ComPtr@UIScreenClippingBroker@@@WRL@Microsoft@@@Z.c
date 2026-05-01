/*
 * XREFs of ?CreateScreenClippingBroker@@YAJAEAV?$ComPtr@UIScreenClippingBroker@@@WRL@Microsoft@@@Z @ 0x18054B1DC
 * Callers:
 *     ?EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18039ACC0 (-EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VScreenClippingBrokerImpl@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVScreenClippingBrokerImpl@@@Z @ 0x18054AE90 (--$MakeAndInitialize@VScreenClippingBrokerImpl@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVScreenCl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateScreenClippingBroker(__int64 *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v7);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ScreenClippingBrokerImpl,ScreenClippingBrokerImpl,>(&v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
    v2 = (**v7)(v7, &GUID_2122b709_0b82_4a83_a1f9_c4b90e09cb4c, a1);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 53LL;
  }
  else
  {
    v4 = 52LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v7);
  return v3;
}
