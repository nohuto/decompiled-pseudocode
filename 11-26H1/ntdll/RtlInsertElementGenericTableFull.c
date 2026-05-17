/*
 * XREFs of RtlInsertElementGenericTableFull @ 0x1800B7D10
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1800B7F60 (RtlSplay.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall RtlInsertElementGenericTableFull(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        bool *a4,
        _QWORD *a5,
        int a6)
{
  size_t v7; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx

  v7 = a3;
  if ( a6 == 1 )
  {
    v11 = a5;
LABEL_14:
    *(_QWORD *)a1 = RtlSplay(v11);
    if ( a4 )
      *a4 = a6 != 1;
    return v11 + 5;
  }
  if ( a3 + 40 >= a3 )
  {
    v10 = (_QWORD *)(*(__int64 (**)(void))(a1 + 48))();
    v11 = v10;
    if ( v10 )
    {
      *v10 = v10;
      v10[1] = 0LL;
      v10[2] = 0LL;
      v12 = v10 + 3;
      v13 = *(_QWORD **)(a1 + 16);
      if ( *v13 != a1 + 8 )
        __fastfail(3u);
      *v12 = a1 + 8;
      v11[4] = v13;
      *v13 = v12;
      *(_QWORD *)(a1 + 16) = v12;
      ++*(_DWORD *)(a1 + 36);
      if ( a6 )
      {
        if ( a6 == 2 )
          a5[1] = v11;
        else
          a5[2] = v11;
        *v11 = a5;
      }
      else
      {
        *(_QWORD *)a1 = v11;
      }
      memmove(v11 + 5, a2, v7);
      goto LABEL_14;
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
