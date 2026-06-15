/*
 * XREFs of sub_14002F1A0 @ 0x14002F1A0
 * Callers:
 *     sub_14002F140 @ 0x14002F140 (sub_14002F140.c)
 * Callees:
 *     sub_14002F254 @ 0x14002F254 (sub_14002F254.c)
 *     sub_1400468D0 @ 0x1400468D0 (sub_1400468D0.c)
 */

__int64 __fastcall sub_14002F1A0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r11
  _QWORD *v7; // rax
  __int64 v8; // r11
  _QWORD *v9; // rdx
  __int64 v10; // rcx

  v4 = sub_1400468D0(a2);
  v5 = a1[3];
  v6 = a1[6] & v4;
  v7 = (_QWORD *)a1[1];
  v8 = 2 * v6;
  v9 = *(_QWORD **)(v5 + 8 * v8 + 8);
  if ( v9 == v7 )
  {
LABEL_4:
    v9 = 0LL;
  }
  else
  {
    while ( *a2 != v9[2] )
    {
      if ( v9 == *(_QWORD **)(v5 + 8 * v8) )
        goto LABEL_4;
      v9 = (_QWORD *)v9[1];
    }
  }
  if ( !v9 )
    return 0LL;
  if ( *(_QWORD **)(v5 + 8 * v8 + 8) == v9 )
  {
    if ( *(_QWORD **)(v5 + 8 * v8) == v9 )
      *(_QWORD *)(v5 + 8 * v8) = v7;
    else
      v7 = (_QWORD *)v9[1];
    *(_QWORD *)(v5 + 8 * v8 + 8) = v7;
  }
  else if ( *(_QWORD **)(v5 + 8 * v8) == v9 )
  {
    *(_QWORD *)(v5 + 8 * v8) = *v9;
  }
  v10 = *v9;
  --a1[2];
  *(_QWORD *)v9[1] = v10;
  *(_QWORD *)(v10 + 8) = v9[1];
  sub_14002F254();
  return 1LL;
}
