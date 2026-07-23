/*
 * XREFs of EtwpBufferingModeFlush @ 0x140A12844
 * Callers:
 *     EtwpFlushTrace @ 0x140AB2FD0 (EtwpFlushTrace.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402191F4 (EtwpPrepareDirtyBuffer.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     EtwpLockUnlockBufferList @ 0x140441BF0 (EtwpLockUnlockBufferList.c)
 *     EtwpGetEnableInfoIndex @ 0x140475ED0 (EtwpGetEnableInfoIndex.c)
 *     EtwpQueryUsedProcessorCount @ 0x140482564 (EtwpQueryUsedProcessorCount.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1406CB8FC (EtwpBufferingModeCompressionFlush.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpSendDataBlock @ 0x140914478 (EtwpSendDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x140914CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpPrepareHeader @ 0x140A12BF8 (EtwpPrepareHeader.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x140A12C80 (EtwpFindAndLockBufferForFlushing.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140A13E18 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFlushBuffer @ 0x140A13E4C (EtwpFlushBuffer.c)
 *     EtwpFlushBufferToLogfile @ 0x140A14718 (EtwpFlushBufferToLogfile.c)
 *     EtwpCreateLogFile @ 0x140A16128 (EtwpCreateLogFile.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     EtwpFinalizeHeader @ 0x140ABCAB0 (EtwpFinalizeHeader.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // edi
  __int64 v3; // r15
  __int64 v5; // rcx
  unsigned int UsedProcessorCount; // esi
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int32 v13; // eax
  signed __int64 j; // rcx
  signed __int64 v15; // rax
  volatile signed __int64 *v16; // rdi
  unsigned int v17; // r10d
  signed __int64 v18; // rsi
  unsigned int v19; // edx
  unsigned int v20; // eax
  __int64 v21; // r8
  signed __int64 v22; // r9
  signed __int64 v23; // rax
  __int64 m; // rbx
  _QWORD *v25; // rbx
  void *v26; // rcx
  __int64 v28; // rbp
  unsigned int *v29; // rcx
  __int64 v30; // rbx
  signed __int64 v31; // rtt
  unsigned int *v32; // rdx
  __int64 v33; // rcx
  signed __int64 v34; // r9
  __int64 v35; // r8
  signed __int64 v36; // rax
  __int64 v37; // rdx
  signed __int32 v38; // esi
  signed __int32 v39; // edi
  __int64 v40; // rdx
  unsigned int *v41; // rdi
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  char *k; // rax
  unsigned int *v45; // rcx
  signed __int32 v46; // eax
  signed __int64 v47; // rtt
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  _QWORD *GuidEntryByGuid; // rax
  struct _KLOCK_ENTRIES *v50; // r9
  __int64 v51; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v53; // rsi
  AutoBoost *v54; // rax
  void *v55; // rdx
  AutoBoost *v56; // rdi
  _QWORD **v57; // rsi
  __int16 v58; // dx
  _QWORD *i; // rdi
  signed __int64 *v60; // rbx
  signed __int64 v61; // rax
  signed __int64 v62; // rdx
  signed __int64 v63; // rtt
  __int64 *v64; // rbx
  signed __int64 v65; // rax
  signed __int64 v66; // rdx
  __int64 v67; // rtt
  __int64 v68; // rbp
  __int64 v69; // rsi
  int v70; // [rsp+20h] [rbp-B8h] BYREF
  _DWORD v71[19]; // [rsp+28h] [rbp-B0h] BYREF
  __int16 v72; // [rsp+76h] [rbp-62h]
  int v73; // [rsp+98h] [rbp-40h]

  v1 = a1[1];
  v2 = 0;
  v3 = *a1;
  v70 = 0;
  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1);
  if ( LOBYTE(stru_140F03830.CycleTime) > 3u )
    _InterlockedOr((volatile signed __int32 *)(v5 + 816), 4u);
  if ( !*(_QWORD *)(v5 + 192) )
    return 0LL;
  LODWORD(v7) = EtwpCreateLogFile(v5, 0LL, 0LL);
  if ( (int)v7 < 0 )
    goto LABEL_35;
  if ( (a1[3] & 0x40000) != 0 )
  {
    memset_0(v71, 0, 0x78uLL);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    GuidEntryByGuid = EtwpFindGuidEntryByGuid((__int64)CurrentServerSiloGlobals[52].Flink, qword_140039880, 0);
    v51 = (__int64)GuidEntryByGuid;
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      v53 = GuidEntryByGuid + 83;
      --CurrentThread->KernelApcDisable;
      v54 = (AutoBoost *)KeAbPreAcquire((__int64)(GuidEntryByGuid + 83), 0LL, 0LL, v50);
      v56 = v54;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v53, 0LL) )
        ExfAcquirePushLockExclusiveEx(v53, v54, (__int64)v53);
      if ( v56 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v56, v55);
        else
          *((_BYTE *)v56 + 10) = 1;
      }
      v57 = (_QWORD **)(v51 + 56);
      *(_QWORD *)(v51 + 672) = KeGetCurrentThread();
      if ( *v57 == v57 || !EtwpGetEnableInfoIndex(v51, *a1, &v70) )
      {
        *(_QWORD *)(v51 + 672) = 0LL;
        v60 = (signed __int64 *)(v51 + 664);
        v61 = *v60;
        v62 = *v60 - 16;
        if ( (*v60 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v62 = 0LL;
        _m_prefetchw(v60);
        if ( (v61 & 2) != 0 || (v63 = *v60, v63 != _InterlockedCompareExchange64(v60, v62, v61)) )
          ExfReleasePushLock(v60);
        KeAbPostRelease((unsigned __int64)v60);
        KeLeaveCriticalRegion();
      }
      else
      {
        v71[0] = 3;
        v73 = 2;
        v71[18] = 2;
        v72 = v58;
        for ( i = *v57; i != v57; i = (_QWORD *)*i )
          EtwpSendDataBlock((__int64)i, (__int64)v71);
        *(_QWORD *)(v51 + 672) = 0LL;
        v64 = (__int64 *)(v51 + 664);
        _m_prefetchw(v64);
        v65 = *v64;
        v66 = *v64 - 16;
        if ( (*v64 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v66 = 0LL;
        if ( (v65 & 2) != 0 || (v67 = *v64, v67 != _InterlockedCompareExchange64(v64, v66, v65)) )
          ExfReleasePushLock(v64);
        KeAbPostRelease((unsigned __int64)v64);
        KeLeaveCriticalRegion();
        v68 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
        if ( v68 )
        {
          do
          {
            v69 = *(_QWORD *)(v68 + 32);
            EtwpWaitForBufferReferenceCount(v68);
            *(_QWORD *)(v68 + 56) = 0LL;
            *(_QWORD *)(v68 + 64) = 0LL;
            v7 = (unsigned int)EtwpFlushBuffer(a1, v68, v69 == 0);
            *(_WORD *)(v68 + 52) = 0;
            guard_dispatch_icall_no_overrides(v7, v68);
            v68 = v69;
          }
          while ( v69 );
        }
        EtwpFinalizeHeader(a1, 0LL);
      }
    }
    goto LABEL_35;
  }
  if ( UsedProcessorCount )
  {
    v8 = 0LL;
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
      {
        v11 = a1 + 32;
      }
      else
      {
        v9 = *((_QWORD *)a1 + 170);
        if ( v9 == EtwpHostSiloState )
          v10 = *(_QWORD *)(*(_QWORD *)(KeGetPrcb(v2) + 35816) + 320LL);
        else
          v10 = *(_QWORD *)((v8 << 6) + *(_QWORD *)(v9 + 4416));
        v11 = (_QWORD *)(v10 + 8 * v3);
      }
      v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v12 )
      {
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), v1);
        if ( v13 <= v1 )
          *(_DWORD *)(v12 + 4) = v13;
        _m_prefetchw(v11);
        for ( j = *v11; (v12 ^ j) <= 0xF; j = v15 )
        {
          v15 = _InterlockedCompareExchange64(v11, 0LL, j);
          if ( j == v15 )
            break;
        }
        if ( (j & 0xFFFFFFFFFFFFFFF0uLL) == v12 )
        {
          _InterlockedAdd((volatile signed __int32 *)((j & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(j & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v12);
        }
      }
      v8 = ++v2;
    }
    while ( v2 < UsedProcessorCount );
  }
  EtwpLockUnlockBufferList((__int64)a1);
  if ( (a1[3] & 0x4000000) != 0 )
  {
    EtwpBufferingModeCompressionFlush((__int64)a1);
    v28 = *((_QWORD *)a1 + 101) + 1LL;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v28 < 0 )
              goto LABEL_92;
            --v28;
            v29 = 0LL;
            v30 = 0LL;
            if ( *((unsigned int **)a1 + 10) != a1 + 20 )
              v29 = (unsigned int *)*((_QWORD *)a1 + 10);
            while ( v29 )
            {
              v37 = *(_QWORD *)(*((_QWORD *)v29 + 2) + 24LL);
              if ( v37 == v28 )
              {
                v30 = *((_QWORD *)v29 + 2);
                break;
              }
              if ( v37 < v28 && (!v30 || v37 > *(_QWORD *)(v30 + 24)) )
                v30 = *((_QWORD *)v29 + 2);
              v29 = *(unsigned int **)v29;
              if ( v29 == a1 + 20 )
                v29 = 0LL;
            }
            if ( !v30 )
            {
LABEL_92:
              v25 = a1 + 394;
              goto LABEL_34;
            }
            v38 = *(_DWORD *)(v30 + 44);
            if ( v38 == 5 || v38 == 4 )
            {
              v39 = _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 44), 3, v38);
              if ( v38 == v39 )
                break;
            }
          }
          if ( *(_QWORD *)(v30 + 24) == v28 )
            break;
          _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 44), v38, 3);
        }
        EtwpWaitForBufferReferenceCount(v30);
        if ( v39 != 5 )
          break;
        if ( *(_DWORD *)(v30 + 8) == 72 )
        {
          _InterlockedExchange((volatile __int32 *)(v30 + 44), 0);
        }
        else
        {
          v40 = *(unsigned int *)(v30 + 8);
          v41 = (unsigned int *)(v30 + 72);
          *(_QWORD *)(v30 + 104) = 0LL;
          v42 = v30 + v40;
          v43 = *(unsigned int *)(v30 + 72);
          for ( k = (char *)(v30 + 72 + v43); (unsigned __int64)k < v42; k = (char *)v41 + *v41 )
          {
            v45 = v41;
            v41 = (unsigned int *)((char *)v41 + (unsigned int)v43);
            *((_QWORD *)v41 + 4) = v45;
            LODWORD(v43) = *v41;
          }
          do
          {
            if ( (unsigned int)EtwpPrepareHeader(a1, v41, 64LL) != -2147483614 )
              LODWORD(v7) = EtwpFlushBufferToLogfile(a1, v41);
            v41 = (unsigned int *)*((_QWORD *)v41 + 4);
          }
          while ( v41 );
          v46 = 5;
LABEL_91:
          _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 44), v38, v46);
          if ( (int)v7 < 0 )
            goto LABEL_92;
        }
      }
      if ( v39 == 4 )
      {
        if ( (unsigned int)EtwpPrepareHeader(a1, v30, 0LL) != -2147483614 )
          LODWORD(v7) = EtwpFlushBufferToLogfile(a1, v30);
        v46 = 4;
        goto LABEL_91;
      }
    }
  }
  v16 = (volatile signed __int64 *)(a1 + 394);
  v17 = EtwpQueryUsedProcessorCount((__int64)a1);
  v18 = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 197, *((_QWORD *)a1 + 101), -1LL) != -1 )
    return 3221225539LL;
  if ( *((_QWORD *)a1 + 195) )
  {
    v19 = 0;
    if ( v17 )
    {
      v20 = 0;
      do
      {
        v21 = v20;
        v22 = *(_QWORD *)(*((_QWORD *)a1 + 195) + 8LL * v20);
        v23 = *(_QWORD *)(*((_QWORD *)a1 + 196) + 8LL * v20);
        do
        {
          if ( v22 <= v23 )
            break;
          v31 = v23;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)a1 + 196) + 8 * v21), v22, v23);
        }
        while ( v31 != v23 );
        v20 = ++v19;
      }
      while ( v19 < v17 );
    }
  }
  for ( m = EtwpFindAndLockBufferForFlushing(a1, *v16); m; m = EtwpFindAndLockBufferForFlushing(a1, *v16) )
  {
    EtwpWaitForBufferReferenceCount(m);
    if ( (unsigned int)EtwpPrepareHeader(a1, m, 0LL) != -2147483614 )
    {
      LODWORD(v7) = EtwpFlushBufferToLogfile(a1, m);
      if ( !v18 )
        v18 = *(_QWORD *)(m + 16);
    }
    _InterlockedAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL);
    _InterlockedExchange((volatile __int32 *)(m + 44), 0);
    if ( (int)v7 < 0 )
      break;
  }
  v25 = a1 + 394;
  if ( *((_QWORD *)a1 + 196) )
  {
    v32 = (unsigned int *)*((_QWORD *)a1 + 10);
    if ( v32 != a1 + 20 )
    {
      while ( v32 )
      {
        v33 = *((_QWORD *)v32 + 2);
        v34 = *(_QWORD *)(v33 + 16);
        if ( v34 < v18 && *(_QWORD *)(v33 + 24) <= *((_QWORD *)a1 + 197) )
        {
          v35 = 8LL * *(unsigned __int16 *)(v33 + 40);
          v36 = *(_QWORD *)(v35 + *((_QWORD *)a1 + 196));
          do
          {
            if ( v34 <= v36 )
              break;
            v47 = v36;
            v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + *((_QWORD *)a1 + 196)), v34, v36);
          }
          while ( v47 != v36 );
        }
        v32 = *(unsigned int **)v32;
        if ( v32 == a1 + 20 )
          v32 = 0LL;
      }
    }
  }
LABEL_34:
  EtwpFinalizeHeader(a1, 0LL);
  a1[62] = 0;
  *v25 = -1LL;
LABEL_35:
  v26 = (void *)*((_QWORD *)a1 + 100);
  if ( v26 )
  {
    ZwClose(v26);
    *((_QWORD *)a1 + 100) = 0LL;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 38));
  return (unsigned int)v7;
}
