/*
 * XREFs of CcFindBitmapRangeToDirty @ 0x14039FA80
 * Callers:
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall CcFindBitmapRangeToDirty(__int64 a1, __int64 a2, void **a3)
{
  _QWORD *result; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  signed __int64 v9; // rbx
  signed __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rax
  bool v14; // zf
  void *v15; // rbx

  result = *(_QWORD **)(a1 + 16);
  v5 = (_QWORD *)(a1 + 16);
  v6 = 0LL;
  v7 = (_QWORD *)(a1 + 16);
  v9 = a2 & 0xFFFFFFFFFFFFE000uLL;
  while ( 1 )
  {
    v10 = result[2];
    if ( v9 == v10 )
      return result;
    if ( *((_DWORD *)result + 8) || v6 )
    {
      if ( v9 > v10 )
        v7 = result;
    }
    else
    {
      v6 = result;
    }
    result = (_QWORD *)*result;
    if ( result == v5 )
      break;
    if ( v9 < result[2] && v6 )
      goto LABEL_9;
  }
  if ( v6 )
  {
LABEL_9:
    v11 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v12 = (_QWORD *)v6[1], (_QWORD *)*v12 != v6) )
LABEL_13:
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
  }
  else
  {
    result = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x30uLL, 0x72426343u);
    v6 = result;
    if ( !result )
      return result;
  }
  v13 = *v7;
  if ( *(_QWORD **)(*v7 + 8LL) != v7 )
    goto LABEL_13;
  *v6 = v13;
  v6[1] = v7;
  *(_QWORD *)(v13 + 8) = v6;
  *v7 = v6;
  v14 = v6[5] == 0LL;
  v6[2] = v9;
  *((_DWORD *)v6 + 6) = -1;
  *((_DWORD *)v6 + 7) = 0;
  if ( v14 )
  {
    v15 = *a3;
    memset_0(*a3, 0, 0x400uLL);
    v6[5] = v15;
    *a3 = 0LL;
  }
  return v6;
}
