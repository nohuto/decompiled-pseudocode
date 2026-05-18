/*
 * XREFs of sub_18006B9D8 @ 0x18006B9D8
 * Callers:
 *     sub_18006B73C @ 0x18006B73C (sub_18006B73C.c)
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_18008F33C @ 0x18008F33C (sub_18008F33C.c)
 *     sub_18008F734 @ 0x18008F734 (sub_18008F734.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_18006B9D8(__int64 a1, __int64 a2)
{
  sub_18008F33C(a2);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 2LL;
  *(_OWORD *)(a2 + 72) = 0LL;
  *(_OWORD *)(a2 + 88) = 0LL;
  *(_OWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_DWORD *)(a2 + 120) = -1;
  *(_DWORD *)(a2 + 124) = 0;
  sub_180012AC4(a2 + 48);
  sub_18008F734(a2);
  return Mtx_unlock((_Mtx_t)(a2 + 48));
}
