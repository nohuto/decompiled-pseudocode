/*
 * XREFs of sub_1400BB140 @ 0x1400BB140
 * Callers:
 *     sub_1400AEFC8 @ 0x1400AEFC8 (sub_1400AEFC8.c)
 *     sub_1400BB0A4 @ 0x1400BB0A4 (sub_1400BB0A4.c)
 *     sub_140183278 @ 0x140183278 (sub_140183278.c)
 * Callees:
 *     sub_1400BB0C8 @ 0x1400BB0C8 (sub_1400BB0C8.c)
 */

__int64 __fastcall sub_1400BB140(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = *(void **)(*(_QWORD *)(a1 + 608) + 8LL);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8LL) = 0LL;
  }
  v3 = *(void **)(*(_QWORD *)(a1 + 608) + 32LL);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    *(_QWORD *)(*(_QWORD *)(a1 + 608) + 32LL) = 0LL;
  }
  v4 = *(void **)(*(_QWORD *)(a1 + 608) + 48LL);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    *(_QWORD *)(*(_QWORD *)(a1 + 608) + 48LL) = 0LL;
  }
  return sub_1400BB0C8(a1);
}
