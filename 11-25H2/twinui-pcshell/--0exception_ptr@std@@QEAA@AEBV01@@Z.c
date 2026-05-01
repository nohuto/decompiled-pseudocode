/*
 * XREFs of ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1802CBEC8
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_1aef1f30231a1d8f4110e6f712366876___ @ 0x180296B0C (_anonymous_namespace_--RunSynchronousInSTA__lambda_1aef1f30231a1d8f4110e6f712366876___.c)
 *     ?rethrow_if_failed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@PEAUGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@IEBAXW4AsyncStatus@Foundation@Windows@3@@Z @ 0x180333878 (-rethrow_if_failed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@W4GamingPo.c)
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180333DA0 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackage.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_943ebf8cb42eeb58ab3899b21541936c___ @ 0x1805BC944 (_anonymous_namespace_--RunSynchronousInSTA__lambda_943ebf8cb42eeb58ab3899b21541936c___.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_bef5e417c8b7d926babf502a16e6c1c1___ @ 0x1805BCA7C (_anonymous_namespace_--RunSynchronousInSTA__lambda_bef5e417c8b7d926babf502a16e6c1c1___.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_cee785af8d302cd9df31740eee0ba185___ @ 0x1805BCBC8 (_anonymous_namespace_--RunSynchronousInSTA__lambda_cee785af8d302cd9df31740eee0ba185___.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_e444c801a41511fb3819c6a1e051bb24___ @ 0x1805BCCF0 (_anonymous_namespace_--RunSynchronousInSTA__lambda_e444c801a41511fb3819c6a1e051bb24___.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_e9273f30aaf408505b3f0162e09ecc61___ @ 0x1805BCE3C (_anonymous_namespace_--RunSynchronousInSTA__lambda_e9273f30aaf408505b3f0162e09ecc61___.c)
 * Callees:
 *     <none>
 */

std::exception_ptr *__fastcall std::exception_ptr::exception_ptr(
        std::exception_ptr *this,
        const struct std::exception_ptr *a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  __ExceptionPtrCopy(this, a2);
  return this;
}
