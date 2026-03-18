/*
 * XREFs of sub_14000B520 @ 0x14000B520
 * Callers:
 *     sub_14002E5AC @ 0x14002E5AC (sub_14002E5AC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14000B520(__int64 a1, unsigned __int16 a2, _WORD *a3, unsigned __int16 *a4)
{
  unsigned __int16 v6; // di
  unsigned __int16 v7; // bx
  __int64 v8; // rdx
  __int64 v9; // rax
  _WORD *v10; // r11
  unsigned __int16 *v11; // r10
  _QWORD *v12; // r15
  unsigned __int16 *v13; // rdx
  int v14; // r9d
  int v15; // edx
  unsigned __int16 i; // dx
  unsigned __int16 v17; // r8
  unsigned __int16 v18; // ax
  char result; // al
  unsigned __int16 j; // dx
  unsigned __int16 v21; // r8

  if ( a2 )
  {
    v6 = *(_WORD *)(a1 + 326);
    v7 = *(_WORD *)(a1 + 328);
    v8 = 208LL * a2;
    v9 = *(_QWORD *)(a1 + 936);
    v10 = (_WORD *)(v8 + v9 - 156);
    v11 = (unsigned __int16 *)(v8 + v9 - 152);
    v12 = (_QWORD *)(v8 + v9 - 176);
    v13 = (unsigned __int16 *)(v9 + v8 - 154);
  }
  else
  {
    v6 = *(_WORD *)(a1 + 324);
    v10 = (_WORD *)(a1 + 388);
    v7 = v6;
    v11 = (unsigned __int16 *)(a1 + 392);
    v12 = (_QWORD *)(a1 + 368);
    v13 = (unsigned __int16 *)(a1 + 390);
  }
  v14 = (unsigned __int16)*v10;
  v15 = *v13;
  if ( v15 == v14 + 1 || !(_WORD)v15 && v14 == v6 - 1 )
    return 0;
  *v10 = v14 + 1;
  if ( (_WORD)v14 + 1 == v6 )
    *v10 = 0;
  for ( i = *v11; ; ++i )
  {
    if ( i >= v7 )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= *v11 )
        {
          if ( *v10 )
          {
            result = 0;
            --*v10;
          }
          else
          {
            *v10 = v6 - 1;
            return 0;
          }
          return result;
        }
        v21 = j + 1;
        if ( !*(_QWORD *)(32LL * j + *v12 + 16) )
          break;
      }
      v18 = j;
      *v11 = v21;
      if ( v21 != v7 )
        goto LABEL_12;
      goto LABEL_11;
    }
    v17 = i + 1;
    if ( !*(_QWORD *)(32LL * i + *v12 + 16) )
      break;
  }
  v18 = i;
  *v11 = v17;
  if ( v17 != v7 )
    goto LABEL_12;
LABEL_11:
  *v11 = 0;
LABEL_12:
  *a3 = v14;
  *a4 = v18;
  return 1;
}
