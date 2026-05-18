/*
 * XREFs of sub_18007FFA8 @ 0x18007FFA8
 * Callers:
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 *     sub_180084A60 @ 0x180084A60 (sub_180084A60.c)
 * Callees:
 *     sub_18007F9A0 @ 0x18007F9A0 (sub_18007F9A0.c)
 */

__int64 __fastcall sub_18007FFA8(__int64 a1, __int64 a2)
{
  __int64 *v4; // rcx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v4 = (__int64 *)(a1 + 16);
  *v4 = 0LL;
  v4[1] = 0LL;
  v4[2] = 0LL;
  sub_18007F9A0(
    v4,
    0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16)) >> 4),
    (__int64 *)(a2 + 16),
    (__int64 *)(a2 + 24));
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  return a1;
}
