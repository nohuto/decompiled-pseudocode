/*
 * XREFs of ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x180331E10
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180333DA0 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackage.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::current_exception(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  __ExceptionPtrCreate(a1);
  __ExceptionPtrCurrentException(a1);
  return a1;
}
