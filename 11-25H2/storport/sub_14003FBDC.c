/*
 * XREFs of sub_14003FBDC @ 0x14003FBDC
 * Callers:
 *     sub_1401B2A00 @ 0x1401B2A00 (sub_1401B2A00.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14003FBDC(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 960);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 972) = 0;
    ExFreePoolWithTag(v2, 0x41476152u);
    *(_QWORD *)(a1 + 960) = 0LL;
  }
}
