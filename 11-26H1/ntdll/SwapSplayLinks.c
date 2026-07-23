/*
 * XREFs of SwapSplayLinks @ 0x1800B4F40
 * Callers:
 *     RtlDeleteNoSplay @ 0x1800B4CC0 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x1800B4E60 (RtlDelete.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SwapSplayLinks(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // r9
  _QWORD **v7; // r10
  __int64 v8; // rdx
  _QWORD **v9; // r11
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *result; // rax
  _QWORD *v14; // r10
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD *v21; // r11
  __int64 *v22; // r10
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rax

  v2 = a2;
  if ( (_QWORD *)*a1 == a1 || (v3 = (_QWORD *)*a2, v4 = (_QWORD *)*a1, (_QWORD *)*a2 == a1) )
  {
    v26 = a1;
    v3 = (_QWORD *)*a1;
    a1 = a2;
    v2 = v26;
    v4 = (_QWORD *)*a2;
  }
  if ( v4 == v2 )
  {
    if ( v3 == v2 )
    {
      v5 = a1;
    }
    else
    {
      v19 = 1LL;
      if ( (_QWORD *)v3[1] != v2 )
        v19 = 2LL;
      v3[v19] = a1;
      v5 = (_QWORD *)*v2;
    }
    *a1 = v5;
    v6 = a1 + 1;
    v7 = (_QWORD **)(v2 + 1);
    v8 = a1[1];
    v9 = (_QWORD **)(v2 + 2);
    a1[1] = v2[1];
    v10 = a1 + 2;
    v11 = v2[2];
    v2[1] = v8;
    v12 = a1[2];
    a1[2] = v11;
    v2[2] = v12;
    if ( (_QWORD *)a1[1] == a1 )
      *v6 = v2;
    else
      *v10 = v2;
  }
  else
  {
    v14 = (_QWORD *)v4[1];
    v15 = v4 + 1;
    if ( v3 == v2 )
    {
      if ( v14 != a1 )
        v15 = v4 + 2;
      *v15 = v2;
      *v2 = *a1;
      *a1 = a1;
    }
    else
    {
      v20 = 1LL;
      if ( v14 != a1 )
        v20 = 2LL;
      v21 = (_QWORD *)v3[1];
      v22 = &v4[v20];
      v23 = v3 + 1;
      if ( v21 != v2 )
      {
        v21 = (_QWORD *)v3[2];
        v23 = v3 + 2;
      }
      v24 = *v22;
      *v22 = (__int64)v21;
      *v23 = v24;
      v25 = *a1;
      *a1 = *v2;
      *v2 = v25;
    }
    v7 = (_QWORD **)(v2 + 1);
    v16 = a1[1];
    v6 = a1 + 1;
    a1[1] = v2[1];
    v9 = (_QWORD **)(v2 + 2);
    v17 = v2[2];
    v10 = a1 + 2;
    v2[1] = v16;
    v18 = a1[2];
    a1[2] = v17;
    v2[2] = v18;
  }
  if ( *v6 )
    *(_QWORD *)*v6 = a1;
  if ( *v10 )
    *(_QWORD *)*v10 = a1;
  if ( *v7 )
    **v7 = v2;
  result = *v9;
  if ( *v9 )
    *result = v2;
  return result;
}
