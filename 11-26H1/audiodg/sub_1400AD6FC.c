/*
 * XREFs of sub_1400AD6FC @ 0x1400AD6FC
 * Callers:
 *     sub_14009D530 @ 0x14009D530 (sub_14009D530.c)
 *     sub_1400A2730 @ 0x1400A2730 (sub_1400A2730.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400AD6FC(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 && v2 != (void *)-1LL )
  {
    CloseHandle(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return 0LL;
}
