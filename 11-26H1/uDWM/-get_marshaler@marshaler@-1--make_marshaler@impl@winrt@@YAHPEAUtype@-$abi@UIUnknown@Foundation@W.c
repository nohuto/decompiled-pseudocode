/*
 * XREFs of ?get_marshaler@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@CA?AU?$com_ptr@UIMarshal@impl@winrt@@@4@XZ @ 0x1800D151C
 * Callers:
 *     ??0marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@PEAPEAX@Z@QEAA@0@Z @ 0x1800D0B14 (--0marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     WINRT_IMPL_CoCreateFreeThreadedMarshaler @ 0x180090039 (WINRT_IMPL_CoCreateFreeThreadedMarshaler.c)
 *     ??$try_as@UIMarshal@impl@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@$0A@@impl@winrt@@YA?AU?$com_ptr@UIMarshal@impl@winrt@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800D0A28 (--$try_as@UIMarshal@impl@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@23@$0A@@impl@w.c)
 */

__int64 *__fastcall `winrt::impl::make_marshaler'::`2'::marshaler::get_marshaler(__int64 *a1)
{
  __int64 v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rbx
  char v5; // di
  __int64 v7; // [rsp+50h] [rbp+28h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+58h] [rbp+30h] BYREF
  __int64 v9; // [rsp+60h] [rbp+38h] BYREF
  __int64 v10; // [rsp+68h] [rbp+40h] BYREF

  LODWORD(v7) = 0;
  ppunkMarshal = 0LL;
  WINRT_IMPL_CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal);
  if ( ppunkMarshal )
  {
    winrt::impl::try_as<winrt::impl::IMarshal,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v7,
      ppunkMarshal);
    v2 = v7;
    v3 = &v7;
    v4 = v10;
    v5 = 1;
  }
  else
  {
    v4 = 0LL;
    v3 = &v9;
    v10 = 0LL;
    v2 = 0LL;
    v5 = 6;
  }
  *v3 = 0LL;
  *a1 = v2;
  if ( (v5 & 4) != 0 )
  {
    v5 &= ~4u;
    if ( v9 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v9);
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( v4 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v10);
  }
  if ( (v5 & 1) != 0 && v7 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v7);
  if ( ppunkMarshal )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&ppunkMarshal);
  return a1;
}
