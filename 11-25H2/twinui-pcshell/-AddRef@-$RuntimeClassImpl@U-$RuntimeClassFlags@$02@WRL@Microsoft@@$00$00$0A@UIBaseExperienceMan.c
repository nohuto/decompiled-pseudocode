/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIToastCenterExperienceManager@5678@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIHolographicExperienceExtension@Holographic@678@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D5A30
 * Callers:
 *     ?AddRef@CToastCenterExperienceManager@@W7EAAKXZ @ 0x1803741D0 (-AddRef@CToastCenterExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WBA@EAAKXZ @ 0x1803741E0 (-AddRef@CToastCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WBI@EAAKXZ @ 0x1803741F0 (-AddRef@CToastCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WCA@EAAKXZ @ 0x180374200 (-AddRef@CToastCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WCI@EAAKXZ @ 0x180374210 (-AddRef@CToastCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WDA@EAAKXZ @ 0x180374220 (-AddRef@CToastCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WDI@EAAKXZ @ 0x180374230 (-AddRef@CToastCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WEA@EAAKXZ @ 0x180374240 (-AddRef@CToastCenterExperienceManager@@WEA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v5; // rtt

  v1 = *(_QWORD *)(a1 + 80);
  while ( 1 )
  {
    if ( v1 < 0 )
      return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                             (Microsoft::WRL::Details *)(2 * v1 + 16),
                             (volatile int *)((unsigned __int64)v1 >> 63));
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      break;
    v3 = v1 + 1;
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v1 + 1, v1);
    if ( v5 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
