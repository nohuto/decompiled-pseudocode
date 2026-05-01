/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x18022EF04
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180333DA0 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackage.c)
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1806A9704 (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x1806B5FDF (_std--rethrow_exception_--_1_--dtor$0.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_1aef1f30231a1d8f4110e6f712366876____::_1_::dtor$0 @ 0x1806B6431 (__anonymous_namespace_--RunSynchronousInSTA__lambda_1aef1f30231a1d8f4110e6f712366876____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_e9273f30aaf408505b3f0162e09ecc61____::_1_::dtor$0 @ 0x1806D5BD3 (__anonymous_namespace_--RunSynchronousInSTA__lambda_e9273f30aaf408505b3f0162e09ecc61____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_e444c801a41511fb3819c6a1e051bb24____::_1_::dtor$0 @ 0x1806D5BE5 (__anonymous_namespace_--RunSynchronousInSTA__lambda_e444c801a41511fb3819c6a1e051bb24____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_cee785af8d302cd9df31740eee0ba185____::_1_::dtor$0 @ 0x1806D5BF7 (__anonymous_namespace_--RunSynchronousInSTA__lambda_cee785af8d302cd9df31740eee0ba185____--_1_--d.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
