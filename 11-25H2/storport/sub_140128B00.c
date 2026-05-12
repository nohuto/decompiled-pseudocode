/*
 * XREFs of sub_140128B00 @ 0x140128B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140128B34 @ 0x140128B34 (sub_140128B34.c)
 */

__int64 __fastcall sub_140128B00(_QWORD *a1)
{
  ++*(_QWORD *)(*(_QWORD *)(a1[20] + 24LL) + 24LL);
  *(_DWORD *)(*(_QWORD *)(a1[20] + 8LL) + 20LL) |= 1u;
  return sub_140128B34(a1);
}
