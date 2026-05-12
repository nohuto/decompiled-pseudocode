/*
 * XREFs of sub_1400DFF0C @ 0x1400DFF0C
 * Callers:
 *     sub_1400E3658 @ 0x1400E3658 (sub_1400E3658.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_1400DFF0C(_QWORD *a1, _OWORD *a2)
{
  unsigned int v4; // esi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  _QWORD *v9; // rdx

  v4 = 0;
  v5 = (_QWORD *)sub_1400143E0(64LL, 1040LL, 1380147538LL, *(_QWORD *)(a1[16] + 8LL));
  if ( v5 )
  {
    v6 = 8LL;
    v7 = v5 + 2;
    do
    {
      *v7 = *a2;
      v7[1] = a2[1];
      v7[2] = a2[2];
      v7[3] = a2[3];
      v7[4] = a2[4];
      v7[5] = a2[5];
      v7[6] = a2[6];
      v7 += 8;
      v8 = a2[7];
      a2 += 8;
      *(v7 - 1) = v8;
      --v6;
    }
    while ( v6 );
    v9 = (_QWORD *)a1[202];
    if ( (_QWORD *)*v9 != a1 + 201 )
      __fastfail(3u);
    *v5 = a1 + 201;
    v5[1] = v9;
    *v9 = v5;
    a1[202] = v5;
    ++a1[200];
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
