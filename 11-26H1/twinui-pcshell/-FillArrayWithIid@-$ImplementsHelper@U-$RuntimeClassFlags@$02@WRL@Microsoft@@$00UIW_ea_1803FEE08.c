/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803FEE08
 * Callers:
 *     ?GetIids@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803FEE30 (-GetIids@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rcx

  v3 = *a2;
  *(GUID *)(a3 + 16 * v3) = GUID_00000038_0000_0000_c000_000000000046;
  *a2 = v3 + 1;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::FillArrayWithIid(
           v3,
           a2,
           a3);
}
