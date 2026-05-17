/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x1800BE180
 * Callers:
 *     <none>
 * Callees:
 *     RebalanceNode @ 0x1800BE490 (RebalanceNode.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall RtlInsertElementGenericTableFullAvl(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        bool *a4,
        __int64 *a5,
        int a6)
{
  size_t v7; // rbp
  _OWORD *v10; // rax
  _OWORD *v11; // rbx
  __int64 *v12; // rcx
  _OWORD *v13; // r8
  __int64 *i; // rdx
  bool v15; // zf
  char v16; // al
  char v17; // dl

  v7 = a3;
  if ( a6 == 1 )
  {
    v11 = a5;
LABEL_15:
    if ( a4 )
      *a4 = a6 != 1;
    *(_DWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) = 0LL;
    return v11 + 2;
  }
  if ( a3 + 32 >= a3 )
  {
    v10 = (_OWORD *)(*(__int64 (**)(void))(a1 + 80))();
    v11 = v10;
    if ( v10 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
      ++*(_DWORD *)(a1 + 44);
      if ( a6 )
      {
        v12 = a5;
        v13 = v10;
        if ( a6 == 2 )
          a5[1] = (__int64)v10;
        else
          a5[2] = (__int64)v10;
        *(_QWORD *)v10 = a5;
        *(_BYTE *)(a1 + 24) = -1;
        for ( i = *(__int64 **)v10; ; v12 = i )
        {
          v15 = i[1] == (_QWORD)v13;
          v16 = -1;
          v17 = *((_BYTE *)v12 + 24);
          if ( !v15 )
            v16 = 1;
          if ( v17 )
            break;
          i = (__int64 *)*v12;
          v13 = v12;
          *((_BYTE *)v12 + 24) = v16;
        }
        if ( v17 == v16 )
        {
          RebalanceNode(v12);
        }
        else
        {
          *((_BYTE *)v12 + 24) = 0;
          if ( !*(_BYTE *)(a1 + 24) )
            ++*(_DWORD *)(a1 + 48);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 16) = v10;
        *(_QWORD *)v10 = a1;
        *(_DWORD *)(a1 + 48) = 1;
      }
      memmove(v11 + 2, a2, v7);
      goto LABEL_15;
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
