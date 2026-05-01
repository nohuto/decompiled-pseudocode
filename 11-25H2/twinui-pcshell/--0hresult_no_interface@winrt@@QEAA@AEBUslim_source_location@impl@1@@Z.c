/*
 * XREFs of ??0hresult_no_interface@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180443934
 * Callers:
 *     ??$unbox_value_type@URect@Foundation@Windows@winrt@@AEBUIInspectable@234@@impl@winrt@@YA?AURect@Foundation@Windows@1@AEBUIInspectable@341@@Z @ 0x180443814 (--$unbox_value_type@URect@Foundation@Windows@winrt@@AEBUIInspectable@234@@impl@winrt@@YA-AURect@.c)
 *     ??$unbox_value_type@IAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAIAEBUIInspectable@Foundation@Windows@1@@Z @ 0x180453A54 (--$unbox_value_type@IAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAIAEBUIInspectable.c)
 *     ??$unbox_value_type@UColor@UI@Windows@winrt@@AEBUIUnknown@Foundation@34@@impl@winrt@@YA?AUColor@UI@Windows@1@AEBUIUnknown@Foundation@41@@Z @ 0x180574AB8 (--$unbox_value_type@UColor@UI@Windows@winrt@@AEBUIUnknown@Foundation@34@@impl@winrt@@YA-AUColor@.c)
 *     ??$unbox_value_type@_NAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUIInspectable@Foundation@Windows@1@@Z @ 0x1805BA038 (--$unbox_value_type@_NAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUIInspectab.c)
 *     ??$unbox_value_type@GAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAGAEBUIInspectable@Foundation@Windows@1@@Z @ 0x180622818 (--$unbox_value_type@GAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAGAEBUIInspectable.c)
 *     ??$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA?AUhstring@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x1806228BC (--$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA-AUhstr.c)
 *     ??$unbox_value_type@_KAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_KAEBUIInspectable@Foundation@Windows@1@@Z @ 0x180622964 (--$unbox_value_type@_KAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_KAEBUIInspectab.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x18031B438 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 */

winrt::hresult_no_interface *__fastcall winrt::hresult_no_interface::hresult_no_interface(
        winrt::hresult_no_interface *this,
        const struct winrt::impl::slim_source_location *a2)
{
  winrt::hresult_error::hresult_error((__int64)this, winrt::impl::error_no_interface, (unsigned int *)a2);
  return this;
}
