/*
 * XREFs of sub_140018E74 @ 0x140018E74
 * Callers:
 *     sub_140018580 @ 0x140018580 (sub_140018580.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140008528 @ 0x140008528 (sub_140008528.c)
 *     sub_140009934 @ 0x140009934 (sub_140009934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400100C4 @ 0x1400100C4 (sub_1400100C4.c)
 *     sub_140010994 @ 0x140010994 (sub_140010994.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140018E74(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD **v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v17; // [rsp+50h] [rbp+30h] BYREF
  __int64 v18; // [rsp+58h] [rbp+38h] BYREF
  __int64 v19; // [rsp+60h] [rbp+40h] BYREF

  v2 = a1 + 272;
  v3 = *(_QWORD *)(a1 + 272);
  if ( v3 )
  {
    v5 = *(_QWORD *)(sub_140009934(v3, 0) + 8);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
    v19 = a1 + 32;
    v7 = *(_QWORD *)(a1 + 120);
    v17 = v7;
    while ( v7 )
    {
      v8 = (_QWORD **)sub_1400265D8(v6, &v17);
      v9 = sub_1400B6010(**v8);
      v10 = v9;
      if ( v9 < 0 )
      {
        sub_14000C2A8((int)retaddr, 481, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v9);
LABEL_13:
        sub_140018FF0(&v19);
        return v10;
      }
      v7 = v17;
    }
    v11 = *(_QWORD *)(a1 + 72);
    v17 = v11;
    while ( v11 )
    {
      v12 = (__int64 *)sub_1400265D8(v6, &v17);
      sub_140010994(&v18, *v12);
      v13 = sub_1400B6010(v18);
      v10 = v13;
      if ( v13 < 0 )
      {
        sub_14000C2A8((int)retaddr, 489, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v13);
        sub_140003238(&v18);
        goto LABEL_13;
      }
      sub_140003238(&v18);
      v11 = v17;
    }
    sub_140018FF0(&v19);
    v14 = *(_QWORD *)(a1 + 24);
    if ( v14 )
    {
      v15 = sub_140008528(v14, v5);
      v10 = v15;
      if ( v15 < 0 )
      {
        sub_14000C2A8((int)retaddr, 496, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v15);
        return v10;
      }
    }
  }
  sub_1400100C4(v2);
  return 0LL;
}
