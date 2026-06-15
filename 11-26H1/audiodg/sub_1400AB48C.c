/*
 * XREFs of sub_1400AB48C @ 0x1400AB48C
 * Callers:
 *     sub_1400AB5FC @ 0x1400AB5FC (sub_1400AB5FC.c)
 * Callees:
 *     sub_1400ABBD0 @ 0x1400ABBD0 (sub_1400ABBD0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400AB48C(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  *(_QWORD *)(a1 + 8) = a2;
  *(_WORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = off_1400BAFB0;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 5000LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 5000LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 30000LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  sub_1400ABBD0();
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    sub_1400B6010(v3);
  return a1;
}
