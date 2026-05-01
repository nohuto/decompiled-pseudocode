/*
 * XREFs of ?PrivateVisibleFullScreenViewChangedEvent@FullScreenPositioner@@AEAAJPEAUIApplicationView@@0@Z @ 0x1803245B0
 * Callers:
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180324D68 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180051C40 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1802230F8 (--1-$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2763e4e2b0d5ad85b4f3d04351304527___ @ 0x180322700 (Windows--Internal--ComTaskPool--QueueTask__lambda_2763e4e2b0d5ad85b4f3d04351304527___.c)
 *     _lambda_2763e4e2b0d5ad85b4f3d04351304527_::_lambda_2763e4e2b0d5ad85b4f3d04351304527_ @ 0x180322904 (_lambda_2763e4e2b0d5ad85b4f3d04351304527_--_lambda_2763e4e2b0d5ad85b4f3d04351304527_.c)
 */

__int64 __fastcall FullScreenPositioner::PrivateVisibleFullScreenViewChangedEvent(
        IUnknown **this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  HRESULT v4; // eax
  int v5; // ebx
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+10h]
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  struct IApplicationView *v15; // [rsp+68h] [rbp+20h] BYREF
  struct IApplicationView *v16; // [rsp+70h] [rbp+28h] BYREF
  void *ppvOut; // [rsp+78h] [rbp+30h] BYREF

  v16 = a3;
  v15 = a2;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         this[3],
         &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
         &GUID_c0d2dfdf_8b97_41f6_9f0c_13247f43abb8,
         &ppvOut);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v14 = 0LL;
    v6 = CMarshaledInterface::Marshal(&v14, &GUID_c0d2dfdf_8b97_41f6_9f0c_13247f43abb8, (IUnknown *)ppvOut, 2);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v9 = lambda_2763e4e2b0d5ad85b4f3d04351304527_::_lambda_2763e4e2b0d5ad85b4f3d04351304527_(
             v12,
             &v14,
             (__int64 *)&v15,
             (__int64 *)&v16);
      v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_2763e4e2b0d5ad85b4f3d04351304527___(
             v10,
             (volatile signed __int32 *)v9);
      Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>(v12);
      if ( v5 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
        v5 = 0;
        goto LABEL_9;
      }
      v7 = (unsigned int)v5;
      v8 = 994LL;
    }
    else
    {
      v7 = (unsigned int)v6;
      v8 = 985LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D7,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v5;
}
