/*
 * XREFs of ?Commit@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1801E108C
 * Callers:
 *     _lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::operator() @ 0x1803092B8 (_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x1801E111C (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CFrameApplicationPresentation::PresentedWindow::Commit(
        CFrameApplicationPresentation::PresentedWindow *this,
        struct CFrameApplicationPresentation *a2,
        struct ITaskWindow *a3,
        HWND a4)
{
  HWND v5; // rdx
  _QWORD **v6; // [rsp+20h] [rbp-18h] BYREF
  HWND v7[2]; // [rsp+28h] [rbp-10h] BYREF
  HWND v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = a4;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
    (CFrameApplicationPresentation::PresentedWindowChangeHandler *)&v6,
    a2);
  *((_BYTE *)this + 32) = 1;
  ((void (__fastcall *)(_QWORD **, HWND *))(*v6)[8])(v6, &v8);
  v5 = v8;
  if ( v8 != v7[0] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v6[79] + 520LL))(v6[79]);
    v5 = v8;
  }
  if ( v5 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v7);
}
