/*
 * XREFs of ?v_LayoutChildren@CScrollViewer@@MEAAXXZ @ 0x1804D9C90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804B8C08 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_UpdateViewport@CScrollViewer@@AEAAXXZ @ 0x1804D9A00 (-_UpdateViewport@CScrollViewer@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScrollViewer::v_LayoutChildren(CScrollViewer *this)
{
  __int64 *v2; // r10
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rax
  __int64 *v6; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h] BYREF
  int v8; // [rsp+40h] [rbp-10h]
  int v9; // [rsp+44h] [rbp-Ch]

  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = *((_DWORD *)this + 15);
  LODWORD(v7) = *((_DWORD *)this + 14);
  HIDWORD(v7) = v4;
  v8 = v7 + 1;
  v9 = v4 + 1;
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD))(v3 + 24))(v2, &v7, 0LL, 0LL);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 31,
    (__int64 *)&v6);
  v5 = *v6;
  v7 = 0LL;
  v8 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v9 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  (*(void (__fastcall **)(__int64 *, __int64 *))(v5 + 104))(v6, &v7);
  CScrollViewer::_UpdateViewport(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
}
