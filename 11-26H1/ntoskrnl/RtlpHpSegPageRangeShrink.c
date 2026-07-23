/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x14034FBC0
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1403494AC (RtlpHpSegContextCompact.c)
 *     RtlpHpSegAlloc @ 0x14034D14C (RtlpHpSegAlloc.c)
 *     RtlpHpSegFreeInternal @ 0x140354B48 (RtlpHpSegFreeInternal.c)
 *     RtlpHpSegSuballocatorFree @ 0x1404D5DC0 (RtlpHpSegSuballocatorFree.c)
 * Callees:
 *     RtlpHpSegLockAcquire @ 0x14027ECE0 (RtlpHpSegLockAcquire.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14034F8C0 (RtlpHpSegPageRangeCoalesce.c)
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     RtlCSparseBitmapBitsClear @ 0x1403501DC (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x140350500 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x140351280 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 */

void __fastcall RtlpHpSegPageRangeShrink(
        __int64 a1,
        signed __int64 i,
        volatile signed __int64 *a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // r14
  int v6; // r15d
  unsigned int v7; // r13d
  char *v8; // rax
  char v9; // cl
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  char v13; // al
  unsigned int v14; // edx
  __int64 v15; // rax
  char v16; // r8
  __int64 v17; // rsi
  char v18; // al
  __int64 v19; // rdx
  BOOLEAN v20; // al
  __int64 v21; // rax
  signed __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  unsigned int v25; // esi
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  signed __int64 v30; // [rsp+68h] [rbp+10h]
  int v31; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp+20h]

  v31 = (int)a3;
  v30 = i;
  v5 = i;
  v6 = *(unsigned __int8 *)(i + 31);
  v7 = v6 - 1;
  if ( (unsigned int)(v6 - 1) > 1 )
  {
    v8 = (char *)(i + 56);
    i = (unsigned int)(v6 - 2);
    do
    {
      v9 = *v8;
      v8 += 32;
      *(v8 - 32) = v9 & 0xFE;
      --i;
    }
    while ( i );
  }
  v10 = 0LL;
  if ( (*(_DWORD *)(v5 + 8) & 4) != 0 )
  {
    i = *(_QWORD *)a1 & v5;
    v11 = (((i + (unsigned __int64)((unsigned int)((v5 - i) >> 5) << *(_BYTE *)(a1 + 8))) >> 9) & 0x7FFFFFFFF8LL)
        - 0x98000000000LL;
    v12 = 0LL;
    v32 = v11 + 8 * ((unsigned int)(v6 << *(_BYTE *)(a1 + 9)) - 1LL);
    if ( v11 <= v32 )
    {
      do
      {
        if ( v12 && (v11 & 0xFFF) != 0
          || (v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned __int8)MmIsAddressValidEx(v11)) )
        {
          if ( (*(_QWORD *)v11 & 0x201LL) == 0x201 )
          {
            a3 = (volatile signed __int64 *)(((((__int64)(v11 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
            for ( i = *a3; (i & 0x200) != 0; i = v22 )
            {
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v22 = _InterlockedCompareExchange64(a3, i & 0xFFFFFFFFFFFFFDDFuLL | 0x20, i);
              if ( i == v22 )
              {
                _InterlockedDecrement64(&qword_140E2C8C0);
                break;
              }
            }
          }
          v11 += 8LL;
          v7 = v6 - 1;
        }
        else
        {
          v11 = ((v12 << 25) + 0x10000000) >> 16;
        }
      }
      while ( v11 <= v32 );
      v10 = 0LL;
      v5 = v30;
    }
  }
  v13 = RtlpHpSegLockAcquire(a1, i, (__int64)a3, a4);
  v14 = *(_DWORD *)(v5 + 28);
  LOBYTE(v31) = v13;
  if ( HIBYTE(v14) != v6 )
  {
    *(_BYTE *)(v5 + 31) = 0;
    *(_WORD *)(v5 + 28) = -1;
  }
  *(_BYTE *)(v5 + 24) |= 2u;
  *(_BYTE *)(32LL * v7 + v5 + 26) = v6 - 1;
  *(_WORD *)(v5 + 28) = v14;
  *(_BYTE *)(v5 + 31) = v6;
  *(_DWORD *)v5 = -857879331;
  *(_BYTE *)(v5 + 24) &= 0xE3u;
  v15 = RtlpHpSegPageRangeCoalesce(a1, v5, 0, (unsigned __int8 *)&v31);
  v16 = *(_BYTE *)(a1 + 13);
  v17 = v15;
  if ( (v16 & 0x10) == 0 || *(unsigned __int8 *)(v15 + 31) != 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    if ( (v16 & 7) != 0 )
      v18 = RtlpHpSegPageRangeComputeLargePageCost(
              a1,
              (*(_QWORD *)a1 & v15) + ((unsigned int)((v15 - (*(_QWORD *)a1 & v15)) >> 5) << *(_BYTE *)(a1 + 8)),
              *(unsigned __int8 *)(v15 + 31) << *(_BYTE *)(a1 + 8));
    else
      v18 = 4;
    *(_BYTE *)(v17 + 30) = v18;
    v19 = *(_QWORD *)(a1 + 96);
    if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
    {
      if ( !v19 )
      {
        v19 = 0LL;
LABEL_49:
        v20 = 0;
LABEL_24:
        RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v19, v20, (PRTL_BALANCED_NODE)v17);
        _InterlockedAdd64(
          (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
          (unsigned __int16)~*(_WORD *)(v17 + 28));
        goto LABEL_38;
      }
      v19 ^= a1 + 96;
    }
    v20 = 0;
    if ( v19 )
    {
      while ( 1 )
      {
        while ( *(_DWORD *)(v17 + 28) < *(_DWORD *)(v19 + 28) )
        {
          v29 = *(_QWORD *)v19;
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v29 )
              goto LABEL_49;
            v29 ^= v19;
          }
          if ( !v29 )
            goto LABEL_49;
          v19 = v29;
        }
        v21 = *(_QWORD *)(v19 + 8);
        if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
        {
          if ( !v21 )
            break;
          v21 ^= v19;
        }
        if ( !v21 )
          break;
        v19 = v21;
      }
      v20 = 1;
    }
    goto LABEL_24;
  }
  v10 = (_QWORD *)(v15 & *(_QWORD *)a1);
  *(_DWORD *)v15 = -857879297;
  if ( v10 )
  {
    v23 = *v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v24 = (_QWORD *)v10[1], (_QWORD *)*v24 != v10) )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    --*(_QWORD *)(a1 + 88);
  }
LABEL_38:
  RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a1 + 64), *(_DWORD *)(a1 + 40) & 1, v31);
  if ( v10 )
  {
    RtlCSparseBitmapBitsClear(
      &ExpUuidLock.CycleTime,
      2 * (((unsigned __int64)v10 - ExpUuidLock.ThreadLock) >> 20),
      2 * ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 20));
    v25 = 2;
    v26 = 4LL * *(unsigned __int8 *)(a1 + 10);
    v27 = (unsigned __int64)&v10[v26];
    if ( &v10[v26] < v10 + 1024 )
    {
      do
      {
        v28 = (unsigned __int16)~*(_WORD *)(v27 + 28);
        v27 += 32 * ((unsigned __int64)*(unsigned int *)(v27 + 28) >> 24);
        v25 += v28;
      }
      while ( v27 < (unsigned __int64)(v10 + 1024) );
    }
    RtlpHpSegMgrRelease(a1, v10, v25);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)v25);
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1),
      -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12));
  }
}
