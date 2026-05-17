/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1800BE2C0
 * Callers:
 *     <none>
 * Callees:
 *     RebalanceNode @ 0x1800BE490 (RebalanceNode.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall RtlInsertElementGenericTableAvl(__int64 a1, const void *a2, unsigned int a3, bool *a4)
{
  size_t v4; // r13
  _QWORD *i; // rbx
  _QWORD *v6; // r14
  int v10; // eax
  int v11; // ebp
  _QWORD *result; // rax
  _OWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *j; // r9
  bool v16; // zf
  char v17; // dl
  char v18; // al

  v4 = a3;
  i = 0LL;
  v6 = (_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 44) )
  {
    for ( i = (_QWORD *)*v6; ; i = (_QWORD *)i[2] )
    {
      while ( 1 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, const void *, _QWORD *))(a1 + 72))(a1, a2, i + 4);
        if ( v10 )
          break;
        if ( !i[1] )
        {
          v11 = 2;
          goto LABEL_14;
        }
        i = (_QWORD *)i[1];
      }
      if ( v10 != 1 )
      {
        v11 = 1;
        goto LABEL_10;
      }
      if ( !i[2] )
        break;
    }
    v11 = 3;
  }
  else
  {
    v11 = 0;
  }
LABEL_14:
  if ( (int)v4 + 32 >= (unsigned int)v4 )
  {
    v13 = (_OWORD *)(*(__int64 (__fastcall **)(__int64))(a1 + 80))(a1);
    if ( v13 )
    {
      *v13 = 0LL;
      v13[1] = 0LL;
      ++*(_DWORD *)(a1 + 44);
      if ( !v11 )
      {
        *v6 = v13;
        *(_QWORD *)v13 = a1;
        *(_DWORD *)(a1 + 48) = 1;
        i = v13;
        memmove(v13 + 2, a2, v4);
        goto LABEL_10;
      }
      v14 = i;
      if ( v11 == 2 )
        i[1] = v13;
      else
        i[2] = v13;
      *(_QWORD *)v13 = i;
      *(_BYTE *)(a1 + 24) = -1;
      i = v13;
      for ( j = *(_QWORD **)v13; ; v14 = j )
      {
        v16 = j[1] == (_QWORD)v13;
        v17 = -1;
        v18 = *((_BYTE *)v14 + 24);
        if ( !v16 )
          v17 = 1;
        if ( v18 )
          break;
        j = (_QWORD *)*v14;
        v13 = v14;
        *((_BYTE *)v14 + 24) = v17;
      }
      if ( v18 == v17 )
      {
        RebalanceNode(v14);
      }
      else
      {
        *((_BYTE *)v14 + 24) = 0;
        if ( !*(_BYTE *)(a1 + 24) )
        {
          ++*(_DWORD *)(a1 + 48);
          memmove(i + 4, a2, v4);
          goto LABEL_10;
        }
      }
      memmove(i + 4, a2, v4);
LABEL_10:
      if ( a4 )
        *a4 = v11 != 1;
      *(_DWORD *)(a1 + 40) = 0;
      result = i + 4;
      *(_QWORD *)(a1 + 32) = 0LL;
      return result;
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
