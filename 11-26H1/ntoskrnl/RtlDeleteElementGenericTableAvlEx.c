/*
 * XREFs of RtlDeleteElementGenericTableAvlEx @ 0x1403C2BE0
 * Callers:
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14051E9C0 (DifObjTrkQeuryInvokeDeleteRange.c)
 * Callees:
 *     RebalanceNode @ 0x1403C2F40 (RebalanceNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlDeleteElementGenericTableAvlEx(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *j; // rcx
  _QWORD *i; // rcx
  __int64 v7; // rax
  _QWORD *k; // rbx
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  _BYTE *v15; // r14
  char v16; // al
  bool v18; // zf
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *m; // rax
  _QWORD *v23; // rcx

  if ( a2 == *(_QWORD *)(a1 + 56) )
  {
    v4 = *(_QWORD **)(a2 + 8);
    if ( v4 )
    {
      for ( i = (_QWORD *)v4[2]; i; i = (_QWORD *)i[2] )
        v4 = i;
    }
    else
    {
      v4 = *(_QWORD **)a2;
      for ( j = (_QWORD *)a2; (_QWORD *)v4[1] == j; v4 = (_QWORD *)*v4 )
        j = v4;
      if ( (_QWORD *)v4[2] != j || (_QWORD *)*v4 == v4 )
        v4 = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v4;
  }
  ++*(_DWORD *)(a1 + 64);
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 && (k = *(_QWORD **)(a2 + 16)) != 0LL )
  {
    if ( *(char *)(a2 + 24) < 0 )
    {
      v23 = *(_QWORD **)(v7 + 16);
      for ( k = *(_QWORD **)(a2 + 8); v23; v23 = (_QWORD *)v23[2] )
        k = v23;
    }
    else
    {
      for ( m = (_QWORD *)k[1]; m; m = (_QWORD *)m[1] )
        k = m;
    }
  }
  else
  {
    k = (_QWORD *)a2;
  }
  v9 = *k;
  v10 = -1;
  v11 = k[1];
  v12 = *(_QWORD **)(*k + 8LL);
  if ( v11 )
  {
    if ( v12 == k )
    {
      *(_QWORD *)(v9 + 8) = v11;
    }
    else
    {
      *(_QWORD *)(v9 + 16) = v11;
      v10 = 1;
    }
    v14 = (_QWORD *)k[1];
  }
  else
  {
    v13 = k[2];
    if ( v12 == k )
    {
      *(_QWORD *)(v9 + 8) = v13;
    }
    else
    {
      *(_QWORD *)(v9 + 16) = v13;
      v10 = 1;
    }
    v14 = (_QWORD *)k[2];
    if ( !v14 )
      goto LABEL_18;
  }
  *v14 = *k;
LABEL_18:
  *(_BYTE *)(a1 + 24) = 0;
  v15 = (_BYTE *)*k;
  while ( 1 )
  {
    v16 = v15[24];
    if ( v16 == v10 )
    {
      v15[24] = 0;
      goto LABEL_26;
    }
    if ( !v16 )
      break;
    if ( (unsigned int)RebalanceNode(v15) )
      goto LABEL_23;
    v15 = *(_BYTE **)v15;
LABEL_26:
    v10 = 1;
    v18 = *(_QWORD *)(*(_QWORD *)v15 + 16LL) == (_QWORD)v15;
    v15 = *(_BYTE **)v15;
    if ( !v18 )
      v10 = -1;
  }
  v15[24] = -v10;
  if ( *(_BYTE *)(a1 + 24) )
    --*(_DWORD *)(a1 + 48);
LABEL_23:
  if ( (_QWORD *)a2 != k )
  {
    *(_OWORD *)k = *(_OWORD *)a2;
    *((_OWORD *)k + 1) = *(_OWORD *)(a2 + 16);
    v19 = *k;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 )
      *(_QWORD *)(v19 + 8) = k;
    else
      *(_QWORD *)(v19 + 16) = k;
    v20 = (_QWORD *)k[1];
    if ( v20 )
      *v20 = k;
    v21 = (_QWORD *)k[2];
    if ( v21 )
      *v21 = k;
  }
  --*(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return guard_dispatch_icall_no_overrides(a1, a2);
}
