/*
 * XREFs of sub_14001DB3C @ 0x14001DB3C
 * Callers:
 *     sub_14001DB00 @ 0x14001DB00 (sub_14001DB00.c)
 * Callees:
 *     sub_14001DB9C @ 0x14001DB9C (sub_14001DB9C.c)
 */

__int64 __fastcall sub_14001DB3C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  *(_QWORD *)a1 = off_1400B9268;
  *(_QWORD *)(a1 + 8) = off_1400B9228;
  *(_QWORD *)(a1 + 16) = off_1400B9300;
  ++*(_DWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 24) = off_1400B9248;
  v5 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  sub_14001DB9C(v5, a2, a3, a4);
  return sub_14001DBC0(a1);
}
