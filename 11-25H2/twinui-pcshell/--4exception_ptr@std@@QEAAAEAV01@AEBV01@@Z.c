/*
 * XREFs of ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x18032BF8C
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180333DA0 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackage.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::exception_ptr::operator=(void *a1, const void *a2)
{
  __ExceptionPtrAssign(a1, a2);
  return a1;
}
