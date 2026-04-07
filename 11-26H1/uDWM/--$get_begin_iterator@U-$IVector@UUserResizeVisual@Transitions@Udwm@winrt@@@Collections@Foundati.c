/*
 * XREFs of ??$get_begin_iterator@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x1800D69F0
 * Callers:
 *     ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800D7FEC (-begin@-$consume_Windows_Foundation_Collections_IIterable@U-$IVector@UUserResizeVisual@Transitio.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::get_begin_iterator<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,0>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  result = a1;
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
