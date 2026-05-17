/*
 * XREFs of RtlInsertElementGenericTable @ 0x1800B7BB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1800B7F60 (RtlSplay.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall RtlInsertElementGenericTable(__int64 a1, const void *a2, unsigned int a3, bool *a4)
{
  _QWORD *v4; // rax
  __int64 v5; // r15
  size_t v6; // r13
  _QWORD *v10; // rbx
  int v11; // eax
  int v12; // ebp
  _QWORD *v13; // r14
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // r8

  v4 = *(_QWORD **)a1;
  v5 = 0LL;
  v6 = a3;
  v10 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = v4;
        v11 = (*(__int64 (__fastcall **)(__int64, const void *, _QWORD *))(a1 + 40))(a1, a2, v4 + 5);
        if ( v11 )
          break;
        v4 = (_QWORD *)v10[1];
        if ( !v4 )
        {
          v12 = 2;
          goto LABEL_14;
        }
      }
      if ( v11 != 1 )
        break;
      v4 = (_QWORD *)v10[2];
      if ( !v4 )
      {
        v12 = 3;
        goto LABEL_14;
      }
    }
    v12 = 1;
    v13 = v10;
    goto LABEL_9;
  }
  v12 = 0;
LABEL_14:
  if ( (int)v6 + 40 >= (unsigned int)v6 )
  {
    v15 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(a1 + 48))(a1);
    v13 = v15;
    if ( v15 )
    {
      *v15 = v15;
      v15[1] = 0LL;
      v15[2] = 0LL;
      v16 = v15 + 3;
      v17 = *(_QWORD **)(a1 + 16);
      if ( *v17 != a1 + 8 )
        __fastfail(3u);
      *v16 = a1 + 8;
      v16[1] = v17;
      *v17 = v16;
      *(_QWORD *)(a1 + 16) = v16;
      ++*(_DWORD *)(a1 + 36);
      if ( v12 )
      {
        if ( v12 == 2 )
          v10[1] = v13;
        else
          v10[2] = v13;
        *v13 = v10;
      }
      else
      {
        *(_QWORD *)a1 = v13;
      }
      memmove(v13 + 5, a2, v6);
LABEL_9:
      *(_QWORD *)a1 = RtlSplay(v13);
      if ( a4 )
        *a4 = v12 != 1;
      return v13 + 5;
    }
  }
  if ( a4 )
    *a4 = 0;
  return (_QWORD *)v5;
}
