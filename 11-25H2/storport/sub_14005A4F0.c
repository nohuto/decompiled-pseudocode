/*
 * XREFs of sub_14005A4F0 @ 0x14005A4F0
 * Callers:
 *     sub_14009A35C @ 0x14009A35C (sub_14009A35C.c)
 *     sub_14017F944 @ 0x14017F944 (sub_14017F944.c)
 *     sub_1401AFF24 @ 0x1401AFF24 (sub_1401AFF24.c)
 *     sub_1401B02E0 @ 0x1401B02E0 (sub_1401B02E0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14005A4F0(PVOID *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v2 = (void *)*((_QWORD *)*a1 + 4);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x44436152u);
  v3 = (void *)*((_QWORD *)*a1 + 5);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x44436152u);
  v4 = (void *)*((_QWORD *)*a1 + 6);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x44436152u);
  v5 = (void *)*((_QWORD *)*a1 + 7);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x44436152u);
  v6 = (void *)*((_QWORD *)*a1 + 9);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x44436152u);
  v7 = (void *)*((_QWORD *)*a1 + 17);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(*a1, 0x44436152u);
}
