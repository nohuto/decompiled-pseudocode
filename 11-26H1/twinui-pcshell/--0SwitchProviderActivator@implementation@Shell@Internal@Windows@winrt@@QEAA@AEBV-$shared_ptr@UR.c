/*
 * XREFs of ??0SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1802A4208
 * Callers:
 *     ??$make_shared@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@@0@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802A412C (--$make_shared@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAV-$share.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::SwitchProviderActivator(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax
  __int64 v4; // r9

  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  *a1 = &winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::`vftable';
  a1[6] = 0LL;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(a1 + 7, a2);
  result = v2;
  v2[9] = v4;
  v2[10] = v4;
  v2[11] = v4;
  return result;
}
