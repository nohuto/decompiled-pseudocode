/*
 * XREFs of ?Clear@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x18008BF14
 * Callers:
 *     ?Cleanup@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D7008 (-Cleanup@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800D71AC (-PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D59A4 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Clear(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-28h] BYREF
  const char *v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *a1;
  v4 = "OneCoreUap\\Internal\\BuildMetadata\\internal\\cppwinrt\\winrt\\Windows.Foundation.Collections.h";
  v3 = 717;
  v5 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 120LL))(v1);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result, &v3);
  return result;
}
