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

__int64 __fastcall VmpInsertMemoryRange(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  void *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r12
  unsigned __int64 *v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 **v19; // rcx
  __int64 ***v20; // rdx
  __int64 **i; // rcx
  unsigned __int64 v22; // rdx
  bool v23; // r8
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  __int64 *v26; // rcx
  unsigned __int64 v27; // rdx
  bool v28; // r8
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rax

  v3 = *(__int64 **)(a2 + 40);
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
  v12 = (unsigned __int64 *)(a1 + 8);
  v13 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v13 )
    v13 ^= (unsigned __int64)v12;
  if ( v13 )
  {
    do
    {
      if ( (unsigned __int64)v3[7] >= *(_QWORD *)(v13 + 24) )
      {
        if ( (unsigned __int64)v3[6] <= *(_QWORD *)(v13 + 32) )
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
      v18 = (__int64 *)*v3;
      if ( *(__int64 **)(*v3 + 8) != v3 || (v19 = (__int64 **)v3[1], *v19 != v3) )
        __fastfail(3u);
      *v19 = v18;
      v18[1] = (__int64)v19;
      v3[2] = v16;
      v20 = (__int64 ***)(v16 + 40);
      for ( i = *v20; i != (__int64 **)v20; i = (__int64 **)*i )
      {
        if ( (unsigned __int64)i[6] > v3[6] )
          break;
      }
      v7 = (void *)a2;
      *i[1] = (__int64)v3;
      v3[1] = (__int64)i[1];
      i[1] = v3;
      *v3 = (__int64)i;
    }
  }
  v22 = *v12;
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v22 )
    v22 ^= (unsigned __int64)v12;
  v23 = 0;
  if ( v22 )
  {
    v24 = v3[6];
    while ( 1 )
    {
      if ( v24 > *(_QWORD *)(v22 + 32) || v24 >= *(_QWORD *)(v22 + 24) )
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
  RtlRbInsertNodeEx((__int64 *)(a1 + 8), v22, v23, (unsigned __int64)(v3 + 3));
  if ( !v8 )
  {
    v26 = (__int64 *)(a1 + 24);
    v27 = *(_QWORD *)(a1 + 24);
    if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && v27 )
      v27 ^= (unsigned __int64)v26;
    v28 = 0;
    if ( v27 )
    {
      v29 = *(_QWORD *)(a2 + 24);
      while ( 1 )
      {
        if ( v29 > *(_QWORD *)(v27 + 32) || v29 >= *(_QWORD *)(v27 + 24) )
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
    RtlRbInsertNodeEx(v26, v27, v28, a2);
  }
  v15 = 0;
LABEL_83:
  if ( v11 != -1 )
    VmpProcessContextUnlockExclusive((volatile LONG *)a1, v11);
  if ( v7 )
    VmpFreeMemoryRanges(v7);
  return v15;
}
