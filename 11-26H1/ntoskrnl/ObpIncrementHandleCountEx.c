/*
 * XREFs of ObpIncrementHandleCountEx @ 0x14090A400
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x1409BB2E4 (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1409BB650 (ObCompleteObjectDuplication.c)
 *     ExDupHandleTable @ 0x1409BD030 (ExDupHandleTable.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     PspChargeQuota @ 0x1403C7410 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1403C7860 (PspReturnQuota.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x1404C3844 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpLockObjectTypeExclusive @ 0x1408FFE00 (ObpLockObjectTypeExclusive.c)
 *     ObpDeleteNameCheck @ 0x14092C880 (ObpDeleteNameCheck.c)
 *     PsReturnSharedPoolQuota @ 0x1409B8E10 (PsReturnSharedPoolQuota.c)
 *     ObpLockHandleDataBaseEntry @ 0x140A519A0 (ObpLockHandleDataBaseEntry.c)
 *     ObpUnlockObjectType @ 0x140A67A10 (ObpUnlockObjectType.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x140AB8B3C (ObpUnlockHandleDatabaseEntry.c)
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
  struct _KLOCK_ENTRIES *v36; // r9
  signed __int32 v37; // r15d
  unsigned __int32 v38; // eax
  unsigned __int32 j; // r15d
  __int64 *v40; // rbx
  __int64 **v41; // rax
  __int16 v42; // dx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rax
  signed __int64 v48; // rax
  signed __int64 v49; // rdx
  __int64 v50; // rtt
  unsigned int v51; // esi
  struct _LIST_ENTRY *v52; // rbp
  char v53; // r12
  struct _KLOCK_ENTRIES *v54; // r9
  struct _KTHREAD *v55; // rax
  AutoBoost *v56; // rax
  void *v57; // rdx
  AutoBoost *v58; // rbp
  signed __int64 v59; // rax
  signed __int64 v60; // rdx
  __int64 v61; // rtt
  void *v62; // rcx
  int *v63; // rax
  _DWORD *v64; // rdx
  _DWORD *v65; // r8
  int v66; // ecx
  _DWORD *i; // rax
  _DWORD *v68; // r9
  _DWORD *v69; // r10
  __int64 v70; // rax
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  signed __int64 v72; // rax
  signed __int64 v73; // rdx
  __int64 v74; // rtt
  struct _KPROCESS *v76; // rcx
  _QWORD *v77; // rcx
  unsigned int v78; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v79; // [rsp+44h] [rbp-B4h]
  struct _KPROCESS *v80; // [rsp+48h] [rbp-B0h]
  unsigned __int64 SchedulingGroup; // [rsp+50h] [rbp-A8h]
  struct _KLOCK_ENTRIES *v82; // [rsp+58h] [rbp-A0h]
  int v83; // [rsp+60h] [rbp-98h]
  __int64 v84; // [rsp+68h] [rbp-90h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-88h] BYREF

  v7 = a7;
  v8 = (__int64)&a4[-1].Entries[0].40;
  v79 = a1;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = a3;
  v80 = a3;
  v84 = a2;
  SchedulingGroup = (unsigned __int8)((unsigned __int16)((_WORD)a4 - 48) >> 8);
  v82 = a4;
  v10 = ObTypeIndexTable[*(_BYTE *)&a4[-1].Entries[0].WaiterTree.0 ^ (unsigned __int8)ObHeaderCookie ^ SchedulingGroup];
  v11 = 1;
  if ( (a6 & 0x400) == 0 )
    v11 = a5;
  CurrentThread = KeGetCurrentThread();
  v83 = v11;
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
    v70 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v8 + 24) ^ (unsigned __int64)(unsigned __int8)SchedulingGroup];
    v21 = *(unsigned int *)(v70 + 104);
    v20 = *(_DWORD *)(v70 + 108);
LABEL_15:
    v23 = v80;
    goto LABEL_16;
  }
  v20 = v19[1];
  v21 = *v19;
  v78 = v20;
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
  v42 = *(_WORD *)(v7 + 2);
  if ( v42 >= 0 )
  {
    v44 = *(_QWORD *)(v7 + 16);
  }
  else
  {
    v43 = *(unsigned int *)(v7 + 8);
    if ( (_DWORD)v43 )
      v44 = v7 + v43;
    else
      v44 = 0LL;
  }
  if ( (v42 & 4) != 0 )
  {
    if ( v42 >= 0 )
    {
      v46 = *(_QWORD *)(v7 + 32);
    }
    else
    {
      v45 = *(unsigned int *)(v7 + 16);
      if ( (_DWORD)v45 )
        v46 = v7 + v45;
      else
        v46 = 0LL;
    }
  }
  else
  {
    v46 = 0LL;
  }
  if ( v44 )
    v17 = (4 * *(unsigned __int8 *)(v44 + 1) + 11) & 0xFFFFFFFC;
  if ( v46 )
    v17 += (*(unsigned __int16 *)(v46 + 2) + 3) & 0xFFFFFFFC;
  v23 = v80;
  if ( v17 )
  {
    if ( v80 == PsInitialSystemProcess )
    {
      *((_QWORD *)v19 + 2) = 1LL;
      v19[2] = v17;
      goto LABEL_16;
    }
    SchedulingGroup = (unsigned __int64)v80[1].SchedulingGroup;
    if ( (int)PspChargeQuota(SchedulingGroup, 0LL, 1, v17) < 0 )
    {
      *((_QWORD *)v19 + 2) = 0LL;
      goto LABEL_115;
    }
    v20 = v78;
    v47 = SchedulingGroup;
    _InterlockedIncrement((volatile signed __int32 *)(SchedulingGroup + 512));
    *((_QWORD *)v19 + 2) = SchedulingGroup;
    if ( !v47 )
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
    v82[-1].Entries[0].EntryLock = 1LL;
  }
  else
  {
    v25 = (__int64)v23[1].SchedulingGroup;
    if ( v21 )
    {
      if ( (int)PspChargeQuota(v25, 0LL, 1, v21) < 0 )
      {
        v82[-1].Entries[0].EntryLock = 0LL;
        goto LABEL_95;
      }
      v24 = SchedulingGroup;
    }
    if ( v24 && (int)PspChargeQuota(v25, 0LL, 0, v24) < 0 )
    {
      if ( v21 )
        PspReturnQuota((__int64 *)v25, 0LL, 1u, v21);
      v82[-1].Entries[0].EntryLock = 0LL;
LABEL_95:
      if ( v19 )
      {
        v62 = (void *)*((_QWORD *)v19 + 2);
        if ( v62 )
        {
          PsReturnSharedPoolQuota(v62);
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
  v9 = v80;
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
      && (v76 = *(struct _KPROCESS **)OBJECT_HEADER_TO_PROCESS_INFO(v8)) != 0LL
      && v76 != v9 )
    {
LABEL_144:
      v26 = -1073741790;
      goto LABEL_116;
    }
    *(_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) = v9;
  }
  else if ( v28 )
  {
    v77 = (*(_BYTE *)(v8 + 26) & 0x10) != 0 ? (_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) : 0LL;
    if ( *v77 )
      goto LABEL_144;
  }
  if ( (_BYTE)v83 && (*(_BYTE *)(v8 + 27) & 4) != 0 )
  {
    v26 = -1073741790;
LABEL_116:
    _m_prefetchw((const void *)(v8 + 16));
    v72 = *(_QWORD *)(v8 + 16);
    v73 = v72 - 16;
    if ( (v72 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v73 = 0LL;
    if ( (v72 & 2) != 0
      || (v74 = *(_QWORD *)(v8 + 16),
          v74 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v73, v72)) )
    {
      ExfReleasePushLock((_QWORD *)(v8 + 16));
    }
    KeAbPostRelease(v8 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
  v78 = 0;
  if ( !v29 )
  {
    v26 = ObpLockHandleDataBaseEntry(v8, v9, &v78);
    if ( v26 < 0 )
      goto LABEL_116;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v8 + 8));
  if ( !*(_QWORD *)(v10 + 120) )
    goto LABEL_29;
  _m_prefetchw((const void *)(v8 + 16));
  v48 = *(_QWORD *)(v8 + 16);
  v49 = v48 - 16;
  if ( (v48 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v49 = 0LL;
  if ( (v48 & 2) != 0
    || (v50 = *(_QWORD *)(v8 + 16), v50 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v49, v48)) )
  {
    ExfReleasePushLock((_QWORD *)(v8 + 16));
  }
  KeAbPostRelease(v8 + 16);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v51 = v79;
  v52 = 0LL;
  v53 = 0;
  if ( v9 != KeGetCurrentThread()->ApcState.Process && v79 != 3 )
  {
    v53 = 1;
    ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)v9);
    v52 = PsAttachSiloToCurrentThread(ProcessServerSilo);
    KeStackAttachProcess(v9, &ApcState);
  }
  v26 = guard_dispatch_icall_no_overrides(v51, a5);
  if ( v53 )
  {
    KiUnstackDetachProcess((__int64)&ApcState, 0);
    PsDetachSiloFromCurrentThread(v52);
  }
  v55 = KeGetCurrentThread();
  --v55->KernelApcDisable;
  v56 = (AutoBoost *)KeAbPreAcquire(v8 + 16, 0LL, 0LL, v54);
  v58 = v56;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), v56, v8 + 16);
  if ( v58 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v58, v57);
    else
      *((_BYTE *)v58 + 10) = 1;
  }
  if ( v26 < 0 )
  {
    if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
      ObpUnlockHandleDatabaseEntry(v8, v9);
    _InterlockedDecrement64((volatile signed __int64 *)(v8 + 8));
    _m_prefetchw((const void *)(v8 + 16));
    v59 = *(_QWORD *)(v8 + 16);
    v60 = v59 - 16;
    if ( (v59 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v60 = 0LL;
    if ( (v59 & 2) != 0
      || (v61 = *(_QWORD *)(v8 + 16),
          v61 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v60, v59)) )
    {
      ExfReleasePushLock((_QWORD *)(v8 + 16));
    }
    KeAbPostRelease(v8 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObpDeleteNameCheck(v8);
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
        v63 = *(int **)v30;
        v64 = 0LL;
        v65 = 0LL;
        v66 = *v63;
        for ( i = v63 + 2; v66; --v66 )
        {
          v68 = v64;
          v69 = v64;
          if ( *(struct _KPROCESS **)i == v9 )
          {
            v64 = i;
            v65 = i;
            if ( v68 )
              v64 = v69;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v64[2] ^= (v64[2] ^ (v64[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v65 + 11);
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v79 && (*(_BYTE *)(v8 + 26) & 1) != 0 )
    {
      v40 = (__int64 *)(v8 - 32);
      if ( v40 )
      {
        ObpLockObjectTypeExclusive(v10, v34, v35, v36);
        v41 = *(__int64 ***)(v10 + 8);
        if ( *v41 != (__int64 *)v10 )
          __fastfail(3u);
        *v40 = v10;
        v40[1] = (__int64)v41;
        *v41 = v40;
        *(_QWORD *)(v10 + 8) = v40;
        ObpUnlockObjectType(v10);
      }
    }
    v37 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 48), 1u);
    v38 = *(_DWORD *)(v10 + 56);
    for ( j = v37 + 1; j > v38; v38 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 56), j, v38) )
      ;
  }
  return (unsigned int)v26;
}
