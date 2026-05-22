/*
 * XREFs of ?get_marshaler@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@CA?AU?$com_ptr@UIMarshal@impl@winrt@@@4@XZ @ 0x1800A6A3C
 * Callers:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800A6B70 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180049678 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     WINRT_IMPL_CoCreateFreeThreadedMarshaler @ 0x18009B75C (WINRT_IMPL_CoCreateFreeThreadedMarshaler.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall `winrt::impl::make_marshaler'::`2'::marshaler::get_marshaler(__int64 *a1)
{
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // rbx
  char v6; // di
  LPUNKNOWN ppunkMarshal; // [rsp+50h] [rbp+28h] BYREF
  __int64 v9; // [rsp+58h] [rbp+30h] BYREF
  __int64 v10; // [rsp+60h] [rbp+38h] BYREF
  __int64 v11; // [rsp+68h] [rbp+40h] BYREF

  ppunkMarshal = 0LL;
  WINRT_IMPL_CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal);
  if ( ppunkMarshal )
  {
    lpVtbl = ppunkMarshal->lpVtbl;
    v9 = 0LL;
    ((void (__fastcall *)(LPUNKNOWN, __int64 *, __int64 *))lpVtbl->QueryInterface)(
      ppunkMarshal,
      &winrt::impl::guid_v<winrt::impl::IMarshal>,
      &v9);
    v3 = v9;
    v4 = &v11;
    v5 = v10;
    v6 = 1;
  }
  else
  {
    v5 = 0LL;
    v4 = &v9;
    v10 = 0LL;
    v3 = 0LL;
    v6 = 6;
  }
  *v4 = 0LL;
  *a1 = v3;
  if ( (v6 & 4) != 0 )
  {
    v6 &= ~4u;
    if ( v9 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v9);
  }
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v5 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v10);
  }
  if ( (v6 & 1) != 0 && v11 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v11);
  if ( ppunkMarshal )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&ppunkMarshal);
  return a1;
}
