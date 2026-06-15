/*
 * XREFs of sub_140080048 @ 0x140080048
 * Callers:
 *     sub_140067618 @ 0x140067618 (sub_140067618.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140080048(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400BA9C8;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400BE530;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 16) = 24;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  return a1;
}
