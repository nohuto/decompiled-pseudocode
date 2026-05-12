/*
 * XREFs of sub_1400BB250 @ 0x1400BB250
 * Callers:
 *     sub_140015BC8 @ 0x140015BC8 (sub_140015BC8.c)
 *     sub_140053370 @ 0x140053370 (sub_140053370.c)
 *     sub_140183530 @ 0x140183530 (sub_140183530.c)
 * Callees:
 *     sub_1400BB1E8 @ 0x1400BB1E8 (sub_1400BB1E8.c)
 */

void __fastcall sub_1400BB250(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[297];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    a1[297] = 0LL;
  }
  v3 = (void *)a1[300];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    a1[300] = 0LL;
  }
  v4 = (void *)a1[302];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    a1[302] = 0LL;
  }
  sub_1400BB1E8((__int64)a1);
}
