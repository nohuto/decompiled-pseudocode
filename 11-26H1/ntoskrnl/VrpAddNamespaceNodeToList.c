/*
 * XREFs of VrpAddNamespaceNodeToList @ 0x140939D04
 * Callers:
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14093A55C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14093B160 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 * Callees:
 *     ULongLongMult @ 0x140469310 (ULongLongMult.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VrpFindExactNamespaceNode @ 0x14093979C (VrpFindExactNamespaceNode.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpAddNamespaceNodeToList(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r14
  size_t v5; // rsi
  size_t v6; // r15
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rsi
  unsigned __int64 *v13; // r13
  unsigned __int64 v14; // rax
  _QWORD *v15; // rcx
  size_t v16; // rdx
  __int64 v17; // r15
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r15
  SIZE_T v20; // r12
  PVOID v21; // rax
  void *v22; // r14
  __int64 v23; // rax
  void *v24; // r9
  unsigned __int64 v25; // rcx
  PVOID PoolWithTag; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // r14
  ULONGLONG v29; // rdx
  ULONGLONG v30; // r14
  _QWORD *v31; // r12
  void *v32; // r13
  PVOID v33; // rax
  void *v34; // rsi
  unsigned __int64 v35; // r12
  PVOID v36; // rax
  size_t Size; // [rsp+70h] [rbp+50h] BYREF
  void *Src; // [rsp+78h] [rbp+58h] BYREF

  v2 = 0;
  Size = 0LL;
  v3 = a2;
  if ( VrpFindExactNamespaceNode(a1, a2, (int)&Size) )
    return (unsigned int)-1073741771;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = Size;
  v7 = *(_QWORD *)(a1 + 56);
  if ( Size >= v5 )
  {
    if ( v5 >= v7 )
    {
      v16 = v5 + 1;
      if ( v5 + 1 <= v7 )
        return (unsigned int)-1073741811;
      v17 = *(_QWORD *)(a1 + 64) - 1LL;
      if ( v17 + v16 < v16 )
        return (unsigned int)-1073741675;
      v13 = (unsigned __int64 *)(a1 + 40);
      Size = 0LL;
      v18 = *(_QWORD *)(a1 + 40);
      v19 = (v17 + v16) & ~v17;
      Size = v7 * v18;
      if ( !is_mul_ok(v7, v18) )
        return (unsigned int)-1073741675;
      Src = 0LL;
      v20 = v19 * v18;
      if ( !is_mul_ok(v19, v18) )
        return (unsigned int)-1073741675;
      Src = *(void **)(a1 + 72);
      if ( Src )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x72615452u);
        v22 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        memset_0(PoolWithTag, 0, v20);
        if ( Size < v20 )
          v20 = Size;
        memmove(v22, Src, v20);
        ExFreePoolWithTag(Src, 0x72615452u);
      }
      else
      {
        v21 = ExAllocatePoolWithTag(PagedPool, v20, 0x72615452u);
        v22 = v21;
        if ( v21 )
          memset_0(v21, 0, v20);
        if ( !v22 )
          return (unsigned int)-1073741801;
      }
      *(_QWORD *)(a1 + 72) = v22;
      v3 = a2;
      *(_QWORD *)(a1 + 56) = v19;
    }
    else
    {
      v13 = (unsigned __int64 *)(a1 + 40);
    }
    if ( is_mul_ok(*v13, v5) )
    {
      v14 = *(_QWORD *)(a1 + 72);
      v15 = (_QWORD *)(v14 + *v13 * v5);
      if ( (unsigned __int64)v15 >= v14 )
      {
        *v15 = v3;
LABEL_27:
        ++*(_QWORD *)(a1 + 48);
        return v2;
      }
    }
    return (unsigned int)-1073741675;
  }
  if ( v5 < v7 )
  {
LABEL_4:
    v8 = *(_QWORD *)(a1 + 40);
    v9 = v8 * v6;
    if ( is_mul_ok(v8, v6) )
    {
      v10 = *(_QWORD *)(a1 + 72);
      v11 = (_QWORD *)(v10 + v9);
      if ( v10 + v9 >= v10 )
      {
        v23 = v8 * (v6 + 1);
        if ( is_mul_ok(v8, v6 + 1) )
        {
          v24 = (void *)(v10 + v23);
          if ( v10 + v23 >= v10 )
          {
            v25 = *(_QWORD *)(a1 + 48) - v6;
            if ( !is_mul_ok(v25, v8) )
              return (unsigned int)-2147483637;
            memmove(v24, v11, v25 * v8);
            *v11 = v3;
            goto LABEL_27;
          }
        }
      }
    }
    return (unsigned int)-1073741675;
  }
  v27 = v5 + 1;
  if ( v27 <= v7 )
    return (unsigned int)-1073741811;
  v28 = *(_QWORD *)(a1 + 64) - 1LL;
  if ( v28 + v27 >= v27 )
  {
    v29 = *(_QWORD *)(a1 + 40);
    Src = 0LL;
    v30 = (v28 + v27) & ~v28;
    Size = 0LL;
    if ( ULongLongMult(v7, v29, (ULONGLONG *)&Src) >= 0 && ULongLongMult(v30, *(_QWORD *)(a1 + 40), &Size) >= 0 )
    {
      v31 = (_QWORD *)(a1 + 72);
      v32 = *(void **)(a1 + 72);
      if ( !v32 )
      {
        v33 = ExAllocatePoolWithTag(PagedPool, Size, 0x72615452u);
        v34 = v33;
        if ( v33 )
          memset_0(v33, 0, Size);
        if ( !v34 )
          return (unsigned int)-1073741801;
LABEL_48:
        *(_QWORD *)(a1 + 56) = v30;
        v3 = a2;
        *v31 = v34;
        goto LABEL_4;
      }
      v35 = Size;
      v36 = ExAllocatePoolWithTag(PagedPool, Size, 0x72615452u);
      v34 = v36;
      if ( v36 )
      {
        memset_0(v36, 0, v35);
        if ( (unsigned __int64)Src < v35 )
          v35 = (unsigned __int64)Src;
        memmove(v34, v32, v35);
        ExFreePoolWithTag(v32, 0x72615452u);
        v31 = (_QWORD *)(a1 + 72);
        goto LABEL_48;
      }
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)-1073741675;
}
