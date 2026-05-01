/*
 * XREFs of ?_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ @ 0x1804C4FA8
 * Callers:
 *     ?DismissViewNoAnimate@CMultitaskingViewControllerBase@@UEAAXXZ @ 0x1804C45D0 (-DismissViewNoAnimate@CMultitaskingViewControllerBase@@UEAAXXZ.c)
 *     ?OnDisplayChange@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x1804C4940 (-OnDisplayChange@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ??0PendingDismissData@CMultitaskingViewControllerBase@@QEAA@_NPEAUISwitchItem@@@Z @ 0x1804C4318 (--0PendingDismissData@CMultitaskingViewControllerBase@@QEAA@_NPEAUISwitchItem@@@Z.c)
 *     ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1804C43CC (--1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

void __fastcall CMultitaskingViewControllerBase::_DismissView(CMultitaskingViewControllerBase *this)
{
  CMultitaskingViewControllerBase::PendingDismissData *v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rdx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  CMultitaskingViewControllerBase *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 22);
  v2 = CMultitaskingViewControllerBase::PendingDismissData::PendingDismissData(
         (CMultitaskingViewControllerBase::PendingDismissData *)v5,
         0,
         0LL);
  *((_BYTE *)this + 96) = *(_BYTE *)v2;
  *((_BYTE *)this + 97) = *((_BYTE *)v2 + 1);
  v3 = Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(
         &v7,
         (_QWORD *)v2 + 1);
  v4 = *v3;
  *v3 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(&v8);
}
