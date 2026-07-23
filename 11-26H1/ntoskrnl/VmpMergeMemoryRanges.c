/*
 * XREFs of VmpMergeMemoryRanges @ 0x140513450
 * Callers:
 *     VmMergeMemoryRanges @ 0x140B23B80 (VmMergeMemoryRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x1404C294C (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpVaMemoryRangeGetNext @ 0x1404DEB84 (VmpVaMemoryRangeGetNext.c)
 *     VmpSecureMemoryForPin @ 0x140823D20 (VmpSecureMemoryForPin.c)
 *     VmpUnsecureMemoryForPin @ 0x1408240F4 (VmpUnsecureMemoryForPin.c)
 *     VmpFreeMemoryRanges @ 0x140B020AC (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpMergeMemoryRanges(__int64 SpinLock, unsigned __int64 a2, __int64 a3)
{
  void *v3; // r15
  KIRQL v7; // si
  int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 Next; // rbp
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rax
  bool v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 *v21; // r15
  _RTL_BALANCED_NODE *v22; // rdi
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v24 = 0LL;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SpinLock);
  if ( *(_QWORD *)(SpinLock + 120) != a3 )
  {
    v8 = -1073740007;
    goto LABEL_53;
  }
  v9 = *(_QWORD *)(SpinLock + 48);
  if ( !v9 || a2 > *(_QWORD *)(v9 + 32) || a2 < *(_QWORD *)(v9 + 24) )
  {
    v9 = *(_QWORD *)(SpinLock + 24);
    if ( (*(_BYTE *)(SpinLock + 32) & 1) != 0 && v9 )
      v9 ^= SpinLock + 24;
    while ( v9 )
    {
      if ( a2 > *(_QWORD *)(v9 + 32) )
      {
        v10 = *(_QWORD *)(v9 + 8);
      }
      else
      {
        if ( a2 >= *(_QWORD *)(v9 + 24) )
          break;
        v10 = *(_QWORD *)v9;
      }
      if ( (*(_BYTE *)(SpinLock + 32) & 1) != 0 && v10 )
        v9 ^= v10;
      else
        v9 = v10;
    }
    if ( !v9 )
    {
      v8 = -1073741172;
      goto LABEL_53;
    }
    *(_QWORD *)(SpinLock + 48) = v9;
  }
  if ( *(_QWORD *)(v9 + 32) == a2
    && (Next = VmpVaMemoryRangeGetNext(SpinLock, (_QWORD *)v9)) != 0
    && *(_QWORD *)(Next + 24) == a2 + 1 )
  {
    VmpVaRangeNumberOfGpaRanges(v9);
    v12 = VmpVaRangeNumberOfGpaRanges(Next);
    if ( v13 == v12 )
    {
      v14 = *(_QWORD *)(v9 + 56);
      if ( (!v14 || !*(_QWORD *)(Next + 56) || ((*(_BYTE *)(Next + 72) ^ *(_BYTE *)(v9 + 72)) & 1) == 0)
        && ((*(_BYTE *)(Next + 72) ^ *(_BYTE *)(v9 + 72)) & 2) == 0 )
      {
        v15 = *(_QWORD **)(Next + 40);
        v16 = *(_QWORD **)(v9 + 40);
        while ( 1 )
        {
          v17 = v16[7];
          if ( v17 + 1 < v17 || v17 + 1 != v15[6] )
            break;
          v16 = (_QWORD *)*v16;
          v15 = (_QWORD *)*v15;
          if ( v16 == (_QWORD *)(v9 + 40) )
          {
            if ( v14 || *(_QWORD *)(Next + 56) )
            {
              ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)SpinLock, v7);
              v18 = ((*(_BYTE *)(Next + 72) | *(_BYTE *)(v9 + 72)) & 1) == 0;
              v8 = VmpSecureMemoryForPin(
                     SpinLock,
                     *(_QWORD *)(v9 + 24),
                     *(_QWORD *)(Next + 32) - *(_QWORD *)(v9 + 24) + 1LL,
                     &v24);
              if ( v8 < 0 )
                return (unsigned int)v8;
              v19 = *(_QWORD *)(Next + 56);
              if ( v19 )
                VmpUnsecureMemoryForPin(
                  SpinLock,
                  v19,
                  *(_QWORD *)(Next + 24),
                  *(_QWORD *)(Next + 32) - *(_QWORD *)(Next + 24) + 1LL,
                  *(_QWORD *)(Next + 24),
                  *(_QWORD *)(Next + 32) - *(_QWORD *)(Next + 24) + 1LL);
              v20 = *(_QWORD *)(v9 + 56);
              if ( v20 )
                VmpUnsecureMemoryForPin(
                  SpinLock,
                  v20,
                  *(_QWORD *)(v9 + 24),
                  *(_QWORD *)(v9 + 32) - *(_QWORD *)(v9 + 24) + 1LL,
                  *(_QWORD *)(v9 + 24),
                  *(_QWORD *)(v9 + 32) - *(_QWORD *)(v9 + 24) + 1LL);
              v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SpinLock);
              *(_QWORD *)(v9 + 56) = v24;
              *(_DWORD *)(v9 + 72) = *(_DWORD *)(v9 + 72) & 0xFFFFFFFE | !v18;
              *(_DWORD *)(Next + 72) &= ~1u;
              *(_QWORD *)(Next + 56) = 0LL;
            }
            v21 = *(__int64 **)(v9 + 40);
            v22 = *(_RTL_BALANCED_NODE **)(Next + 40);
            do
            {
              RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 8), v22 + 1);
              v22[1].ParentValue = -1LL;
              if ( *(_RTL_BALANCED_NODE **)(SpinLock + 40) == v22 )
                *(_QWORD *)(SpinLock + 40) = 0LL;
              v21[7] = (__int64)v22[2].Children[1];
              if ( (*(_DWORD *)&v22[2].0 & 1) != 0 )
              {
                *((_DWORD *)v21 + 16) |= 1u;
                *(_DWORD *)&v22[2].0 &= ~1u;
              }
              v21 = (__int64 *)*v21;
              v22 = v22->Children[0];
            }
            while ( v21 != (__int64 *)(v9 + 40) );
            RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 24), (PRTL_BALANCED_NODE)Next);
            *(_QWORD *)(Next + 16) = -1LL;
            if ( *(_QWORD *)(SpinLock + 48) == Next )
              *(_QWORD *)(SpinLock + 48) = 0LL;
            v3 = (void *)Next;
            *(_QWORD *)(v9 + 32) = *(_QWORD *)(Next + 32);
            ++*(_QWORD *)(SpinLock + 88);
            v8 = 0;
            goto LABEL_53;
          }
        }
      }
    }
    v8 = -1073741182;
  }
  else
  {
    v8 = -1073741503;
  }
LABEL_53:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)SpinLock, v7);
  if ( v3 )
    VmpFreeMemoryRanges(v3);
  return (unsigned int)v8;
}
