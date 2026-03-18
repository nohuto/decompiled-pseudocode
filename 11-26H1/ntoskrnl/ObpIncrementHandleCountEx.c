/*
 * XREFs of ObpIncrementHandleCountEx @ 0x14092E8D0
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1408EEAF0 (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x140971174 (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1409714E0 (ObCompleteObjectDuplication.c)
 *     ExDupHandleTable @ 0x140971D40 (ExDupHandleTable.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     PspChargeQuota @ 0x1403BD5A0 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1403BD9F0 (PspReturnQuota.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x1404C9E14 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpDeleteNameCheck @ 0x1408FC8F0 (ObpDeleteNameCheck.c)
 *     ObpLockObjectTypeExclusive @ 0x1409242F0 (ObpLockObjectTypeExclusive.c)
 *     PsReturnSharedPoolQuota @ 0x1409E0BA0 (PsReturnSharedPoolQuota.c)
 *     ObpLockHandleDataBaseEntry @ 0x140A486B0 (ObpLockHandleDataBaseEntry.c)
 *     ObpUnlockObjectType @ 0x140A5AAA0 (ObpUnlockObjectType.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x140AB74FC (ObpUnlockHandleDatabaseEntry.c)
 */

__int64 __fastcall ObpIncrementHandleCountEx(
        unsigned int a1,
        __int64 a2,
        struct _KPROCESS *a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned __int8 a5,
        __int16 a6,
        unsigned __int64 a7)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  struct _KPROCESS *v9; // r13
  __int64 v10; // r14
  int v11; // ecx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rdi
  char v16; // cl
  unsigned int v17; // r12d
  char v18; // di
  unsigned int *v19; // rsi
  unsigned int v20; // ecx
  unsigned __int64 v21; // r13
  __int64 v22; // rbp
  struct _KPROCESS *v23; // rbp
  unsigned __int64 v24; // rax
  __int64 v25; // rbp
  int v26; // esi
  char v27; // dl
  char v28; // al
  bool v29; // zf
  __int64 v30; // rdx
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  __int64 v33; // rtt
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  struct _KLOCK_ENTRIES *v38; // r9
  signed __int32 v39; // r15d
  unsigned __int32 v40; // eax
  unsigned __int32 j; // r15d
  __int64 *v42; // rbx
  __int64 **v43; // rax
  __int16 v44; // dx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  signed __int64 v50; // rax
  signed __int64 v51; // rdx
  __int64 v52; // rtt
  __int64 v53; // rdx
  __int64 v54; // r8
  unsigned int v55; // esi
  struct _LIST_ENTRY *v56; // rbp
  char v57; // r12
  struct _KLOCK_ENTRIES *v58; // r9
  struct _KTHREAD *v59; // rax
  AutoBoost *v60; // rax
  void *v61; // rdx
  AutoBoost *v62; // rbp
  signed __int64 v63; // rax
  signed __int64 v64; // rdx
  __int64 v65; // rtt
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // r8
  struct _KLOCK_ENTRIES *v70; // r9
  void *v71; // rcx
  int *v72; // rax
  _DWORD *v73; // rdx
  _DWORD *v74; // r8
  int v75; // ecx
  _DWORD *i; // rax
  _DWORD *v77; // r9
  _DWORD *v78; // r10
  __int64 v79; // rax
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  signed __int64 v81; // rax
  signed __int64 v82; // rdx
  __int64 v83; // rtt
  __int64 v84; // rdx
  __int64 v85; // r8
  struct _KPROCESS *v87; // rcx
  _QWORD *v88; // rcx
  unsigned int v89; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v90; // [rsp+44h] [rbp-B4h]
  struct _KPROCESS *v91; // [rsp+48h] [rbp-B0h]
  unsigned __int64 SchedulingGroup; // [rsp+50h] [rbp-A8h]
  struct _KLOCK_ENTRIES *v93; // [rsp+58h] [rbp-A0h]
  int v94; // [rsp+60h] [rbp-98h]
  __int64 v95; // [rsp+68h] [rbp-90h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-88h] BYREF

  v7 = a7;
  v8 = (__int64)&a4[-1].Entries[0].40;
  v90 = a1;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = a3;
  v91 = a3;
  v95 = a2;
  SchedulingGroup = (unsigned __int8)((unsigned __int16)((_WORD)a4 - 48) >> 8);
  v93 = a4;
  v10 = ObTypeIndexTable[*(_BYTE *)&a4[-1].Entries[0].WaiterTree.0 ^ (unsigned __int8)ObHeaderCookie ^ SchedulingGroup];
  v11 = 1;
  if ( (a6 & 0x400) == 0 )
    v11 = a5;
  CurrentThread = KeGetCurrentThread();
  v94 = v11;
  --CurrentThread->KernelApcDisable;
  v13 = (AutoBoost *)KeAbPreAcquire(v8 + 16, 0LL, 0LL, a4);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), v13, v8 + 16);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v14);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  v16 = *(_BYTE *)(v8 + 27);
  v17 = 0;
  v18 = v16 & 1;
  if ( (*(_BYTE *)(v8 + 26) & 8) != 0 )
    v19 = (unsigned int *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0xF]);
  else
    v19 = 0LL;
  if ( !v18 )
    goto LABEL_23;
  *(_BYTE *)(v8 + 27) = v16 & 0xFE;
  if ( !v19 )
  {
    v79 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v8 + 24) ^ (unsigned __int64)(unsigned __int8)SchedulingGroup];
    v21 = *(unsigned int *)(v79 + 104);
    v20 = *(_DWORD *)(v79 + 108);
