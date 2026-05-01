/*
 * XREFs of ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x180506ADC
 * Callers:
 *     _lambda_83894a20d7676cc7370719a196cbc3a9_::operator() @ 0x180505E74 (_lambda_83894a20d7676cc7370719a196cbc3a9_--operator().c)
 *     ?OnCaptureChanged@WindowArrangementView@@UEAAJXZ @ 0x1805080C0 (-OnCaptureChanged@WindowArrangementView@@UEAAJXZ.c)
 *     ?OnKeyDown@WindowArrangementView@@UEAAJK@Z @ 0x180508170 (-OnKeyDown@WindowArrangementView@@UEAAJK@Z.c)
 *     ?OnKeyUp@WindowArrangementView@@UEAAJK@Z @ 0x1805081C0 (-OnKeyUp@WindowArrangementView@@UEAAJK@Z.c)
 *     ?OnPointerCancel@WindowArrangementView@@UEAAJXZ @ 0x180508210 (-OnPointerCancel@WindowArrangementView@@UEAAJXZ.c)
 *     ?OnPointerUp@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z @ 0x180508260 (-OnPointerUp@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?Cleanup@WindowArrangementView@@AEAAXXZ @ 0x18050669C (-Cleanup@WindowArrangementView@@AEAAXXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x180507250 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180508460 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1805095E4 (-Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowArrangementView::EndDrag(WindowArrangementView *this, char a2)
{
  int v4; // ecx
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, GUID *, __int64 *); // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13[3]; // [rsp+28h] [rbp-48h] BYREF
  char v14; // [rsp+40h] [rbp-30h]
  _BYTE v15[24]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( !*((_BYTE *)this + 314) )
  {
    *((_BYTE *)this + 314) = 1;
    if ( a2 )
      v4 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 12) + 32LL))(
                        *((_QWORD *)this + 12),
                        v15);
    else
      v4 = -1;
    v12 = v4;
    v13[1] = (__int64)this;
    v13[2] = (__int64)&v12;
    v14 = 1;
    v13[0] = 0LL;
    v5 = *((_QWORD *)this + 10);
    v6 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 152LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
    if ( v6(v5, &GUID_959cb746_add4_483a_8acd_059d06f3798a, v13) >= 0 )
    {
      LOBYTE(v7) = a2 ^ 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13[0] + 56LL))(v13[0], v7);
    }
    if ( a2 )
    {
      v9 = WindowArrangementView::ProcessDrop(this, v12, v8);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59C,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
        WindowArrangementView::Hide((WindowArrangementView *)((char *)this + 24), 1);
        WindowArrangementView::Cleanup(this);
        TabletModeTelemetry::TMAppArrange::Stop((char *)this + 328, v12);
        return v10;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
    WindowArrangementView::Hide((WindowArrangementView *)((char *)this + 24), 1);
    WindowArrangementView::Cleanup(this);
    TabletModeTelemetry::TMAppArrange::Stop((char *)this + 328, v12);
  }
  return 0LL;
}
