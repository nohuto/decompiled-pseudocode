/*
 * XREFs of ?Append@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@AEBUUserResizeVisual@Transitions@Udwm@3@@Z @ 0x1800DA958
 * Callers:
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1800DBF48 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x18004EE40 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Append(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // eax
  int v7; // [rsp+20h] [rbp-28h] BYREF
  const char *v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = *a2;
  v8 = "OneCoreUap\\Internal\\BuildMetadata\\internal\\cppwinrt\\winrt\\Windows.Foundation.Collections.h";
  v7 = 685;
  v4 = *v2;
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v4 + 104))(v2, v3);
  return winrt::check_hresult(&v10, v5, (__int64)&v7);
}
