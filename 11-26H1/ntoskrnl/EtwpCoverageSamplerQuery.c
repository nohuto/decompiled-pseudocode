/*
 * XREFs of EtwpCoverageSamplerQuery @ 0x140A32D00
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x140A31734 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpCovSampCaptureFlushStats @ 0x14077D150 (EtwpCovSampCaptureFlushStats.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     EtwpCovSampContextPruneModules @ 0x140A30B58 (EtwpCovSampContextPruneModules.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140A322CC (EtwpCoverageSamplerFreeTable.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140A32AF4 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCovSampCaptureFlush @ 0x140A32C74 (EtwpCovSampCaptureFlush.c)
 *     EtwpCovSampReleaseSamplerRundown @ 0x140A34084 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140A340F8 (EtwpCovSampAcquireSamplerRundown.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCoverageSamplerQuery(struct _KTHREAD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v7; // r14d
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY **p_Blink; // r13
  __int64 v10; // rdx
  signed int v11; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v13; // r9
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rbx
  struct _LIST_ENTRY *i; // rax
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // esi
  struct _KTHREAD *v22; // rax
  void *v23; // rdx
  LegacyAutoBoost *v24; // rdi
  __int64 v25; // r8
  __int64 v26; // rax
  int *v27; // rcx
  int v28; // r10d
  unsigned int v29; // ecx
  unsigned int v30; // eax
  int v31; // r11d
  unsigned int v32; // ecx
  unsigned int v33; // eax
  int v34; // r11d
  _QWORD *v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // eax
  void *Pool2; // rax
  struct _KLOCK_ENTRIES *v42; // r9
  struct _LIST_ENTRY *v43; // rsi
  unsigned __int64 v44; // rdi
  struct _KTHREAD *v45; // rax
  AutoBoost *v46; // rax
  void *v47; // rdx
  AutoBoost *v48; // rbx
  unsigned __int64 Flink; // rdi
  struct _KTHREAD *v50; // rax
  AutoBoost *v51; // rax
  void *v52; // rdx
  AutoBoost *v53; // rsi
  unsigned int v54; // r12d
  struct _KTHREAD *v55; // r15
  PVOID v56; // r14
  __int64 *v58; // rbx
  __int64 v59; // rsi
  __int64 j; // rdi
  __int64 v61; // rsi
  _DWORD *v62; // r15
  struct _LIST_ENTRY *v63; // r14
  struct _KTHREAD *v64; // rax
  unsigned __int64 v65; // r12
  _DWORD *v66; // rdi
  _DWORD *v67; // r13
  void *v68; // r12
  unsigned __int64 v69; // r12
  char *v70; // rsi
  unsigned __int64 v71; // r14
  int *v72; // r15
  int *v73; // rdi
  int v74; // ecx
  size_t v75; // r8
  struct _KLOCK_ENTRIES *v76; // r9
  struct _KTHREAD *v77; // rax
  AutoBoost *v78; // rax
  void *v79; // rdx
  AutoBoost *v80; // rcx
  unsigned int v81; // eax
  _DWORD *v82; // rsi
  struct _LIST_ENTRY *v83; // r12
  struct _KTHREAD *v84; // rdi
  struct _KTHREAD *v85; // rsi
  struct _KTHREAD **v86; // rax
  struct _LIST_ENTRY *k; // rcx
  unsigned int v88; // [rsp+20h] [rbp-128h]
  unsigned int v89; // [rsp+24h] [rbp-124h]
  unsigned int v90; // [rsp+28h] [rbp-120h]
  unsigned int v92; // [rsp+48h] [rbp-100h]
  struct _LIST_ENTRY **v93; // [rsp+50h] [rbp-F8h]
  unsigned int v94; // [rsp+58h] [rbp-F0h]
  __int128 v95; // [rsp+60h] [rbp-E8h] BYREF
  void *v96; // [rsp+70h] [rbp-D8h]
  _DWORD *v97; // [rsp+78h] [rbp-D0h]
  AutoBoost *v98; // [rsp+80h] [rbp-C8h]
  void *v99; // [rsp+88h] [rbp-C0h]
  int v100; // [rsp+90h] [rbp-B8h]
  int v101; // [rsp+94h] [rbp-B4h]
  PVOID P; // [rsp+98h] [rbp-B0h]
  struct _KTHREAD *v103; // [rsp+A0h] [rbp-A8h] BYREF
  struct _LIST_ENTRY *v104; // [rsp+A8h] [rbp-A0h]
  _DWORD *v105; // [rsp+B0h] [rbp-98h]
  struct _KTHREAD *v106; // [rsp+B8h] [rbp-90h]
  unsigned int v107; // [rsp+C0h] [rbp-88h]
  _DWORD *v108; // [rsp+C8h] [rbp-80h]
  _DWORD *v109; // [rsp+D0h] [rbp-78h]
  _DWORD *v110; // [rsp+D8h] [rbp-70h]
  unsigned __int64 v111; // [rsp+E0h] [rbp-68h]
  __int128 v112; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v113; // [rsp+F8h] [rbp-50h]

  v105 = a4;
  v97 = a2;
  v106 = a1;
  v7 = 0;
  v103 = 0LL;
  Blink = ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  v104 = ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  p_Blink = &a1->Header.WaitListHead.Blink;
  v93 = &a1->Header.WaitListHead.Blink;
  v95 = 0LL;
  v88 = 0;
  P = 0LL;
  v108 = 0LL;
  v11 = EtwpCovSampAcquireSamplerRundown(&v103);
  if ( v11 < 0 )
    goto LABEL_80;
  if ( v103 != a1 )
  {
    v11 = -1073741431;
LABEL_80:
    v54 = 0;
    v55 = a1;
    goto LABEL_83;
  }
  EtwpCovSampCaptureFlush((__int64)Blink);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, v13);
  v16 = v14;
  if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v14, (__int64)a1);
  if ( v16 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v16, v15);
    else
      *((_BYTE *)v16 + 10) = 1;
  }
  a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  for ( i = a1[1].WaitBlock[3].WaitListEntry.Flink; i != (struct _LIST_ENTRY *)&a1[1].WaitBlockFill11[144]; i = i->Flink )
    v7 += LODWORD(i[1].Flink);
  v18 = 8LL * v7;
  v19 = -1;
  if ( v18 <= 0xFFFFFFFF )
    v19 = 8 * v7;
  v10 = 0LL;
  if ( v18 > 0xFFFFFFFF )
  {
    v11 = -1073741675;
LABEL_82:
    v55 = a1;
    v54 = v88;
    goto LABEL_83;
  }
  v20 = v19 + 1232;
  v21 = -1;
  if ( v19 + 1232 >= v19 )
    v21 = v19 + 1232;
  v11 = v20 < v19 ? 0xC0000095 : 0;
  if ( v20 < v19 )
    goto LABEL_82;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v92 = 0;
  *((_QWORD *)&v95 + 1) = &v95;
  *(_QWORD *)&v95 = &v95;
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  v24 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(p_Blink + 147), 0LL, 0LL, (struct _KLOCK_ENTRIES *)0xFFFFFFFFLL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)p_Blink + 147, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)p_Blink + 147, 0, v24, (struct _KTHREAD *)(p_Blink + 147));
  if ( v24 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v24, v23);
    else
      *((_BYTE *)v24 + 10) = 1;
  }
  v10 = (__int64)p_Blink[153];
  while ( 1 )
  {
    v25 = v10;
    v26 = v10;
    if ( (struct _LIST_ENTRY **)v10 == p_Blink + 153 )
      break;
    v10 = *(_QWORD *)v10;
    v27 = (int *)(v26 + 48);
    if ( *(_DWORD *)(v26 + 60) || (*v27 & 0x100000) != 0 )
    {
      if ( *(_QWORD *)(v25 + 32) )
      {
        ++v88;
        ++v89;
        v28 = *v27;
        v29 = 2 * (unsigned __int16)*v27 + 2;
        v30 = v29 + v90;
        v31 = -1;
        if ( v29 + v90 >= v29 )
          v31 = v29 + v90;
        v90 = v31;
        v11 = v30 < v29 ? 0xC0000095 : 0;
        if ( v30 < v29 )
          goto LABEL_82;
        v32 = *(_DWORD *)(v25 - 16) - (((unsigned __int8)*(_DWORD *)(v25 - 16) - 1) & 3) + 3;
        v33 = v32 + v92;
        v34 = -1;
        if ( v32 + v92 >= v32 )
          v34 = v32 + v92;
        v92 = v34;
        v11 = v33 < v32 ? 0xC0000095 : 0;
        if ( v33 < v32 )
          goto LABEL_82;
        if ( (v28 & 0x100000) != 0 && !*(_DWORD *)(v25 + 60) )
          _InterlockedExchange((volatile __int32 *)(v25 + 60), 1);
        v35 = (_QWORD *)*((_QWORD *)&v95 + 1);
        if ( **((__int128 ***)&v95 + 1) != &v95 )
LABEL_38:
          __fastfail(3u);
        *(_QWORD *)(v25 + 72) = &v95;
        *(_QWORD *)(v25 + 80) = v35;
        *v35 = v25 + 72;
        *((_QWORD *)&v95 + 1) = v25 + 72;
      }
      else
      {
        if ( *(_QWORD *)(v25 - 8) == 1LL )
          _InterlockedIncrement((volatile signed __int32 *)p_Blink + 409);
        _InterlockedExchange((volatile __int32 *)(v25 + 60), 0);
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)p_Blink + 147, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)p_Blink + 147);
  KeAbPostRelease((unsigned __int64)(p_Blink + 147));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v36 = 48LL * v89;
  if ( v36 > 0xFFFFFFFF )
  {
    v11 = -1073741675;
    goto LABEL_82;
  }
  v37 = v21 + v36;
  v10 = 0xFFFFFFFFLL;
  if ( v21 + (unsigned int)v36 >= v21 )
    v10 = v37;
  v11 = v37 < v21 ? 0xC0000095 : 0;
  if ( v37 < v21 )
    goto LABEL_82;
  v38 = v10 + v90;
  v39 = -1;
  if ( (unsigned int)v10 + v90 >= (unsigned int)v10 )
    v39 = v10 + v90;
  v11 = v38 < (unsigned int)v10 ? 0xC0000095 : 0;
  if ( v38 < (unsigned int)v10 )
    goto LABEL_82;
  v40 = v39 + v92;
  v10 = 0xFFFFFFFFLL;
  if ( v39 + v92 >= v39 )
    v10 = v40;
  v101 = v10;
  v11 = v40 < v39 ? 0xC0000095 : 0;
  if ( v40 < v39 )
    goto LABEL_82;
  if ( a3 < (unsigned int)v10 )
  {
    *v105 = v10;
    v11 = -1073741789;
    goto LABEL_82;
  }
  if ( v88 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    P = Pool2;
    if ( !Pool2 )
    {
      v11 = -1073741670;
      v55 = a1;
      v54 = v88;
      goto LABEL_83;
    }
    memset_0(Pool2, 0, 8 * v88);
  }
  if ( RtlReadUCharFromUser(a2 + 4) )
  {
    v43 = v104;
    v44 = (unsigned __int64)v104[82].Blink;
    if ( v44 )
    {
      v45 = KeGetCurrentThread();
      --v45->KernelApcDisable;
      v46 = (AutoBoost *)KeAbPreAcquire(v44, 0LL, 0LL, v42);
      v48 = v46;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v44, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v44, v46, v44);
      if ( v48 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v48, v47);
        else
          *((_BYTE *)v48 + 10) = 1;
      }
      *(_QWORD *)(v44 + 8) = KeGetCurrentThread();
      memset_0((void *)(v44 + 24), 0, 4LL * *(unsigned int *)(v44 + 20));
      *(_QWORD *)(v44 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v44);
      KeAbPostRelease(v44);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    Flink = (unsigned __int64)v43[83].Flink;
    if ( Flink )
    {
      v50 = KeGetCurrentThread();
      --v50->KernelApcDisable;
      v51 = (AutoBoost *)KeAbPreAcquire(Flink, 0LL, 0LL, v42);
      v53 = v51;
      if ( _interlockedbittestandset64((volatile signed __int32 *)Flink, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)Flink, v51, Flink);
      if ( v53 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v53, v52);
        else
          *((_BYTE *)v53 + 10) = 1;
      }
      *(_QWORD *)(Flink + 8) = KeGetCurrentThread();
      memset_0((void *)(Flink + 24), 0, 4LL * *(unsigned int *)(Flink + 20));
      *(_QWORD *)(Flink + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Flink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)Flink);
      KeAbPostRelease(Flink);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  v99 = a2 + 5;
  RtlSetUserMemory(a2 + 5, 0, 0x2CuLL);
  RtlWriteULongToUser(a2 + 5, 44);
  RtlWriteULongToUser(a2 + 7, HIDWORD(a1[1].LastXStateSaveDebugInfo));
  RtlWriteULongToUser(a2 + 9, 1108);
  RtlWriteULongToUser(a2 + 8, 44);
  v99 = a2 + 293;
  RtlCopyToUser(a2 + 16, p_Blink + 1, 0x454uLL);
  RtlWriteULongToUser(a2 + 11, 60);
  RtlWriteULongToUser(a2 + 10, 1152);
  v108 = a2 + 293;
  v62 = a2 + 308;
  RtlWriteULongToUser(a2 + 13, v7);
  RtlWriteULongToUser(a2 + 12, 1212);
  v109 = a2 + 308;
  v65 = (unsigned __int64)&a2[2 * v7 + 308];
  v64 = a1;
  v63 = a1[1].WaitBlock[3].WaitListEntry.Flink;
  while ( v63 != (struct _LIST_ENTRY *)&v64[1].WaitBlockFill11[144] )
  {
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      v100 = j;
      if ( (unsigned int)j >= HIDWORD(v63[1].Flink) )
        break;
      v61 = (__int64)v63[1].Blink + 8 * j;
      if ( *(_QWORD *)v61 )
      {
        if ( (unsigned __int64)v62 >= v65 )
          break;
        RtlWriteULongToUser(v62, *(_QWORD *)v61);
        RtlWriteULongToUser(v62 + 1, *(_DWORD *)(v61 + 4));
        v62 += 2;
        v109 = v62;
      }
    }
    v63 = v63->Flink;
    v64 = a1;
  }
  v66 = v97 + 5;
  RtlWriteULongToUser(v97 + 15, v89);
  RtlWriteULongToUser(v66 + 9, v65 - (_DWORD)v66);
  v67 = (_DWORD *)v65;
  v110 = (_DWORD *)v65;
  v68 = (void *)(48LL * v89 + v65);
  v96 = v68;
  RtlSetUserMemory(v67, 0, (_BYTE *)v68 - (_BYTE *)v67);
  v98 = (AutoBoost *)v68;
  v69 = (unsigned __int64)v68 + v92;
  v111 = v69;
  v70 = (char *)v69;
  v71 = v69 + v90;
  v94 = 0;
  v72 = (int *)v95;
  while ( 1 )
  {
    v73 = v72;
    if ( v72 == (int *)&v95 )
      break;
    v72 = *(int **)v72;
    RtlWriteULongToUser(v67 + 2, (_DWORD)v96 - ((_DWORD)v97 + 20));
    RtlWriteULongToUser(v67 + 3, *(v73 - 22));
    RtlWriteULongToUser(v67, (_DWORD)v70 - ((_DWORD)v97 + 20));
    RtlWriteULongToUser(v67 + 1, (unsigned __int16)*(v73 - 6));
    RtlWriteULongToUser(v67 + 4, *(v73 - 27));
    RtlWriteULongToUser(v67 + 5, *(v73 - 28));
    RtlWriteULongToUser(v67 + 6, *(v73 - 26));
    RtlWriteULongToUser(v67 + 7, *(v73 - 5));
    RtlWriteULongToUser(v67 + 8, *(v73 - 4));
    RtlWriteULongToUser(v67 + 9, v73[4]);
    RtlWriteULongToUser(v67 + 10, v73[5]);
    RtlWriteULongToUser(v67 + 11, v73[6]);
    v67 += 12;
    v110 = v67;
    RtlCopyToUser(v96, *((void **)v73 - 12), (unsigned int)*(v73 - 22));
    v96 = (void *)(((unsigned __int64)v96 + (unsigned int)*(v73 - 22) + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v98 = (AutoBoost *)v96;
    if ( (unsigned __int64)v96 > v69 )
      break;
    v74 = *(v73 - 6);
    v75 = 2LL * (unsigned __int16)v74;
    if ( (unsigned __int64)&v70[v75] > v71 )
      break;
    if ( (_WORD)v74 )
      RtlCopyToUser(v70, *((void **)v73 - 4), v75);
    else
      RtlWriteUShortToUser(v70, 0);
    v70 += 2 * (unsigned int)(unsigned __int16)*(v73 - 6) + 2;
    if ( (unsigned __int64)v70 > v71 )
      break;
    v77 = KeGetCurrentThread();
    --v77->KernelApcDisable;
    v78 = (AutoBoost *)KeAbPreAcquire((__int64)(v93 + 147), 0LL, 0LL, v76);
    v80 = v78;
    v98 = v78;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v93 + 294, 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v93 + 147, v78, (__int64)(v93 + 147));
      v80 = v98;
    }
    if ( v80 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v80, v79);
      else
        *((_BYTE *)v80 + 10) = 1;
    }
    v93[148] = (struct _LIST_ENTRY *)KeGetCurrentThread();
    *((_QWORD *)P + v94++) = *((_QWORD *)v73 - 5);
    *((_QWORD *)v73 - 5) = 0LL;
    *((_QWORD *)v73 - 4) = 0LL;
    v81 = *(v73 - 6) & 0xFFFF0000;
    *(v73 - 6) = v81;
    *(v73 - 6) = v81 | 0x80000;
    v93[148] = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v93 + 147, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v93 + 147);
    KeAbPostRelease((unsigned __int64)(v93 + 147));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v107 = --v89;
    if ( *((_QWORD *)v73 - 10) == 1LL )
      _InterlockedIncrement((volatile signed __int32 *)v93 + 409);
    _InterlockedExchange(v73 - 3, 0);
    v69 = v111;
  }
  p_Blink = v93;
  v82 = v99;
  RtlCopyToUser(v99, (char *)v93 + 1116, 0x3CuLL);
  *(_OWORD *)((char *)v93 + 1116) = 0LL;
  *(_OWORD *)((char *)v93 + 1132) = 0LL;
  *(_OWORD *)((char *)v93 + 1148) = 0LL;
  *(struct _LIST_ENTRY **)((char *)v93 + 1164) = 0LL;
  *((_DWORD *)v93 + 293) = 0;
  v112 = 0LL;
  v113 = 0LL;
  v83 = v104;
  EtwpCovSampCaptureFlushStats((__int64)v104, &v112);
  RtlWriteULongToUser(v82 + 7, v112);
  RtlWriteULongToUser(v82 + 8, SDWORD1(v112));
  RtlWriteULongToUser(v82 + 9, SDWORD2(v112));
  RtlWriteULongToUser(v82 + 10, SHIDWORD(v112));
  RtlWriteULongToUser(v82 + 11, v113);
  RtlWriteULongToUser(v82 + 12, SDWORD1(v113));
  RtlWriteULongToUser(v82 + 13, SDWORD2(v113));
  RtlWriteULongToUser(v82 + 14, SHIDWORD(v113));
  RtlWriteULongToUser(v97 + 6, v71 - ((_DWORD)v97 + 20));
  v55 = a1;
  v84 = (struct _KTHREAD *)a1[1].WaitBlock[3].WaitListEntry.Flink;
  while ( v84 != (struct _KTHREAD *)&a1[1].WaitBlockFill11[144] )
  {
    v85 = v84;
    v84 = *(struct _KTHREAD **)&v84->Header.Lock;
    if ( v85 == a1[1].WaitBlock[2].Object )
    {
      memset_0(v85->SListFaultAddress, 0, 8LL * HIDWORD(v85->Header.WaitListHead.Blink));
      LODWORD(v85->Header.WaitListHead.Blink) = 0;
    }
    else
    {
      v86 = (struct _KTHREAD **)v85->Header.WaitListHead.Flink;
      if ( (struct _KTHREAD *)v84->Header.WaitListHead.Flink != v85 || *v86 != v85 )
        goto LABEL_38;
      *v86 = v84;
      v84->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v86;
      --*(_DWORD *)&a1[1].WaitBlockFill11[160];
      EtwpCoverageSamplerFreeTable(v85);
    }
  }
  ++HIDWORD(a1[1].LastXStateSaveDebugInfo);
  if ( HIDWORD(v83[80].Flink) )
  {
    HIDWORD(v83[80].Flink) = 0;
    for ( k = v83[59].Flink; k != &v83[59]; k = k->Flink )
      HIDWORD(k[1].Blink) = HIDWORD(v83[80].Flink);
  }
  a1->Header.WaitListHead.Flink = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  EtwpCovSampContextPruneModules((__int64)v93);
  *v105 = v101;
  v11 = 0;
  v54 = v88;
LABEL_83:
  if ( p_Blink[148] == (struct _LIST_ENTRY *)KeGetCurrentThread() )
  {
    p_Blink[148] = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Blink + 147, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)p_Blink + 147);
    KeAbPostRelease((unsigned __int64)(p_Blink + 147));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( (struct _KTHREAD *)v55->Header.WaitListHead.Flink == KeGetCurrentThread() )
  {
    v55->Header.WaitListHead.Flink = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v55->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&v55->Header.Lock);
    KeAbPostRelease((unsigned __int64)v55);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v56 = P;
  if ( P )
  {
    if ( v54 )
    {
      v58 = (__int64 *)P;
      v59 = v54;
      do
      {
        EtwpCovSampModuleNameInfoCleanup(v58++, v10);
        --v59;
      }
      while ( v59 );
    }
    ExFreePoolWithTag(v56, 0x56777445u);
  }
  EtwpCovSampReleaseSamplerRundown(v103);
  return (unsigned int)v11;
}
