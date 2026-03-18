/*
 * XREFs of ??1CShadowMaskCachingBlurProducer@@EEAA@XZ @ 0x1802B2C80
 * Callers:
 *     ??_ECShadowMaskCachingBlurProducer@@EEAAPEAXI@Z @ 0x1802B2CD0 (--_ECShadowMaskCachingBlurProducer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801C74FC (--1-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CShadowMaskCachingBlurProducer::~CShadowMaskCachingBlurProducer(volatile signed __int32 **this)
{
  wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::~com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(this + 11);
  detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::~vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>((__int64)(this + 4));
}
