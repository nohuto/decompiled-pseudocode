/*
 * XREFs of EtwpGetTraceGuidInfo @ 0x140911A40
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     EtwpGetMetaProviderContext @ 0x14044EEE0 (EtwpGetMetaProviderContext.c)
 *     EtwpMapMetaProviderKeywords @ 0x14049491C (EtwpMapMetaProviderKeywords.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpReferenceGuidEntry @ 0x1409115F0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpGetTraceGuidInfo(__int64 a1, __int64 a2, _DWORD *a3, unsigned int *a4)
{
  size_t v4; // r12
  unsigned int v8; // edi
  unsigned int v9; // ebp
  __int64 v10; // r14
  unsigned int i; // ecx
  __int64 v12; // rbx
  GUID *v13; // r8
  __int64 v14; // rdx
  __int64 *MetaProviderContext; // rbx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  ULONG_PTR v18; // r15
  struct _KTHREAD *v19; // rax
  __int64 v20; // r14
  _QWORD *v21; // r14
  void *v22; // rdx
  LegacyAutoBoost *v23; // rbx
  _QWORD *j; // rbx
  __int64 v25; // rcx
  int *v26; // r13
  struct _KTHREAD *v27; // rax
  struct _KLOCK_ENTRIES *v28; // r9
  AutoBoost *v29; // rax
  void *v30; // rdx
  AutoBoost *v31; // rsi
  ULONG_PTR v32; // r14
  __int64 *v33; // r9
  int v34; // ecx
  unsigned int v35; // eax
  _DWORD *v36; // rbx
  char v37; // si
  unsigned int v38; // edx
  int v39; // r11d
  __int64 *v40; // rbp
  char *v41; // r10
  unsigned int k; // r8d
  __int64 v43; // rax
  __int64 v44; // rcx
  _OWORD *v45; // rdx
  int v46; // edi
  unsigned __int8 *v47; // rcx
  int v49; // esi
  unsigned int v50; // ebx
  _DWORD *v51; // r12
  int v52; // r15d
  unsigned __int8 *v53; // r14
  unsigned int v54; // edi
  unsigned int v55; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v57; // rbp
  struct _KLOCK_ENTRIES *v58; // r8
  int v59; // eax
  unsigned int v60; // eax
  signed __int64 v61; // rax
  signed __int64 v62; // rdx
  __int64 v63; // rtt
  int v64; // ebp
  int v65; // ecx
  unsigned int v66; // ecx
  unsigned int v67; // eax
  signed __int64 v68; // rax
  signed __int64 v69; // rdx
  __int64 v70; // rtt
  unsigned int v71; // edx
  _DWORD *v72; // r8
  unsigned int v73; // r11d
  _OWORD *v74; // r9
  int v75; // r10d
  unsigned int m; // ecx
  __int64 v77; // rax
  unsigned int v78; // eax
  char *v79; // rcx
  char *v80; // rdx
  struct _KLOCK_ENTRIES *v81; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v82; // [rsp+28h] [rbp-40h]
  unsigned int v84; // [rsp+80h] [rbp+18h]

  v4 = *a4;
  v82 = *a4;
  LODWORD(v81) = 0;
  v8 = 8;
  v9 = 0;
  if ( a1 == EtwpHostSiloState )
    v10 = 0xFFFFF78000000380uLL;
  else
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1288LL) + 550LL;
  for ( i = 0; i < 0xA; ++i )
  {
    v12 = 2LL * i;
    v13 = (&EtwpUmglProviders)[2 * i];
    v14 = *(_QWORD *)&v13->Data1 - *(_QWORD *)a2;
    if ( *(_QWORD *)&v13->Data1 == *(_QWORD *)a2 )
      v14 = *(_QWORD *)v13->Data4 - *(_QWORD *)(a2 + 8);
    if ( !v14 )
    {
      memset_0(a3, 0, v4);
      v46 = 24;
      v47 = (unsigned __int8 *)(v10 + 2LL * *((unsigned __int8 *)&(&EtwpUmglProviders)[v12] + 8));
      if ( *v47 )
      {
        v46 = 56;
        if ( (unsigned int)v4 < 0x38 )
          goto LABEL_122;
        a3[3] = 1;
        a3[6] = 1;
        *((_WORD *)a3 + 15) = *v47;
        *((_QWORD *)a3 + 5) = v47[1];
LABEL_47:
        *a3 = 1;
        a3[5] = 1;
        a3[4] = 0;
        a3[2] = 0;
      }
      else
      {
        if ( (unsigned int)v4 >= 0x18 )
        {
          a3[3] = 0;
          goto LABEL_47;
        }
LABEL_122:
        v9 = -1073741789;
      }
      *a4 = v46;
      return v9;
    }
  }
  MetaProviderContext = (__int64 *)EtwpGetMetaProviderContext((_QWORD *)a2);
  if ( MetaProviderContext )
  {
    v51 = a3 + 6;
    v81 = v17;
    v52 = (int)v17;
    v53 = (unsigned __int8 *)(a1 + 4504);
    v54 = 24;
    v55 = (unsigned int)v17;
    do
    {
      CurrentThread = KeGetCurrentThread();
      LOBYTE(v16) = 1;
      --CurrentThread->KernelApcDisable;
      v57 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(a1, *v53, v16);
      if ( v57 )
      {
        EtwpMapMetaProviderKeywords(MetaProviderContext, a1 + 32LL * v55 + 4556, &v81);
        v58 = v81;
        if ( v81 )
        {
          ++v52;
          v54 += 32;
          if ( v54 <= v82 )
          {
            *v51 = 1;
            *((_QWORD *)v51 + 2) = v58;
            *((_WORD *)v51 + 3) = *v53;
            v51 += 8;
          }
        }
        KeReleaseMutex((PRKMUTEX)(v57 + 158), 0);
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v57 + 170) + 704LL) + 8LL * *v57),
          1u);
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ++v55;
      v53 += 2;
    }
    while ( v55 < 8 );
    a3[2] = 0;
    a3[3] = v52;
    if ( v54 > v82 )
    {
      v49 = -1073741789;
    }
    else
    {
      *a3 = 1;
      v49 = 0;
    }
    *a4 = v54;
    return (unsigned int)v49;
  }
  v18 = (ULONG_PTR)v17;
  v19 = KeGetCurrentThread();
  v20 = 56LL
      * (((unsigned __int8)*(_DWORD *)a2 ^ (unsigned __int8)(*(_DWORD *)(a2 + 4) ^ *(_DWORD *)(a2 + 8) ^ *(_DWORD *)(a2 + 12))) & 0x3F);
  --v19->KernelApcDisable;
  v21 = (_QWORD *)(a1 + 720 + v20);
  v23 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v21 + 6), 0LL, 0LL, v17);
  if ( _InterlockedCompareExchange64(v21 + 6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v21 + 6, 0, v23, (struct _KTHREAD *)(v21 + 6));
  if ( v23 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v23, v22);
    else
      *((_BYTE *)v23 + 10) = 1;
  }
  for ( j = (_QWORD *)*v21; j != v21; j = (_QWORD *)*j )
  {
    v25 = *(_QWORD *)a2 - j[5];
    if ( *(_QWORD *)a2 == j[5] )
      v25 = *(_QWORD *)(a2 + 8) - j[6];
    if ( !v25 && EtwpReferenceGuidEntry((ULONG_PTR)j) )
    {
      v18 = (ULONG_PTR)j;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v21 + 6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v21 + 6);
  KeAbPostRelease((unsigned __int64)(v21 + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v18 )
    return 3221226133LL;
  v26 = a3;
  memset_0(a3, 0, *a4);
  v27 = KeGetCurrentThread();
  --v27->KernelApcDisable;
  v29 = (AutoBoost *)KeAbPreAcquire(v18 + 664, 0LL, 0LL, v28);
  v31 = v29;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 664), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v18 + 664), v29, v18 + 664);
  if ( v31 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v31, v30);
    else
      *((_BYTE *)v31 + 10) = 1;
  }
  v32 = v18 + 56;
  v33 = *(__int64 **)(v18 + 56);
  *(_QWORD *)(v18 + 672) = KeGetCurrentThread();
  do
  {
    v34 = 0;
    do
    {
      if ( v33 == (__int64 *)v32 )
        goto LABEL_93;
      v35 = v8 + 16;
      v36 = (int *)((char *)v26 + v8);
      v37 = 0;
      v38 = v8;
      v84 = v8;
      if ( v8 + 16 < v8 )
      {
LABEL_67:
        v49 = -2147483643;
LABEL_68:
        *(_QWORD *)(v18 + 672) = 0LL;
        v50 = -1;
        _m_prefetchw((const void *)(v18 + 664));
        v61 = *(_QWORD *)(v18 + 664);
        v62 = v61 - 16;
        if ( (v61 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v62 = 0LL;
        if ( (v61 & 2) != 0
          || (v63 = *(_QWORD *)(v18 + 664),
              v63 != _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 664), v62, v61)) )
        {
          ExfReleasePushLock((_QWORD *)(v18 + 664));
        }
        KeAbPostRelease(v18 + 664);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v64 = (int)v81;
        goto LABEL_73;
      }
      LODWORD(v81) = (_DWORD)v81 + 1;
      v39 = 0;
      v40 = v33;
      v41 = (char *)v26 + v35;
      v8 += 16;
      if ( (*((_BYTE *)v33 + 98) & 8) != 0 )
      {
        v37 = 1;
        if ( (*(_BYTE *)(v18 + 91) & 1) == 0 )
          goto LABEL_87;
        v67 = v35 + 32;
        v39 = 1;
        if ( v67 < v8 )
        {
          v49 = -2147483643;
          goto LABEL_68;
        }
        v8 = v67;
        if ( v67 <= (unsigned int)v4 )
        {
          *(_DWORD *)v41 = 1;
          v41[4] = *(_BYTE *)(v18 + 90);
          *((_QWORD *)v41 + 2) = *(_QWORD *)(v18 + 80);
          *((_WORD *)v41 + 3) = *(_WORD *)(v18 + 88);
          v33 = (__int64 *)*v33;
          goto LABEL_89;
        }
      }
      else if ( *((_WORD *)v33 + 50) || *((_WORD *)v33 + 51) )
      {
        for ( k = 0; k < 0x10; ++k )
        {
          v43 = 32 * (k + 4LL);
          if ( *(_DWORD *)(v18 + v43) )
          {
            v65 = *((unsigned __int16 *)v33 + 50);
            if ( _bittest(&v65, (unsigned __int8)k) )
            {
              ++v39;
              v66 = v8 + 32;
              if ( v8 + 32 < v8 )
                goto LABEL_67;
              v8 += 32;
              if ( v66 <= (unsigned int)v4 )
              {
                *(_OWORD *)v41 = *(_OWORD *)(v18 + v43);
                *((_OWORD *)v41 + 1) = *(_OWORD *)(v18 + v43 + 16);
                v41 += 32;
              }
            }
          }
          v44 = v33[5];
          if ( v44 )
          {
            v45 = (_OWORD *)(v43 + v44);
            if ( *(_DWORD *)(v43 + v44) )
            {
              v59 = *((unsigned __int16 *)v33 + 51);
              if ( _bittest(&v59, (unsigned __int8)k) )
              {
                ++v39;
                v60 = v8 + 32;
                if ( v8 + 32 < v8 )
                  goto LABEL_67;
                v8 += 32;
                if ( v60 <= (unsigned int)v4 )
                {
                  *(_OWORD *)v41 = *v45;
                  *((_OWORD *)v41 + 1) = v45[1];
                  v41 += 32;
                }
              }
            }
          }
        }
        v38 = v84;
        v34 = 0;
      }
LABEL_87:
      v33 = (__int64 *)*v33;
    }
    while ( v8 > (unsigned int)v4 );
    if ( v37 )
LABEL_89:
      v36[3] = 1;
    if ( (*((_BYTE *)v40 + 98) & 2) != 0 )
      v34 = *(_DWORD *)(v40[10] + 464);
    v36[2] = v34;
    v36[1] = v39;
    *v36 = v8 - v38;
  }
  while ( v33 != (__int64 *)v32 );
LABEL_93:
  v49 = 0;
  *(_QWORD *)(v18 + 672) = 0LL;
  _m_prefetchw((const void *)(v18 + 664));
  v68 = *(_QWORD *)(v18 + 664);
  v69 = v68 - 16;
  if ( (v68 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v69 = 0LL;
  if ( (v68 & 2) != 0
    || (v70 = *(_QWORD *)(v18 + 664),
        v70 != _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 664), v69, v68)) )
  {
    ExfReleasePushLock((_QWORD *)(v18 + 664));
  }
  KeAbPostRelease(v18 + 664);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v71 = v8 + 16;
  v64 = (_DWORD)v81 + 2;
  v72 = (int *)((char *)v26 + v8);
  if ( v8 + 16 < v8 )
    goto LABEL_49;
  v73 = v8 + 48;
  v74 = (_OWORD *)((char *)v26 + v71);
  v75 = 0;
  for ( m = 0; m < 0x10; ++m )
  {
    v77 = 32 * (m + 4LL);
    if ( *(_DWORD *)(v77 + v18) )
    {
      ++v75;
      if ( v73 < v71 )
        goto LABEL_49;
      v71 += 32;
      v73 += 32;
      if ( v71 <= (unsigned int)v4 )
      {
        *v74 = *(_OWORD *)(v77 + v18);
        v74[1] = *(_OWORD *)(v77 + v18 + 16);
        v74 += 2;
      }
    }
  }
  if ( v71 <= (unsigned int)v4 )
  {
    v72[2] = 0;
    v72[1] = v75;
    *v72 = v71 - v8;
    v72[3] = 2;
  }
  v78 = v71 + 16;
  v79 = (char *)v26 + v71;
  if ( v71 + 16 < v71 || (v50 = v71 + 48, v80 = (char *)v26 + v78, v78 + 32 < v78) )
  {
LABEL_49:
    v49 = -2147483643;
    v50 = -1;
    EtwpUnreferenceGuidEntry(v18);
    goto LABEL_50;
  }
  if ( v50 <= (unsigned int)v4 )
  {
    *(_QWORD *)(v79 + 4) = 0LL;
    *(_DWORD *)v79 = 0;
    *((_DWORD *)v79 + 3) = 3;
    *(_DWORD *)v80 = *(_BYTE *)(v18 + 91) & 1;
    if ( (*(_BYTE *)(v18 + 91) & 1) != 0 )
    {
      *((_DWORD *)v79 + 1) = 1;
      v80[4] = *(_BYTE *)(v18 + 90);
      *((_QWORD *)v80 + 2) = *(_QWORD *)(v18 + 80);
      *((_WORD *)v80 + 3) = *(_WORD *)(v18 + 88);
      EtwpUnreferenceGuidEntry(v18);
      goto LABEL_107;
    }
  }
LABEL_73:
  EtwpUnreferenceGuidEntry(v18);
  if ( v49 < 0 )
    goto LABEL_50;
  if ( v50 > (unsigned int)v4 )
  {
    v49 = -1073741789;
    goto LABEL_50;
  }
LABEL_107:
  *v26 = v64;
LABEL_50:
  *a4 = v50;
  return (unsigned int)v49;
}
