/*
 * XREFs of CmpSortByTag @ 0x140CF01A4
 * Callers:
 *     CmpDoSort @ 0x140CEECEC (CmpDoSort.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpSortByTag(__int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *v3; // r9
  _QWORD *v4; // rdx
  _QWORD *v5; // r11
  bool v6; // zf
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *i; // rax
  _QWORD *v10; // rcx

  v1 = *(_QWORD **)a1;
  v3 = *(_QWORD **)(a1 + 8);
  v4 = **(_QWORD ***)a1;
  if ( *(_QWORD **)a1 != v3 )
  {
    while ( 1 )
    {
      v5 = v3;
      if ( *((_DWORD *)v1 + 34) > *((_DWORD *)v4 + 34) )
      {
        v6 = v4 == v3;
        v3 = v1;
        v7 = *v4;
        if ( !v6 )
          v3 = v5;
        if ( *(_QWORD **)(v7 + 8) != v4 )
          goto LABEL_15;
        v8 = (_QWORD *)v4[1];
        if ( (_QWORD *)*v8 != v4 )
          goto LABEL_15;
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        for ( i = *(_QWORD **)a1; i != v1; i = (_QWORD *)*i )
        {
          if ( *((_DWORD *)i + 34) >= *((_DWORD *)v4 + 34) )
            break;
        }
        v10 = (_QWORD *)i[1];
        if ( (_QWORD *)*v10 != i )
LABEL_15:
          __fastfail(3u);
        *v4 = i;
        v4[1] = v10;
        *v10 = v4;
        i[1] = v4;
        v4 = v1;
      }
      else
      {
        v1 = v4;
      }
      if ( v1 == v3 )
        break;
      v4 = (_QWORD *)*v4;
    }
  }
  return 1;
}
