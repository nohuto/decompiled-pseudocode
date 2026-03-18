/*
 * XREFs of EtwpGetTraceGuidInfo @ 0x140935E90
 * Callers:
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     EtwpGetMetaProviderContext @ 0x140457670 (EtwpGetMetaProviderContext.c)
 *     EtwpMapMetaProviderKeywords @ 0x14049ADCC (EtwpMapMetaProviderKeywords.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReferenceGuidEntry @ 0x140935A40 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140936B20 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGuidInfo(__int64 a1, __int64 a2, _DWORD *a3, unsigned int *a4)
{
  size_t v4; // r12
  unsigned int v8; // edi
  unsigned int v9; // ebp
  __int64 v10; // r14
  unsigned int i; // ecx
  __int64 v12; // rbx
  __int64 *v13; // r8
  __int64 v14; // rdx
  __int64 *MetaProviderContext; // rbx
  struct _KLOCK_ENTRIES *v16; // r9
  ULONG_PTR v17; // r15
  struct _KTHREAD *v18; // rax
  __int64 v19; // r14
  _QWORD *v20; // r14
  void *v21; // rdx
  LegacyAutoBoost *v22; // rbx
  _QWORD *j; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  int *v27; // r13
  struct _KTHREAD *v28; // rax
  struct _KLOCK_ENTRIES *v29; // r9
  AutoBoost *v30; // rax
  void *v31; // rdx
  AutoBoost *v32; // rsi
  ULONG_PTR v33; // r14
  __int64 *v34; // r9
  int v35; // ecx
  unsigned int v36; // eax
  _DWORD *v37; // rbx
  char v38; // si
  unsigned int v39; // edx
  int v40; // r11d
  __int64 *v41; // rbp
  char *v42; // r10
  unsigned int k; // r8d
  __int64 v44; // rax
  __int64 v45; // rcx
  _OWORD *v46; // rdx
  int v47; // edi
  unsigned __int8 *v48; // rcx
  int v50; // esi
  unsigned int v51; // ebx
  _DWORD *v52; // r12
  int v53; // r15d
  unsigned __int8 *v54; // r14
  unsigned int v55; // edi
  unsigned int v56; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v58; // rdx
  unsigned int *v59; // rbp
  __int64 v60; // r8
  struct _KLOCK_ENTRIES *v61; // r8
  int v62; // eax
  unsigned int v63; // eax
  signed __int64 v64; // rax
  signed __int64 v65; // rdx
  __int64 v66; // rtt
  __int64 v67; // rdx
  __int64 v68; // r8
  int v69; // ebp
  int v70; // ecx
  unsigned int v71; // ecx
  unsigned int v72; // eax
  signed __int64 v73; // rax
  signed __int64 v74; // rdx
  __int64 v75; // rtt
  __int64 v76; // rdx
  __int64 v77; // r8
  unsigned int v78; // edx
  _DWORD *v79; // r8
  unsigned int v80; // r11d
  _OWORD *v81; // r9
  int v82; // r10d
  unsigned int m; // ecx
  __int64 v84; // rax
  unsigned int v85; // eax
  char *v86; // rcx
  char *v87; // rdx
  struct _KLOCK_ENTRIES *v88; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v89; // [rsp+28h] [rbp-40h]
  unsigned int v91; // [rsp+80h] [rbp+18h]

  v4 = *a4;
  v89 = *a4;
  LODWORD(v88) = 0;
  v8 = 8;
  v9 = 0;
  if ( a1 == EtwpHostSiloState )
    v10 = 0xFFFFF78000000380uLL;
  else
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1288LL) + 550LL;
  for ( i = 0; i < 0xA; ++i )
  {
    v12 = 2LL * i;
    v13 = (__int64 *)(&EtwpUmglProviders)[2 * i];
    v14 = *v13 - *(_QWORD *)a2;
    if ( *v13 == *(_QWORD *)a2 )
      v14 = v13[1] - *(_QWORD *)(a2 + 8);
    if ( !v14 )
    {
      memset_0(a3, 0, v4);
      v47 = 24;
      v48 = (unsigned __int8 *)(v10 + 2LL * LOBYTE((&EtwpUmglProviders)[v12 + 1]));
      if ( *v48 )
      {
        v47 = 56;
        if ( (unsigned int)v4 < 0x38 )
          goto LABEL_122;
        a3[3] = 1;
        a3[6] = 1;
        *((_WORD *)a3 + 15) = *v48;
        *((_QWORD *)a3 + 5) = v48[1];
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
      *a4 = v47;
      return v9;
    }
  }
  MetaProviderContext = (__int64 *)EtwpGetMetaProviderContext((_QWORD *)a2);
  if ( MetaProviderContext )
  {
    v52 = a3 + 6;
    v88 = v16;
    v53 = (int)v16;
    v54 = (unsigned __int8 *)(a1 + 4504);
    v55 = 24;
    v56 = (unsigned int)v16;
    do
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v59 = EtwpAcquireLoggerContextByLoggerId(a1, *v54, 1);
      if ( v59 )
      {
        EtwpMapMetaProviderKeywords(MetaProviderContext, a1 + 32LL * v56 + 4556, &v88);
        v61 = v88;
        if ( v88 )
        {
          ++v53;
          v55 += 32;
          if ( v55 <= v89 )
          {
            *v52 = 1;
            *((_QWORD *)v52 + 2) = v61;
            *((_WORD *)v52 + 3) = *v54;
            v52 += 8;
          }
        }
        KeReleaseMutex((PRKMUTEX)(v59 + 158), 0);
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v59 + 170) + 704LL) + 8LL * *v59),
          1u);
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v58, v60);
      ++v56;
      v54 += 2;
    }
    while ( v56 < 8 );
    a3[2] = 0;
    a3[3] = v53;
    if ( v55 > v89 )
    {
      v50 = -1073741789;
    }
    else
    {
      *a3 = 1;
      v50 = 0;
    }
    *a4 = v55;
    return (unsigned int)v50;
  }
  v17 = (ULONG_PTR)v16;
  v18 = KeGetCurrentThread();
  v19 = 56LL
      * (((unsigned __int8)*(_DWORD *)a2 ^ (unsigned __int8)(*(_DWORD *)(a2 + 4) ^ *(_DWORD *)(a2 + 8) ^ *(_DWORD *)(a2 + 12))) & 0x3F);
  --v18->KernelApcDisable;
  v20 = (_QWORD *)(a1 + 720 + v19);
  v22 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v20 + 6), 0LL, 0LL, v16);
  if ( _InterlockedCompareExchange64(v20 + 6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v20 + 6, 0, v22, (struct _KTHREAD *)(v20 + 6));
  if ( v22 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v22, v21);
    else
      *((_BYTE *)v22 + 10) = 1;
  }
  for ( j = (_QWORD *)*v20; j != v20; j = (_QWORD *)*j )
  {
    v24 = *(_QWORD *)a2 - j[5];
    if ( *(_QWORD *)a2 == j[5] )
      v24 = *(_QWORD *)(a2 + 8) - j[6];
    if ( !v24 && EtwpReferenceGuidEntry((ULONG_PTR)j) )
    {
      v17 = (ULONG_PTR)j;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v20 + 6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v20 + 6);
  KeAbPostRelease((unsigned __int64)(v20 + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v25, v26);
  if ( !v17 )
    return 3221226133LL;
  v27 = a3;
  memset_0(a3, 0, *a4);
  v28 = KeGetCurrentThread();
  --v28->KernelApcDisable;
  v30 = (AutoBoost *)KeAbPreAcquire(v17 + 664, 0LL, 0LL, v29);
  v32 = v30;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 664), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v17 + 664), v30, v17 + 664);
  if ( v32 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v32, v31);
    else
      *((_BYTE *)v32 + 10) = 1;
  }
  v33 = v17 + 56;
  v34 = *(__int64 **)(v17 + 56);
  *(_QWORD *)(v17 + 672) = KeGetCurrentThread();
  do
  {
    v35 = 0;
    do
    {
      if ( v34 == (__int64 *)v33 )
        goto LABEL_93;
      v36 = v8 + 16;
      v37 = (int *)((char *)v27 + v8);
      v38 = 0;
      v39 = v8;
      v91 = v8;
      if ( v8 + 16 < v8 )
      {
LABEL_67:
        v50 = -2147483643;
LABEL_68:
        *(_QWORD *)(v17 + 672) = 0LL;
        v51 = -1;
        _m_prefetchw((const void *)(v17 + 664));
        v64 = *(_QWORD *)(v17 + 664);
        v65 = v64 - 16;
        if ( (v64 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v65 = 0LL;
        if ( (v64 & 2) != 0
          || (v66 = *(_QWORD *)(v17 + 664),
              v66 != _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 664), v65, v64)) )
        {
          ExfReleasePushLock((_QWORD *)(v17 + 664));
        }
        KeAbPostRelease(v17 + 664);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v67, v68);
        v69 = (int)v88;
        goto LABEL_73;
      }
      LODWORD(v88) = (_DWORD)v88 + 1;
      v40 = 0;
      v41 = v34;
      v42 = (char *)v27 + v36;
      v8 += 16;
      if ( (*((_BYTE *)v34 + 98) & 8) != 0 )
      {
        v38 = 1;
        if ( (*(_BYTE *)(v17 + 91) & 1) == 0 )
          goto LABEL_87;
        v72 = v36 + 32;
        v40 = 1;
        if ( v72 < v8 )
        {
          v50 = -2147483643;
          goto LABEL_68;
        }
        v8 = v72;
        if ( v72 <= (unsigned int)v4 )
        {
          *(_DWORD *)v42 = 1;
          v42[4] = *(_BYTE *)(v17 + 90);
          *((_QWORD *)v42 + 2) = *(_QWORD *)(v17 + 80);
          *((_WORD *)v42 + 3) = *(_WORD *)(v17 + 88);
          v34 = (__int64 *)*v34;
          goto LABEL_89;
        }
      }
      else if ( *((_WORD *)v34 + 50) || *((_WORD *)v34 + 51) )
      {
        for ( k = 0; k < 0x10; ++k )
        {
          v44 = 32 * (k + 4LL);
          if ( *(_DWORD *)(v17 + v44) )
          {
            v70 = *((unsigned __int16 *)v34 + 50);
            if ( _bittest(&v70, (unsigned __int8)k) )
            {
              ++v40;
              v71 = v8 + 32;
              if ( v8 + 32 < v8 )
                goto LABEL_67;
              v8 += 32;
              if ( v71 <= (unsigned int)v4 )
              {
                *(_OWORD *)v42 = *(_OWORD *)(v17 + v44);
                *((_OWORD *)v42 + 1) = *(_OWORD *)(v17 + v44 + 16);
                v42 += 32;
              }
            }
          }
          v45 = v34[5];
          if ( v45 )
          {
            v46 = (_OWORD *)(v45 + v44);
            if ( *(_DWORD *)(v45 + v44) )
            {
              v62 = *((unsigned __int16 *)v34 + 51);
              if ( _bittest(&v62, (unsigned __int8)k) )
              {
                ++v40;
                v63 = v8 + 32;
                if ( v8 + 32 < v8 )
                  goto LABEL_67;
                v8 += 32;
                if ( v63 <= (unsigned int)v4 )
                {
                  *(_OWORD *)v42 = *v46;
                  *((_OWORD *)v42 + 1) = v46[1];
                  v42 += 32;
                }
              }
            }
          }
        }
        v39 = v91;
        v35 = 0;
      }
LABEL_87:
      v34 = (__int64 *)*v34;
    }
    while ( v8 > (unsigned int)v4 );
    if ( v38 )
LABEL_89:
      v37[3] = 1;
    if ( (*((_BYTE *)v41 + 98) & 2) != 0 )
      v35 = *(_DWORD *)(v41[10] + 464);
    v37[2] = v35;
    v37[1] = v40;
    *v37 = v8 - v39;
  }
  while ( v34 != (__int64 *)v33 );
LABEL_93:
  v50 = 0;
  *(_QWORD *)(v17 + 672) = 0LL;
  _m_prefetchw((const void *)(v17 + 664));
  v73 = *(_QWORD *)(v17 + 664);
  v74 = v73 - 16;
  if ( (v73 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v74 = 0LL;
  if ( (v73 & 2) != 0
    || (v75 = *(_QWORD *)(v17 + 664),
        v75 != _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 664), v74, v73)) )
  {
    ExfReleasePushLock((_QWORD *)(v17 + 664));
  }
  KeAbPostRelease(v17 + 664);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v76, v77);
  v78 = v8 + 16;
  v69 = (_DWORD)v88 + 2;
  v79 = (int *)((char *)v27 + v8);
  if ( v8 + 16 < v8 )
    goto LABEL_49;
  v80 = v8 + 48;
  v81 = (_OWORD *)((char *)v27 + v78);
  v82 = 0;
  for ( m = 0; m < 0x10; ++m )
  {
    v84 = 32 * (m + 4LL);
    if ( *(_DWORD *)(v84 + v17) )
    {
      ++v82;
      if ( v80 < v78 )
        goto LABEL_49;
      v78 += 32;
      v80 += 32;
      if ( v78 <= (unsigned int)v4 )
      {
        *v81 = *(_OWORD *)(v84 + v17);
        v81[1] = *(_OWORD *)(v84 + v17 + 16);
        v81 += 2;
      }
    }
  }
  if ( v78 <= (unsigned int)v4 )
  {
    v79[2] = 0;
    v79[1] = v82;
    *v79 = v78 - v8;
    v79[3] = 2;
  }
  v85 = v78 + 16;
  v86 = (char *)v27 + v78;
  if ( v78 + 16 < v78 || (v51 = v78 + 48, v87 = (char *)v27 + v85, v85 + 32 < v85) )
  {
LABEL_49:
    v50 = -2147483643;
    v51 = -1;
    EtwpUnreferenceGuidEntry(v17);
    goto LABEL_50;
  }
  if ( v51 <= (unsigned int)v4 )
  {
    *(_QWORD *)(v86 + 4) = 0LL;
    *(_DWORD *)v86 = 0;
    *((_DWORD *)v86 + 3) = 3;
    *(_DWORD *)v87 = *(_BYTE *)(v17 + 91) & 1;
    if ( (*(_BYTE *)(v17 + 91) & 1) != 0 )
    {
      *((_DWORD *)v86 + 1) = 1;
      v87[4] = *(_BYTE *)(v17 + 90);
      *((_QWORD *)v87 + 2) = *(_QWORD *)(v17 + 80);
      *((_WORD *)v87 + 3) = *(_WORD *)(v17 + 88);
      EtwpUnreferenceGuidEntry(v17);
      goto LABEL_107;
    }
  }
LABEL_73:
  EtwpUnreferenceGuidEntry(v17);
  if ( v50 < 0 )
    goto LABEL_50;
  if ( v51 > (unsigned int)v4 )
  {
    v50 = -1073741789;
    goto LABEL_50;
  }
LABEL_107:
  *v27 = v69;
LABEL_50:
  *a4 = v51;
  return (unsigned int)v50;
}
