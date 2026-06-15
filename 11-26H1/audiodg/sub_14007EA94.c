/*
 * XREFs of sub_14007EA94 @ 0x14007EA94
 * Callers:
 *     sub_14007DCA0 @ 0x14007DCA0 (sub_14007DCA0.c)
 * Callees:
 *     sub_14004DB08 @ 0x14004DB08 (sub_14004DB08.c)
 *     sub_140077D30 @ 0x140077D30 (sub_140077D30.c)
 *     sub_1400782A0 @ 0x1400782A0 (sub_1400782A0.c)
 */

char __fastcall sub_14007EA94(__int64 a1, __int64 a2)
{
  __int64 v4; // xmm1_8
  char v5; // cl
  char v6; // cl
  char result; // al
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  void *v10; // [rsp+38h] [rbp-10h] BYREF

  sub_140077D30((__int64)&v8, a1 + 24);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  sub_1400782A0((void **)(a1 + 48), (void **)(a2 + 48));
  v4 = v9;
  *(_OWORD *)(a2 + 24) = v8;
  *(_QWORD *)(a2 + 40) = v4;
  sub_1400782A0((void **)(a2 + 48), &v10);
  if ( v10 )
    sub_14004DB08(v10);
  v5 = *(_BYTE *)(a1 + 56);
  *(_BYTE *)(a1 + 56) = *(_BYTE *)(a2 + 56);
  *(_BYTE *)(a2 + 56) = v5;
  v6 = *(_BYTE *)(a1 + 57);
  result = *(_BYTE *)(a2 + 57);
  *(_BYTE *)(a1 + 57) = result;
  *(_BYTE *)(a2 + 57) = v6;
  return result;
}
