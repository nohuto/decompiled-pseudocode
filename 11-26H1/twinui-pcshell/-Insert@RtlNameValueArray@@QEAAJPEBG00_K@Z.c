/*
 * XREFs of ?Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z @ 0x18015C760
 * Callers:
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18015BD48 (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 *     ?PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEBG1@Z @ 0x180676448 (-PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEBG1@Z.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180143394 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     wcscpy_s @ 0x1802C9E90 (wcscpy_s.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall RtlNameValueArray::Insert(
        RtlNameValueArray *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  rsize_t v11; // r15
  rsize_t v12; // r12
  SIZE_T v13; // rsi
  wchar_t *Heap; // rax
  wchar_t *v15; // r13
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  wchar_t **v21; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // r14
  unsigned __int64 v25; // r14
  unsigned __int128 v26; // rax
  size_t v27; // r15
  void *v28; // r8
  PVOID v29; // rcx
  PVOID v30; // rax
  PVOID v31; // rbp
  wchar_t **v32; // rcx
  void *v33; // r9
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rsi
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rsi
  void *v41; // r8
  PVOID v42; // rcx
  PVOID v43; // rax
  PVOID v44; // rbp
  unsigned __int64 v45; // [rsp+60h] [rbp+8h] BYREF
  SIZE_T Size; // [rsp+68h] [rbp+10h] BYREF

  Size = (SIZE_T)a2;
  v5 = -1LL;
  v7 = -1LL;
  v8 = 0;
  do
    ++v7;
  while ( a3[v7] );
  v11 = v7 + 1;
  do
    ++v5;
  while ( a4[v5] );
  v12 = v5 + 1;
  v13 = 2 * (v5 + 1 + v11);
  Heap = (wchar_t *)RtlAllocateHeap(*(PVOID *)this, 0, v13);
  v15 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, v13);
    wcscpy_s(v15, v11, a3);
    wcscpy_s(&v15[v11], v12, a4);
    v16 = *((_QWORD *)this + 2);
    v17 = a5;
    v18 = *((_QWORD *)this + 3);
    if ( a5 < v16 )
    {
      if ( v16 < v18 )
      {
LABEL_8:
        v19 = *((_QWORD *)this + 1) * v17;
        if ( is_mul_ok(*((_QWORD *)this + 1), v17) )
        {
          v20 = *((_QWORD *)this + 5);
          v21 = (wchar_t **)(v20 + v19);
          if ( v20 + v19 >= v20 )
          {
            v35 = *((_QWORD *)this + 1) * (v17 + 1);
            if ( is_mul_ok(*((_QWORD *)this + 1), v17 + 1) )
            {
              v33 = (void *)(v20 + v35);
              if ( v20 + v35 >= v20 )
              {
                v34 = *((_QWORD *)this + 2) - v17;
                if ( is_mul_ok(v34, *((_QWORD *)this + 1)) )
                {
                  memmove_0(v33, v21, v34 * *((_QWORD *)this + 1));
                  *v21 = v15;
                  goto LABEL_28;
                }
              }
            }
          }
        }
        return (unsigned int)-1073741675;
      }
      v36 = v16 + 1;
      if ( v16 + 1 > v18 )
      {
        v37 = *((_QWORD *)this + 4) - 1LL;
        v38 = v37 + v36;
        if ( v37 + v36 < v36 )
          return (unsigned int)-1073741675;
        v39 = *((_QWORD *)this + 1);
        Size = 0LL;
        v40 = v38 & ~v37;
        if ( (int)ULongLongMult(v18, v39, &v45) < 0 || (int)ULongLongMult(v40, *((_QWORD *)this + 1), &Size) < 0 )
          return (unsigned int)-1073741675;
        v41 = (void *)*((_QWORD *)this + 5);
        v42 = *(PVOID *)this;
        if ( v41 )
        {
          v44 = RtlReAllocateHeap(v42, 0, v41, Size);
        }
        else
        {
          v43 = RtlAllocateHeap(v42, 0, Size);
          v44 = v43;
          if ( v43 )
            memset_0(v43, 0, Size);
        }
        if ( v44 )
        {
          *((_QWORD *)this + 5) = v44;
          *((_QWORD *)this + 3) = v40;
          goto LABEL_8;
        }
        return (unsigned int)-1073741801;
      }
      return (unsigned int)-1073741811;
    }
    if ( v16 >= v18 )
    {
      v23 = v16 + 1;
      if ( v16 + 1 <= v18 )
        return (unsigned int)-1073741811;
      v24 = *((_QWORD *)this + 4) - 1LL;
      if ( v24 + v23 < v23 )
        return (unsigned int)-1073741675;
      v25 = (v24 + v23) & ~v24;
      if ( !is_mul_ok(v18, *((_QWORD *)this + 1)) )
        return (unsigned int)-1073741675;
      v26 = v25 * (unsigned __int128)*((unsigned __int64 *)this + 1);
      v27 = v25 * *((_QWORD *)this + 1);
      if ( !is_mul_ok(v25, *((_QWORD *)this + 1)) )
        return (unsigned int)-1073741675;
      v28 = (void *)*((_QWORD *)this + 5);
      v29 = *(PVOID *)this;
      if ( v28 )
      {
        v31 = RtlReAllocateHeap(v29, DWORD2(v26), v28, v25 * *((_QWORD *)this + 1));
      }
      else
      {
        v30 = RtlAllocateHeap(v29, DWORD2(v26), v25 * *((_QWORD *)this + 1));
        v31 = v30;
        if ( v30 )
          memset_0(v30, 0, v27);
      }
      if ( !v31 )
        return (unsigned int)-1073741801;
      *((_QWORD *)this + 5) = v31;
      *((_QWORD *)this + 3) = v25;
    }
    if ( is_mul_ok(*((_QWORD *)this + 1), v16) )
    {
      v32 = (wchar_t **)(*((_QWORD *)this + 5) + *((_QWORD *)this + 1) * v16);
      if ( (unsigned __int64)v32 >= *((_QWORD *)this + 5) )
      {
        *v32 = v15;
LABEL_28:
        ++*((_QWORD *)this + 2);
        return v8;
      }
    }
    return (unsigned int)-1073741675;
  }
  return 3221225495LL;
}
