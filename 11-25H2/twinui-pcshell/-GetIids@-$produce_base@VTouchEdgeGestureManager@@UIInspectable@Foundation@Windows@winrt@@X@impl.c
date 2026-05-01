/*
 * XREFs of ?GetIids@?$produce_base@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805699F0
 * Callers:
 *     <none>
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x1802D363D (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,void>::GetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  __int64 v5; // r9
  unsigned int v6; // eax
  unsigned int v7; // ebx
  void *v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h]

  v5 = (a1 - 16) & -(__int64)(a1 != 0);
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)((v5 & -(__int64)(v5 != -24)) + 0x18) + 32LL))(
    (v5 & -(__int64)(v5 != -24)) + 24,
    &v10);
  v6 = v10;
  v7 = 0;
  if ( v10 )
  {
    *a2 = v10;
    v8 = _Platform_CoTaskMemAlloc(16LL * v6);
    *a3 = v8;
    if ( v8 )
      memmove_0(v8, Src, 16LL * v10);
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return v7;
}
