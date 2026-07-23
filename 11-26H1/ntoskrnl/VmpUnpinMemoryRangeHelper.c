/*
 * XREFs of VmpUnpinMemoryRangeHelper @ 0x1406C644C
 * Callers:
 *     VmpUnpinMemoryRanges @ 0x140823DB8 (VmpUnpinMemoryRanges.c)
 *     VmpUnpinRangeSinglePages @ 0x140823F6C (VmpUnpinRangeSinglePages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpProcessInvalidateList @ 0x140512570 (VmpProcessInvalidateList.c)
 *     VmpCheckUnpinAndDereference @ 0x1406C48D0 (VmpCheckUnpinAndDereference.c)
 *     VmpDereferencePinInProgress @ 0x1406C49E4 (VmpDereferencePinInProgress.c)
 *     VmpFindNextPinnedPageStateHelper @ 0x1406C4DA8 (VmpFindNextPinnedPageStateHelper.c)
 *     VmpInvalidateSlatBatched @ 0x1406C5010 (VmpInvalidateSlatBatched.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1406EF63C (MmUnlockPhysicalPagesByVa.c)
 *     VmpUnsecureMemoryForPin @ 0x1408240F4 (VmpUnsecureMemoryForPin.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpUnpinMemoryRangeHelper(PEX_SPIN_LOCK SpinLock, __int64 a2, int a3, _QWORD *a4, _QWORD *a5)
{
  __int64 *v5; // r14
  _QWORD *v6; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r15
  __int64 *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 *v21; // rdx
  PVOID *v22; // r8
  __int64 v23; // rcx
  unsigned int v24; // r12d
  __int64 v25; // r12
  __int64 *v26; // rdi
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r12
  _QWORD *v30; // rdi
  KIRQL v31; // r11
  __int64 *v32; // r10
  __int64 v33; // rax
  _QWORD *v34; // rdi
  unsigned __int64 v35; // rbx
  __int64 v36; // rcx
  PVOID v37; // rcx
  __int64 v38; // rax
  int v40; // [rsp+48h] [rbp-31h]
  __int64 v41; // [rsp+50h] [rbp-29h]
  __int64 v42; // [rsp+58h] [rbp-21h] BYREF
  __int64 v43; // [rsp+60h] [rbp-19h] BYREF
  __int64 v44; // [rsp+68h] [rbp-11h]
  __int64 *v45; // [rsp+70h] [rbp-9h]
  PVOID P; // [rsp+78h] [rbp-1h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp+7h]
  __int64 v48; // [rsp+88h] [rbp+Fh] BYREF
  __int64 *v49; // [rsp+90h] [rbp+17h]
  int v50; // [rsp+E0h] [rbp+67h] BYREF
  int v51; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v52; // [rsp+F0h] [rbp+77h]

  v52 = a4;
  v51 = a3;
  v5 = *(__int64 **)(a2 + 8);
  v6 = a5;
  v50 = 0;
  v8 = 0LL;
  *a4 = 0LL;
  v43 = 0LL;
  *v6 = 0LL;
  p_P = &P;
  P = &P;
  v49 = &v48;
  v48 = (__int64)&v48;
  v9 = *(_QWORD *)(a2 + 16);
  v45 = v5;
  v10 = (unsigned __int64)&v5[6 * v9];
  v13 = ExAcquireSpinLockExclusive(SpinLock);
  v40 = 0;
  v41 = 0LL;
  v14 = v5;
  v42 = v13;
  while ( (unsigned __int64)v14 < v10 )
  {
    v15 = v14[3];
    v16 = *v14;
    v17 = *v14 + v14[1] - 1;
    v44 = *(_QWORD *)(v15 + 16);
    v40 = VmpCheckUnpinAndDereference((__int64)SpinLock, v11, v12, v16, v17, v51, (__int64)&v48, &v50);
    v11 = (unsigned int)v40;
    if ( v40 < 0 )
      goto LABEL_20;
    v18 = v14[1];
    ++*v52;
    *a5 += v18;
    v19 = v14[2];
    if ( v50 )
    {
      v14[2] = v19 | 0x40000000000000LL;
    }
    else
    {
      ++v41;
      v14[2] = v19 | 0x10000000000000LL;
      v20 = (_QWORD *)v48;
      if ( (__int64 *)v48 != &v48 )
      {
        v21 = v49;
        if ( *(__int64 **)(v48 + 8) != &v48
          || (__int64 *)*v49 != &v48
          || (*v49 = v48, v20[1] = v21, v22 = p_P, *((PVOID **)P + 1) != &P)
          || *p_P != &P
          || *(_QWORD **)(*v20 + 8LL) != v20
          || (_QWORD *)*v21 != v20 )
        {
LABEL_57:
          __fastfail(3u);
        }
        *p_P = v20;
        p_P = (PVOID *)v20[1];
        *(_QWORD *)v20[1] = &P;
        v20[1] = v22;
        v49 = &v48;
        v48 = (__int64)&v48;
      }
      v23 = v44;
      if ( (*(_DWORD *)(v44 + 72) & 1) != 0 )
        v14[2] |= 0x20000000000000uLL;
      v14[5] = *(_QWORD *)(v23 + 56);
      ++*(_QWORD *)(v23 + 64);
      if ( VmpFindNextPinnedPageStateHelper((__int64)SpinLock, *(_QWORD *)(v15 + 48), *(_QWORD *)(v15 + 56), 1) == -1 )
        *(_DWORD *)(v15 + 64) &= ~1u;
    }
    v14 += 6;
  }
  LODWORD(v11) = v40;
LABEL_20:
  v24 = 0;
  if ( v14 != (__int64 *)v10 )
    v24 = v11;
  LODWORD(v52) = v24;
  if ( v41 )
  {
    ++*((_QWORD *)SpinLock + 11);
    if ( (v51 & 2) == 0 )
    {
      v25 = v41;
      if ( (unsigned __int64)v5 < v10 )
      {
        v26 = v5 + 3;
        do
        {
          v27 = *(v26 - 1);
          if ( (v27 & 0x40000000000000LL) == 0 )
          {
            VmpInvalidateSlatBatched(
              SpinLock,
              *(v26 - 3),
              v27 & 0xFFFFFFFFFFFFFLL,
              *(v26 - 2),
              &v42,
              *(_DWORD *)(*(_QWORD *)(*v26 + 16) + 72LL) & 2 | 1,
              (unsigned int **)&v43);
            if ( !--v25 )
              break;
          }
          v26 += 6;
        }
        while ( (unsigned __int64)(v26 - 3) < v10 );
        v13 = v42;
        v8 = v43;
        v5 = v45;
      }
      if ( *(_QWORD *)(v8 + 8) )
        VmpProcessInvalidateList((__int64)SpinLock, v8);
      v24 = (unsigned int)v52;
      *(_DWORD *)(v8 + 4) = 0;
    }
    if ( v13 == -2 )
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    else
      ExReleaseSpinLockExclusive(SpinLock, v13);
    if ( (unsigned __int64)v5 < v10 )
    {
      v29 = v41;
      v30 = v5 + 2;
      do
      {
        if ( (*v30 & 0x40000000000000LL) == 0 )
        {
          MmUnlockPhysicalPagesByVa(*v30 << 12, *(v30 - 1) << 12, v28, (*v30 >> 53) & 1LL);
          *v30 &= ~0x10000000000000uLL;
          if ( !--v29 )
            break;
        }
        v30 += 6;
      }
      while ( (unsigned __int64)(v30 - 2) < v10 );
      v24 = (unsigned int)v52;
    }
    v31 = ExAcquireSpinLockExclusive(SpinLock);
    if ( (unsigned __int64)v5 < v10 )
    {
      v32 = v5 + 5;
      do
      {
        if ( (*(v32 - 3) & 0x40000000000000LL) == 0 )
        {
          if ( !*v32 )
            break;
          v33 = VmpDereferencePinInProgress(*(_QWORD *)(*(v32 - 2) + 16));
          *v32 = v33;
        }
        v32 += 6;
      }
      while ( (unsigned __int64)(v32 - 5) < v10 );
    }
    ExReleaseSpinLockExclusive(SpinLock, v31);
    if ( (unsigned __int64)v5 < v10 )
    {
      v34 = v5 + 5;
      v35 = (v10 - (unsigned __int64)v5 - 1) / 0x30 + 1;
      do
      {
        if ( *v34 )
        {
          v36 = *(_QWORD *)(*(v34 - 2) + 16LL);
          VmpUnsecureMemoryForPin(
            SpinLock,
            *v34,
            *(_QWORD *)(v36 + 24),
            *(_QWORD *)(v36 + 32) - *(_QWORD *)(v36 + 24) + 1LL,
            *(_QWORD *)(v36 + 24),
            *(_QWORD *)(v36 + 32) - *(_QWORD *)(v36 + 24) + 1LL);
          *v34 = 0LL;
        }
        v34 += 6;
        --v35;
      }
      while ( v35 );
    }
    while ( 1 )
    {
      v37 = P;
      if ( P == &P )
        break;
      if ( *((PVOID **)P + 1) != &P )
        goto LABEL_57;
      v38 = *(_QWORD *)P;
      if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
        goto LABEL_57;
      P = *(PVOID *)P;
      *(_QWORD *)(v38 + 8) = &P;
      ExFreePoolWithTag(v37, 0);
    }
  }
  else
  {
    ExReleaseSpinLockExclusive(SpinLock, v13);
  }
  return v24;
}
