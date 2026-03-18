/*
 * XREFs of EtwpGetTraceGroupInfo @ 0x140939330
 * Callers:
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     qsort @ 0x140536F00 (qsort.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwpUnreferenceGuidEntry @ 0x140936B20 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140939130 (EtwpFindGuidEntryByGuid.c)
 */

__int64 __fastcall EtwpGetTraceGroupInfo(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v4; // r12d
  unsigned int v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  struct _KLOCK_ENTRIES *v12; // r9
  AutoBoost *v13; // rbx
  _OWORD *v14; // rax
  _QWORD *v15; // rbx
  unsigned int v16; // esi
  _OWORD *v17; // r14
  unsigned int v18; // eax
  struct _KTHREAD *v19; // rax
  unsigned __int64 *v20; // rdi
  AutoBoost *v21; // rax
  void *v22; // rdx
  AutoBoost *v23; // rbp
  __int64 *v24; // rdi
  signed __int64 v25; // rax
  signed __int64 v26; // rdx
  __int64 v27; // rtt
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // ebp
  volatile signed __int64 *v31; // rbx
  signed __int64 v32; // rax
  signed __int64 v33; // rdx
  __int64 v34; // rtt
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  struct _KLOCK_ENTRIES *v39; // r9
  _DWORD *v41; // rbx
  _QWORD *v42; // rdi
  _QWORD *v43; // rdx
  int v44; // r9d
  __int64 v45; // r8
  __int64 v46; // rcx
  _QWORD *BugCheckParameter2; // [rsp+28h] [rbp-40h]

  v4 = *a4;
  v7 = 0;
  BugCheckParameter2 = EtwpFindGuidEntryByGuid(a1, a2, 2u);
  if ( !BugCheckParameter2 )
    return 3221226133LL;
  memset_0(a3, 0, *a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)(BugCheckParameter2 + 83), 0LL, 0LL, v9);
  v13 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2 + 166, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2 + 83, v10, (__int64)(BugCheckParameter2 + 83));
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v11);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  BugCheckParameter2[84] = KeGetCurrentThread();
  if ( v4 >= 4 )
    *a3 = 16;
  v14 = a3 + 1;
  if ( v4 >= 0x24 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 8);
    *(_OWORD *)(a3 + 5) = *((_OWORD *)BugCheckParameter2 + 9);
    v14 = a3 + 9;
  }
  if ( v4 >= 0x44 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 10);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 11);
    v14 += 2;
  }
  if ( v4 >= 0x64 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 12);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 13);
    v14 += 2;
  }
  if ( v4 >= 0x84 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 14);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 15);
    v14 += 2;
  }
  if ( v4 >= 0xA4 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 16);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 17);
    v14 += 2;
  }
  if ( v4 >= 0xC4 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 18);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 19);
    v14 += 2;
  }
  if ( v4 >= 0xE4 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 20);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 21);
    v14 += 2;
  }
  if ( v4 >= 0x104 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 22);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 23);
    v14 += 2;
  }
  if ( v4 >= 0x124 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 24);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 25);
    v14 += 2;
  }
  if ( v4 >= 0x144 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 26);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 27);
    v14 += 2;
  }
  if ( v4 >= 0x164 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 28);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 29);
    v14 += 2;
  }
  if ( v4 >= 0x184 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 30);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 31);
    v14 += 2;
  }
  if ( v4 >= 0x1A4 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 32);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 33);
    v14 += 2;
  }
  if ( v4 >= 0x1C4 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 34);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 35);
    v14 += 2;
  }
  if ( v4 >= 0x1E4 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 36);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 37);
    v14 += 2;
  }
  if ( v4 >= 0x204 )
  {
    *v14 = *((_OWORD *)BugCheckParameter2 + 38);
    v14[1] = *((_OWORD *)BugCheckParameter2 + 39);
  }
  v15 = (_QWORD *)BugCheckParameter2[7];
  v16 = 520;
  v17 = a3 + 130;
  while ( v15 != BugCheckParameter2 + 7 )
  {
    v18 = v16 + 16;
    if ( v16 + 16 < v16 )
    {
      v16 = -1;
      v30 = -2147483643;
      goto LABEL_57;
    }
    ++v7;
    v16 += 16;
    if ( v18 <= v4 )
    {
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      v20 = (unsigned __int64 *)(v15[2] + 664LL);
      v21 = (AutoBoost *)KeAbPreAcquire((__int64)v20, 0LL, 0LL, v12);
      v23 = v21;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
        ExfAcquirePushLockExclusiveEx(v20, v21, (__int64)v20);
      if ( v23 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v23, v22);
        else
          *((_BYTE *)v23 + 10) = 1;
      }
      *(_QWORD *)(v15[2] + 672LL) = KeGetCurrentThread();
      *v17 = *(_OWORD *)(v15[2] + 40LL);
      *(_QWORD *)(v15[2] + 672LL) = 0LL;
      v24 = (__int64 *)(v15[2] + 664LL);
      _m_prefetchw(v24);
      v25 = *v24;
      v26 = *v24 - 16;
      if ( (*v24 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v26 = 0LL;
      if ( (v25 & 2) != 0 || (v27 = *v24, v27 != _InterlockedCompareExchange64(v24, v26, v25)) )
        ExfReleasePushLock(v24);
      KeAbPostRelease((unsigned __int64)v24);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v28, v29);
      ++v17;
    }
    v15 = (_QWORD *)*v15;
  }
  if ( v16 > v4 )
  {
    v30 = -1073741789;
  }
  else
  {
    if ( v7 == 1 )
    {
      v41 = a3;
      v44 = 1;
    }
    else if ( v7 <= 1 )
    {
      v44 = 0;
      v41 = a3;
    }
    else
    {
      v41 = a3;
      v42 = a3 + 130;
      qsort(a3 + 130, v7, 0x10uLL, EtwpCompareGuid);
      v43 = a3 + 134;
      v44 = 1;
      v45 = v7 - 1;
      do
      {
        v46 = *v43 - *v42;
        if ( *v43 == *v42 )
          v46 = v43[1] - v42[1];
        if ( v46 )
        {
          v42 += 2;
          if ( v42 != v43 )
            *(_OWORD *)v42 = *(_OWORD *)v43;
          ++v44;
        }
        v43 += 2;
        --v45;
      }
      while ( v45 );
    }
    v30 = 0;
    v41[129] = v44;
  }
LABEL_57:
  BugCheckParameter2[84] = 0LL;
  v31 = BugCheckParameter2 + 83;
  _m_prefetchw(BugCheckParameter2 + 83);
  v32 = *v31;
  v33 = *v31 - 16;
  if ( (*v31 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v33 = 0LL;
  if ( (v32 & 2) != 0 || (v34 = BugCheckParameter2[83], v34 != _InterlockedCompareExchange64(v31, v33, v32)) )
    ExfReleasePushLock(BugCheckParameter2 + 83);
  KeAbPostRelease((unsigned __int64)(BugCheckParameter2 + 83));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v35, v36);
  EtwpUnreferenceGuidEntry(BugCheckParameter2, v37, v38, v39);
  *a4 = v16;
  return v30;
}
