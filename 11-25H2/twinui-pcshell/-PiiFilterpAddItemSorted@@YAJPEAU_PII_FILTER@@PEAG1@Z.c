/*
 * XREFs of ?PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEAG1@Z @ 0x18013C7C0
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18013C2DC (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18013C4AC (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180150724 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     wcscpy_s @ 0x1802D2FC0 (wcscpy_s.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall PiiFilterpAddItemSorted(struct _PII_FILTER *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  __int64 v3; // rdi
  unsigned __int64 v5; // r9
  unsigned __int64 v8; // r10
  unsigned int v9; // r8d
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // kr00_8
  unsigned __int64 v14; // kr10_8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  rsize_t v19; // r14
  rsize_t v20; // rdi
  wchar_t *Heap; // rax
  wchar_t *v22; // r12
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  wchar_t **v27; // rsi
  __int64 v28; // rax
  __int64 result; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // r14
  unsigned __int64 v32; // r14
  size_t v33; // r12
  wchar_t **v34; // rax
  void *v35; // r8
  void *v36; // rcx
  PVOID v37; // rax
  PVOID v38; // rsi
  unsigned __int64 v39; // rdx
  __int64 v40; // rsi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rsi
  void *v44; // r8
  void *v45; // rcx
  PVOID v46; // rax
  PVOID v47; // r14
  SIZE_T Size; // [rsp+60h] [rbp+40h] BYREF
  wchar_t *Source; // [rsp+70h] [rbp+50h]
  unsigned __int64 v50; // [rsp+78h] [rbp+58h] BYREF

  Source = a3;
  v3 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v8 = *((_QWORD *)a1 + 2);
  v9 = 0;
  if ( v8 )
  {
    v10 = 0LL;
    do
    {
      v11 = 0LL;
      if ( v10 < v8 )
      {
        v13 = *((_QWORD *)a1 + 1);
        v14 = v10;
        v12 = v13 * v10;
        Size = 0LL;
        if ( !is_mul_ok(v13, v14) || (v15 = *((_QWORD *)a1 + 5), v11 = (_QWORD *)(v15 + v12), v15 + v12 < v15) )
          v11 = 0LL;
      }
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)(*v11 + 2 * v16) );
      if ( v5 > v16 )
        break;
      v10 = ++v9;
    }
    while ( v9 < v8 );
  }
  v17 = v9;
  v18 = -1LL;
  do
    ++v18;
  while ( a2[v18] );
  v19 = v18 + 1;
  do
    ++v3;
  while ( a3[v3] );
  v20 = v3 + 1;
  Heap = (wchar_t *)RtlAllocateHeap(*(PVOID *)a1, 0, 2 * (v20 + v19));
  Size = (SIZE_T)Heap;
  v22 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_0(Heap, 0, 2 * (v20 + v19));
  wcscpy_s(v22, v19, a2);
  wcscpy_s(&v22[v19], v20, Source);
  v23 = *((_QWORD *)a1 + 2);
  v24 = *((_QWORD *)a1 + 3);
  if ( v17 >= v23 )
  {
    if ( v23 < v24 )
    {
LABEL_34:
      if ( is_mul_ok(*((_QWORD *)a1 + 1), v23) )
      {
        v34 = (wchar_t **)(*((_QWORD *)a1 + 5) + *((_QWORD *)a1 + 1) * v23);
        if ( (unsigned __int64)v34 >= *((_QWORD *)a1 + 5) )
        {
          *v34 = v22;
          ++*((_QWORD *)a1 + 2);
          return 0LL;
        }
      }
      return 3221225621LL;
    }
    v30 = v23 + 1;
    if ( v23 + 1 <= v24 )
      return 3221225485LL;
    v31 = *((_QWORD *)a1 + 4) - 1LL;
    if ( v31 + v30 < v30 )
      return 3221225621LL;
    v32 = (v31 + v30) & ~v31;
    if ( is_mul_ok(v24, *((_QWORD *)a1 + 1)) )
    {
      v33 = v32 * *((_QWORD *)a1 + 1);
      if ( is_mul_ok(v32, *((_QWORD *)a1 + 1)) )
      {
        v35 = (void *)*((_QWORD *)a1 + 5);
        v36 = *(void **)a1;
        if ( v35 )
        {
          v38 = RtlReAllocateHeap(v36, 0, v35, v32 * *((_QWORD *)a1 + 1));
        }
        else
        {
          v37 = RtlAllocateHeap(v36, 0, v32 * *((_QWORD *)a1 + 1));
          v38 = v37;
          if ( v37 )
            memset_0(v37, 0, v33);
        }
        v22 = (wchar_t *)Size;
        if ( v38 )
        {
          *((_QWORD *)a1 + 5) = v38;
          result = 0LL;
          *((_QWORD *)a1 + 3) = v32;
        }
        else
        {
          result = 3221225495LL;
        }
LABEL_33:
        if ( (_DWORD)result )
          return result;
        goto LABEL_34;
      }
      v22 = (wchar_t *)Size;
    }
    result = 3221225621LL;
    goto LABEL_33;
  }
  if ( v23 < v24 )
    goto LABEL_20;
  v39 = v23 + 1;
  if ( v23 + 1 <= v24 )
    return 3221225485LL;
  v40 = *((_QWORD *)a1 + 4) - 1LL;
  v41 = v40 + v39;
  if ( v40 + v39 < v39 )
    return 3221225621LL;
  v42 = *((_QWORD *)a1 + 1);
  v43 = v41 & ~v40;
  Size = 0LL;
  if ( (int)ULongLongMult(v24, v42, &v50) < 0 || (int)ULongLongMult(v43, *((_QWORD *)a1 + 1), &Size) < 0 )
  {
    result = 3221225621LL;
  }
  else
  {
    v44 = (void *)*((_QWORD *)a1 + 5);
    v45 = *(void **)a1;
    if ( v44 )
    {
      v47 = RtlReAllocateHeap(v45, 0, v44, Size);
    }
    else
    {
      v46 = RtlAllocateHeap(v45, 0, Size);
      v47 = v46;
      if ( v46 )
        memset_0(v46, 0, Size);
    }
    if ( v47 )
    {
      *((_QWORD *)a1 + 5) = v47;
      result = 0LL;
      *((_QWORD *)a1 + 3) = v43;
    }
    else
    {
      result = 3221225495LL;
    }
  }
  if ( !(_DWORD)result )
  {
LABEL_20:
    v25 = *((_QWORD *)a1 + 1) * v17;
    if ( is_mul_ok(*((_QWORD *)a1 + 1), v17) )
    {
      v26 = *((_QWORD *)a1 + 5);
      v27 = (wchar_t **)(v26 + v25);
      if ( v26 + v25 >= v26 )
      {
        v28 = *((_QWORD *)a1 + 1) * (v17 + 1);
        if ( is_mul_ok(*((_QWORD *)a1 + 1), v17 + 1)
          && v26 + v28 >= v26
          && is_mul_ok(*((_QWORD *)a1 + 2) - v17, *((_QWORD *)a1 + 1)) )
        {
          memmove_0((void *)(v26 + v28), v27, (*((_QWORD *)a1 + 2) - v17) * *((_QWORD *)a1 + 1));
          *v27 = v22;
          result = 0LL;
          ++*((_QWORD *)a1 + 2);
          return result;
        }
      }
    }
    return 3221225621LL;
  }
  return result;
}
