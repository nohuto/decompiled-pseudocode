/*
 * XREFs of SwapSplayLinks @ 0x1403C0678
 * Callers:
 *     RtlDelete @ 0x14030A0F0 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x1403C0570 (RtlDeleteNoSplay.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SwapSplayLinks(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // rcx
  _QWORD **v9; // r11
  _QWORD **v10; // rbx
  _QWORD *v11; // r10
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *result; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // r11
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // r10
  _QWORD *v23; // r11
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax

  v2 = a1;
  v3 = (_QWORD *)*a1;
  if ( v3 == v2 || (v4 = (_QWORD *)*a2, v5 = v3, (_QWORD *)*a2 == v2) )
  {
    v5 = (_QWORD *)*a2;
    v26 = v2;
    v2 = a2;
    a2 = v26;
    v4 = v3;
  }
  if ( v5 == a2 )
  {
    if ( v4 == a2 )
    {
      v6 = v2;
    }
    else
    {
      v20 = 1LL;
      if ( (_QWORD *)v4[1] != a2 )
        v20 = 2LL;
      v4[v20] = v2;
      v6 = (_QWORD *)*a2;
    }
    *v2 = v6;
    v7 = v2 + 1;
    v8 = v2[1];
    v9 = (_QWORD **)(a2 + 1);
    v10 = (_QWORD **)(a2 + 2);
    v2[1] = a2[1];
    v11 = v2 + 2;
    v12 = a2[2];
    a2[1] = v8;
    v13 = v2[2];
    v2[2] = v12;
    a2[2] = v13;
    if ( (_QWORD *)v2[1] == v2 )
      *v7 = a2;
    else
      *v11 = a2;
  }
  else
  {
    v15 = v5 + 1;
    v16 = (_QWORD *)v5[1];
    if ( v4 == a2 )
    {
      if ( v16 != v2 )
        v15 = v5 + 2;
      *v15 = a2;
      *a2 = *v2;
      *v2 = v2;
    }
    else
    {
      v21 = 1LL;
      if ( v16 != v2 )
        v21 = 2LL;
      v22 = v4 + 1;
      v23 = (_QWORD *)v4[1];
      if ( v23 != a2 )
      {
        v22 = v4 + 2;
        v23 = (_QWORD *)v4[2];
      }
      v24 = v5[v21];
      v5[v21] = v23;
      *v22 = v24;
      v25 = *v2;
      *v2 = *a2;
      *a2 = v25;
    }
    v9 = (_QWORD **)(a2 + 1);
    v7 = v2 + 1;
    v17 = v2[1];
    v10 = (_QWORD **)(a2 + 2);
    v2[1] = a2[1];
    v11 = v2 + 2;
    v18 = a2[2];
    a2[1] = v17;
    v19 = v2[2];
    v2[2] = v18;
    a2[2] = v19;
  }
  if ( *v7 )
    *(_QWORD *)*v7 = v2;
  if ( *v11 )
    *(_QWORD *)*v11 = v2;
  if ( *v9 )
    **v9 = a2;
  result = *v10;
  if ( *v10 )
    *result = a2;
  return result;
}
