/*
 * XREFs of ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1400C9610
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400CCB80 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400C9940 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct VIDMM_VAD *__fastcall CVirtualAddressAllocator::FindNodeInFreeList(
        CVirtualAddressAllocator *this,
        unsigned __int64 *a2)
{
  unsigned __int64 i; // r13
  struct _RTL_BALANCED_NODE *v5; // rsi
  _QWORD *Children; // rbx
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  _QWORD **v15; // rax
  _QWORD *v16; // rcx
  struct VIDMM_VAD *result; // rax
  _QWORD *v18; // rcx
  struct _RTL_BALANCED_NODE *v19; // rbp
  struct _RTL_BALANCED_NODE *v20; // rsi
  int v21; // eax
  struct _RTL_BALANCED_NODE *v22; // rbx
  struct _RTL_BALANCED_NODE *v23; // rbp
  int v24; // eax
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r11
  _QWORD **v30; // rax
  unsigned __int64 v31; // rcx
  struct _RTL_BALANCED_NODE *v32; // rbx
  int v33; // eax
  _QWORD *v34; // rcx

  i = 0LL;
  if ( *a2 || a2[2] || a2[3] != *((_QWORD *)this + 2) )
  {
    v5 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
    Children = 0LL;
    while ( 1 )
    {
      if ( !v5 )
        goto LABEL_11;
      v7 = CompareVadSizeAvl(a2 + 4, v5);
      if ( !v7 )
        break;
      if ( v7 >= 0 )
        v5 = (struct _RTL_BALANCED_NODE *)((char *)v5 + 8);
      else
        Children = v5->Children;
      v5 = v5->Children[0];
    }
    Children = v5->Children;
    v19 = 0LL;
    v20 = v5->Children[0];
    if ( v20 )
    {
      do
      {
        v21 = CompareVadSizeAvl(a2 + 4, v20);
        if ( v21 >= 0 )
        {
          if ( v21 <= 0 )
            v19 = v20;
          else
            v20 = (struct _RTL_BALANCED_NODE *)((char *)v20 + 8);
        }
        v20 = v20->Children[0];
      }
      while ( v20 );
      if ( v19 )
        Children = v19->Children;
    }
    while ( 1 )
    {
LABEL_11:
      if ( !Children )
        goto LABEL_31;
      v8 = *a2;
      if ( *a2 )
      {
        if ( v8 >= Children[3] && a2[1] <= Children[4] )
        {
          a2[7] = v8;
          goto LABEL_30;
        }
      }
      else
      {
        v9 = a2[3];
        v10 = Children[3];
        if ( v10 < v9 )
        {
          v11 = a2[2];
          v12 = Children[4];
          if ( v12 > v11 )
          {
            if ( v10 <= v11 )
              v10 = a2[2];
            if ( v12 >= v9 )
              v12 = a2[3];
            v13 = (*((_DWORD *)this + 38) & 2) != 0 ? v12 - a2[4] : v10 + a2[5];
            v14 = a2[6] & v13;
            if ( v14 < v12 && v14 >= v10 && v12 - v14 >= a2[4] )
            {
              a2[7] = v14;
LABEL_30:
              i = (unsigned __int64)Children;
              goto LABEL_31;
            }
          }
        }
      }
      v15 = (_QWORD **)Children[1];
      v16 = Children;
      if ( v15 )
      {
        v18 = *v15;
        for ( Children = (_QWORD *)Children[1]; v18; v18 = (_QWORD *)*v18 )
          Children = v18;
      }
      else
      {
        for ( Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
              Children;
              Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( (_QWORD *)*Children == v16 )
            break;
          v16 = Children;
        }
      }
    }
  }
  v22 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  v23 = 0LL;
  while ( v22 )
  {
    v24 = CompareVadSizeAvl(a2 + 4, v22);
    if ( !v24 )
    {
      v23 = v22;
      v32 = v22->Children[0];
      if ( v32 )
      {
        do
        {
          v33 = CompareVadSizeAvl(a2 + 4, v32);
          if ( v33 >= 0 )
          {
            if ( v33 <= 0 )
              i = (unsigned __int64)v32;
            else
              v32 = (struct _RTL_BALANCED_NODE *)((char *)v32 + 8);
          }
          v32 = v32->Children[0];
        }
        while ( v32 );
        if ( i )
          goto LABEL_54;
      }
      break;
    }
    if ( v24 >= 0 )
      v22 = (struct _RTL_BALANCED_NODE *)((char *)v22 + 8);
    else
      v23 = v22;
    v22 = v22->Children[0];
  }
  i = (unsigned __int64)v23;
  if ( !v23 )
    goto LABEL_31;
LABEL_54:
  v25 = a2[6];
  v26 = a2[5];
  while ( 1 )
  {
    v27 = *(_QWORD *)(i + 32);
    v28 = v25 & (v26 + *(_QWORD *)(i + 24));
    if ( v28 < v27 )
    {
      v29 = a2[4];
      if ( v27 - v28 >= v29 )
        break;
    }
    v30 = *(_QWORD ***)(i + 8);
    v31 = i;
    if ( v30 )
    {
      v34 = *v30;
      for ( i = *(_QWORD *)(i + 8); v34; v34 = (_QWORD *)*v34 )
        i = (unsigned __int64)v34;
    }
    else
    {
      for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v31 )
          break;
        v31 = i;
      }
    }
    if ( !i )
      goto LABEL_31;
  }
  if ( (*((_DWORD *)this + 38) & 2) != 0 )
    a2[7] = v25 & (v27 - v29);
  else
    a2[7] = (v26 + *(_QWORD *)(i + 24)) & v25;
LABEL_31:
  result = (struct VIDMM_VAD *)i;
  *((_DWORD *)this + 38) ^= 2 * (*((_DWORD *)this + 38) & 1);
  return result;
}
