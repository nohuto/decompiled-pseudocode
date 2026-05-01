/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIToastCenterExperienceManager@5678@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIHolographicExperienceExtension@Holographic@678@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801CF540
 * Callers:
 *     ?AddRef@CToastCenterExperienceManager@@W7EAAKXZ @ 0x18037BE10 (-AddRef@CToastCenterExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WBA@EAAKXZ @ 0x18037BE20 (-AddRef@CToastCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WBI@EAAKXZ @ 0x18037BE30 (-AddRef@CToastCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WCA@EAAKXZ @ 0x18037BE40 (-AddRef@CToastCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WCI@EAAKXZ @ 0x18037BE50 (-AddRef@CToastCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WDA@EAAKXZ @ 0x18037BE60 (-AddRef@CToastCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WDI@EAAKXZ @ 0x18037BE70 (-AddRef@CToastCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WEA@EAAKXZ @ 0x18037BE80 (-AddRef@CToastCenterExperienceManager@@WEA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  signed __int64 v2; // rax
  signed __int64 v4; // rtt

  v2 = *(_QWORD *)(a1 + 80);
  while ( 1 )
  {
    if ( v2 < 0 )
    {
      LODWORD(a2) = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), a2);
      return (unsigned int)a2;
    }
    if ( (_DWORD)v2 == 0x7FFFFFFF )
      break;
    a2 = (volatile int *)(v2 + 1);
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v2 + 1, v2);
    if ( v4 == v2 )
      return (unsigned int)a2;
  }
  LODWORD(a2) = 0x7FFFFFFF;
  return (unsigned int)a2;
}
