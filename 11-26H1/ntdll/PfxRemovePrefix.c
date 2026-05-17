/*
 * XREFs of PfxRemovePrefix @ 0x18013CB10
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x1800B7940 (RtlDelete.c)
 */

void __fastcall PfxRemovePrefix(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  _QWORD *i; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // r8
  _QWORD *k; // rcx
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  _QWORD *j; // rcx

  if ( *(_WORD *)a2 == 513 || *(_WORD *)a2 == 514 )
  {
    v2 = (_QWORD *)(a2 + 16);
    v3 = *(_QWORD **)(a2 + 16);
    for ( i = v2; v3 != i; v3 = (_QWORD *)*v3 )
      i = v3;
    v5 = i - 2;
    v6 = RtlDelete(v2);
    if ( v6 )
    {
      if ( i != v6 )
      {
        v10 = (_QWORD *)v5[1];
        v11 = v6 - 2;
        for ( j = (_QWORD *)v10[1]; j != v5; j = (_QWORD *)j[1] )
          v10 = j;
        *(_WORD *)v11 = 513;
        v10[1] = v11;
        v11[1] = v5[1];
        *(_WORD *)v5 = 514;
        v5[1] = 0LL;
      }
    }
    else
    {
      v7 = (_QWORD *)v5[1];
      v8 = v7;
      for ( k = (_QWORD *)v7[1]; k != v5; k = (_QWORD *)k[1] )
        v8 = k;
      v8[1] = v7;
    }
  }
}
