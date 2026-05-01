/*
 * XREFs of ?GetResults@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@PEAUGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAH@Z @ 0x180338810
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
__int64 __fastcall winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>>::GetResults(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v3; // rdi
  RTL_SRWLOCK *v4; // rbx
  int v5; // edx
  int v6; // edi
  const struct winrt::impl::slim_source_location *v8; // rax
  __int64 v9; // rdx
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  v4 = (RTL_SRWLOCK *)(v3 + 72);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(v3 + 72));
  v5 = *(_DWORD *)(v3 + 96);
  if ( v5 != 1 )
  {
    try
    {
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction const &,winrt::Windows::Foundation::IAsyncAction const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::rethrow_if_failed(
        v3,
        v5);
      v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v11);
      winrt::hresult_illegal_method_call::hresult_illegal_method_call(
        (winrt::hresult_illegal_method_call *)pExceptionObject,
        v8);
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      *(_DWORD *)(v9 + 96) = *winrt::to_hresult(&v13);
      return (unsigned int)v13;
    }
  }
  v6 = *(_DWORD *)(v3 + 104);
  ReleaseSRWLockExclusive_0(v4);
  *a2 = v6;
  return 0LL;
}
