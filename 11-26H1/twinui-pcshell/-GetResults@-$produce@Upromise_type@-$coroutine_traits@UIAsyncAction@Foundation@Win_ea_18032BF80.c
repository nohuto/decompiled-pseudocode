/*
 * XREFs of ?GetResults@?$produce@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x18032BF80
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180328B94 (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?rethrow_if_failed@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@IEBAXW4AsyncStatus@Foundation@Windows@3@@Z @ 0x180332FC0 (-rethrow_if_failed@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction>::GetResults(
        __int64 a1)
{
  __int64 v1; // rdi
  const struct winrt::impl::slim_source_location *v3; // rax
  __int64 v4; // rdx
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(v1 + 72));
  if ( *(_DWORD *)(v1 + 96) != 1 )
  {
    try
    {
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction const &,winrt::Windows::Foundation::IAsyncAction const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::rethrow_if_failed();
      v3 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v6);
      winrt::hresult_illegal_method_call::hresult_illegal_method_call(
        (winrt::hresult_illegal_method_call *)pExceptionObject,
        v3);
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      *(_DWORD *)(v4 + 96) = *winrt::to_hresult(&v8);
      return (unsigned int)v8;
    }
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(v1 + 72));
  return 0LL;
}
