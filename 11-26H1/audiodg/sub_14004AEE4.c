/*
 * XREFs of sub_14004AEE4 @ 0x14004AEE4
 * Callers:
 *     sub_14004B6D4 @ 0x14004B6D4 (sub_14004B6D4.c)
 *     sub_14004B6F4 @ 0x14004B6F4 (sub_14004B6F4.c)
 * Callees:
 *     j__o_free @ 0x1400492B8 (j__o_free.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_14004AE5C @ 0x14004AE5C (sub_14004AE5C.c)
 *     sub_14004B470 @ 0x14004B470 (sub_14004B470.c)
 *     sub_14004B520 @ 0x14004B520 (sub_14004B520.c)
 */

__int64 __fastcall sub_14004AEE4(__int64 a1, __int64 a2, _QWORD *a3, float a4, unsigned int a5)
{
  unsigned int v6; // ebp
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // edi

  v6 = a2;
  if ( !a3 )
    return 2147942487LL;
  *a3 = 0LL;
  v9 = sub_1400492F4(32LL, a2);
  v10 = v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)v9 = off_1400BB2E8;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_DWORD *)(v9 + 24) = 0;
    if ( !a1 || (v11 = sub_14004B520(v9, a1, v6, a5), v11 >= 0) )
    {
      *(float *)(v10 + 24) = a4;
      v11 = sub_14004B470(v10, &qword_1400C78E0, a3);
      if ( v11 >= 0 )
        return (unsigned int)v11;
    }
    sub_14004AE5C((_QWORD *)v10);
    j__o_free(v10);
  }
  else
  {
    v11 = -2147024882;
  }
  *a3 = 0LL;
  return (unsigned int)v11;
}
