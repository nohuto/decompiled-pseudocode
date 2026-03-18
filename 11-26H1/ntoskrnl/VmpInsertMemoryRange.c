/*
 * XREFs of VmpInsertMemoryRange @ 0x1404D85B4
 * Callers:
 *     VmCreateMemoryRange @ 0x14081BDE0 (VmCreateMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     VmpFreeMemoryRanges @ 0x140B0037C (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpInsertMemoryRange(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  void *v7; // r14
  __int64 v8; // r15
  KIRQL v9; // al
  __int64 v10; // rdx
  KIRQL v11; // r12
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  bool v20; // r8
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  bool v25; // r8
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rax
  __int64 *v28; // rcx
  __int64 **v29; // rax
  __int64 ***v30; // rdx
  __int64 **i; // rcx

  v3 = *(__int64 **)(a2 + 40);
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
      if ( (unsigned __int64)v3[7] < *(_QWORD *)(v12 + 24) )
      {
        v13 = *(_QWORD *)v12;
      }
      else
      {
        if ( (unsigned __int64)v3[6] <= *(_QWORD *)(v12 + 32) )
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
    if ( *(_QWORD *)(a2 + 32) < *(_QWORD *)(v14 + 24) )
    {
      v15 = *(_QWORD *)v14;
    }
    else
    {
      if ( *(_QWORD *)(a2 + 24) <= *(_QWORD *)(v14 + 32) )
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
  if ( *(_QWORD *)(v14 + 24) != *(_QWORD *)(a2 + 24)
    || *(_QWORD *)(v14 + 32) != *(_QWORD *)(a2 + 32)
    || ((*(_BYTE *)(a2 + 72) ^ *(_BYTE *)(v14 + 72)) & 2) != 0 )
  {
LABEL_26:
    v16 = -1073741800;
    goto LABEL_27;
  }
  v28 = (__int64 *)*v3;
  if ( *(__int64 **)(*v3 + 8) != v3 || (v29 = (__int64 **)v3[1], *v29 != v3) )
    __fastfail(3u);
  *v29 = v28;
  v28[1] = (__int64)v29;
  v3[2] = v14;
  v30 = (__int64 ***)(v14 + 40);
  for ( i = *v30; i != (__int64 **)v30; i = (__int64 **)*i )
  {
    if ( (unsigned __int64)i[6] > v3[6] )
      break;
  }
  v7 = (void *)a2;
  *i[1] = (__int64)v3;
  v3[1] = (__int64)i[1];
  i[1] = v3;
  *v3 = (__int64)i;
LABEL_32:
  v18 = (unsigned __int64)(SpinLock + 2);
  v19 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v19 )
    v19 ^= v18;
  v20 = 0;
  if ( v19 )
  {
    v21 = v3[6];
    while ( 1 )
    {
      if ( v21 <= *(_QWORD *)(v19 + 32) && v21 < *(_QWORD *)(v19 + 24) )
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
  RtlRbInsertNodeEx(v18, v19, v20, (unsigned __int64)(v3 + 3));
  if ( !v8 )
  {
    v23 = (unsigned __int64)(SpinLock + 6);
    v24 = *((_QWORD *)SpinLock + 3);
    if ( (SpinLock[8] & 1) != 0 && v24 )
      v24 ^= v23;
    v25 = 0;
    if ( v24 )
    {
      v26 = *(_QWORD *)(a2 + 24);
      while ( 1 )
      {
        if ( v26 > *(_QWORD *)(v24 + 32) || v26 >= *(_QWORD *)(v24 + 24) )
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
    RtlRbInsertNodeEx(v23, v24, v25, a2);
  }
  v16 = 0;
LABEL_27:
  ExReleaseSpinLockExclusive(SpinLock, v11);
  if ( v7 )
    VmpFreeMemoryRanges(v7);
  return v16;
}
