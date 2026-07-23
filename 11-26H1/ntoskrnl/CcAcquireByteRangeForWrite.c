/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x1403E5550
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14038B5FC (CcNotifyOfMappedWrite.c)
 *     CcFlushCacheAcquireRange @ 0x14039BA5C (CcFlushCacheAcquireRange.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     CcDeductDirtyPages @ 0x1403E611C (CcDeductDirtyPages.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1403E624C (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcFindBitmapRangeToClean @ 0x1403E63F4 (CcFindBitmapRangeToClean.c)
 *     CcFindBcb @ 0x1403E6430 (CcFindBcb.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall CcAcquireByteRangeForWrite(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4,
        _QWORD *a5,
        unsigned int *a6,
        __int64 *a7,
        char a8,
        __int64 *a9)
{
  __int64 v10; // r13
  __int64 BitmapRangeToClean; // r15
  int *v12; // r14
  int v13; // edi
  __int64 v14; // rbx
  unsigned int *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 *v29; // rdx
  char Bcb; // al
  __int64 v31; // rax
  _QWORD *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rdi
  unsigned int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // r8
  struct _SINGLE_LIST_ENTRY *v40; // r9
  _QWORD *v41; // rcx
  __int64 v43; // r11
  unsigned int v44; // r10d
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  unsigned int v48; // r8d
  __int64 v49; // rdx
  signed __int64 v50; // rcx
  signed __int64 v51; // r11
  int v52; // eax
  __int64 v53; // r10
  __int64 v54; // rdi
  int v55; // eax
  unsigned int v56; // eax
  __int64 v57; // r14
  __int64 v58; // r15
  __int64 v59; // r10
  int v60; // edx
  unsigned __int64 v61; // rcx
  __int64 v62; // r11
  __int64 v63; // r10
  unsigned __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r9
  __int64 v67; // [rsp+50h] [rbp-F8h]
  int v68; // [rsp+58h] [rbp-F0h]
  struct _FAST_MUTEX *Mutex; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v70; // [rsp+68h] [rbp-E0h]
  unsigned int v71; // [rsp+70h] [rbp-D8h]
  __int64 *v72; // [rsp+70h] [rbp-D8h]
  __int64 v73; // [rsp+78h] [rbp-D0h]
  int v74; // [rsp+80h] [rbp-C8h]
  __int64 v75; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v76; // [rsp+90h] [rbp-B8h]
  __int64 v77; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-88h]
  __int64 v79; // [rsp+C8h] [rbp-80h]
  __int64 v80; // [rsp+E0h] [rbp-68h]
  __int64 v81; // [rsp+E8h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-58h] BYREF
  unsigned int v84; // [rsp+160h] [rbp+18h]
  struct _SINGLE_LIST_ENTRY *v85; // [rsp+168h] [rbp+20h]

  v85 = a4;
  v84 = a3;
  v10 = a1;
  v71 = a3;
  v78 = 0LL;
  v68 = 0;
  LODWORD(v75) = 0;
  BitmapRangeToClean = 0LL;
  v70 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v67 = 0LL;
  v80 = 0LL;
  v74 = 0;
  v14 = 0x7FFFFFFFFFFFFFFFLL;
  v81 = 0x7FFFFFFFFFFFFFFFLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a8 )
  {
    PsBoostThreadIo((LegacyAutoBoost *)KeGetCurrentThread(), 0LL, a3, a4);
    a4 = v85;
  }
  v79 = *(_QWORD *)(v10 + 536);
  v77 = v79;
  *a5 = 0LL;
  v15 = a6;
  *a6 = 0;
  if ( a4 )
    guard_dispatch_icall_no_overrides(**(_QWORD **)(v10 + 248), a4->Next);
  Mutex = (struct _FAST_MUTEX *)(v10 + 288);
  ExAcquireFastMutex((PKGUARDED_MUTEX)(v10 + 288));
  v16 = *(_QWORD *)(v10 + 168);
  v76 = v16;
  if ( !v16 || !*(_DWORD *)(v16 + 8) || !*(_DWORD *)(v16 + 4) && !v84 )
    goto LABEL_14;
  if ( !a2 )
  {
    v43 = 0LL;
    if ( !v84 )
      v43 = *(_QWORD *)(v16 + 32);
    if ( a9 )
      v43 = *a9 >> 12;
    BitmapRangeToClean = CcFindBitmapRangeToClean(v16, v43);
    v45 = *(_QWORD *)(BitmapRangeToClean + 16);
    v46 = *(unsigned int *)(BitmapRangeToClean + 28);
    if ( v17 > (__int64)(v46 + v45) )
      v17 = v45 + *(unsigned int *)(BitmapRangeToClean + 24);
    v47 = *(_QWORD *)(BitmapRangeToClean + 40) + 4 * (v46 >> 5);
    v48 = v71;
    v18 = v71;
LABEL_69:
    v70 = v47;
    v49 = *(_QWORD *)(BitmapRangeToClean + 16);
    v50 = v49 + *(unsigned int *)(BitmapRangeToClean + 24);
    if ( v17 >= v50 )
      v50 = v17;
    v51 = v50;
    v67 = v50;
    v74 = v50 - v49;
    v12 = (int *)(*(_QWORD *)(BitmapRangeToClean + 40) + 4 * ((unsigned __int64)(unsigned int)(v50 - v49) >> 5));
    v13 = -1 << (v50 % 32);
    v52 = *v12;
    if ( (v13 & *v12) == 0 )
    {
      v13 = -1;
      v51 = v50 & 0xFFFFFFFFFFFFFFE0uLL;
      v60 = v50 - v49;
      v61 = v70;
      while ( 1 )
      {
        ++v12;
        v51 += 32LL;
        v67 = v51;
        if ( (unsigned __int64)v12 > v61 )
        {
          if ( !v44 )
            *(_DWORD *)(BitmapRangeToClean + 28) = v60 - 1;
          v15 = a6;
          do
          {
            BitmapRangeToClean = *(_QWORD *)BitmapRangeToClean;
            if ( BitmapRangeToClean == v76 + 16 )
            {
              if ( v44 )
                goto LABEL_14;
              BitmapRangeToClean = *(_QWORD *)BitmapRangeToClean;
            }
          }
          while ( !*(_DWORD *)(BitmapRangeToClean + 32) );
          v62 = *(_QWORD *)(BitmapRangeToClean + 16);
          v63 = *(unsigned int *)(BitmapRangeToClean + 24);
          if ( v14 < v63 + v62 )
            goto LABEL_14;
          v64 = *(unsigned int *)(BitmapRangeToClean + 28);
          if ( v67 > (__int64)(v62 + v64) )
            goto LABEL_14;
          v65 = *(_QWORD *)(BitmapRangeToClean + 40);
          v12 = (int *)(v65 + 4 * ((unsigned __int64)(unsigned int)v63 >> 5));
          v70 = v65 + 4 * (v64 >> 5);
          v67 = v62 + ((unsigned int)v63 & 0xFFFFFFE0);
          v60 = *(_DWORD *)(BitmapRangeToClean + 24);
          v74 = v60;
          v51 = v67;
          v61 = v70;
        }
        v52 = *v12;
        if ( *v12 )
          break;
        v44 = v84;
      }
    }
    v13 = -v13;
    if ( (v52 & v13) == 0 )
    {
      do
      {
        v13 *= 2;
        ++v51;
      }
      while ( (*v12 & v13) == 0 );
      v67 = v51;
      v18 = v48;
    }
    if ( a2 )
    {
      if ( v51 < (v18 + *a2 + 4095) >> 12 )
      {
        if ( *(_QWORD *)(v10 + 16) == v10 + 16 )
          goto LABEL_76;
        v68 = 1;
      }
      goto LABEL_14;
    }
LABEL_76:
    v53 = v67;
LABEL_77:
    if ( (gCcTrace & 1) != 0 )
    {
      if ( a2 )
        v66 = *a2;
      else
        v66 = 0LL;
      DbgPrintEx(
        0x7Fu,
        0,
        "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
        v66,
        v84,
        (const void *)v10,
        v53,
        (const void *)BitmapRangeToClean,
        *(_DWORD *)(BitmapRangeToClean + 32));
      v53 = v67;
    }
    while ( (*v12 & v13) != 0 && (!a2 || v53 + *v15 < (unsigned int)((*a2 + v84 + 4095LL) >> 12)) )
    {
      if ( (unsigned __int64)v12 > *(_QWORD *)(BitmapRangeToClean + 40)
                                 + 4 * ((unsigned __int64)*(unsigned int *)(BitmapRangeToClean + 28) >> 5) )
        KeBugCheckEx(0x34u, 0x12A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( !a2 && *v15 >= CcMaxLazyWritePages )
        break;
      *v12 -= v13;
      ++*v15;
      v13 *= 2;
      if ( !v13 )
      {
        ++v12;
        v13 = 1;
        if ( (unsigned __int64)v12 > v70 )
          break;
      }
    }
    v54 = v76;
    v55 = *(_DWORD *)(v76 + 4) - *v15;
    if ( *v15 >= *(_DWORD *)(v76 + 4) )
      v55 = 0;
    *(_DWORD *)(v76 + 4) = v55;
    v56 = *(_DWORD *)(v54 + 8);
    if ( v56 < *v15 )
      KeBugCheckEx(0x34u, 0x12D4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v54 + 8) = v56 - *v15;
    *(_DWORD *)(BitmapRangeToClean + 32) -= *v15;
    v57 = v79;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v79 + 768), &LockHandle);
    CcDeductDirtyPages(v10, *v15);
    if ( *(_DWORD *)(v57 + 976) > *v15 )
      *(_DWORD *)(v57 + 976) -= *v15;
    else
      *(_DWORD *)(v57 + 976) = 0;
    if ( !*(_DWORD *)(v10 + 112) )
      CcInsertIntoCleanSharedCacheMapList(v10);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( *(_DWORD *)(BitmapRangeToClean + 32) )
    {
      if ( *(_DWORD *)(BitmapRangeToClean + 24) == v74 )
        *(_DWORD *)(BitmapRangeToClean + 24) = v67 + *v15 - *(_DWORD *)(BitmapRangeToClean + 16);
      if ( !v84 )
      {
        v58 = v67;
        *(_QWORD *)(v54 + 32) = v67 + *v15;
        goto LABEL_95;
      }
    }
    else
    {
      *(_DWORD *)(BitmapRangeToClean + 24) = -1;
      *(_DWORD *)(BitmapRangeToClean + 28) = 0;
      *(_QWORD *)(v54 + 32) = *(_QWORD *)(BitmapRangeToClean + 16) + 0x2000LL;
    }
    v58 = v67;
LABEL_95:
    if ( *(_QWORD *)(v10 + 16) == v10 + 16 )
      *(_DWORD *)(v10 + 200) = *(_DWORD *)(v54 + 4);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 288));
    *v15 <<= 12;
    *a5 = v58 << 12;
    *a7 = 0LL;
    goto LABEL_59;
  }
  v17 = *a2 >> 12;
  v67 = v17;
  v18 = v84;
  v14 = (v84 + *a2 - 1) >> 12;
  v19 = v17;
  *(_QWORD *)(v16 + 40) = -1LL;
  v20 = v16 + 16;
  for ( BitmapRangeToClean = *(_QWORD *)(v16 + 16); ; BitmapRangeToClean = *(_QWORD *)BitmapRangeToClean )
  {
    if ( BitmapRangeToClean == v20 )
    {
      v19 = 0LL;
      continue;
    }
    v21 = *(unsigned int *)(BitmapRangeToClean + 28);
    v22 = *(_QWORD *)(BitmapRangeToClean + 16);
    v23 = v22 + v21;
    if ( v19 <= (__int64)(v22 + v21) )
    {
      if ( *(_DWORD *)(BitmapRangeToClean + 32) )
        break;
    }
  }
  if ( v14 >= v22 + *(unsigned int *)(BitmapRangeToClean + 24) && v17 <= v23 )
  {
    v59 = *(_QWORD *)(BitmapRangeToClean + 40);
    if ( v14 < v23 )
      v47 = v59 + 4 * (((unsigned __int64)(v14 - v22) >> 5) & 0x7FFFFFF);
    else
      v47 = v59 + 4 * (v21 >> 5);
    v48 = v71;
    v44 = v84;
    goto LABEL_69;
  }
