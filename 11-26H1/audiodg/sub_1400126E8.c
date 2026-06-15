/*
 * XREFs of sub_1400126E8 @ 0x1400126E8
 * Callers:
 *     sub_140010BA4 @ 0x140010BA4 (sub_140010BA4.c)
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     sub_140069748 @ 0x140069748 (sub_140069748.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400126E8(__int64 a1, int a2)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = (_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 56) = 10;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 10;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 288) = 10;
  *(_DWORD *)(a1 + 312) = 0;
  *(_WORD *)(a1 + 316) = 0;
  *(_BYTE *)(a1 + 318) = 0;
  *(_DWORD *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 320) = xmmword_1400C5548;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 116) = 0LL;
  *(_QWORD *)(a1 + 124) = 0LL;
  *(_QWORD *)(a1 + 140) = 1LL;
  *(_DWORD *)(a1 + 148) = 0;
  v5 = *(_QWORD *)(a1 + 176);
  if ( v5 && v2 )
  {
    sub_1400B6010(v5);
    *v2 = 0LL;
  }
  if ( *v3 && v3 )
  {
    sub_1400B6010(*v3);
    *v3 = 0LL;
  }
  result = a1;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_DWORD *)(a1 + 208) = 1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 216) = xmmword_1400C5548;
  *(_OWORD *)(a1 + 296) = xmmword_1400C5548;
  return result;
}
