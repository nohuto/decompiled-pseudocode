/*
 * XREFs of sub_14003E598 @ 0x14003E598
 * Callers:
 *     sub_14009A35C @ 0x14009A35C (sub_14009A35C.c)
 *     sub_14017F944 @ 0x14017F944 (sub_14017F944.c)
 *     sub_1401AFF24 @ 0x1401AFF24 (sub_1401AFF24.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14003E598(PVOID *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx

  v2 = (_QWORD *)*((_QWORD *)*a1 + 6);
  if ( v2 )
  {
    v3 = (void *)v2[7];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x44436152u);
    ExFreePoolWithTag(v2, 0x44436152u);
  }
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
