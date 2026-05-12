/*
 * XREFs of sub_140114380 @ 0x140114380
 * Callers:
 *     sub_1400E1C2C @ 0x1400E1C2C (sub_1400E1C2C.c)
 * Callees:
 *     sub_14006E15C @ 0x14006E15C (sub_14006E15C.c)
 *     sub_14006E36C @ 0x14006E36C (sub_14006E36C.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140114380(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // edx
  _OWORD *v5; // rcx
  __int64 v6; // r8
  _OWORD *v7; // rax
  __int128 v8; // xmm1

  v2 = *(_QWORD *)(a1 + 88);
  memset_0((void *)a2, 0, 0x400uLL);
  v4 = sub_14006E15C((_OWORD *)a2);
  if ( v4 >= 0 )
  {
    *(_WORD *)(a2 + 16) = *(_WORD *)(v2 + 4);
    v4 = sub_14006E36C(0, (char *)(a2 + 512));
    if ( v4 >= 0 )
    {
      v5 = (_OWORD *)(a2 + 256);
      v6 = 2LL;
      v7 = (_OWORD *)(*(_QWORD *)(v2 + 96) + 60LL);
      do
      {
        *v5 = *v7;
        v5[1] = v7[1];
        v5[2] = v7[2];
        v5[3] = v7[3];
        v5[4] = v7[4];
        v5[5] = v7[5];
        v5[6] = v7[6];
        v5 += 8;
        v8 = v7[7];
        v7 += 8;
        *(v5 - 1) = v8;
        --v6;
      }
      while ( v6 );
    }
  }
  return (unsigned int)v4;
}
