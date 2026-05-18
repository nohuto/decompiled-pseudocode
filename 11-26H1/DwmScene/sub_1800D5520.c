/*
 * XREFs of sub_1800D5520 @ 0x1800D5520
 * Callers:
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 */

int __fastcall sub_1800D5520(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  sub_180012AC4(*a1);
  *(_BYTE *)(v1 + 228) = 0;
  Mtx_unlock((_Mtx_t)v1);
  return Cnd_broadcast((_Cnd_t)(v1 + 152));
}
