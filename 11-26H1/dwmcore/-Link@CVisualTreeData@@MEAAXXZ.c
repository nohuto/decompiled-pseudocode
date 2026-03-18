/*
 * XREFs of ?Link@CVisualTreeData@@MEAAXXZ @ 0x1800AD6D0
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1800ADF18 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisualTreeData::Link(CVisualTreeData *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  _QWORD *v4; // r8
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r8
  _QWORD *v8; // rbx
  int *v9; // r10
  __int64 v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // rcx
  _QWORD **v13; // rbx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  unsigned int Slot; // eax
  __int64 v17; // r10
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // r10

  v2 = *((_QWORD *)this + 48);
  v3 = *(_QWORD **)(v2 + 2616);
  v4 = (_QWORD *)((char *)this + 368);
  if ( *v3 != v2 + 2608 )
LABEL_13:
    __fastfail(3u);
  *v4 = v2 + 2608;
  v5 = 0LL;
  *((_QWORD *)this + 47) = v3;
  *v3 = v4;
  *(_QWORD *)(v2 + 2616) = v4;
  ++*(_DWORD *)(v2 + 2624);
  v6 = *((_QWORD *)this + 31);
  v7 = *(_QWORD *)(v6 + 224);
  if ( *(int *)v7 < 0 )
  {
    v10 = *(unsigned int *)(v7 + 4);
    v11 = (_BYTE *)(v7 + 8);
    v12 = 0LL;
    if ( (_DWORD)v10 )
    {
      while ( *v11 != 1 )
      {
        v12 = (unsigned int)(v12 + 1);
        ++v11;
        if ( (unsigned int)v12 >= (unsigned int)v10 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      if ( (unsigned int)v12 >= (unsigned int)v10 )
      {
        v13 = 0LL;
LABEL_11:
        v8 = *v13;
        if ( v8 )
          goto LABEL_12;
        goto LABEL_3;
      }
    }
    v13 = (_QWORD **)(v7 + ((v10 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v12);
    goto LABEL_11;
  }
LABEL_3:
  v8 = MIDL_user_allocate(0x10uLL);
  if ( !v8 )
    RaiseFailFastException(0LL, 0LL, 0);
  v8[1] = v8;
  *v8 = v8;
  v9 = *(int **)(v6 + 224);
  if ( v8 )
  {
    if ( *v9 < 0 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v6 + 224), 1LL);
      if ( Slot < *(_DWORD *)(v17 + 4) )
        v5 = (_QWORD *)(v17 + ((*(unsigned int *)(v17 + 4) + 15LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8LL * Slot);
      *v5 = v8;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v6 + 224, 1LL) = v8;
    }
  }
  else if ( *v9 < 0 )
  {
    v18 = *(_QWORD *)(v6 + 224);
    *v9 &= ~0x80000000;
    v19 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v18, 1LL);
    if ( v19 < *(_DWORD *)(v20 + 4) )
      *(_BYTE *)(v19 + v20 + 8) = 0;
  }
LABEL_12:
  v14 = (_QWORD *)v8[1];
  v15 = (_QWORD *)((char *)this + 352);
  if ( (_QWORD *)*v14 != v8 )
    goto LABEL_13;
  *v15 = v8;
  *((_QWORD *)this + 45) = v14;
  *v14 = v15;
  v8[1] = v15;
  *((_BYTE *)this + 10) = 1;
}
