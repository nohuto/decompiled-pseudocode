/*
 * XREFs of sub_14009E340 @ 0x14009E340
 * Callers:
 *     sub_14009A35C @ 0x14009A35C (sub_14009A35C.c)
 *     sub_14017F944 @ 0x14017F944 (sub_14017F944.c)
 *     sub_140196E08 @ 0x140196E08 (sub_140196E08.c)
 *     sub_1401B0FDC @ 0x1401B0FDC (sub_1401B0FDC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14009E340(PVOID *a1)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)*a1 + 6);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x44436152u);
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
