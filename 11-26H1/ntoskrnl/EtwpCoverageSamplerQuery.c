/*
 * XREFs of EtwpCoverageSamplerQuery @ 0x14093FBF0
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x14093E61C (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwpCovSampCaptureFlushStats @ 0x14077A220 (EtwpCovSampCaptureFlushStats.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlSetUserMemory @ 0x14077F608 (RtlSetUserMemory.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 *     EtwpCovSampContextPruneModules @ 0x14093DA40 (EtwpCovSampContextPruneModules.c)
 *     EtwpCoverageSamplerFreeTable @ 0x14093F1BC (EtwpCoverageSamplerFreeTable.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x14093F9E4 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCovSampCaptureFlush @ 0x14093FB64 (EtwpCovSampCaptureFlush.c)
 *     EtwpCovSampReleaseSamplerRundown @ 0x140940F74 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140940FE8 (EtwpCovSampAcquireSamplerRundown.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCoverageSamplerQuery(struct _KTHREAD *a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rbx
  struct _LIST_ENTRY **p_Blink; // r13
  signed int v10; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v12; // r9
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rbx
  struct _LIST_ENTRY *i; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // esi
  struct _KTHREAD *v21; // rax
  void *v22; // rdx
  LegacyAutoBoost *v23; // rdi
  struct _LIST_ENTRY *v24; // rdx
  struct _LIST_ENTRY *v25; // r8
  struct _LIST_ENTRY *v26; // rax
  struct _LIST_ENTRY *v27; // rcx
  int Flink; // r10d
  unsigned int v29; // ecx
  unsigned int v30; // eax
  int v31; // r11d
  unsigned int v32; // ecx
  unsigned int v33; // eax
  int v34; // r11d
  struct _LIST_ENTRY *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // edx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // edx
  void *Pool2; // rax
  struct _KLOCK_ENTRIES *v46; // r9
  __int64 v47; // rsi
  unsigned __int64 v48; // rdi
  struct _KTHREAD *v49; // rax
  AutoBoost *v50; // rax
  void *v51; // rdx
  AutoBoost *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // r8
  unsigned __int64 v55; // rdi
  struct _KTHREAD *v56; // rax
  AutoBoost *v57; // rax
  void *v58; // rdx
  AutoBoost *v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // r8
  unsigned int v62; // r12d
  struct _KTHREAD *v63; // r15
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // r8
  PVOID v68; // r14
  __int64 *v70; // rbx
  __int64 v71; // rsi
  __int64 j; // rdi
  __int64 v73; // rsi
  _DWORD *v74; // r15
  struct _LIST_ENTRY *v75; // r14
  struct _KTHREAD *v76; // rax
  unsigned __int64 v77; // r12
  _DWORD *v78; // rdi
  _DWORD *v79; // r13
  void *v80; // r12
  unsigned __int64 v81; // r12
  char *v82; // rsi
  unsigned __int64 v83; // r14
  int *v84; // r15
  int *v85; // rdi
  int v86; // ecx
  size_t v87; // r8
  struct _KLOCK_ENTRIES *v88; // r9
  struct _KTHREAD *v89; // rax
  AutoBoost *v90; // rax
  void *v91; // rdx
  AutoBoost *v92; // rcx
  unsigned int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // r8
  _DWORD *v96; // rsi
  __int64 v97; // r12
  struct _KTHREAD *v98; // rdi
  struct _KTHREAD *v99; // rsi
  struct _KTHREAD **v100; // rax
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 *k; // rcx
  unsigned int v104; // [rsp+20h] [rbp-128h]
  unsigned int v105; // [rsp+24h] [rbp-124h]
  unsigned int v106; // [rsp+28h] [rbp-120h]
  unsigned int v108; // [rsp+48h] [rbp-100h]
  struct _LIST_ENTRY **v109; // [rsp+50h] [rbp-F8h]
  unsigned int v110; // [rsp+58h] [rbp-F0h]
  __int128 v111; // [rsp+60h] [rbp-E8h] BYREF
  void *v112; // [rsp+70h] [rbp-D8h]
  _DWORD *v113; // [rsp+78h] [rbp-D0h]
  AutoBoost *v114; // [rsp+80h] [rbp-C8h]
  void *v115; // [rsp+88h] [rbp-C0h]
  int v116; // [rsp+90h] [rbp-B8h]
  unsigned int v117; // [rsp+94h] [rbp-B4h]
  PVOID P; // [rsp+98h] [rbp-B0h]
  struct _KTHREAD *v119; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v120; // [rsp+A8h] [rbp-A0h]
  unsigned int *v121; // [rsp+B0h] [rbp-98h]
  struct _KTHREAD *v122; // [rsp+B8h] [rbp-90h]
  unsigned int v123; // [rsp+C0h] [rbp-88h]
  _DWORD *v124; // [rsp+C8h] [rbp-80h]
  _DWORD *v125; // [rsp+D0h] [rbp-78h]
  _DWORD *v126; // [rsp+D8h] [rbp-70h]
  unsigned __int64 v127; // [rsp+E0h] [rbp-68h]
  __int128 v128; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v129; // [rsp+F8h] [rbp-50h]

  v121 = a4;
  v113 = a2;
  v122 = a1;
  v7 = 0;
  v119 = 0LL;
  v8 = ExpSysDbgLock.TracingPrivate[0];
  v120 = ExpSysDbgLock.TracingPrivate[0];
  p_Blink = &a1->Header.WaitListHead.Blink;
  v109 = &a1->Header.WaitListHead.Blink;
  v111 = 0LL;
  v104 = 0;
  P = 0LL;
  v124 = 0LL;
  v10 = EtwpCovSampAcquireSamplerRundown(&v119);
  if ( v10 < 0 )
    goto LABEL_79;
  if ( v119 != a1 )
  {
    v10 = -1073741431;
LABEL_79:
    v62 = 0;
    v63 = a1;
    goto LABEL_82;
  }
  EtwpCovSampCaptureFlush(v8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, v12);
  v15 = v13;
  if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v13, (__int64)a1);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v14);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  for ( i = a1[1].WaitBlock[3].WaitListEntry.Flink; i != (struct _LIST_ENTRY *)&a1[1].WaitBlockFill11[144]; i = i->Flink )
    v7 += LODWORD(i[1].Flink);
  v17 = 8LL * v7;
  if ( v17 > 0xFFFFFFFF )
  {
    v10 = -1073741675;
LABEL_81:
    v63 = a1;
    v62 = v104;
    goto LABEL_82;
  }
  v18 = 8 * v7;
  v19 = v17 + 1232;
  v20 = -1;
  if ( v18 + 1232 >= v18 )
    v20 = v18 + 1232;
  v10 = v19 < v18 ? 0xC0000095 : 0;
  if ( v19 < v18 )
    goto LABEL_81;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v108 = 0;
  *((_QWORD *)&v111 + 1) = &v111;
  *(_QWORD *)&v111 = &v111;
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  v23 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(p_Blink + 147), 0LL, 0LL, (struct _KLOCK_ENTRIES *)0xFFFFFFFFLL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)p_Blink + 147, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)p_Blink + 147, 0, v23, (struct _KTHREAD *)(p_Blink + 147));
  if ( v23 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v23, v22);
    else
      *((_BYTE *)v23 + 10) = 1;
  }
  v24 = p_Blink[153];
  while ( 1 )
  {
    v25 = v24;
    v26 = v24;
    if ( v24 == (struct _LIST_ENTRY *)(p_Blink + 153) )
      break;
    v24 = v24->Flink;
    v27 = v26 + 3;
    if ( HIDWORD(v26[3].Blink) || ((__int64)v27->Flink & 0x100000) != 0 )
    {
      if ( v25[2].Flink )
      {
        ++v104;
        ++v105;
        Flink = (int)v27->Flink;
        v29 = 2 * (unsigned __int16)LODWORD(v27->Flink) + 2;
        v30 = v29 + v106;
        v31 = -1;
        if ( v29 + v106 >= v29 )
          v31 = v29 + v106;
        v106 = v31;
        v10 = v30 < v29 ? 0xC0000095 : 0;
        if ( v30 < v29 )
          goto LABEL_81;
        v32 = LODWORD(v25[-1].Flink) - (((unsigned __int8)LODWORD(v25[-1].Flink) - 1) & 3) + 3;
        v33 = v32 + v108;
        v34 = -1;
        if ( v32 + v108 >= v32 )
          v34 = v32 + v108;
        v108 = v34;
        v10 = v33 < v32 ? 0xC0000095 : 0;
        if ( v33 < v32 )
          goto LABEL_81;
        if ( (Flink & 0x100000) != 0 && !HIDWORD(v25[3].Blink) )
          _InterlockedExchange((volatile __int32 *)&v25[3].Blink + 1, 1);
        v35 = (struct _LIST_ENTRY *)*((_QWORD *)&v111 + 1);
        if ( **((__int128 ***)&v111 + 1) != &v111 )
LABEL_37:
          __fastfail(3u);
        v25[4].Blink = (struct _LIST_ENTRY *)&v111;
        v25[5].Flink = v35;
        v35->Flink = (struct _LIST_ENTRY *)((char *)v25 + 72);
        *((_QWORD *)&v111 + 1) = (char *)v25 + 72;
      }
      else
      {
        if ( v25[-1].Blink == (struct _LIST_ENTRY *)1 )
          _InterlockedIncrement((volatile signed __int32 *)p_Blink + 409);
        _InterlockedExchange((volatile __int32 *)&v25[3].Blink + 1, 0);
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)p_Blink + 147, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)p_Blink + 147);
  KeAbPostRelease((unsigned __int64)(p_Blink + 147));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v36, v37);
  v38 = 48LL * v105;
  if ( v38 > 0xFFFFFFFF )
  {
    v10 = -1073741675;
    goto LABEL_81;
  }
  v39 = v20 + v38;
  v40 = -1;
  if ( v20 + (unsigned int)v38 >= v20 )
    v40 = v20 + v38;
  v10 = v39 < v20 ? 0xC0000095 : 0;
  if ( v39 < v20 )
    goto LABEL_81;
  v41 = v40 + v106;
  v42 = -1;
  if ( v40 + v106 >= v40 )
    v42 = v40 + v106;
  v10 = v41 < v40 ? 0xC0000095 : 0;
  if ( v41 < v40 )
    goto LABEL_81;
  v43 = v42 + v108;
  v44 = -1;
  if ( v42 + v108 >= v42 )
    v44 = v42 + v108;
  v117 = v44;
  v10 = v43 < v42 ? 0xC0000095 : 0;
  if ( v43 < v42 )
    goto LABEL_81;
  if ( a3 < v44 )
  {
    *v121 = v44;
    v10 = -1073741789;
    goto LABEL_81;
  }
  if ( v104 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    P = Pool2;
    if ( !Pool2 )
    {
      v10 = -1073741670;
      v63 = a1;
      v62 = v104;
      goto LABEL_82;
    }
    memset_0(Pool2, 0, 8 * v104);
  }
  if ( RtlReadUCharFromUser(a2 + 4) )
  {
    v47 = v120;
    v48 = *(_QWORD *)(v120 + 1320);
    if ( v48 )
    {
      v49 = KeGetCurrentThread();
      --v49->KernelApcDisable;
      v50 = (AutoBoost *)KeAbPreAcquire(v48, 0LL, 0LL, v46);
      v52 = v50;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v48, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v48, v50, v48);
      if ( v52 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v52, v51);
        else
          *((_BYTE *)v52 + 10) = 1;
      }
      *(_QWORD *)(v48 + 8) = KeGetCurrentThread();
      memset_0((void *)(v48 + 24), 0, 4LL * *(unsigned int *)(v48 + 20));
      *(_QWORD *)(v48 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v48);
      KeAbPostRelease(v48);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v53, v54);
    }
    v55 = *(_QWORD *)(v47 + 1328);
    if ( v55 )
    {
      v56 = KeGetCurrentThread();
      --v56->KernelApcDisable;
      v57 = (AutoBoost *)KeAbPreAcquire(v55, 0LL, 0LL, v46);
      v59 = v57;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v55, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v55, v57, v55);
      if ( v59 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v59, v58);
        else
          *((_BYTE *)v59 + 10) = 1;
      }
      *(_QWORD *)(v55 + 8) = KeGetCurrentThread();
      memset_0((void *)(v55 + 24), 0, 4LL * *(unsigned int *)(v55 + 20));
      *(_QWORD *)(v55 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v55, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v55);
      KeAbPostRelease(v55);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v60, v61);
    }
  }
  v115 = a2 + 5;
  RtlSetUserMemory(a2 + 5, 0, 0x2CuLL);
  RtlWriteULongToUser(a2 + 5, 44);
  RtlWriteULongToUser(a2 + 7, HIDWORD(a1[1].LastXStateSaveDebugInfo));
  RtlWriteULongToUser(a2 + 9, 1108);
  RtlWriteULongToUser(a2 + 8, 44);
  v115 = a2 + 293;
  RtlCopyToUser(a2 + 16, p_Blink + 1, 0x454uLL);
  RtlWriteULongToUser(a2 + 11, 60);
  RtlWriteULongToUser(a2 + 10, 1152);
  v124 = a2 + 293;
  v74 = a2 + 308;
  RtlWriteULongToUser(a2 + 13, v7);
  RtlWriteULongToUser(a2 + 12, 1212);
  v125 = a2 + 308;
  v77 = (unsigned __int64)&a2[2 * v7 + 308];
  v76 = a1;
  v75 = a1[1].WaitBlock[3].WaitListEntry.Flink;
  while ( v75 != (struct _LIST_ENTRY *)&v76[1].WaitBlockFill11[144] )
  {
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      v116 = j;
      if ( (unsigned int)j >= HIDWORD(v75[1].Flink) )
        break;
      v73 = (__int64)v75[1].Blink + 8 * j;
      if ( *(_QWORD *)v73 )
      {
        if ( (unsigned __int64)v74 >= v77 )
          break;
        RtlWriteULongToUser(v74, *(_QWORD *)v73);
        RtlWriteULongToUser(v74 + 1, *(_DWORD *)(v73 + 4));
        v74 += 2;
        v125 = v74;
      }
    }
    v75 = v75->Flink;
    v76 = a1;
  }
  v78 = v113 + 5;
  RtlWriteULongToUser(v113 + 15, v105);
  RtlWriteULongToUser(v78 + 9, v77 - (_DWORD)v78);
  v79 = (_DWORD *)v77;
  v126 = (_DWORD *)v77;
  v80 = (void *)(48LL * v105 + v77);
  v112 = v80;
  RtlSetUserMemory(v79, 0, (_BYTE *)v80 - (_BYTE *)v79);
  v114 = (AutoBoost *)v80;
  v81 = (unsigned __int64)v80 + v108;
  v127 = v81;
  v82 = (char *)v81;
  v83 = v81 + v106;
  v110 = 0;
  v84 = (int *)v111;
  while ( 1 )
  {
    v85 = v84;
    if ( v84 == (int *)&v111 )
      break;
    v84 = *(int **)v84;
    RtlWriteULongToUser(v79 + 2, (_DWORD)v112 - ((_DWORD)v113 + 20));
    RtlWriteULongToUser(v79 + 3, *(v85 - 22));
    RtlWriteULongToUser(v79, (_DWORD)v82 - ((_DWORD)v113 + 20));
    RtlWriteULongToUser(v79 + 1, (unsigned __int16)*(v85 - 6));
    RtlWriteULongToUser(v79 + 4, *(v85 - 27));
    RtlWriteULongToUser(v79 + 5, *(v85 - 28));
    RtlWriteULongToUser(v79 + 6, *(v85 - 26));
    RtlWriteULongToUser(v79 + 7, *(v85 - 5));
    RtlWriteULongToUser(v79 + 8, *(v85 - 4));
    RtlWriteULongToUser(v79 + 9, v85[4]);
    RtlWriteULongToUser(v79 + 10, v85[5]);
    RtlWriteULongToUser(v79 + 11, v85[6]);
    v79 += 12;
    v126 = v79;
    RtlCopyToUser(v112, *((void **)v85 - 12), (unsigned int)*(v85 - 22));
    v112 = (void *)(((unsigned __int64)v112 + (unsigned int)*(v85 - 22) + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v114 = (AutoBoost *)v112;
    if ( (unsigned __int64)v112 > v81 )
      break;
    v86 = *(v85 - 6);
    v87 = 2LL * (unsigned __int16)v86;
    if ( (unsigned __int64)&v82[v87] > v83 )
      break;
    if ( (_WORD)v86 )
      RtlCopyToUser(v82, *((void **)v85 - 4), v87);
    else
      RtlWriteUShortToUser(v82, 0);
    v82 += 2 * (unsigned int)(unsigned __int16)*(v85 - 6) + 2;
    if ( (unsigned __int64)v82 > v83 )
      break;
    v89 = KeGetCurrentThread();
    --v89->KernelApcDisable;
    v90 = (AutoBoost *)KeAbPreAcquire((__int64)(v109 + 147), 0LL, 0LL, v88);
    v92 = v90;
    v114 = v90;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v109 + 294, 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v109 + 147, v90, (__int64)(v109 + 147));
      v92 = v114;
    }
    if ( v92 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v92, v91);
      else
        *((_BYTE *)v92 + 10) = 1;
    }
    v109[148] = (struct _LIST_ENTRY *)KeGetCurrentThread();
    *((_QWORD *)P + v110++) = *((_QWORD *)v85 - 5);
    *((_QWORD *)v85 - 5) = 0LL;
    *((_QWORD *)v85 - 4) = 0LL;
    v93 = *(v85 - 6) & 0xFFFF0000;
    *(v85 - 6) = v93;
    *(v85 - 6) = v93 | 0x80000;
    v109[148] = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v109 + 147, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v109 + 147);
    KeAbPostRelease((unsigned __int64)(v109 + 147));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v94, v95);
    v123 = --v105;
    if ( *((_QWORD *)v85 - 10) == 1LL )
      _InterlockedIncrement((volatile signed __int32 *)v109 + 409);
    _InterlockedExchange(v85 - 3, 0);
    v81 = v127;
  }
  p_Blink = v109;
  v96 = v115;
  RtlCopyToUser(v115, (char *)v109 + 1116, 0x3CuLL);
  *(_OWORD *)((char *)v109 + 1116) = 0LL;
  *(_OWORD *)((char *)v109 + 1132) = 0LL;
  *(_OWORD *)((char *)v109 + 1148) = 0LL;
  *(struct _LIST_ENTRY **)((char *)v109 + 1164) = 0LL;
  *((_DWORD *)v109 + 293) = 0;
  v128 = 0LL;
  v129 = 0LL;
  v97 = v120;
  EtwpCovSampCaptureFlushStats(v120, &v128);
  RtlWriteULongToUser(v96 + 7, v128);
  RtlWriteULongToUser(v96 + 8, SDWORD1(v128));
  RtlWriteULongToUser(v96 + 9, SDWORD2(v128));
  RtlWriteULongToUser(v96 + 10, SHIDWORD(v128));
  RtlWriteULongToUser(v96 + 11, v129);
  RtlWriteULongToUser(v96 + 12, SDWORD1(v129));
  RtlWriteULongToUser(v96 + 13, SDWORD2(v129));
  RtlWriteULongToUser(v96 + 14, SHIDWORD(v129));
  RtlWriteULongToUser(v113 + 6, v83 - ((_DWORD)v113 + 20));
  v63 = a1;
  v98 = (struct _KTHREAD *)a1[1].WaitBlock[3].WaitListEntry.Flink;
  while ( v98 != (struct _KTHREAD *)&a1[1].WaitBlockFill11[144] )
  {
    v99 = v98;
    v98 = *(struct _KTHREAD **)&v98->Header.Lock;
    if ( v99 == a1[1].WaitBlock[2].Object )
    {
      memset_0(v99->SListFaultAddress, 0, 8LL * HIDWORD(v99->Header.WaitListHead.Blink));
      LODWORD(v99->Header.WaitListHead.Blink) = 0;
    }
    else
    {
      v100 = (struct _KTHREAD **)v99->Header.WaitListHead.Flink;
      if ( (struct _KTHREAD *)v98->Header.WaitListHead.Flink != v99 || *v100 != v99 )
        goto LABEL_37;
      *v100 = v98;
      v98->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v100;
      --*(_DWORD *)&a1[1].WaitBlockFill11[160];
      EtwpCoverageSamplerFreeTable(v99);
    }
  }
  ++HIDWORD(a1[1].LastXStateSaveDebugInfo);
  if ( *(_DWORD *)(v97 + 1284) )
  {
    *(_DWORD *)(v97 + 1284) = 0;
    for ( k = *(__int64 **)(v97 + 944); k != (__int64 *)(v97 + 944); k = (__int64 *)*k )
      *((_DWORD *)k + 7) = *(_DWORD *)(v97 + 1284);
  }
  a1->Header.WaitListHead.Flink = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v101, v102);
  EtwpCovSampContextPruneModules((__int64)v109);
  *v121 = v117;
  v10 = 0;
  v62 = v104;
LABEL_82:
  if ( p_Blink[148] == (struct _LIST_ENTRY *)KeGetCurrentThread() )
  {
    p_Blink[148] = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Blink + 147, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)p_Blink + 147);
    KeAbPostRelease((unsigned __int64)(p_Blink + 147));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v64, v65);
  }
  if ( (struct _KTHREAD *)v63->Header.WaitListHead.Flink == KeGetCurrentThread() )
  {
    v63->Header.WaitListHead.Flink = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v63->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&v63->Header.Lock);
    KeAbPostRelease((unsigned __int64)v63);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v66, v67);
  }
  v68 = P;
  if ( P )
  {
    if ( v62 )
    {
      v70 = (__int64 *)P;
      v71 = v62;
      do
      {
        EtwpCovSampModuleNameInfoCleanup(v70++);
        --v71;
      }
      while ( v71 );
    }
    ExFreePoolWithTag(v68, 0x56777445u);
  }
  EtwpCovSampReleaseSamplerRundown(v119);
  return (unsigned int)v10;
}
