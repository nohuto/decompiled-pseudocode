/*
 * XREFs of sub_18002AB68 @ 0x18002AB68
 * Callers:
 *     sub_18002A740 @ 0x18002A740 (sub_18002A740.c)
 *     sub_18002AAA4 @ 0x18002AAA4 (sub_18002AAA4.c)
 *     sub_18002BB80 @ 0x18002BB80 (sub_18002BB80.c)
 * Callees:
 *     sub_18002A23C @ 0x18002A23C (sub_18002A23C.c)
 */

__int64 __fastcall sub_18002AB68(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  *(_QWORD *)a2 = *(_QWORD *)a3;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a3 + 24);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a3 + 64);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a3 + 80);
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a3 + 96);
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a3 + 112);
  *(_BYTE *)(a2 + 120) = *(_BYTE *)(a3 + 120);
  *(_QWORD *)(a2 + 128) = *(_QWORD *)(a3 + 128);
  *(_QWORD *)(a2 + 136) = 0LL;
  *(_QWORD *)(a2 + 144) = 0LL;
  v5 = sub_18002A23C();
  *(_QWORD *)(a2 + 136) = v5;
  *(_QWORD *)(a2 + 136) = *(_QWORD *)(a3 + 136);
  *(_QWORD *)(a3 + 136) = v5;
  v6 = *(_QWORD *)(a2 + 144);
  result = *(_QWORD *)(a3 + 144);
  *(_QWORD *)(a2 + 144) = result;
  *(_QWORD *)(a3 + 144) = v6;
  return result;
}
