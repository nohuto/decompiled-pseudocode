/*
 * XREFs of MiBitmapsCachedEntryLengthChanged @ 0x140477AB8
 * Callers:
 *     MiInvalidatePageFileBitmapsCache @ 0x1404777E4 (MiInvalidatePageFileBitmapsCache.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

char __fastcall MiBitmapsCachedEntryLengthChanged(__int64 a1, unsigned __int64 a2, int a3)
{
  BOOLEAN v3; // bl
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r9
  _QWORD *v8; // rdx
  __int64 i; // r9
  unsigned int v10; // ecx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 j; // r9

  v3 = 0;
  v6 = a2;
  if ( a3 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    if ( v7 )
    {
      v8 = *(_QWORD **)v7;
      if ( *(_QWORD *)v7 )
      {
        do
        {
          v7 = (unsigned __int64)v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(a2 + 16); ; i = *(_QWORD *)(v7 + 16) )
      {
        v7 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 || *(_QWORD *)v7 == v6 )
          break;
        v6 = v7;
      }
    }
  }
  else
  {
    v7 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      if ( *(_QWORD *)(v7 + 8) )
      {
        do
        {
          v6 = *(_QWORD *)(v7 + 8);
          v7 = v6;
        }
        while ( *(_QWORD *)(v6 + 8) );
      }
    }
    else
    {
      for ( j = *(_QWORD *)(a2 + 16); ; j = *(_QWORD *)(v7 + 16) )
      {
        v7 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 || *(_QWORD *)(v7 + 8) == v6 )
          break;
        v6 = v7;
      }
    }
    if ( !v7 )
      return v6;
  }
  LODWORD(v6) = *(_DWORD *)(v7 + 52);
  v10 = *(_DWORD *)(a2 + 52);
  if ( a3 )
  {
    if ( (unsigned int)v6 > v10 )
      return v6;
  }
  else if ( (unsigned int)v6 < v10 )
  {
    return v6;
  }
  v11 = a1 + 112;
  RtlRbRemoveNode((PRTL_RB_TREE)v11, (PRTL_BALANCED_NODE)a2);
  v12 = *(_QWORD *)v11;
  if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
  {
    if ( v12 )
      v12 ^= v11;
    else
      v12 = 0LL;
  }
  if ( v12 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a2 + 48) >= *(_QWORD *)(v12 + 48) )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_21;
          v13 ^= v12;
        }
        if ( !v13 )
        {
LABEL_21:
          v3 = 1;
          break;
        }
      }
      else
      {
        v13 = *(_QWORD *)v12;
        if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
        {
          if ( !v13 )
            break;
          v13 ^= v12;
        }
        if ( !v13 )
          break;
      }
      v12 = v13;
    }
  }
  LOBYTE(v6) = RtlRbInsertNodeEx((PRTL_RB_TREE)v11, (PRTL_BALANCED_NODE)v12, v3, (PRTL_BALANCED_NODE)a2);
  return v6;
}
