/*
 * XREFs of sub_14005E048 @ 0x14005E048
 * Callers:
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14005E048(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rbx

  v1 = (struct _UNICODE_STRING *)(a1 + 5728);
  if ( IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a1 + 32), &stru_14014AA30, 0LL, (PUNICODE_STRING)(a1 + 5728)) >= 0
    && IoSetDeviceInterfaceState(v1, 1u) < 0 )
  {
    RtlFreeUnicodeString(v1);
  }
  return 0LL;
}
