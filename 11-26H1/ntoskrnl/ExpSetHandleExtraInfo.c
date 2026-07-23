/*
 * XREFs of ExpSetHandleExtraInfo @ 0x140A950FC
 * Callers:
 *     ExDupHandleTable @ 0x1409BD030 (ExDupHandleTable.c)
 * Callees:
 *     ExpAllocateTablePagedPool @ 0x140906A9C (ExpAllocateTablePagedPool.c)
 *     ExpFreeTablePagedPool @ 0x140908540 (ExpFreeTablePagedPool.c)
 */

__int64 __fastcall ExpSetHandleExtraInfo(unsigned int *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  volatile signed __int64 *v9; // rbx
  volatile signed __int64 v10; // rdx
  void *TablePagedPool; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp+8h]

  v13 = a2 & 0xFFFFFFFFFFFFFC03uLL;
  v5 = (unsigned __int8)((unsigned int)a2 >> 2);
  v6 = a2 & 0xFFFFFFFFFFFFFC00uLL;
  if ( (v13 & 0xFFFFFFFFFFFFFFFCuLL) >= *a1 )
    return 3221225473LL;
  v7 = *((_QWORD *)a1 + 1);
  if ( (v7 & 3) != 0 )
  {
    v8 = (v7 & 3) == 1
       ? *(_QWORD *)(v7 + 8 * (v6 >> 10) - 1)
       : *(_QWORD *)(*(_QWORD *)(v7 + 8 * (v6 >> 19) - 2) + 8 * ((v6 >> 10) & 0x1FF));
    v9 = (volatile signed __int64 *)(v8 + 4 * (v6 & 0x3FF));
  }
  else
  {
    v9 = (volatile signed __int64 *)(v7 + 4 * v6);
  }
  if ( !v9 )
    return 3221225473LL;
  v10 = *v9;
  if ( *v9 )
    goto LABEL_8;
  TablePagedPool = ExpAllocateTablePagedPool(*((_QWORD *)a1 + 2), 0x800uLL);
  v10 = (volatile signed __int64)TablePagedPool;
  if ( TablePagedPool )
  {
    if ( !_InterlockedCompareExchange64(v9, (signed __int64)TablePagedPool, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1 + 1);
      goto LABEL_8;
    }
    ExpFreeTablePagedPool(*((_QWORD *)a1 + 2), TablePagedPool, 0x800uLL);
    v10 = *v9;
    if ( *v9 )
    {
LABEL_8:
      *(_QWORD *)(v10 + 8 * v5) = *a3;
      return 0LL;
    }
  }
  return 3221225626LL;
}
