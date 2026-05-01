/*
 * XREFs of ??0hresult_illegal_state_change@winrt@@QEAA@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z @ 0x18064B958
 * Callers:
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18064BF20 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x18064C834 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DBF90 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z.c)
 */

winrt::hresult_illegal_state_change *__fastcall winrt::hresult_illegal_state_change::hresult_illegal_state_change(
        winrt::hresult_illegal_state_change *this,
        const struct winrt::param::hstring *a2,
        const struct winrt::impl::slim_source_location *a3)
{
  winrt::hresult_error::hresult_error((__int64)this, (unsigned int)winrt::impl::error_illegal_state_change, a2);
  return this;
}
