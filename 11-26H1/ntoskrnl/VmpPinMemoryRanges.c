/*
 * XREFs of VmpPinMemoryRanges @ 0x1406C5B54
 * Callers:
 *     VmPinMemoryRanges @ 0x1408234A0 (VmPinMemoryRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     VmpCheckPinAndReference @ 0x1406C47E8 (VmpCheckPinAndReference.c)
 *     VmpDereferencePinInProgress @ 0x1406C49E4 (VmpDereferencePinInProgress.c)
 *     VmpNewPinnedRangesNeeded @ 0x1406C5228 (VmpNewPinnedRangesNeeded.c)
 *     VmpUpdatePinRangesForFirstPin @ 0x1406C59DC (VmpUpdatePinRangesForFirstPin.c)
 *     MmLockPhysicalPagesByVa @ 0x1406EF4CC (MmLockPhysicalPagesByVa.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1406EF63C (MmUnlockPhysicalPagesByVa.c)
 *     VmpAccessFault @ 0x1408224C4 (VmpAccessFault.c)
 *     VmpCheckPinTooLate @ 0x140823A38 (VmpCheckPinTooLate.c)
 *     VmpSecureMemoryForPin @ 0x140823D20 (VmpSecureMemoryForPin.c)
 *     VmpUnpinRangeSinglePages @ 0x140823F6C (VmpUnpinRangeSinglePages.c)
 *     VmpUnsecureMemoryForPin @ 0x1408240F4 (VmpUnsecureMemoryForPin.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpPinMemoryRanges(PEX_SPIN_LOCK SpinLock, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  unsigned __int64 *v6; // r13
  bool v7; // zf
  unsigned __int64 v8; // r15
  int updated; // esi
  __int64 *v10; // r8
  __int64 v11; // r14
  unsigned __int64 v12; // rsi
  KIRQL v13; // al
  unsigned __int64 *v14; // rdi
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  unsigned __int64 *i; // rbx
  unsigned __int64 *v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 *j; // r14
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *k; // r14
  unsigned __int64 *v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 Root; // rcx
  unsigned __int64 m; // rsi
  __int64 v34; // rsi
  __int64 v35; // rdx
  unsigned __int64 *v36; // rdi
  unsigned __int64 v37; // rax
  _QWORD *v38; // rdi
  unsigned __int64 v39; // rcx
  int v40; // r13d
  unsigned __int64 v41; // r14
  __int64 *v42; // rdi
  unsigned __int64 v43; // r14
  _QWORD *v44; // rbx
  unsigned __int64 v45; // r14
  __int64 v46; // rdx
  __int64 v47; // r15
  __int64 v48; // r8
  __int64 v49; // rdi
  unsigned __int64 v50; // rcx
  int v51; // edi
  unsigned __int64 v52; // rax
  _QWORD *v53; // rdx
  unsigned __int64 v54; // rbx
  int v56; // [rsp+40h] [rbp-40h] BYREF
  int v57; // [rsp+44h] [rbp-3Ch]
  int v58; // [rsp+48h] [rbp-38h]
  BOOL v59; // [rsp+4Ch] [rbp-34h]
  unsigned __int64 *v60; // [rsp+50h] [rbp-30h]
  __int64 v61; // [rsp+58h] [rbp-28h]
  unsigned __int64 v62; // [rsp+60h] [rbp-20h]
  _RTL_RB_TREE v63; // [rsp+68h] [rbp-18h] BYREF
  __int64 v66; // [rsp+D0h] [rbp+50h]
  KIRQL v67; // [rsp+D8h] [rbp+58h]
  __int64 v68; // [rsp+D8h] [rbp+58h]

  v3 = *(_QWORD *)(a2 + 16);
  v5 = -1LL;
  v6 = *(unsigned __int64 **)(a2 + 8);
  v7 = (*(_DWORD *)(a2 + 40) & 2) == 0;
  v58 = *(_DWORD *)(a2 + 40) & 2;
  v56 = 0;
  *a3 = 0;
  v60 = v6;
  v8 = (unsigned __int64)&v6[6 * v3];
  v59 = !v7;
  v62 = v8;
  v63 = 0LL;
  updated = VmpCheckPinTooLate(SpinLock);
  if ( updated < 0 )
    goto LABEL_15;
  v57 = 0;
  v11 = 0LL;
  v61 = 0LL;
  v12 = 0LL;
  v13 = ExAcquireSpinLockShared(SpinLock);
  v67 = v13;
  v14 = v6;
  if ( (unsigned __int64)v6 < v8 )
  {
    do
    {
      if ( v14 > v6 && *v14 <= v12 )
        break;
      v12 = *v14 + v14[1] - 1;
      v15 = *(_QWORD *)(v14[3] + 16);
      if ( !v57 )
        v57 = VmpNewPinnedRangesNeeded((__int64)SpinLock, *v14, v12);
      if ( !*(_QWORD *)(v15 + 56) && v61 != v15 )
      {
        ++v11;
        v61 = v15;
        v14[2] |= 0x20000000000000uLL;
      }
      v14 += 6;
    }
    while ( (unsigned __int64)v14 < v8 );
    v13 = v67;
  }
  ExReleaseSpinLockShared(SpinLock, v13);
  v5 = -1LL;
  if ( v14 != (unsigned __int64 *)v8 )
  {
    *a3 = 2;
LABEL_14:
    updated = -1073741267;
    goto LABEL_15;
  }
  LODWORD(v17) = v57;
  if ( !v57 )
    goto LABEL_45;
LABEL_20:
  for ( i = v6 + 2; (unsigned __int64)(i - 2) < v8; i += 6 )
  {
    if ( (_DWORD)v17 )
    {
      updated = VmpUpdatePinRangesForFirstPin(
                  (__int64)SpinLock,
                  (_RTL_BALANCED_NODE *)*(i - 2),
                  (_RTL_BALANCED_NODE *)(*(i - 2) + *(i - 1) - 1),
                  &v63,
                  1);
      if ( updated < 0 )
      {
LABEL_47:
        v5 = -1LL;
        goto LABEL_15;
      }
    }
    if ( _bittest64((const signed __int64 *)i, 0x35u) )
    {
      updated = VmpSecureMemoryForPin(
                  SpinLock,
                  *(_QWORD *)(*(_QWORD *)(i[1] + 16) + 24LL),
                  *(_QWORD *)(*(_QWORD *)(i[1] + 16) + 32LL) - *(_QWORD *)(*(_QWORD *)(i[1] + 16) + 24LL) + 1LL,
                  i + 2);
      if ( updated < 0 )
        goto LABEL_47;
      *i &= ~0x20000000000000uLL;
      if ( !--v11 && !(_DWORD)v17 )
        break;
    }
  }
  while ( 1 )
  {
    v17 = 0LL;
    v5 = ExAcquireSpinLockExclusive(SpinLock);
    v19 = v6;
    v68 = v5;
    while ( (unsigned __int64)v19 < v8 )
    {
      v20 = *(_QWORD *)(v19[3] + 16);
      if ( !v19[5] )
      {
        if ( !*(_QWORD *)(v20 + 56) )
        {
          v21 = v19[4];
          if ( !v21 )
          {
            ++v11;
            v19[2] |= 0x20000000000000uLL;
            break;
          }
          *(_QWORD *)(v20 + 56) = v21;
          v19[4] = 0LL;
          if ( v58 )
            *(_DWORD *)(v20 + 72) |= 1u;
        }
        v19[5] = *(_QWORD *)(v20 + 56);
        if ( v19 > v6 && v20 == *(_QWORD *)(*(v19 - 3) + 16) && *(v19 - 1) )
          v19[2] |= 0x100000000000000uLL;
        else
          ++*(_QWORD *)(v20 + 64);
      }
      v19 += 6;
    }
    if ( !v11 )
      break;
    ExReleaseSpinLockExclusive(SpinLock, v5);
LABEL_45:
    if ( v11 )
      goto LABEL_20;
  }
  for ( j = (__int64 *)(v6 + 2); ; j += 6 )
  {
    v10 = j - 2;
    if ( (unsigned __int64)(j - 2) >= v8 )
      break;
    v23 = *v10;
    v24 = v23 + *(j - 1) - 1;
    v61 = *(_QWORD *)(j[1] + 16);
    v25 = VmpCheckPinAndReference((__int64)SpinLock, v61, v23, v24, v59, &v56);
    updated = v25;
    if ( v25 < 0 )
    {
      if ( !v56 )
      {
LABEL_57:
        if ( v25 == -1073741267 )
          *a3 = 1;
        goto LABEL_15;
      }
    }
    else if ( !v56 )
    {
      ++v17;
      continue;
    }
    v26 = *j | 0x40000000000000LL;
    v27 = v61;
    *j = v26;
    if ( *(_QWORD *)(v27 + 64) == 1LL )
      *j = v26 | 0x80000000000000LL;
  }
  if ( !v17 )
    goto LABEL_88;
  ExReleaseSpinLockExclusive(SpinLock, v5);
  v5 = -1LL;
  for ( k = v6 + 2; (unsigned __int64)(k - 2) < v8; k += 6 )
  {
    if ( (*k & 0x40000000000000LL) == 0 )
    {
      updated = MmLockPhysicalPagesByVa(*k << 12, *(k - 1) << 12, k[3], v58 != 0);
      if ( updated < 0 )
        goto LABEL_15;
      *k |= 0x10000000000000uLL;
      if ( !--v17 )
        break;
    }
  }
  v5 = ExAcquireSpinLockExclusive(SpinLock);
  v29 = v6 + 2;
  v68 = v5;
  while ( 2 )
  {
    v10 = (__int64 *)(v29 - 2);
    if ( (unsigned __int64)(v29 - 2) < v8 )
    {
      if ( !_bittest64((const signed __int64 *)v29, 0x36u) )
      {
        v25 = VmpCheckPinAndReference(
                (__int64)SpinLock,
                *(_QWORD *)(v29[1] + 16),
                *v10,
                *v10 + *(v29 - 1) - 1,
                v59,
                &v56);
        updated = v25;
        if ( v25 < 0 )
        {
          if ( !v56 )
            goto LABEL_57;
        }
        else if ( !v56 )
        {
          ++v17;
          goto LABEL_75;
        }
        v30 = *(_QWORD *)(v29[1] + 16);
        v31 = *v29 | 0x40000000000000LL;
        *v29 = v31;
        if ( *(_QWORD *)(v30 + 64) == 1LL )
          *v29 = v31 | 0x80000000000000LL;
      }
LABEL_75:
      v29 += 6;
      continue;
    }
    break;
  }
  if ( v17 )
  {
    Root = (unsigned __int64)v63.Root;
    if ( (*(_BYTE *)&v63.0 & 1) == 0 )
      goto LABEL_80;
    if ( !v63.Root )
      goto LABEL_81;
    Root = (unsigned __int64)&v63 ^ (unsigned __int64)v63.Root;
LABEL_80:
    if ( !Root )
    {
LABEL_81:
      for ( m = (unsigned __int64)v6; m < v8; m += 48LL )
      {
        if ( !_bittest64((const signed __int64 *)(m + 16), 0x36u) )
        {
          if ( (unsigned int)VmpNewPinnedRangesNeeded(
                               (__int64)SpinLock,
                               *(_QWORD *)m,
                               *(_QWORD *)m + *(_QWORD *)(m + 8) - 1LL) )
            goto LABEL_14;
          if ( !--v17 )
            break;
        }
      }
    }
    ++*((_QWORD *)SpinLock + 11);
  }
LABEL_88:
  v34 = 0LL;
  if ( (unsigned __int64)v6 >= v8 )
    goto LABEL_98;
  v35 = 0LL;
  v36 = v6 + 2;
  v66 = 0LL;
  do
  {
    v37 = *v36;
    if ( (*v36 & 0x40000000000000LL) == 0 )
    {
      VmpUpdatePinRangesForFirstPin(
        (__int64)SpinLock,
        (_RTL_BALANCED_NODE *)*(v36 - 2),
        (_RTL_BALANCED_NODE *)(*(v36 - 2) + *(v36 - 1) - 1),
        &v63,
        0);
      v35 = v66;
      *(_DWORD *)(v36[1] + 64) |= 1u;
      v37 = *v36 & 0xFFAFFFFFFFFFFFFFuLL | 0x40000000000000LL;
      *v36 = v37;
    }
    if ( (v37 & 0x80000000000000LL) == 0 )
    {
      *(_OWORD *)(*(_QWORD *)(a2 + 24) + v35) = *((_OWORD *)v36 - 1);
      *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v34++) = *v36 & 0xFFFFFFFFFFFFFLL;
      v35 += 16LL;
      v66 = v35;
    }
    v36 += 6;
  }
  while ( (unsigned __int64)(v36 - 2) < v8 );
  v5 = v68;
  v6 = v60;
  if ( v34 )
  {
    ExReleaseSpinLockExclusive(SpinLock, v68);
    v5 = -1LL;
    updated = VmpAccessFault(
                *(_QWORD *)(a2 + 24),
                *(_QWORD *)(a2 + 32),
                0,
                v34,
                *(_DWORD *)(a2 + 40),
                0,
                0,
                *(_QWORD *)(a2 + 48));
    if ( updated >= 0 )
    {
      updated = 0;
      goto LABEL_99;
    }
LABEL_15:
    v16 = (unsigned __int64)v6;
    if ( (unsigned __int64)v6 < v8 )
    {
      do
      {
        if ( (*(_QWORD *)(v16 + 16) & 0x40000000000000LL) != 0 )
        {
          if ( v5 != -1 )
          {
            ExReleaseSpinLockExclusive(SpinLock, v5);
            v5 = -1LL;
          }
          VmpUnpinRangeSinglePages(SpinLock, 0, 0LL);
        }
        v16 += 48LL;
      }
      while ( v16 < v8 );
      v6 = v60;
LABEL_99:
      v38 = v6 + 2;
      v39 = v8 - (_QWORD)v6;
      v40 = v58;
      v41 = (v39 - 1) / 0x30 + 1;
      do
      {
        if ( (*v38 & 0x10000000000000LL) != 0 )
        {
          if ( v5 != -1 )
          {
            if ( v5 == -2 )
              ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
            else
              ExReleaseSpinLockExclusive(SpinLock, v5);
            v5 = -1LL;
          }
          MmUnlockPhysicalPagesByVa(*v38 << 12, *(v38 - 1) << 12, v10, v40 != 0);
          *v38 &= ~0x10000000000000uLL;
        }
        v38 += 6;
        --v41;
      }
      while ( v41 );
      v6 = v60;
      v8 = v62;
      v42 = (__int64 *)(v60 + 5);
      v43 = (v62 - (unsigned __int64)v60 - 1) / 0x30 + 1;
      do
      {
        if ( *v42 )
        {
          if ( (*((_BYTE *)v42 - 17) & 1) != 0 )
          {
            *v42 = 0LL;
          }
          else
          {
            if ( v5 == -1 )
              v5 = ExAcquireSpinLockExclusive(SpinLock);
            *v42 = VmpDereferencePinInProgress(*(_QWORD *)(*(v42 - 2) + 16));
          }
        }
        v42 += 6;
        --v43;
      }
      while ( v43 );
    }
  }
  else
  {
LABEL_98:
    updated = 0;
    if ( (unsigned __int64)v6 < v8 )
      goto LABEL_99;
  }
  if ( v5 != -1 )
  {
    if ( v5 == -2 )
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    else
      ExReleaseSpinLockExclusive(SpinLock, v5);
  }
  if ( (unsigned __int64)v6 < v8 )
  {
    v44 = v6 + 5;
    v45 = (v8 - (unsigned __int64)v6 - 1) / 0x30 + 1;
    do
    {
      v46 = *(v44 - 1);
      if ( v46 || *v44 )
      {
        v47 = *(_QWORD *)(*(v44 - 2) + 16LL);
        v48 = *(_QWORD *)(v47 + 24);
        v49 = *(_QWORD *)(v47 + 32) - v48 + 1;
        if ( v46 )
        {
          VmpUnsecureMemoryForPin(SpinLock, v46, v48, v49, v48, *(_QWORD *)(v47 + 32) - v48 + 1);
          *(v44 - 1) = 0LL;
        }
        if ( *v44 )
        {
          VmpUnsecureMemoryForPin(SpinLock, *v44, *(_QWORD *)(v47 + 24), v49, *(_QWORD *)(v47 + 24), v49);
          *v44 = 0LL;
        }
      }
      v44 += 6;
      --v45;
    }
    while ( v45 );
  }
  v50 = (unsigned __int64)v63.Root;
  if ( (*(_BYTE *)&v63.0 & 1) != 0 )
  {
    if ( v63.Root )
      v50 = (unsigned __int64)&v63 ^ (unsigned __int64)v63.Root;
    else
      v50 = 0LL;
  }
  v51 = *(_BYTE *)&v63.0 & 1;
  if ( v50 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v52 = *(_QWORD *)v50;
        v53 = (_QWORD *)v50;
        if ( !*(_QWORD *)v50 )
        {
          v53 = (_QWORD *)(v50 + 8);
          v52 = *(_QWORD *)(v50 + 8);
          if ( !v52 )
            break;
        }
        if ( v51 )
          v50 ^= v52;
        else
          v50 = v52;
        *v53 = 0LL;
      }
      v54 = *(_QWORD *)(v50 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v51 && v54 )
        v54 ^= v50;
      ExFreePoolWithTag((PVOID)v50, 0);
      if ( !v54 )
        break;
      v50 = v54;
    }
  }
  return (unsigned int)updated;
}
