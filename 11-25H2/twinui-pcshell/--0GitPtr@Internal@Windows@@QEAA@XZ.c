/*
 * XREFs of ??0GitPtr@Internal@Windows@@QEAA@XZ @ 0x18030A6C4
 * Callers:
 *     ??$Make@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@@12@XZ @ 0x18030A518 (--$Make@U-$GitInvokeHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Wi.c)
 *     ??$Make@U?$GitInvokeHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@$01@Details@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@$01@Details@Internal@Windows@@@12@XZ @ 0x180404C44 (--$Make@U-$GitInvokeHelper@U-$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@Ap.c)
 * Callees:
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x18030A91C (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 */

Windows::Internal::GitPtr *__fastcall Windows::Internal::GitPtr::GitPtr(Windows::Internal::GitPtr *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
  *((_DWORD *)this + 3) = Windows::Internal::Details::Git::Acquire(this);
  *(_QWORD *)this = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
  return this;
}
