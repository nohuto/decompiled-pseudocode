/*
 * XREFs of sub_140195E44 @ 0x140195E44
 * Callers:
 *     sub_140195A38 @ 0x140195A38 (sub_140195A38.c)
 *     sub_140195E90 @ 0x140195E90 (sub_140195E90.c)
 *     sub_140196E08 @ 0x140196E08 (sub_140196E08.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140195E44(PVOID *a1)
{
  void *v2; // rcx

  v2 = *(void **)(*((_QWORD *)*a1 + 2) + 8LL);
  if ( v2 )
    ObfDereferenceObject(v2);
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
