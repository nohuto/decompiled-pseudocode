/*
 * XREFs of VmpInsertMemoryRange @ 0x14063EA20
 * Callers:
 *     VmCreateMemoryRange @ 0x14078F640 (VmCreateMemoryRange.c)
 * Callees:
 *     VmpProcessContextUnlockExclusive @ 0x14026F2AC (VmpProcessContextUnlockExclusive.c)
 *     VmpProcessContextLockExclusive @ 0x14026FE0C (VmpProcessContextLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     VmpFreeMemoryRanges @ 0x140A5BB24 (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpInsertMemoryRange(__int64 a1, __int64 a2, __int64 a3)
{
  _RTL_BALANCED_NODE *v3; // rdi
  void *v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r12
  _RTL_BALANCED_NODE **v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  _RTL_BALANCED_NODE *v18; // rax
  _RTL_BALANCED_NODE *v19; // rcx
  _RTL_BALANCED_NODE **v20; // rdx
  _RTL_BALANCED_NODE *i; // rcx
  unsigned __int64 v22; // rdx
  BOOLEAN v23; // r8
  _RTL_BALANCED_NODE *v24; // r8
  unsigned __int64 v25; // rax
  _RTL_RB_TREE *v26; // rcx
  unsigned __int64 v27; // rdx
  BOOLEAN v28; // r8
  _RTL_BALANCED_NODE *v29; // r8
  unsigned __int64 v30; // rax

  v3 = *(_RTL_BALANCED_NODE **)(a2 + 40);
  v7 = 0LL;
  v8 = 0LL;
  v9 = VmpProcessContextLockExclusive((PEX_SPIN_LOCK)a1);
  v10 = *(_QWORD *)(a1 + 104);
  v11 = v9;
  if ( v10 == -1 )
  {
    *(_QWORD *)(a1 + 104) = a3;
  }
  else if ( v10 != a3 )
  {
    v15 = -1073740007;
    goto LABEL_83;
  }
  v12 = (_RTL_BALANCED_NODE **)(a1 + 8);
  v13 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v13 )
    v13 ^= (unsigned __int64)v12;
  if ( v13 )
  {
    do
    {
      if ( v3[2].Children[1] >= (_RTL_BALANCED_NODE *)*(_QWORD *)(v13 + 24) )
      {
        if ( v3[2].Children[0] <= (_RTL_BALANCED_NODE *)*(_QWORD *)(v13 + 32) )
          break;
        v14 = *(_QWORD *)(v13 + 8);
      }
      else
      {
        v14 = *(_QWORD *)v13;
      }
      if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v14 )
        v13 ^= v14;
      else
        v13 = v14;
    }
    while ( v13 );
    if ( v13 )
      goto LABEL_19;
  }
  v16 = *(_QWORD *)(a1 + 24);
  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && v16 )
    v16 ^= a1 + 24;
  if ( v16 )
  {
    do
    {
      if ( *(_QWORD *)(a2 + 32) >= *(_QWORD *)(v16 + 24) )
      {
        if ( *(_QWORD *)(a2 + 24) <= *(_QWORD *)(v16 + 32) )
          break;
        v17 = *(_QWORD *)(v16 + 8);
      }
      else
      {
        v17 = *(_QWORD *)v16;
      }
      if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && v17 )
        v16 ^= v17;
      else
        v16 = v17;
    }
    while ( v16 );
    if ( v16 )
    {
      v8 = v16;
      if ( *(_QWORD *)(v16 + 24) != *(_QWORD *)(a2 + 24)
        || *(_QWORD *)(v16 + 32) != *(_QWORD *)(a2 + 32)
        || ((*(_BYTE *)(a2 + 72) ^ *(_BYTE *)(v16 + 72)) & 2) != 0 )
      {
LABEL_19:
        v15 = -1073741800;
        goto LABEL_83;
      }
      v18 = v3->Children[0];
      if ( v3->Children[0]->Children[1] != v3 || (v19 = v3->Children[1], v19->Children[0] != v3) )
        __fastfail(3u);
      v19->Children[0] = v18;
      v18->Children[1] = v19;
      v3->ParentValue = v16;
      v20 = (_RTL_BALANCED_NODE **)(v16 + 40);
      for ( i = *v20; i != (_RTL_BALANCED_NODE *)v20; i = i->Children[0] )
      {
        if ( i[2].Children[0] > v3[2].Children[0] )
          break;
      }
      v7 = (void *)a2;
      i->Children[1]->Children[0] = v3;
      v3->Children[1] = i->Children[1];
      i->Children[1] = v3;
      v3->Children[0] = i;
    }
  }
  v22 = (unsigned __int64)*v12;
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v22 )
    v22 ^= (unsigned __int64)v12;
  v23 = 0;
  if ( v22 )
  {
    v24 = v3[2].Children[0];
    while ( 1 )
    {
      if ( (unsigned __int64)v24 > *(_QWORD *)(v22 + 32) || (unsigned __int64)v24 >= *(_QWORD *)(v22 + 24) )
      {
        v25 = *(_QWORD *)(v22 + 8);
        if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_61;
          v25 ^= v22;
        }
        if ( !v25 )
        {
LABEL_61:
          v23 = 1;
          break;
        }
      }
      else
      {
        v25 = *(_QWORD *)v22;
        if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_54;
          v25 ^= v22;
        }
        if ( !v25 )
        {
LABEL_54:
          v23 = 0;
          break;
        }
      }
      v22 = v25;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 8), (PRTL_BALANCED_NODE)v22, v23, v3 + 1);
  if ( !v8 )
  {
    v26 = (_RTL_RB_TREE *)(a1 + 24);
    v27 = *(_QWORD *)(a1 + 24);
    if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && v27 )
      v27 ^= (unsigned __int64)v26;
    v28 = 0;
    if ( v27 )
    {
      v29 = *(_RTL_BALANCED_NODE **)(a2 + 24);
      while ( 1 )
      {
        if ( (unsigned __int64)v29 > *(_QWORD *)(v27 + 32) || (unsigned __int64)v29 >= *(_QWORD *)(v27 + 24) )
        {
          v30 = *(_QWORD *)(v27 + 8);
          if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_80;
            v30 ^= v27;
          }
          if ( !v30 )
          {
LABEL_80:
            v28 = 1;
            break;
          }
        }
        else
        {
          v30 = *(_QWORD *)v27;
          if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_74;
            v30 ^= v27;
          }
          if ( !v30 )
          {
LABEL_74:
            v28 = 0;
            break;
          }
        }
        v27 = v30;
      }
    }
    RtlRbInsertNodeEx(v26, (PRTL_BALANCED_NODE)v27, v28, (PRTL_BALANCED_NODE)a2);
  }
  v15 = 0;
LABEL_83:
  if ( v11 != -1 )
    VmpProcessContextUnlockExclusive((volatile LONG *)a1, v11);
  if ( v7 )
    VmpFreeMemoryRanges(v7);
  return v15;
}
