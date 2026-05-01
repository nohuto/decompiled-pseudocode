/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewFrame@@QEAAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@PEAUISwitchThumbnailDeviceManager@@PEAUIElementFactory@@PEAUISwitchItemController@@PEAUIVirtualDesktopElementFactory@@PEAUIFrameLevelAnimationCoordinator@@@Z @ 0x1804BB588
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewFrame@@V1@AEAW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEAPEAUISwitchThumbnailDeviceManager@@AEAPEAUIElementFactory@@AEAPEAUISwitchItemController@@AEAPEAUIVirtualDesktopElementFactory@@AEAPEAUIFrameLevelAnimationCoordinator@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewFrame@@AEAW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEAPEAUISwitchThumbnailDeviceManager@@AEAPEAUIElementFactory@@AEAPEAUISwitchItemController@@AEAPEAUIVirtualDesktopElementFactory@@AEAPEAUIFrameLevelAnimationCoordinator@@@Z @ 0x1804B8F44 (--$MakeAndInitialize@VCMultitaskingViewFrame@@V1@AEAW4MultitaskingViewControlFlags@@AEBUMultitas.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18020E5D4 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$MakeAndInitialize@VCAsyncSwitchItemController@@UISwitchItemController@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUISwitchItemController@@AEAPEAU3@@Z @ 0x1804B8E84 (--$MakeAndInitialize@VCAsyncSwitchItemController@@UISwitchItemController@@AEAPEAU2@@Details@WRL@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMultitaskingViewFrame::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _OWORD *v8; // rax
  _OWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int128 v13; // xmm1
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  char *v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 2424) = a2;
  v8 = (_OWORD *)(a1 + 56);
  v10 = a3;
  v11 = 9LL;
  v12 = 9LL;
  do
  {
    *v8 = *v10;
    v8[1] = v10[1];
    v8[2] = v10[2];
    v8[3] = v10[3];
    v8[4] = v10[4];
    v8[5] = v10[5];
    v8[6] = v10[6];
    v8 += 8;
    v13 = v10[7];
    v10 += 8;
    *(v8 - 1) = v13;
    --v12;
  }
  while ( v12 );
  *v8 = *v10;
  v8[1] = v10[1];
  v14 = (_OWORD *)(a1 + 1240);
  do
  {
    *v14 = *a3;
    v14[1] = a3[1];
    v14[2] = a3[2];
    v14[3] = a3[3];
    v14[4] = a3[4];
    v14[5] = a3[5];
    v14[6] = a3[6];
    v14 += 8;
    v15 = a3[7];
    a3 += 8;
    *(v14 - 1) = v15;
    --v11;
  }
  while ( v11 );
  *v14 = *a3;
  v14[1] = a3[1];
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 2472), a4);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 2488), a5);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 2504), a7);
  if ( a8 )
  {
    v16 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a8 + 88LL))(a8, &a8);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)(a1 + 2512), v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&a8);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 2496));
  v17 = Microsoft::WRL::Details::MakeAndInitialize<CAsyncSwitchItemController,ISwitchItemController,ISwitchItemController * &>(
          (_QWORD *)(a1 + 2496),
          &a6);
  v18 = v17;
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v17);
  return v18;
}
