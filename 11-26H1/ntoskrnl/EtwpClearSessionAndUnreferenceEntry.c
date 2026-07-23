/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x140912F1C
 * Callers:
 *     EtwpDisableTraceProviders @ 0x140913480 (EtwpDisableTraceProviders.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpCopySchematizedFilters @ 0x140912C88 (EtwpCopySchematizedFilters.c)
 *     EtwpUpdateGuidFilterData @ 0x140913B50 (EtwpUpdateGuidFilterData.c)
 *     EtwpSendDataBlock @ 0x140914478 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140914C04 (EtwpUnreferenceDataBlock.c)
 *     EtwpGetSchematizedFilterSize @ 0x140915E60 (EtwpGetSchematizedFilterSize.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140916200 (EtwpComputeRegEntryEnableInfo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
  struct _KLOCK_ENTRIES *v20; // r9
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // rdx
  unsigned __int8 v25; // r9
  __int64 v26; // r11
  __int64 v27; // r8
  __int64 v28; // r10
  __int64 v29; // r8
  struct _KLOCK_ENTRIES *v30; // r9
  _QWORD *v31; // r12
  unsigned __int16 v32; // r14
  struct _KTHREAD *v33; // rax
  _QWORD *v34; // rsi
  unsigned __int64 *v35; // r14
  AutoBoost *v36; // rax
  void *v37; // rdx
  AutoBoost *v38; // rbx
  __int64 v39; // rax
  _WORD *v40; // rcx
  unsigned __int16 v41; // dx
  int SchematizedFilterSize; // eax
  int v43; // r13d
  int v44; // r14d
  __int64 v45; // r8
  __int64 *v46; // rbx
  signed __int64 v47; // rax
  signed __int64 v48; // rdx
  __int64 v49; // rtt
  unsigned __int8 v50; // al
  __int64 Pool2; // rax
  __int64 v52; // rbx
  char v53; // [rsp+28h] [rbp-A9h]
  unsigned __int16 v55; // [rsp+2Ch] [rbp-A5h]
  __int64 v56; // [rsp+30h] [rbp-A1h]
  int v57; // [rsp+38h] [rbp-99h]
  __int128 v59; // [rsp+40h] [rbp-91h]
  __int128 v60; // [rsp+50h] [rbp-81h]
  _BYTE v61[112]; // [rsp+68h] [rbp-69h] BYREF
  __int128 Source2; // [rsp+D8h] [rbp+7h] BYREF
  __int128 v63; // [rsp+E8h] [rbp+17h]

  Source2 = 0LL;
  v63 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned __int64 *)(a2 + 664);
  v53 = 0;
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
  v57 = *(unsigned __int16 *)(a2 + 88);
  if ( v57 == a1 )
    *(_OWORD *)(a2 + 80) = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= 0x10 )
      goto LABEL_13;
    if ( *(unsigned __int16 *)(32LL * i + a2 + 134) == a1 )
    {
      v22 = 32 * (i + 4LL);
      if ( *(_DWORD *)(v22 + a2) )
        break;
    }
  }
  *(_DWORD *)(v22 + a2) = 0;
  v59 = 0LL;
  v23 = 0;
  v24 = a2 + 132;
  v25 = 0;
  v26 = 0LL;
  v27 = -1LL;
  v28 = 16LL;
  do
  {
    if ( *(_DWORD *)(v24 - 4) )
    {
      v50 = v25;
      LODWORD(v59) = 1;
      if ( v25 <= *(_BYTE *)v24 )
        v50 = *(_BYTE *)v24;
      v26 |= *(_QWORD *)(v24 + 12);
      v27 &= *(_QWORD *)(v24 + 20);
      v25 = v50;
      v23 |= *(_DWORD *)(v24 + 4);
    }
    v24 += 32LL;
    --v28;
  }
  while ( v28 );
  *((_QWORD *)&v60 + 1) = v27;
  BYTE4(v59) = v25;
  *(_QWORD *)&v60 = v26;
  DWORD2(v59) = v23;
  *(_OWORD *)(a2 + 96) = v59;
  *(_OWORD *)(a2 + 112) = v60;
  memset_0(v61, 0, 0x68uLL);
  LOBYTE(v29) = 1;
  EtwpUpdateGuidFilterData(a2, i, v29, v61);
  v31 = *(_QWORD **)(a2 + 56);
  if ( v31 != (_QWORD *)(a2 + 56) )
  {
    v32 = ~(unsigned __int16)(1 << i);
    v55 = v32;
    while ( 1 )
    {
      if ( a3 )
      {
        v33 = KeGetCurrentThread();
        v34 = v31 - 2;
        --v33->KernelApcDisable;
        v35 = (unsigned __int64 *)(v31[2] + 664LL);
        v36 = (AutoBoost *)KeAbPreAcquire((__int64)v35, 0LL, 0LL, v30);
        v38 = v36;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v35, 0LL) )
          ExfAcquirePushLockExclusiveEx(v35, v36, (__int64)v35);
        if ( v38 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v38, v37);
          else
            *((_BYTE *)v38 + 10) = 1;
        }
        v32 = v55;
        v53 = 1;
        *(_QWORD *)(v34[4] + 672LL) = KeGetCurrentThread();
        v39 = 86LL;
      }
      else
      {
        v34 = v31;
        v39 = 100LL;
      }
      v40 = (_WORD *)((char *)v31 + v39);
      v41 = *(_WORD *)((char *)v31 + v39);
      v31 = (_QWORD *)*v31;
      *v40 = v41 & v32;
      if ( (*((_BYTE *)v34 + 98) & 8) != 0 && v57 != a1 || (v41 & v32) == v41 )
        goto LABEL_44;
      EtwpComputeRegEntryEnableInfo(v34, &Source2);
      SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *((unsigned __int16 *)v34 + 50));
      v43 = SchematizedFilterSize;
      v44 = 120;
      if ( SchematizedFilterSize )
        v44 = SchematizedFilterSize + 136;
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 4) == v44 && RtlCompareMemory((const void *)(v8 + 72), &Source2, 0x20uLL) == 32 )
          goto LABEL_42;
        EtwpUnreferenceDataBlock(v8);
      }
      v8 = 0LL;
      Pool2 = ExAllocatePool2(0x100uLL);
      v52 = Pool2;
      if ( !Pool2 )
      {
        v9 = -1073741801;
        goto LABEL_43;
      }
      *(_DWORD *)(Pool2 + 8) = 1;
      v8 = Pool2;
      *(_DWORD *)Pool2 = 3;
      *(_DWORD *)(Pool2 + 4) = v44;
      *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(v34[4] + 40LL);
      *(_OWORD *)(Pool2 + 72) = Source2;
      *(_OWORD *)(Pool2 + 88) = v63;
      *(_DWORD *)(Pool2 + 112) = *(_BYTE *)(a2 + 91) & 1;
      LOWORD(v56) = *(_WORD *)(a2 + 88);
      WORD1(v56) = *(unsigned __int8 *)(a2 + 90);
      HIDWORD(v56) = *(_DWORD *)(a2 + 80);
      *(_QWORD *)(Pool2 + 104) = v56;
      if ( v43 )
      {
        *(_DWORD *)(Pool2 + 132) = 0x80000000;
        *(_DWORD *)(Pool2 + 128) = v43;
        *(_QWORD *)(Pool2 + 120) = 136LL;
        EtwpCopySchematizedFilters((char *)(Pool2 + 136), a2, *((_WORD *)v34 + 50));
        *(_DWORD *)(v52 + 116) = 1;
      }
      else
      {
        *(_DWORD *)(Pool2 + 116) = 0;
      }
LABEL_42:
      v9 = EtwpSendDataBlock(v34, v8, v45, v30);
LABEL_43:
      v32 = v55;
LABEL_44:
      if ( v53 )
      {
        *(_QWORD *)(v34[4] + 672LL) = 0LL;
        v46 = (__int64 *)(v34[4] + 664LL);
        _m_prefetchw(v46);
        v47 = *v46;
        v48 = *v46 - 16;
        if ( (*v46 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v48 = 0LL;
        if ( (v47 & 2) != 0 || (v49 = *v46, v49 != _InterlockedCompareExchange64(v46, v48, v47)) )
          ExfReleasePushLock(v46);
        KeAbPostRelease((unsigned __int64)v46);
        KeLeaveCriticalRegion();
        v53 = 0;
      }
      if ( v31 == (_QWORD *)(a2 + 56) )
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v13 )
    EtwpUnreferenceGuidEntry((__int64 *)a2, v18, v19, v20);
  return v9;
}
