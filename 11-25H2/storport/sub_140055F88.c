/*
 * XREFs of sub_140055F88 @ 0x140055F88
 * Callers:
 *     sub_1401B2A00 @ 0x1401B2A00 (sub_1401B2A00.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140055F88(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 6072);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x41476152u);
    *(_QWORD *)(a1 + 6072) = 0LL;
  }
}