LABEL_15:
    v23 = v91;
    goto LABEL_16;
  }
  v20 = v19[1];
  v21 = *v19;
  v89 = v20;
  if ( !a7 )
  {
    v22 = *(_QWORD *)(v8 + 40);
    if ( !v22 )
      goto LABEL_15;
    v7 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( !v7 )
      goto LABEL_15;
  }
  if ( *(_BYTE *)v7 != 1 )
  {
    v26 = -1073741736;
    goto LABEL_116;
  }
  v44 = *(_WORD *)(v7 + 2);
  if ( v44 >= 0 )
  {
    v46 = *(_QWORD *)(v7 + 16);
  }
  else
  {
    v45 = *(unsigned int *)(v7 + 8);
    if ( (_DWORD)v45 )
      v46 = v7 + v45;
    else
      v46 = 0LL;
  }
  if ( (v44 & 4) != 0 )
  {
    if ( v44 >= 0 )
    {
      v48 = *(_QWORD *)(v7 + 32);
    }
    else
    {
      v47 = *(unsigned int *)(v7 + 16);
      if ( (_DWORD)v47 )
        v48 = v7 + v47;
      else
        v48 = 0LL;
    }
  }
  else
  {
    v48 = 0LL;
  }
  if ( v46 )
    v17 = (4 * *(unsigned __int8 *)(v46 + 1) + 11) & 0xFFFFFFFC;
  if ( v48 )
    v17 += (*(unsigned __int16 *)(v48 + 2) + 3) & 0xFFFFFFFC;
  v23 = v91;
  if ( v17 )
  {
    if ( v91 == PsInitialSystemProcess )
    {
      *((_QWORD *)v19 + 2) = 1LL;
      v19[2] = v17;
      goto LABEL_16;
    }
    SchedulingGroup = (unsigned __int64)v91[1].SchedulingGroup;
    if ( (int)PspChargeQuota(SchedulingGroup, 0LL, 1, v17) < 0 )
    {
      *((_QWORD *)v19 + 2) = 0LL;
      goto LABEL_115;
    }
    v20 = v89;
    v49 = SchedulingGroup;
    _InterlockedIncrement((volatile signed __int32 *)(SchedulingGroup + 512));
    *((_QWORD *)v19 + 2) = SchedulingGroup;
    if ( !v49 )
    {
LABEL_115:
      v26 = -1073741756;
      goto LABEL_116;
    }
  }
  v19[2] = v17;
