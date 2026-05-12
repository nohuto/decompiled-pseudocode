/*
 * XREFs of sub_1400D4018 @ 0x1400D4018
 * Callers:
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400D4018(__int64 a1)
{
  struct _UNICODE_STRING *v2; // rdi

  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 )
  {
    v2 = (struct _UNICODE_STRING *)(a1 + 880);
    if ( IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a1 + 32), &stru_14014FB48, 0LL, (PUNICODE_STRING)(a1 + 880)) >= 0
      && IoSetDeviceInterfaceState(v2, 1u) < 0 )
    {
      RtlFreeUnicodeString(v2);
    }
  }
  if ( IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a1 + 32), &InterfaceClassGuid, 0LL, (PUNICODE_STRING)(a1 + 864)) >= 0
    && IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 864), 1u) < 0 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 864));
  }
  return 0LL;
}
