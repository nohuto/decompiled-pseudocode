/*
 * XREFs of RtlpNtSetValueKey @ 0x18014EFC0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetValueKey @ 0x18015FA30 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall RtlpNtSetValueKey(void *a1, ULONG a2, void *a3, ULONG a4)
{
  _UNICODE_STRING v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  return ZwSetValueKey(a1, &v5, 0, a2, a3, a4);
}
