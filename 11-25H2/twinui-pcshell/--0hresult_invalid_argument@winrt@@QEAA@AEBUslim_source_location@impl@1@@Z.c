/*
 * XREFs of ??0hresult_invalid_argument@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1806985A0
 * Callers:
 *     ??0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@56@HPEAUHWND__@@3AEBUISnapAssistCallback2@WindowSnapping@Shell@456@@Z @ 0x180285E90 (--0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x18031B438 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 */

winrt::hresult_invalid_argument *__fastcall winrt::hresult_invalid_argument::hresult_invalid_argument(
        winrt::hresult_invalid_argument *this,
        const struct winrt::impl::slim_source_location *a2)
{
  winrt::hresult_error::hresult_error((__int64)this, winrt::impl::error_invalid_argument, (unsigned int *)a2);
  return this;
}