LABEL_16:
  v24 = v20;
  SchedulingGroup = v20;
  if ( v23 == PsInitialSystemProcess )
  {
    v93[-1].Entries[0].EntryLock = 1LL;
  }
  else
  {
    v25 = (__int64)v23[1].SchedulingGroup;
    if ( v21 )
    {
      if ( (int)PspChargeQuota(v25, 0LL, 1, v21) < 0 )
      {
        v93[-1].Entries[0].EntryLock = 0LL;
        goto LABEL_95;
      }
      v24 = SchedulingGroup;
    }
    if ( v24 && (int)PspChargeQuota(v25, 0LL, 0, v24) < 0 )
    {
      if ( v21 )
        PspReturnQuota((__int64 *)v25, 0LL, 1u, v21);
      v93[-1].Entries[0].EntryLock = 0LL;
LABEL_95:
      if ( v19 )
      {
        v71 = (void *)*((_QWORD *)v19 + 2);
        if ( v71 )
        {
          PsReturnSharedPoolQuota(v71);
          v26 = -1073741756;
          goto LABEL_116;
        }
      }
      goto LABEL_115;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 512));
    *(_QWORD *)(v8 + 32) = v25;
    if ( !v25 )
      goto LABEL_95;
  }
  v9 = v91;
LABEL_23:
  v26 = 0;
  v27 = *(_BYTE *)(v8 + 27);
  v28 = v27 & 8;
  if ( (a6 & 0x20) != 0 )
  {
    if ( v28 == 0 || (a6 & 2) != 0 )
    {
      v26 = -1073741811;
      goto LABEL_116;
    }
    if ( ((v27 & 8) == 0 || !*(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8)) && *(_QWORD *)(v8 + 8)
      || (*(_BYTE *)(v8 + 27) & 8) != 0
      && (v87 = *(struct _KPROCESS **)OBJECT_HEADER_TO_PROCESS_INFO(v8)) != 0LL
      && v87 != v9 )
    {
LABEL_144:
      v26 = -1073741790;
      goto LABEL_116;
    }
    *(_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) = v9;
  }
  else if ( v28 )
  {
    v88 = (*(_BYTE *)(v8 + 26) & 0x10) != 0 ? (_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) : 0LL;
    if ( *v88 )
      goto LABEL_144;
  }
  if ( (_BYTE)v94 && (*(_BYTE *)(v8 + 27) & 4) != 0 )
  {
    v26 = -1073741790;
LABEL_116:
    _m_prefetchw((const void *)(v8 + 16));
    v81 = *(_QWORD *)(v8 + 16);
    v82 = v81 - 16;
    if ( (v81 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v82 = 0LL;
    if ( (v81 & 2) != 0
      || (v83 = *(_QWORD *)(v8 + 16),
          v83 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v82, v81)) )
    {
      ExfReleasePushLock((_QWORD *)(v8 + 16));
    }
    KeAbPostRelease(v8 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v84, v85);
    return (unsigned int)v26;
  }
  if ( !v18
    && !*(_QWORD *)(v10 + 120)
    && *(_QWORD *)(v10 + 128)
    && (*(_BYTE *)(v10 + 66) & 0x10) != 0
    && !*(_QWORD *)(v8 + 8) )
  {
    v26 = -1073741823;
    goto LABEL_116;
  }
  v29 = (*(_BYTE *)(v10 + 66) & 0x10) == 0;
  v89 = 0;
  if ( !v29 )
  {
    v26 = ObpLockHandleDataBaseEntry(v8, v9, &v89);
    if ( v26 < 0 )
      goto LABEL_116;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v8 + 8));
  if ( !*(_QWORD *)(v10 + 120) )
    goto LABEL_29;
  _m_prefetchw((const void *)(v8 + 16));
  v50 = *(_QWORD *)(v8 + 16);
  v51 = v50 - 16;
  if ( (v50 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v51 = 0LL;
  if ( (v50 & 2) != 0
    || (v52 = *(_QWORD *)(v8 + 16), v52 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v51, v50)) )
  {
    ExfReleasePushLock((_QWORD *)(v8 + 16));
  }
  KeAbPostRelease(v8 + 16);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v53, v54);
  v55 = v90;
  v56 = 0LL;
  v57 = 0;
  if ( v9 != KeGetCurrentThread()->ApcState.Process && v90 != 3 )
  {
    v57 = 1;
    ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)v9);
    v56 = PsAttachSiloToCurrentThread(ProcessServerSilo);
    KeStackAttachProcess(v9, &ApcState);
  }
  v26 = guard_dispatch_icall_no_overrides(v55, a5);
  if ( v57 )
  {
    KiUnstackDetachProcess((__int64)&ApcState, 0);
    PsDetachSiloFromCurrentThread(v56);
  }
  v59 = KeGetCurrentThread();
  --v59->KernelApcDisable;
  v60 = (AutoBoost *)KeAbPreAcquire(v8 + 16, 0LL, 0LL, v58);
  v62 = v60;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), v60, v8 + 16);
  if ( v62 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v62, v61);
    else
      *((_BYTE *)v62 + 10) = 1;
  }
  if ( v26 < 0 )
  {
    if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
      ObpUnlockHandleDatabaseEntry(v8, v9);
    _InterlockedDecrement64((volatile signed __int64 *)(v8 + 8));
    _m_prefetchw((const void *)(v8 + 16));
    v63 = *(_QWORD *)(v8 + 16);
    v64 = v63 - 16;
    if ( (v63 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v64 = 0LL;
    if ( (v63 & 2) != 0
      || (v65 = *(_QWORD *)(v8 + 16),
          v65 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v64, v63)) )
    {
      ExfReleasePushLock((_QWORD *)(v8 + 16));
    }
    KeAbPostRelease(v8 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v66, v67);
    ObpDeleteNameCheck(v8, v68, v69, v70);
  }
  else
  {
LABEL_29:
    if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
    {
      v30 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 7];
      if ( (*(_BYTE *)(v8 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v30 + 11);
        *(_DWORD *)(v30 + 8) ^= (*(_DWORD *)(v30 + 8) ^ (*(_DWORD *)(v30 + 8) + 1)) & 0xFFFFFF;
      }
      else
      {
        v72 = *(int **)v30;
        v73 = 0LL;
        v74 = 0LL;
        v75 = *v72;
        for ( i = v72 + 2; v75; --v75 )
        {
          v77 = v73;
          v78 = v73;
          if ( *(struct _KPROCESS **)i == v9 )
          {
            v73 = i;
            v74 = i;
            if ( v77 )
              v73 = v78;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v73[2] ^= (v73[2] ^ (v73[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v74 + 11);
      }
    }
    _m_prefetchw((const void *)(v8 + 16));
    v31 = *(_QWORD *)(v8 + 16);
    v32 = v31 - 16;
    if ( (v31 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v32 = 0LL;
    if ( (v31 & 2) != 0
      || (v33 = *(_QWORD *)(v8 + 16),
          v33 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v32, v31)) )
    {
      ExfReleasePushLock((_QWORD *)(v8 + 16));
    }
    KeAbPostRelease(v8 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v34, v35);
    if ( !v90 && (*(_BYTE *)(v8 + 26) & 1) != 0 )
    {
      v42 = (__int64 *)(v8 - 32);
      if ( v42 )
      {
        ObpLockObjectTypeExclusive(v10, v36, v37, v38);
        v43 = *(__int64 ***)(v10 + 8);
        if ( *v43 != (__int64 *)v10 )
          __fastfail(3u);
        *v42 = v10;
        v42[1] = (__int64)v43;
        *v43 = v42;
        *(_QWORD *)(v10 + 8) = v42;
        ObpUnlockObjectType(v10);
      }
    }
    v39 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 48), 1u);
    v40 = *(_DWORD *)(v10 + 56);
    for ( j = v39 + 1; j > v40; v40 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 56), j, v40) )
      ;
  }
  return (unsigned int)v26;
}
