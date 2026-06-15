/*
 * XREFs of sub_14006ED00 @ 0x14006ED00
 * Callers:
 *     sub_140007F0C @ 0x140007F0C (sub_140007F0C.c)
 * Callees:
 *     sub_14000802C @ 0x14000802C (sub_14000802C.c)
 *     sub_14000809C @ 0x14000809C (sub_14000809C.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_14005C090 @ 0x14005C090 (sub_14005C090.c)
 *     sub_1400640E8 @ 0x1400640E8 (sub_1400640E8.c)
 */

void __fastcall sub_14006ED00(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned int v5; // eax

  if ( !a2 )
    sub_14004639C(-2147467259);
  sub_14000802C((__int64 *)(a2 + 8));
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = a2;
  v4 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v5 = sub_14005C090(a1, v4);
    sub_1400640E8(a1, v5);
  }
  if ( !*(_QWORD *)(a1 + 8) )
    sub_14000809C(a1);
}
