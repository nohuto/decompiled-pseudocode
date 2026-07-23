/*
 * XREFs of DeleteNodeFromTree @ 0x1800BB9F0
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x1800BB8D0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1800BB990 (RtlDeleteElementGenericTableAvlEx.c)
 * Callees:
 *     RebalanceNode @ 0x1800BBEF0 (RebalanceNode.c)
 */

__int64 __fastcall DeleteNodeFromTree(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 **i; // rbx
  unsigned __int8 *v6; // rax
  char v7; // dl
  unsigned __int8 *v8; // rcx
  unsigned __int8 **v9; // r8
  unsigned __int8 *v10; // rcx
  unsigned __int8 *v11; // rcx
  unsigned __int8 *v12; // rdi
  __int64 result; // rax
  bool v14; // zf
  unsigned __int8 **j; // rax
  unsigned __int8 *v16; // rcx
  unsigned __int8 ***v17; // rax
  unsigned __int8 **v18; // rcx

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 && (i = *(unsigned __int8 ***)(a2 + 16)) != 0LL )
  {
    if ( *(char *)(a2 + 24) < 0 )
    {
      v18 = *(unsigned __int8 ***)(v2 + 16);
      for ( i = *(unsigned __int8 ***)(a2 + 8); v18; v18 = (unsigned __int8 **)v18[2] )
        i = v18;
    }
    else
    {
      for ( j = (unsigned __int8 **)i[1]; j; j = (unsigned __int8 **)j[1] )
        i = j;
    }
  }
  else
  {
    i = (unsigned __int8 **)a2;
  }
  v6 = *i;
  v7 = -1;
  v8 = i[1];
  v9 = (unsigned __int8 **)*((_QWORD *)*i + 1);
  if ( v8 )
  {
    if ( v9 == i )
    {
      *((_QWORD *)v6 + 1) = v8;
    }
    else
    {
      *((_QWORD *)v6 + 2) = v8;
      v7 = 1;
    }
    v11 = i[1];
  }
  else
  {
    v10 = i[2];
    if ( v9 == i )
    {
      *((_QWORD *)v6 + 1) = v10;
    }
    else
    {
      *((_QWORD *)v6 + 2) = v10;
      v7 = 1;
    }
    v11 = i[2];
    if ( !v11 )
      goto LABEL_8;
  }
  *(_QWORD *)v11 = *i;
LABEL_8:
  *(_BYTE *)(a1 + 24) = 0;
  v12 = *i;
  while ( 1 )
  {
    result = v12[24];
    if ( (_BYTE)result == v7 )
    {
      v12[24] = 0;
      goto LABEL_16;
    }
    if ( !(_BYTE)result )
      break;
    result = RebalanceNode(v12);
    if ( (_DWORD)result )
      goto LABEL_13;
    v12 = *(unsigned __int8 **)v12;
LABEL_16:
    v7 = 1;
    v14 = *(_QWORD *)(*(_QWORD *)v12 + 16LL) == (_QWORD)v12;
    v12 = *(unsigned __int8 **)v12;
    if ( !v14 )
      v7 = -1;
  }
  v12[24] = -v7;
  if ( *(_BYTE *)(a1 + 24) )
    --*(_DWORD *)(a1 + 48);
LABEL_13:
  if ( (unsigned __int8 **)a2 != i )
  {
    *(_OWORD *)i = *(_OWORD *)a2;
    *((_OWORD *)i + 1) = *(_OWORD *)(a2 + 16);
    v16 = *i;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 )
      *((_QWORD *)v16 + 1) = i;
    else
      *((_QWORD *)v16 + 2) = i;
    v17 = (unsigned __int8 ***)i[1];
    if ( v17 )
      *v17 = i;
    result = (__int64)i[2];
    if ( result )
      *(_QWORD *)result = i;
  }
  return result;
}
