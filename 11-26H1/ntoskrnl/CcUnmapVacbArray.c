/*
 * XREFs of CcUnmapVacbArray @ 0x14039CC50
 * Callers:
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 *     CcFlushCachePreProcess @ 0x14039AF28 (CcFlushCachePreProcess.c)
 *     CcUnmapAndPurge @ 0x14039BE28 (CcUnmapAndPurge.c)
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 *     CcUnmapFileOffsetFromSystemCache @ 0x14039E980 (CcUnmapFileOffsetFromSystemCache.c)
 *     CcSetFileSizesEx @ 0x1403A0060 (CcSetFileSizesEx.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1402C2C60 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402C2CE0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcSetVacbLargeOffset @ 0x1402C3430 (CcSetVacbLargeOffset.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     CcSetVacbInFreeList @ 0x1402C49B0 (CcSetVacbInFreeList.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x140AFCD38 (CcUnmapVacb.c)
 */

char __fastcall CcUnmapVacbArray(__int64 a1, __int64 *a2, unsigned int a3, struct _KLOCK_ENTRIES *a4, char a5, char a6)
{
  char v6; // r14
  unsigned int v7; // r12d
  int v8; // r13d
  __int64 v10; // rax
  signed __int64 v11; // rbx
  signed __int64 v12; // rdi
  AutoBoost *v13; // rax
  AutoBoost *v14; // rbp
  char v15; // r11
  __int64 v16; // r8
  __int64 v17; // r14
  __int64 v18; // r10
  int v19; // eax
  int v20; // ecx
  int v21; // r9d
  __int64 v22; // r14
  __int64 v23; // rdx
  KIRQL v24; // al
  __int64 v25; // rcx
  __int64 v26; // r8
  KIRQL v27; // si
  char v28; // di
  signed __int64 v29; // rax
  signed __int64 v30; // rdx
  __int64 v31; // rtt
  void *v33; // rsi
  __int64 v34; // r8
  struct _KLOCK_ENTRIES *v35; // r9
  signed __int32 v36[8]; // [rsp+0h] [rbp-68h] BYREF
  signed __int64 v37; // [rsp+30h] [rbp-38h]
  __int64 v38; // [rsp+38h] [rbp-30h]

  v6 = (char)a4;
  v7 = 0;
  v37 = 0LL;
  v8 = 0;
  v38 = *(_QWORD *)(a1 + 536);
  if ( !*(_QWORD *)(a1 + 88) )
    return 1;
  if ( a2 )
  {
    v10 = *a2;
    v11 = *a2 & 0xFFFFFFFFFFFC0000uLL;
    v37 = v11;
    if ( a3 )
      v12 = v10 + a3;
    else
      v12 = *(_QWORD *)(a1 + 376);
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 32);
    v11 = v37;
  }
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v8 = 1;
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
  }
  v13 = (AutoBoost *)KeAbPreAcquire(a1 + 104, 0LL, 0LL, a4);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 104), v13, a1 + 104);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v14 + 33) |= 2u;
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  if ( v6 )
  {
    v7 = 1;
    *(_QWORD *)(a1 + 344) = v12;
  }
LABEL_14:
  v15 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v11 >= v12 )
        {
          v28 = 1;
          goto LABEL_34;
        }
        v16 = *(_QWORD *)(a1 + 32);
        if ( v11 < v16 )
          break;
LABEL_26:
        v11 += 0x40000LL;
        v37 = v11;
      }
      v17 = *(_QWORD *)(a1 + 88);
      if ( v16 <= 0x2000000 )
      {
        v22 = *(_QWORD *)(v17 + 8 * ((unsigned __int64)(unsigned int)v37 >> 18));
      }
      else
      {
        v18 = v11;
        v19 = 0;
        v20 = 25;
        do
        {
          v21 = v20;
          v20 += 7;
          ++v19;
        }
        while ( v16 > 1LL << v20 );
        v22 = *(_QWORD *)(v17 + 8 * (v11 >> v21));
        if ( !v22 )
          goto LABEL_26;
        do
        {
          if ( !v19 )
            break;
          v23 = 1LL << v21;
          v21 -= 7;
          v18 &= v23 - 1;
          --v19;
          v22 = *(_QWORD *)(v22 + 8 * (v18 >> v21));
        }
        while ( v22 );
      }
      if ( !v22 )
        goto LABEL_26;
      if ( !*(_WORD *)(v22 + 16) )
      {
        if ( *(__int64 *)(a1 + 32) > 0x2000000 )
          CcSetVacbLargeOffset(a1, v11, 0LL, 0LL);
        else
          *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v37 >> 18)) = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 548));
        if ( *(_DWORD *)(v38 + 1248) < LODWORD(EmpParseLock.PropagateBoostsEntry.Next) )
          v7 |= 2u;
        else
          v7 &= ~2u;
        CcUnmapVacb(v22, a1, v7);
        v24 = KeAcquireQueuedSpinLock(4uLL);
        v25 = v38;
        v26 = v7 >> 1;
        v27 = v24;
        LOBYTE(v26) = (v7 & 2) != 0;
        *(_QWORD *)(v22 + 8) = 0LL;
        CcSetVacbInFreeList(v25, (_QWORD *)v22, v26);
        KeReleaseQueuedSpinLock(4uLL, v27);
        v15 = 1;
        goto LABEL_26;
      }
      if ( !a6 )
        break;
      v11 += 0x40000LL;
      v37 = v11;
      if ( a5 )
        KeBugCheckEx(0x34u, 0xC72uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
    if ( !a5 )
      break;
    v33 = *(void **)(a1 + 192);
    if ( v33 )
    {
      if ( !v15 )
      {
        CcReleaseBcbLockAndVacbLock(v8, a1);
        KeWaitForSingleObject(v33, Executive, 0, 0, 0LL);
        CcAcquireBcbLockAndVacbLock(v8, a1, v34, v35);
        goto LABEL_14;
      }
      KeResetEvent(*(PRKEVENT *)(a1 + 192));
      _InterlockedOr(v36, 0);
      v15 = 0;
    }
    else
    {
      *(_WORD *)(a1 + 353) = 1536;
      *(_BYTE *)(a1 + 352) = 0;
      *(_DWORD *)(a1 + 356) = 0;
      v15 = 0;
      *(_QWORD *)(a1 + 368) = a1 + 360;
      *(_QWORD *)(a1 + 360) = a1 + 360;
      _InterlockedExchange64((volatile __int64 *)(a1 + 192), a1 + 352);
    }
  }
  v28 = 0;
LABEL_34:
  _m_prefetchw((const void *)(a1 + 104));
  v29 = *(_QWORD *)(a1 + 104);
  v30 = v29 - 16;
  if ( (v29 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v30 = 0LL;
  if ( (v29 & 2) != 0
    || (v31 = *(_QWORD *)(a1 + 104),
        v31 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v30, v29)) )
  {
    ExfReleasePushLock((_QWORD *)(a1 + 104));
  }
  KeAbPostRelease(a1 + 104);
  if ( v8 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
  return v28;
}
