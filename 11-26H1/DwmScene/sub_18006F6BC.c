/*
 * XREFs of sub_18006F6BC @ 0x18006F6BC
 * Callers:
 *     sub_18006F7C0 @ 0x18006F7C0 (sub_18006F7C0.c)
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 * Callees:
 *     sub_18002A2B0 @ 0x18002A2B0 (sub_18002A2B0.c)
 *     sub_18006F8B8 @ 0x18006F8B8 (sub_18006F8B8.c)
 */

__int64 __fastcall sub_18006F6BC(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi

  v2 = (_QWORD *)(a2 + 136);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v3 = (_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  if ( a1 + 136 != a2 + 136 )
  {
    sub_18006F8B8(a1 + 136);
    sub_18002A2B0(v3, v2);
  }
  return a1;
}
