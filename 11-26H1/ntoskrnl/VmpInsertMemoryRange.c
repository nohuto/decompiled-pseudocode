/*
 * XREFs of VmpInsertMemoryRange @ 0x1404D1D84
 * Callers:
 *     VmCreateMemoryRange @ 0x140821FF0 (VmCreateMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     VmpFreeMemoryRanges @ 0x140B020AC (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpInsertMemoryRange(PEX_SPIN_LOCK SpinLock, PRTL_BALANCED_NODE Node, __int64 a3)
{
  _RTL_BALANCED_NODE *ParentValue; // rdi
  PRTL_BALANCED_NODE v7; // r14
  unsigned __int64 v8; // r15
  KIRQL v9; // al
  __int64 v10; // rdx
  KIRQL v11; // r12
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned int v16; // ebx
  _RTL_RB_TREE *v18; // rcx
  unsigned __int64 v19; // rdx
  BOOLEAN v20; // r8
  _RTL_BALANCED_NODE *v21; // r8
  unsigned __int64 v22; // rax
  _RTL_RB_TREE *v23; // rcx
  unsigned __int64 v24; // rdx
  BOOLEAN v25; // r8
  _RTL_BALANCED_NODE *v26; // r8
  unsigned __int64 v27; // rax
  _RTL_BALANCED_NODE *v28; // rcx
  _RTL_BALANCED_NODE *v29; // rax
  _RTL_BALANCED_NODE **v30; // rdx
  _RTL_BALANCED_NODE *i; // rcx

  ParentValue = (_RTL_BALANCED_NODE *)Node[1].ParentValue;
  v7 = 0LL;
  v8 = 0LL;
  v9 = ExAcquireSpinLockExclusive(SpinLock);
  v10 = *((_QWORD *)SpinLock + 15);
  v11 = v9;
  if ( v10 == -1 )
  {
    *((_QWORD *)SpinLock + 15) = a3;
  }
  else if ( v10 != a3 )
  {
    v16 = -1073740007;
    goto LABEL_27;
  }
  v12 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v12 )
    v12 ^= (unsigned __int64)(SpinLock + 2);
  if ( v12 )
  {
    do
    {
      if ( ParentValue[2].Children[1] < (_RTL_BALANCED_NODE *)*(_QWORD *)(v12 + 24) )
      {
        v13 = *(_QWORD *)v12;
      }
      else
      {
        if ( ParentValue[2].Children[0] <= (_RTL_BALANCED_NODE *)*(_QWORD *)(v12 + 32) )
          break;
        v13 = *(_QWORD *)(v12 + 8);
      }
      if ( (SpinLock[4] & 1) != 0 && v13 )
        v12 ^= v13;
      else
        v12 = v13;
    }
    while ( v12 );
    if ( v12 )
      goto LABEL_26;
  }
  v14 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 && v14 )
    v14 ^= (unsigned __int64)(SpinLock + 6);
  if ( !v14 )
    goto LABEL_32;
  do
  {
    if ( Node[1].Children[1] < (_RTL_BALANCED_NODE *)*(_QWORD *)(v14 + 24) )
    {
      v15 = *(_QWORD *)v14;
    }
    else
    {
      if ( Node[1].Children[0] <= (_RTL_BALANCED_NODE *)*(_QWORD *)(v14 + 32) )
        break;
      v15 = *(_QWORD *)(v14 + 8);
    }
    if ( (SpinLock[8] & 1) != 0 && v15 )
      v14 ^= v15;
    else
      v14 = v15;
  }
  while ( v14 );
  if ( !v14 )
    goto LABEL_32;
  v8 = v14;
  if ( *(_RTL_BALANCED_NODE **)(v14 + 24) != Node[1].Children[0]
    || *(_RTL_BALANCED_NODE **)(v14 + 32) != Node[1].Children[1]
    || ((LOBYTE(Node[3].Children[0]) ^ *(_BYTE *)(v14 + 72)) & 2) != 0 )
  {
LABEL_26:
    v16 = -1073741800;
    goto LABEL_27;
  }
  v28 = ParentValue->Children[0];
  if ( ParentValue->Children[0]->Children[1] != ParentValue
    || (v29 = ParentValue->Children[1], v29->Children[0] != ParentValue) )
  {
    __fastfail(3u);
  }
  v29->Children[0] = v28;
  v28->Children[1] = v29;
  ParentValue->ParentValue = v14;
  v30 = (_RTL_BALANCED_NODE **)(v14 + 40);
  for ( i = *v30; i != (_RTL_BALANCED_NODE *)v30; i = i->Children[0] )
  {
    if ( i[2].Children[0] > ParentValue[2].Children[0] )
      break;
  }
  v7 = Node;
  i->Children[1]->Children[0] = ParentValue;
  ParentValue->Children[1] = i->Children[1];
  i->Children[1] = ParentValue;
  ParentValue->Children[0] = i;
LABEL_32:
  v18 = (_RTL_RB_TREE *)(SpinLock + 2);
  v19 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v19 )
    v19 ^= (unsigned __int64)v18;
  v20 = 0;
  if ( v19 )
  {
    v21 = ParentValue[2].Children[0];
    while ( 1 )
    {
      if ( (unsigned __int64)v21 <= *(_QWORD *)(v19 + 32) && (unsigned __int64)v21 < *(_QWORD *)(v19 + 24) )
      {
        v22 = *(_QWORD *)v19;
        if ( (SpinLock[4] & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_79;
          v22 ^= v19;
        }
        if ( !v22 )
        {
LABEL_79:
          v20 = 0;
          break;
        }
      }
      else
      {
        v22 = *(_QWORD *)(v19 + 8);
        if ( (SpinLock[4] & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_39;
          v22 ^= v19;
        }
        if ( !v22 )
        {
LABEL_39:
          v20 = 1;
          break;
        }
      }
      v19 = v22;
    }
  }
  RtlRbInsertNodeEx(v18, (PRTL_BALANCED_NODE)v19, v20, ParentValue + 1);
  if ( !v8 )
  {
    v23 = (_RTL_RB_TREE *)(SpinLock + 6);
    v24 = *((_QWORD *)SpinLock + 3);
    if ( (SpinLock[8] & 1) != 0 && v24 )
      v24 ^= (unsigned __int64)v23;
    v25 = 0;
    if ( v24 )
    {
      v26 = Node[1].Children[0];
      while ( 1 )
      {
        if ( (unsigned __int64)v26 > *(_QWORD *)(v24 + 32) || (unsigned __int64)v26 >= *(_QWORD *)(v24 + 24) )
        {
          v27 = *(_QWORD *)(v24 + 8);
          if ( (SpinLock[8] & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_53;
            v27 ^= v24;
          }
          if ( !v27 )
          {
LABEL_53:
            v25 = 1;
            break;
          }
        }
        else
        {
          v27 = *(_QWORD *)v24;
          if ( (SpinLock[8] & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_80;
            v27 ^= v24;
          }
          if ( !v27 )
          {
LABEL_80:
            v25 = 0;
            break;
          }
        }
        v24 = v27;
      }
    }
    RtlRbInsertNodeEx(v23, (PRTL_BALANCED_NODE)v24, v25, Node);
  }
  v16 = 0;
LABEL_27:
  ExReleaseSpinLockExclusive(SpinLock, v11);
  if ( v7 )
    VmpFreeMemoryRanges(v7);
  return v16;
}
