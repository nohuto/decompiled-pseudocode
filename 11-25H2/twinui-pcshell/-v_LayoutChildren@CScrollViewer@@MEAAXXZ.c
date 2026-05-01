/*
 * XREFs of ?v_LayoutChildren@CScrollViewer@@MEAAXXZ @ 0x1804C7BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A7230 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_UpdateViewport@CScrollViewer@@AEAAXXZ @ 0x1804C7970 (-_UpdateViewport@CScrollViewer@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScrollViewer::v_LayoutChildren(CScrollViewer *this)
{
  __int64 *v2; // r10
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rax
  int v6; // r8d
  int v7; // edx
  __int64 *v8; // [rsp+30h] [rbp-20h] BYREF
  int v9; // [rsp+38h] [rbp-18h] BYREF
  int v10; // [rsp+3Ch] [rbp-14h]
  int v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+44h] [rbp-Ch]

  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = *((_DWORD *)this + 15);
  v9 = *((_DWORD *)this + 14);
  v10 = v4;
  v11 = v9 + 1;
  v12 = v4 + 1;
  (*(void (__fastcall **)(__int64 *, int *, _QWORD, _QWORD))(v3 + 24))(v2, &v9, 0LL, 0LL);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 31,
    (__int64 *)&v8);
  v5 = *v8;
  v6 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v7 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v9 = 0;
  v10 = 0;
  v11 = v7;
  v12 = v6;
  (*(void (__fastcall **)(__int64 *, int *))(v5 + 104))(v8, &v9);
  CScrollViewer::_UpdateViewport(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
}
