/*
 * XREFs of sub_18004FFB0 @ 0x18004FFB0
 * Callers:
 *     sub_18004FEA0 @ 0x18004FEA0 (sub_18004FEA0.c)
 *     sub_1800627F8 @ 0x1800627F8 (sub_1800627F8.c)
 * Callees:
 *     sub_18004F828 @ 0x18004F828 (sub_18004F828.c)
 *     sub_18004F930 @ 0x18004F930 (sub_18004F930.c)
 *     sub_18004FD4C @ 0x18004FD4C (sub_18004FD4C.c)
 *     sub_1800500E0 @ 0x1800500E0 (sub_1800500E0.c)
 *     sub_18009B264 @ 0x18009B264 (sub_18009B264.c)
 *     sub_18009B4A0 @ 0x18009B4A0 (sub_18009B4A0.c)
 */

void __fastcall sub_18004FFB0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // r8
  __m128 *v4; // r10
  __m128 *v5; // r9
  __int64 v6; // r8
  _DWORD *v7; // rax
  __int64 v8; // r10
  __int64 v9; // r10
  __m128 *v10; // r9
  __m128 *v11; // r10
  __m128 v12; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v13[168]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = (_DWORD *)sub_18009B4A0(v13, a2, a1 + 256, a2);
  sub_18004F930(v3, v2);
  v4[19] = _mm_add_ps(v4[19], *v5);
  v4[20] = _mm_add_ps(v4[20], *v5);
  v4[21] = _mm_add_ps(v4[21], *v5);
  v7 = (_DWORD *)sub_18009B264(v13, v6);
  sub_18004F828((_DWORD *)(v8 + 108), v7);
  sub_1800500E0(v9);
  v12 = *v10;
  sub_18004FD4C(v11, &v12);
}
