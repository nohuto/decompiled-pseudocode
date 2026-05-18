/*
 * XREFs of sub_18003AB58 @ 0x18003AB58
 * Callers:
 *     sub_18003AFB0 @ 0x18003AFB0 (sub_18003AFB0.c)
 * Callees:
 *     sub_18001DEF0 @ 0x18001DEF0 (sub_18001DEF0.c)
 *     sub_18002E318 @ 0x18002E318 (sub_18002E318.c)
 *     sub_180039A04 @ 0x180039A04 (sub_180039A04.c)
 */

__int64 *__fastcall sub_18003AB58(__int64 *a1, __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // r8
  _QWORD *v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // r8
  __int64 v10; // rcx
  __int64 i; // rax

  if ( a1 != a2 )
  {
    v4 = (_QWORD *)*a1;
    sub_18002E318((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8));
    v4[1] = v4;
    *v4 = v4;
    v4[2] = v4;
    v5 = *a1;
    a1[1] = 0LL;
    *(_QWORD *)(*a1 + 8) = sub_180039A04(a1, *(_QWORD *)(*a2 + 8), v5);
    v6 = (_QWORD *)*a1;
    a1[1] = a2[1];
    v7 = v6[1];
    if ( *(_BYTE *)(v7 + 25) )
    {
      *v6 = v6;
      *(_QWORD *)(*a1 + 16) = *a1;
    }
    else
    {
      v8 = sub_18001DEF0((_QWORD *)v7);
      *v9 = v8;
      v10 = *(_QWORD *)(*a1 + 8);
      for ( i = *(_QWORD *)(v10 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
        v10 = i;
      *(_QWORD *)(*a1 + 16) = v10;
    }
  }
  return a1;
}
