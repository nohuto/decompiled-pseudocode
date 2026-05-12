/*
 * XREFs of sub_140014B38 @ 0x140014B38
 * Callers:
 *     sub_140016010 @ 0x140016010 (sub_140016010.c)
 *     sub_1400BEB00 @ 0x1400BEB00 (sub_1400BEB00.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140014B38(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x53446152u);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 0;
}
