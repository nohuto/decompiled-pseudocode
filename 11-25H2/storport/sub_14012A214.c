/*
 * XREFs of sub_14012A214 @ 0x14012A214
 * Callers:
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14012A214(__int64 a1)
{
  if ( IoRegisterDeviceInterface(
         *(PDEVICE_OBJECT *)(a1 + 32),
         &stru_14014AA30,
         0LL,
         (PUNICODE_STRING)(*(_QWORD *)(a1 + 160) + 336LL)) >= 0
    && IoSetDeviceInterfaceState((PUNICODE_STRING)(*(_QWORD *)(a1 + 160) + 336LL), 1u) < 0 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(*(_QWORD *)(a1 + 160) + 336LL));
  }
  return 0LL;
}
