/*
 * XREFs of sub_1800903A4 @ 0x1800903A4
 * Callers:
 *     sub_1800923D0 @ 0x1800923D0 (sub_1800923D0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18006F430 @ 0x18006F430 (sub_18006F430.c)
 *     sub_1800901F8 @ 0x1800901F8 (sub_1800901F8.c)
 *     sub_180090324 @ 0x180090324 (sub_180090324.c)
 *     sub_1800906B4 @ 0x1800906B4 (sub_1800906B4.c)
 *     sub_1800933B0 @ 0x1800933B0 (sub_1800933B0.c)
 *     sub_18009344C @ 0x18009344C (sub_18009344C.c)
 *     sub_180093658 @ 0x180093658 (sub_180093658.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800903A4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v5 = sub_18006F430(a3);
  sub_1800901F8(v6, &v18, a3, v5);
  if ( *((_QWORD *)&v18 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v18 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( qword_1801CDAF0 == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v17[0] = &qword_1801CDAE8;
    v7 = sub_180011790(0x38uLL);
    v17[1] = v7;
    sub_180090324(v8, v7 + 16, a3);
    v9 = qword_1801CDAF0 + 1;
    if ( qword_1801CDAF0 + 1 < 0 )
      v10 = (float)(int)(v9 & 1 | (v9 >> 1)) + (float)(int)(v9 & 1 | (v9 >> 1));
    else
      v10 = (float)(int)v9;
    v11 = qword_1801CDB18;
    if ( qword_1801CDB18 < 0 )
    {
      v11 = qword_1801CDB18 & 1;
      v12 = (float)(int)(v11 | ((unsigned __int64)qword_1801CDB18 >> 1))
          + (float)(int)(v11 | ((unsigned __int64)qword_1801CDB18 >> 1));
    }
    else
    {
      v12 = (float)(int)qword_1801CDB18;
    }
    if ( (float)(v10 / v12) > *(float *)&dword_1801CDAE0 )
    {
      v13 = sub_1800933B0(v11, v9);
      sub_18009344C(v14, v13);
      v18 = *(_OWORD *)sub_1800901F8(v15, &v18, v7 + 16, v5);
    }
    *(_QWORD *)a2 = sub_180093658(v11, v5, v18, v7, v17[0], 0LL);
    *(_BYTE *)(a2 + 8) = 1;
    sub_1800906B4(v17);
  }
  return a2;
}
