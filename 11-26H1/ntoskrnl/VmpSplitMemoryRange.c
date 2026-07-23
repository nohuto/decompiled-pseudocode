/*
 * XREFs of VmpSplitMemoryRange @ 0x1404C2504
 * Callers:
 *     VmSplitMemoryRange @ 0x140B1F750 (VmSplitMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x1404C294C (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpFindNextPinnedPageStateHelper @ 0x1406C4DA8 (VmpFindNextPinnedPageStateHelper.c)
 *     VmpVaRangeCheckPinnedGpaRanges @ 0x1406C68EC (VmpVaRangeCheckPinnedGpaRanges.c)
 *     VmpSecureMemoryForPin @ 0x140823D20 (VmpSecureMemoryForPin.c)
 *     VmpUnsecureMemoryForPin @ 0x1408240F4 (VmpUnsecureMemoryForPin.c)
 *     VmpAllocateMemoryRanges @ 0x140B01FC0 (VmpAllocateMemoryRanges.c)
 *     VmpFreeMemoryRanges @ 0x140B020AC (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpSplitMemoryRange(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  int v7; // r14d
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  KIRQL v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // eax
  int v16; // ecx
  unsigned __int64 v17; // rdx
  BOOLEAN v18; // r8
  _RTL_BALANCED_NODE *v19; // r8
  unsigned __int64 v20; // rax
  __int64 *v21; // rbx
  __int64 *v22; // r15
  unsigned __int64 v23; // rbp
  __int64 v24; // r14
  __int64 v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // rdx
  BOOLEAN v28; // r8
  _RTL_BALANCED_NODE *v29; // r8
  unsigned __int64 v30; // rax
  __int64 v31; // rbp
  int v32; // ebx
  __int64 v33; // r13
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // r12d
  __int64 v39; // rcx
  __int64 v40; // [rsp+38h] [rbp-70h]
  __int64 v41; // [rsp+40h] [rbp-68h] BYREF
  __int64 v42; // [rsp+48h] [rbp-60h]
  unsigned __int64 v43; // [rsp+50h] [rbp-58h]
  unsigned __int64 v44; // [rsp+58h] [rbp-50h]
  __int64 v45; // [rsp+60h] [rbp-48h]
  __int64 MemoryRanges; // [rsp+68h] [rbp-40h]
  __int64 v47; // [rsp+C0h] [rbp+18h]

  v45 = 0LL;
  v42 = 0LL;
  v6 = 0LL;
  v41 = 0LL;
  v7 = 1;
  v43 = 0LL;
  v8 = 0LL;
  v47 = 0LL;
  v44 = 0LL;
  v9 = 0LL;
  v40 = 0LL;
  v10 = ExAcquireSpinLockShared(SpinLock);
  if ( *((_QWORD *)SpinLock + 15) != a3 )
  {
    v32 = -1073740007;
    v31 = 0LL;
    v9 = 0LL;
    goto LABEL_37;
  }
  v11 = *((_QWORD *)SpinLock + 6);
  if ( !v11 || a2 > *(_QWORD *)(v11 + 32) || a2 < *(_QWORD *)(v11 + 24) )
  {
    v11 = *((_QWORD *)SpinLock + 3);
    if ( (SpinLock[8] & 1) != 0 && v11 )
      v11 ^= (unsigned __int64)(SpinLock + 6);
    while ( v11 )
    {
      if ( a2 > *(_QWORD *)(v11 + 32) )
      {
        v36 = *(_QWORD *)(v11 + 8);
      }
      else
      {
        if ( a2 >= *(_QWORD *)(v11 + 24) )
          break;
        v36 = *(_QWORD *)v11;
      }
      if ( (SpinLock[8] & 1) != 0 && v36 )
        v11 ^= v36;
      else
        v11 = v36;
    }
    if ( !v11 )
    {
      v32 = -1073741172;
      goto LABEL_73;
    }
    *((_QWORD *)SpinLock + 6) = v11;
  }
  if ( a2 == *(_QWORD *)(v11 + 32) )
  {
    v32 = -1073741503;
LABEL_73:
    v8 = 0LL;
    v31 = 0LL;
    goto LABEL_37;
  }
  v12 = VmpVaRangeNumberOfGpaRanges(v11);
  ExReleaseSpinLockShared(SpinLock, v10);
  MemoryRanges = VmpAllocateMemoryRanges(v12);
  v13 = MemoryRanges;
  if ( !MemoryRanges )
    return (unsigned int)-1073741670;
  if ( *(_QWORD *)(v11 + 56) )
  {
    v37 = *(_QWORD *)(v11 + 32);
    v38 = *(_DWORD *)(v11 + 72);
    v39 = v37 - *(_QWORD *)(v11 + 24);
    v43 = *(_QWORD *)(v11 + 24);
    v44 = a2 + 1;
    v47 = v39 + 1;
    LODWORD(v9) = v38 & 1;
    v33 = v37 - a2;
    v40 = v37 - a2;
    v32 = VmpSecureMemoryForPin(SpinLock, a2 + 1, v37 - a2, &v41);
    if ( v32 < 0 )
    {
      v6 = v41;
      goto LABEL_42;
    }
    v14 = v41;
  }
  else
  {
    v14 = v42;
  }
  v10 = ExAcquireSpinLockExclusive(SpinLock);
  v41 = a2 - *(_QWORD *)(v11 + 24) + 1;
  *(_QWORD *)(v13 + 32) = *(_QWORD *)(v11 + 32);
  *(_QWORD *)(v13 + 24) = a2 + 1;
  *(_QWORD *)(v11 + 32) = a2;
  v15 = *(_DWORD *)(v13 + 72);
  v16 = (*(_DWORD *)(v11 + 72) ^ v15) & 2;
  *(_QWORD *)(v13 + 56) = v14;
  v42 = 0LL;
  *(_DWORD *)(v13 + 72) = v9 | (v15 ^ v16) & 0xFFFFFFFE;
  v17 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 && v17 )
    v17 ^= (unsigned __int64)(SpinLock + 6);
  v18 = 0;
  if ( !v17 )
    goto LABEL_22;
  v19 = *(_RTL_BALANCED_NODE **)(v13 + 24);
  while ( (unsigned __int64)v19 > *(_QWORD *)(v17 + 32) || (unsigned __int64)v19 >= *(_QWORD *)(v17 + 24) )
  {
    v20 = *(_QWORD *)(v17 + 8);
    if ( (SpinLock[8] & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_21;
      v20 ^= v17;
    }
    if ( !v20 )
    {
LABEL_21:
      v18 = 1;
      goto LABEL_22;
    }
LABEL_18:
    v17 = v20;
  }
  v20 = *(_QWORD *)v17;
  if ( (SpinLock[8] & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_66;
    v20 ^= v17;
  }
  if ( v20 )
    goto LABEL_18;
LABEL_66:
  v18 = 0;
LABEL_22:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 6), (PRTL_BALANCED_NODE)v17, v18, (PRTL_BALANCED_NODE)v13);
  v21 = *(__int64 **)(v13 + 40);
  v22 = *(__int64 **)(v11 + 40);
  v23 = (unsigned __int64)(SpinLock + 2);
  v24 = v41;
  while ( 1 )
  {
    v25 = v24 + v22[6];
    v21[6] = v25;
    v21[7] = v22[7];
    v26 = *((_DWORD *)v22 + 16);
    v22[7] = v25 - 1;
    if ( (v26 & 1) != 0 )
    {
      if ( VmpFindNextPinnedPageStateHelper(SpinLock, v22[6], v25 - 1, 1LL) == -1 )
        *((_DWORD *)v22 + 16) &= ~1u;
      if ( VmpFindNextPinnedPageStateHelper(SpinLock, v21[6], v21[7], 1LL) != -1 )
        *((_DWORD *)v21 + 16) |= 1u;
    }
    if ( (SpinLock[4] & 1) != 0 )
    {
      if ( *(_QWORD *)v23 )
        v27 = *(_QWORD *)v23 ^ v23;
      else
        v27 = 0LL;
    }
    else
    {
      v27 = *(_QWORD *)v23;
    }
    v28 = 0;
    if ( v27 )
    {
      v29 = (_RTL_BALANCED_NODE *)v21[6];
      while ( 1 )
      {
        if ( (unsigned __int64)v29 <= *(_QWORD *)(v27 + 32) && (unsigned __int64)v29 < *(_QWORD *)(v27 + 24) )
        {
          v30 = *(_QWORD *)v27;
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_65;
            v30 ^= v27;
          }
          if ( !v30 )
          {
LABEL_65:
            v28 = 0;
            break;
          }
        }
        else
        {
          v30 = *(_QWORD *)(v27 + 8);
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_32;
            v30 ^= v27;
          }
          if ( !v30 )
          {
LABEL_32:
            v28 = 1;
            break;
          }
        }
        v27 = v30;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 2), (PRTL_BALANCED_NODE)v27, v28, (PRTL_BALANCED_NODE)v21 + 1);
    v22 = (__int64 *)*v22;
    if ( v22 == (__int64 *)(v11 + 40) )
      break;
    v21 = (__int64 *)*v21;
  }
  if ( *(_QWORD *)(MemoryRanges + 56) )
  {
    v45 = *(_QWORD *)(v11 + 56);
    v6 = VmpVaRangeCheckPinnedGpaRanges(MemoryRanges);
    v35 = VmpVaRangeCheckPinnedGpaRanges(v11);
    v8 = v47;
    if ( v35 )
    {
      v9 = v43;
      v31 = v47;
    }
    else
    {
      v9 = v44;
      v31 = v40;
    }
  }
  else
  {
    v31 = 0LL;
    v6 = v42;
    v9 = 0LL;
    v8 = v47;
  }
  ++*((_QWORD *)SpinLock + 11);
  v32 = 0;
  v7 = 0;
LABEL_37:
  if ( v7 )
    ExReleaseSpinLockShared(SpinLock, v10);
  else
    ExReleaseSpinLockExclusive(SpinLock, v10);
  v13 = 0LL;
  if ( v45 )
    VmpUnsecureMemoryForPin(SpinLock, v45, v9, v31, v43, v8);
  v33 = v40;
LABEL_42:
  if ( v6 )
    VmpUnsecureMemoryForPin(SpinLock, v6, v44, v33, v44, v33);
  if ( v13 )
    VmpFreeMemoryRanges((PVOID)v13);
  return (unsigned int)v32;
}
