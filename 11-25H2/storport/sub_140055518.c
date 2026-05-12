/*
 * XREFs of sub_140055518 @ 0x140055518
 * Callers:
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 * Callees:
 *     sub_140055590 @ 0x140055590 (sub_140055590.c)
 */

__int64 __fastcall sub_140055518(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rbx

  v1 = (struct _UNICODE_STRING *)(a1 + 1976);
  if ( IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a1 + 32), &InterfaceClassGuid, 0LL, (PUNICODE_STRING)(a1 + 1976)) >= 0
    && IoSetDeviceInterfaceState(v1, 1u) < 0 )
  {
    RtlFreeUnicodeString(v1);
  }
  sub_140055590(a1);
  return 0LL;
}
