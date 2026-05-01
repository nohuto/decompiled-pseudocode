/*
 * XREFs of ??0exception@std@@QEAA@QEBD@Z @ 0x1802DBF08
 * Callers:
 *     ??0invalid_argument@std@@QEAA@PEBD@Z @ 0x1802DBFEC (--0invalid_argument@std@@QEAA@PEBD@Z.c)
 *     ??0runtime_error@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180314378 (--0runtime_error@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@@Z.c)
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x180641244 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180643340 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x1802D2E02 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const char *const a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  return this;
}
