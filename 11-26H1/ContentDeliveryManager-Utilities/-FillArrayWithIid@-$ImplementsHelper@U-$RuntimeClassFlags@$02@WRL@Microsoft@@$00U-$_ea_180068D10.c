/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@UINotificationActivationCallback@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180068D10
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800693C0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINoti.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,INotificationActivationCallback>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 result; // rax

  *(GUID *)(a3 + 16LL * (unsigned int)(*a2)++) = GUID_00000038_0000_0000_c000_000000000046;
  result = 2LL * (unsigned int)*a2;
  *(GUID *)(a3 + 16LL * (unsigned int)(*a2)++) = GUID_53e31837_6600_4a81_9395_75cffe746f94;
  return result;
}
