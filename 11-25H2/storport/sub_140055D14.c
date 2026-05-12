/*
 * XREFs of sub_140055D14 @ 0x140055D14
 * Callers:
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_140055D14(__int64 a1)
{
  NTSTATUS v1; // ebx
  struct _UNICODE_STRING *v2; // rdi
  NTSTATUS result; // eax

  v1 = 0;
  if ( *(_DWORD *)(a1 + 5560) )
  {
    v2 = (struct _UNICODE_STRING *)(a1 + 5544);
    result = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a1 + 32), &stru_14014C578, 0LL, (PUNICODE_STRING)(a1 + 5544));
    if ( result < 0 )
      return result;
    v1 = IoSetDeviceInterfaceState(v2, 1u);
    if ( v1 < 0 )
      RtlFreeUnicodeString(v2);
  }
  return v1;
}
