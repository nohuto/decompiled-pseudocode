/*
 * XREFs of ??1marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@PEAPEAX@Z@QEAA@XZ @ 0x1800D0BCC
 * Callers:
 *     ?Release@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x1800D1310 (-Release@marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::~marshaler(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax

  v2 = (__int64 *)(a1 + 16);
  if ( *v2 )
    result = winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(v2);
  if ( *(_QWORD *)(a1 + 8) )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)(a1 + 8));
  return result;
}
