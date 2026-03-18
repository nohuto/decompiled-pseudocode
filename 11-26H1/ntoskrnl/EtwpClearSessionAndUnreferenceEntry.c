/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x14093737C
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1409378E0 (EtwpDisableTraceProviders.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwpUnreferenceGuidEntry @ 0x140936B20 (EtwpUnreferenceGuidEntry.c)
 *     EtwpCopySchematizedFilters @ 0x1409370E8 (EtwpCopySchematizedFilters.c)
 *     EtwpUpdateGuidFilterData @ 0x140937FB0 (EtwpUpdateGuidFilterData.c)
 *     EtwpSendDataBlock @ 0x1409388D8 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140939064 (EtwpUnreferenceDataBlock.c)
 *     EtwpGetSchematizedFilterSize @ 0x14093A2C0 (EtwpGetSchematizedFilterSize.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14093A660 (EtwpComputeRegEntryEnableInfo.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rsi
  __int64 v8; // r15
  unsigned int v9; // r13d
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbx
  char v13; // si
  unsigned int i; // ebx
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  __int64 v17; // rtt
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // rdx
  unsigned __int8 v27; // r9
  __int64 v28; // r11
  __int64 v29; // r8
  __int64 v30; // r10
  __int64 v31; // r8
  struct _KLOCK_ENTRIES *v32; // r9
  _QWORD *v33; // r12
  unsigned __int16 v34; // r14
  struct _KTHREAD *v35; // rax
  _QWORD *v36; // rsi
  unsigned __int64 *v37; // r14
  AutoBoost *v38; // rax
  void *v39; // rdx
  AutoBoost *v40; // rbx
  __int64 v41; // rax
  _WORD *v42; // rcx
  unsigned __int16 v43; // dx
  int SchematizedFilterSize; // eax
  int v45; // r13d
  int v46; // r14d
  __int64 v47; // r8
  __int64 *v48; // rbx
  signed __int64 v49; // rax
  signed __int64 v50; // rdx
  __int64 v51; // rtt
  unsigned __int8 v52; // al
  __int64 Pool2; // rax
  __int64 v54; // rbx
  char v55; // [rsp+28h] [rbp-A9h]
  unsigned __int16 v57; // [rsp+2Ch] [rbp-A5h]
  __int64 v58; // [rsp+30h] [rbp-A1h]
  int v59; // [rsp+38h] [rbp-99h]
  __int128 v61; // [rsp+40h] [rbp-91h]
  __int128 v62; // [rsp+50h] [rbp-81h]
  _BYTE v63[112]; // [rsp+68h] [rbp-69h] BYREF
  __int128 Source2; // [rsp+D8h] [rbp+7h] BYREF
  __int128 v65; // [rsp+E8h] [rbp+17h]

  Source2 = 0LL;
  v65 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned __int64 *)(a2 + 664);
  v55 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = 0LL;
  v9 = 0;
  v10 = (AutoBoost *)KeAbPreAcquire(a2 + 664, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v10, (__int64)v6);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = 0;
  *(_QWORD *)(a2 + 672) = KeGetCurrentThread();
  v59 = *(unsigned __int16 *)(a2 + 88);
  if ( v59 == a1 )
    *(_OWORD *)(a2 + 80) = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= 0x10 )
      goto LABEL_13;
    if ( *(unsigned __int16 *)(32LL * i + a2 + 134) == a1 )
    {
      v24 = 32 * (i + 4LL);
      if ( *(_DWORD *)(v24 + a2) )
        break;
    }
  }
  *(_DWORD *)(v24 + a2) = 0;
  v61 = 0LL;
  v25 = 0;
  v26 = a2 + 132;
  v27 = 0;
  v28 = 0LL;
  v29 = -1LL;
  v30 = 16LL;
  do
  {
    if ( *(_DWORD *)(v26 - 4) )
    {
      v52 = v27;
      LODWORD(v61) = 1;
      if ( v27 <= *(_BYTE *)v26 )
        v52 = *(_BYTE *)v26;
      v28 |= *(_QWORD *)(v26 + 12);
      v29 &= *(_QWORD *)(v26 + 20);
      v27 = v52;
      v25 |= *(_DWORD *)(v26 + 4);
    }
    v26 += 32LL;
    --v30;
  }
  while ( v30 );
  *((_QWORD *)&v62 + 1) = v29;
  BYTE4(v61) = v27;
  *(_QWORD *)&v62 = v28;
  DWORD2(v61) = v25;
  *(_OWORD *)(a2 + 96) = v61;
  *(_OWORD *)(a2 + 112) = v62;
  memset_0(v63, 0, 0x68uLL);
  LOBYTE(v31) = 1;
  EtwpUpdateGuidFilterData(a2, i, v31, v63);
  v33 = *(_QWORD **)(a2 + 56);
  if ( v33 != (_QWORD *)(a2 + 56) )
  {
    v34 = ~(unsigned __int16)(1 << i);
    v57 = v34;
    while ( 1 )
    {
      if ( a3 )
      {
        v35 = KeGetCurrentThread();
        v36 = v33 - 2;
        --v35->KernelApcDisable;
        v37 = (unsigned __int64 *)(v33[2] + 664LL);
        v38 = (AutoBoost *)KeAbPreAcquire((__int64)v37, 0LL, 0LL, v32);
        v40 = v38;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v37, 0LL) )
          ExfAcquirePushLockExclusiveEx(v37, v38, (__int64)v37);
        if ( v40 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v40, v39);
          else
            *((_BYTE *)v40 + 10) = 1;
        }
        v34 = v57;
        v55 = 1;
        *(_QWORD *)(v36[4] + 672LL) = KeGetCurrentThread();
        v41 = 86LL;
      }
      else
      {
        v36 = v33;
        v41 = 100LL;
      }
      v42 = (_WORD *)((char *)v33 + v41);
      v43 = *(_WORD *)((char *)v33 + v41);
      v33 = (_QWORD *)*v33;
      *v42 = v43 & v34;
      if ( (*((_BYTE *)v36 + 98) & 8) != 0 && v59 != a1 || (v43 & v34) == v43 )
        goto LABEL_44;
      EtwpComputeRegEntryEnableInfo(v36, &Source2);
      SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *((unsigned __int16 *)v36 + 50));
      v45 = SchematizedFilterSize;
      v46 = 120;
      if ( SchematizedFilterSize )
        v46 = SchematizedFilterSize + 136;
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 4) == v46 && RtlCompareMemory((const void *)(v8 + 72), &Source2, 0x20uLL) == 32 )
          goto LABEL_42;
        EtwpUnreferenceDataBlock(v8);
      }
      v8 = 0LL;
      Pool2 = ExAllocatePool2(0x100uLL);
      v54 = Pool2;
      if ( !Pool2 )
      {
        v9 = -1073741801;
        goto LABEL_43;
      }
      *(_DWORD *)(Pool2 + 8) = 1;
      v8 = Pool2;
      *(_DWORD *)Pool2 = 3;
      *(_DWORD *)(Pool2 + 4) = v46;
      *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(v36[4] + 40LL);
      *(_OWORD *)(Pool2 + 72) = Source2;
      *(_OWORD *)(Pool2 + 88) = v65;
      *(_DWORD *)(Pool2 + 112) = *(_BYTE *)(a2 + 91) & 1;
      LOWORD(v58) = *(_WORD *)(a2 + 88);
      WORD1(v58) = *(unsigned __int8 *)(a2 + 90);
      HIDWORD(v58) = *(_DWORD *)(a2 + 80);
      *(_QWORD *)(Pool2 + 104) = v58;
      if ( v45 )
      {
        *(_DWORD *)(Pool2 + 132) = 0x80000000;
        *(_DWORD *)(Pool2 + 128) = v45;
        *(_QWORD *)(Pool2 + 120) = 136LL;
        EtwpCopySchematizedFilters((char *)(Pool2 + 136), a2, *((_WORD *)v36 + 50));
        *(_DWORD *)(v54 + 116) = 1;
      }
      else
      {
        *(_DWORD *)(Pool2 + 116) = 0;
      }