LABEL_14:
  v24 = (__int64 *)(v10 + 208);
  v72 = (__int64 *)(v10 + 208);
  v25 = v10 + 16;
  v73 = v10 + 16;
  v26 = v78;
  while ( 2 )
  {
    v27 = *(_QWORD *)(v10 + 24) - 16LL;
    v75 = v27;
    v28 = a1;
    if ( (*(_DWORD *)(a1 + 152) & 0x200) == 0 )
      goto LABEL_42;
    v29 = v24;
    if ( a2 )
      v29 = a2;
    if ( *v29 )
    {
      v77 = *v29 + 4096;
      Bcb = CcFindBcb(a1, v29, &v77, &v75);
      v28 = a1;
      v25 = v73;
      v24 = v72;
      if ( Bcb )
        v27 = v75;
      else
        v27 = *(_QWORD *)(v75 + 24) - 16LL;
      goto LABEL_42;
    }
    while ( 2 )
    {
      v25 = v28 + 16;
      while ( 1 )
      {
LABEL_42:
        if ( v27 + 16 == v25 )
          goto LABEL_48;
        if ( *(_WORD *)v27 != 765 )
          goto LABEL_44;
        if ( (*(_DWORD *)(v28 + 152) & 0x1000000) == 0 || !v85 || *(_QWORD *)(v27 + 48) <= (__int64)v85->Next )
          break;
        v27 = *(_QWORD *)(v27 + 24) - 16LL;
        ++CcDbgLsnLargerThanHint;
      }
      if ( a2 && *a2 + v84 <= *(_QWORD *)(v27 + 8) )
        goto LABEL_48;
      v31 = *v15;
      if ( !(_DWORD)v31 )
      {
        if ( !*(_BYTE *)(v27 + 2) )
          goto LABEL_44;
        if ( !a2 )
        {
          if ( *(_QWORD *)(v27 + 8) >= *v24 )
            goto LABEL_110;
          goto LABEL_44;
        }
        if ( *a2 >= *(_QWORD *)(v27 + 32) )
        {
LABEL_44:
          v27 = *(_QWORD *)(v27 + 24) - 16LL;
          goto LABEL_42;
        }
LABEL_110:
        if ( v68 )
        {
          v53 = v67;
          if ( v67 <= (unsigned int)(*(__int64 *)(v27 + 8) >> 12) )
          {
            v10 = a1;
            goto LABEL_77;
          }
        }
LABEL_30:
        ++*(_DWORD *)(v27 + 64);
        KeReleaseGuardedMutex(Mutex);
        if ( (*(_DWORD *)(a1 + 152) & 0x202) == 0x200 )
        {
          if ( ExAcquireResourceExclusiveLite((PERESOURCE)(v27 + 72), *v15 == 0) )
          {
            ExAcquireFastMutex(Mutex);
            if ( *(_BYTE *)(v27 + 2) )
            {
              v28 = a1;
              if ( (*(_DWORD *)(a1 + 152) & 0x1000000) == 0 || !v85 || *(_QWORD *)(v27 + 48) <= (__int64)v85->Next )
                goto LABEL_36;
              ++CcDbgLsnLargerThanHint;
            }
            KeReleaseGuardedMutex(Mutex);
            CcUnpinFileDataEx((char *)v27, 0, 0);
            ExAcquireFastMutex(Mutex);
            if ( !*v15 )
            {
              v28 = a1;
              v34 = *(_QWORD *)(a1 + 24);
LABEL_40:
              v27 = v34 - 16;
              v24 = (__int64 *)(v28 + 208);
              continue;
            }
          }
          else
          {
            CcUnpinFileDataEx((char *)v27, 1, 0);
            ExAcquireFastMutex(Mutex);
          }
          v25 = v73;
LABEL_48:
          v32 = a5;
          goto LABEL_49;
        }
        CcUnpinFileDataEx((char *)v27, 1, 2);
        ExAcquireFastMutex(Mutex);
        v28 = a1;
LABEL_36:
        v68 = 0;
        if ( !*v15 )
          *a5 = *(_QWORD *)(v27 + 8);
        *a7 = v27;
        *v15 += *(_DWORD *)(v27 + 4);
        if ( (*(_DWORD *)(v28 + 152) & 0x3000000) != 0 && *(_QWORD *)(v27 + 48) > v26 )
          v26 = *(_QWORD *)(v27 + 48);
        v34 = *(_QWORD *)(v27 + 24);
        goto LABEL_40;
      }
      break;
    }
    v32 = a5;
    if ( *(_BYTE *)(v27 + 2) )
    {
      v33 = *(_QWORD *)(v27 + 8);
      if ( v33 == *a5 + v31 && !*(_DWORD *)(v27 + 64) && (v33 & 0x1FFFFFF) != 0 )
        goto LABEL_30;
    }
LABEL_49:
    if ( v68 )
    {
      v10 = a1;
      goto LABEL_76;
    }
    v35 = *v15;
    if ( !(_DWORD)v35 )
    {
      v24 = v72;
      if ( !*v72 || a2 )
      {
        v36 = a1;
        goto LABEL_54;
      }
      *v72 = 0LL;
      v10 = a1;
      continue;
    }
    break;
  }
  v36 = a1;
  if ( !a2 )
  {
    *(_QWORD *)(a1 + 208) = *v32 + v35;
    v37 = *v15 >> 12;
    if ( *(_DWORD *)(a1 + 200) <= v37 )
      *(_DWORD *)(a1 + 200) = 0;
    else
      *(_DWORD *)(a1 + 200) -= v37;
  }
LABEL_54:
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v36 + 288));
  if ( v26 )
  {
    v41 = *(_QWORD **)(v36 + 248);
    if ( (*(_DWORD *)(v36 + 152) & 0x2000000) == 0 )
      v41 = (_QWORD *)*v41;
    guard_dispatch_icall_no_overrides(v41, v26);
  }
LABEL_59:
  if ( a8 )
  {
    LOBYTE(v38) = 1;
    PsBoostThreadIo((LegacyAutoBoost *)KeGetCurrentThread(), v38, v39, v40);
  }
  return *v15 != 0;
}
