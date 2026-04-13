/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180043A3C
 * Callers:
 *     ?GetIids@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180044130 (-GetIids@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IContentManagementBroker>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 result; // rax

  *(GUID *)(a3 + 16LL * (unsigned int)(*a2)++) = GUID_00000038_0000_0000_c000_000000000046;
  result = 2LL * (unsigned int)*a2;
  *(GUID *)(a3 + 16LL * (unsigned int)(*a2)++) = GUID_44431c59_c5ec_4253_94f7_27563a8a242f;
  return result;
}