LABEL_42:
      v9 = EtwpSendDataBlock(v36, v8, v47, v32);
LABEL_43:
      v34 = v57;
LABEL_44:
      if ( v55 )
      {
        *(_QWORD *)(v36[4] + 672LL) = 0LL;
        v48 = (__int64 *)(v36[4] + 664LL);
        _m_prefetchw(v48);
        v49 = *v48;
        v50 = *v48 - 16;
        if ( (*v48 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v50 = 0LL;
        if ( (v49 & 2) != 0 || (v51 = *v48, v51 != _InterlockedCompareExchange64(v48, v50, v49)) )
          ExfReleasePushLock(v48);
        KeAbPostRelease((unsigned __int64)v48);
        KeLeaveCriticalRegion();
        v55 = 0;
      }
      if ( v33 == (_QWORD *)(a2 + 56) )
      {
        if ( v8 )
          EtwpUnreferenceDataBlock(v8);
        break;
      }
    }
  }
  v13 = 1;
LABEL_13:
  *(_QWORD *)(a2 + 672) = 0LL;
  _m_prefetchw((const void *)(a2 + 664));
  v15 = *(_QWORD *)(a2 + 664);
  v16 = v15 - 16;
  if ( (v15 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v16 = 0LL;
  if ( (v15 & 2) != 0
    || (v17 = *(_QWORD *)(a2 + 664),
        v17 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 664), v16, v15)) )
  {
    ExfReleasePushLock((_QWORD *)(a2 + 664));
  }
  KeAbPostRelease(a2 + 664);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19);
  if ( v13 )
    EtwpUnreferenceGuidEntry((__int64 *)a2, v20, v21, v22);
  return v9;
}
