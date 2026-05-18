/*
 * XREFs of sub_18005005C @ 0x18005005C
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 * Callees:
 *     sub_18004F828 @ 0x18004F828 (sub_18004F828.c)
 *     sub_18004F930 @ 0x18004F930 (sub_18004F930.c)
 *     sub_18004FD4C @ 0x18004FD4C (sub_18004FD4C.c)
 *     sub_1800500E0 @ 0x1800500E0 (sub_1800500E0.c)
 *     sub_18009B1D4 @ 0x18009B1D4 (sub_18009B1D4.c)
 *     sub_18009B504 @ 0x18009B504 (sub_18009B504.c)
 */

void __fastcall sub_18005005C(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  _DWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r9
  __m128 *v7; // r9
  __int128 v8; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v9[152]; // [rsp+30h] [rbp-98h] BYREF

  sub_18004F828((_DWORD *)(a1 + 108), a2);
  *(_DWORD *)(v2 + 252) = 2;
  sub_18009B1D4();
  *(_DWORD *)(v3 + 144) = 4;
  v4 = (_DWORD *)sub_18009B504(v9, v3);
  sub_18004F930((_DWORD *)(v5 + 256), v4);
  sub_1800500E0(v6);
  v8 = xmmword_1800FA848;
  sub_18004FD4C(v7, (__m128 *)&v8);
}
