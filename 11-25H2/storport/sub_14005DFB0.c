/*
 * XREFs of sub_14005DFB0 @ 0x14005DFB0
 * Callers:
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 * Callees:
 *     sub_140067D50 @ 0x140067D50 (sub_140067D50.c)
 */

__int64 __fastcall sub_14005DFB0(__int64 a1)
{
  struct _UNICODE_STRING *v1; // r9
  NTSTATUS v4; // edi

  v1 = *(struct _UNICODE_STRING **)(a1 + 6160);
  if ( !v1 )
    return 3221225473LL;
  v4 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a1 + 32), &stru_14014A420, 0LL, v1 + 1);
  if ( v4 >= 0 )
  {
    v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(*(_QWORD *)(a1 + 6160) + 16LL), 1u);
    if ( v4 < 0 )
      RtlFreeUnicodeString((PUNICODE_STRING)(*(_QWORD *)(a1 + 6160) + 16LL));
  }
  sub_140067D50(a1, (unsigned int)v4);
  return (unsigned int)v4;
}
