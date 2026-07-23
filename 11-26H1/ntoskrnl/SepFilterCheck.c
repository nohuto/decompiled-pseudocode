/*
 * XREFs of SepFilterCheck @ 0x140302450
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     SepAdjustAccessStateForConstraints @ 0x1409467E0 (SepAdjustAccessStateForConstraints.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140A51E80 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x140A5DC10 (SeShouldCheckForAccessRightsFromParent.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpCommitWakeResourceShared @ 0x140273420 (ExpCommitWakeResourceShared.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140300FE0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PerfLogExecutiveResourceRelease @ 0x1403047A0 (PerfLogExecutiveResourceRelease.c)
 *     ExpFreeOwnerEntry @ 0x140304B10 (ExpFreeOwnerEntry.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403AF8F0 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     RtlRemoveEntryCircularList @ 0x140440580 (RtlRemoveEntryCircularList.c)
 *     RtlInsertHeadCircularList @ 0x1404405D0 (RtlInsertHeadCircularList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140485224 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepFilterCheck(__int64 a1, void **a2, __int64 a3, __int64 a4, int *a5)
{
  int *v5; // rbx
  int v6; // edi
  _DWORD *v7; // r10
  unsigned int v8; // r14d
  __int16 v9; // ax
  void **v10; // rsi
  __int64 v11; // r13
  void **v12; // r15
  char v13; // r12
  __int64 v14; // rsi
  unsigned int i; // ecx
  int v16; // eax
  ULONG_PTR v17; // rbx
  char v18; // cl
  __int64 v19; // rax
  unsigned int v20; // r14d
  int v21; // eax
  void **v22; // rax
  int v23; // eax
  void **v24; // rax
  ULONG_PTR v25; // r14
  unsigned __int8 v26; // di
  __int64 v27; // rdx
  struct _KTHREAD *v28; // r8
  bool v29; // r12
  unsigned int v30; // edi
  unsigned int v31; // r15d
  char v32; // cl
  __int64 v33; // rdi
  int v34; // edx
  unsigned int v35; // r14d
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // r14d
  bool v39; // zf
  void **v40; // r14
  void ***v41; // rbx
  void **v42; // rax
  void **v43; // rcx
  void **v44; // rdi
  _QWORD *v45; // rcx
  _QWORD *v46; // rdx
  void **v47; // rax
  char *v48; // r15
  _QWORD **v50; // rdx
  void **v51; // rax
  bool v52; // r13
  unsigned __int64 v53; // r8
  unsigned int v54; // eax
  __int64 v55; // rcx
  ULONG_PTR v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  unsigned __int64 v59; // r9
  __int64 v60; // rcx
  unsigned __int8 v61; // r15
  _QWORD *j; // rdi
  char v63; // cl
  __int64 v64; // rdx
  int *v65; // rax
  char v66; // r10
  __int64 v67; // rdi
  unsigned int v68; // r9d
  int v69; // ecx
  int *v70; // rax
  unsigned int v71; // r14d
  __int64 v72; // rcx
  __int64 v73; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rdx
  int v78; // eax
  char *v79; // r11
  PVOID v80; // r11
  char v81; // al
  char v82; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v84; // [rsp+60h] [rbp-21h]
  int v85; // [rsp+68h] [rbp-19h]
  void **v86; // [rsp+70h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int8 v88; // [rsp+E0h] [rbp+5Fh]
  int v89; // [rsp+E8h] [rbp+67h] BYREF
  _DWORD *v90; // [rsp+F0h] [rbp+6Fh]
  unsigned __int8 v91; // [rsp+F8h] [rbp+77h]

  v91 = a4;
  v90 = (_DWORD *)a3;
  v5 = a5;
  v6 = -1;
  v86 = 0LL;
  v7 = (_DWORD *)a3;
  v89 = 0;
  LOBYTE(a3) = 0;
  v84 = 0;
  *a5 = -1;
  v8 = 0;
  v9 = *(_WORD *)(a1 + 2);
  v10 = 0LL;
  v88 = 0;
  if ( (v9 & 0x10) != 0 )
  {
    if ( v9 >= 0 )
    {
      v11 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v19 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v19 )
        v11 = a1 + v19;
      else
        v11 = 0LL;
    }
  }
  else
  {
    v11 = 0LL;
  }
  v12 = (void **)&v86;
  if ( a2 )
    v12 = a2;
  v13 = 0;
  if ( v11 )
  {
    while ( 2 )
    {
      a2 = (void **)*(unsigned __int16 *)(v11 + 4);
      v14 = v11 + 8;
      for ( i = 0; ; ++i )
      {
        if ( i >= (unsigned int)a2 )
          goto LABEL_15;
        if ( i >= v8 && *(_BYTE *)v14 == 21 )
          break;
        v14 += *(unsigned __int16 *)(v14 + 2);
      }
      v20 = i;
      if ( (*(_BYTE *)(v14 + 1) & 8) != 0 )
        goto LABEL_14;
      v21 = *(unsigned __int16 *)(v14 + 2) - (unsigned __int16)(4 * (*(unsigned __int8 *)(v14 + 9) + 2));
      LODWORD(a5) = (unsigned __int16)(4 * (*(unsigned __int8 *)(v14 + 9) + 2));
      if ( v21 - 8 > 0 )
      {
        v85 = *(_DWORD *)(v14 + 4);
        if ( (v85 & 0xFF000000) == 0 )
        {
          if ( (_BYTE)a4 && !(_BYTE)a3 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceSharedLite(*((PERESOURCE *)v7 + 6), 1u);
            v7 = v90;
            v88 = 1;
          }
          if ( !*v12 )
          {
            v84 = AuthzBasepInitializeResourceClaimsFromSacl(v11, v12, a3, a4);
            if ( v84 < 0 )
              goto LABEL_15;
            v7 = v90;
          }
          v22 = (void **)*((_QWORD *)v7 + 137);
          v89 = -1;
          if ( v22 )
            v23 = AuthzBasepEvaluateAceCondition(
                    v7,
                    *((void **)v7 + 97),
                    *v12,
                    v22[72],
                    v22[74],
                    v22[73],
                    v22[75],
                    (_DWORD *)(v14 + (unsigned __int16)a5 + 8LL),
                    *(unsigned __int16 *)(v14 + 2) - (unsigned int)a5 - 8,
                    1u,
                    0,
                    &v89);
          else
            v23 = AuthzBasepEvaluateAceCondition(
                    v7,
                    *((void **)v7 + 97),
                    *v12,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    (_DWORD *)(v14 + (unsigned __int16)a5 + 8LL),
                    *(unsigned __int16 *)(v14 + 2) - (unsigned int)a5 - 8,
                    1u,
                    0,
                    &v89);
          v84 = v23;
          if ( v23 >= 0 )
          {
            if ( v89 != 1 )
            {
              if ( (*(_BYTE *)(v14 + 1) & 0x40) != 0 )
                v13 = 1;
              v6 &= v85 | 0x1000000;
            }
            v7 = v90;
            if ( (v90[50] & 0x10) == 0 )
            {
              a3 = v88;
              a4 = v91;
              goto LABEL_14;
            }
            v24 = (void **)*((_QWORD *)v90 + 137);
            v89 = -1;
            if ( v24 )
              v16 = AuthzBasepEvaluateAceCondition(
                      v90,
                      *((void **)v90 + 97),
                      *v12,
                      v24[72],
                      v24[74],
                      v24[73],
                      v24[75],
                      (_DWORD *)(v14 + (unsigned __int16)a5 + 8LL),
                      *(unsigned __int16 *)(v14 + 2) - (unsigned int)(unsigned __int16)a5 - 8,
                      1u,
                      1u,
                      &v89);
            else
              v16 = AuthzBasepEvaluateAceCondition(
                      v90,
                      *((void **)v90 + 97),
                      *v12,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      (_DWORD *)(v14 + (unsigned __int16)a5 + 8LL),
                      *(unsigned __int16 *)(v14 + 2) - (unsigned int)(unsigned __int16)a5 - 8,
                      1u,
                      1u,
                      &v89);
            v84 = v16;
            if ( v16 >= 0 )
            {
              a3 = v88;
              a4 = v91;
              v7 = v90;
              if ( v89 != 1 )
              {
                if ( (*(_BYTE *)(v14 + 1) & 0x40) != 0 )
                  v13 = 1;
                v6 &= v85 | 0x1000000;
              }
LABEL_14:
              v8 = v20 + 1;
              if ( v14 )
                continue;
            }
          }
LABEL_15:
          a3 = v88;
          v7 = v90;
          goto LABEL_16;
        }
      }
      break;
    }
    v84 = -1073741705;
LABEL_16:
    v10 = v86;
  }
  if ( v6 != -1 )
  {
    *v5 = v6;
    *((_BYTE *)v5 + 4) = v13;
  }
  if ( (_BYTE)a3 )
  {
    v17 = *((_QWORD *)v7 + 6);
    v18 = *(_BYTE *)(v17 + 26);
    if ( (v18 & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v17, 0LL, 0LL);
    if ( (v18 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v75 = KeGetCurrentThread();
      if ( CurrentIrql > 2u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
      if ( !CurrentIrql && (v75->MiscFlags & 0x400) == 0 && !v75->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    v25 = (ULONG_PTR)KeGetCurrentThread();
    if ( (*(_BYTE *)(v17 + 26) & 1) != 0 )
    {
      v61 = KeGetCurrentIrql();
      if ( v61 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(v61, a2);
      }
      if ( (*(_QWORD *)v17 & 1) != 0 && (j = (_QWORD *)(v17 + 64), *(_QWORD *)(v17 + 80) == v25) )
      {
LABEL_108:
        if ( j )
        {
          v81 = *((_BYTE *)j + 37);
          if ( (v81 & 2) != 0 )
          {
            v82 = 0;
          }
          else
          {
            v82 = 1;
            *((_BYTE *)j + 37) = v81 & 0xFE;
          }
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v61);
          __writecr8(v61);
          ExReleaseFastResource((struct _KTHREAD *)v17, (ULONG_PTR)j);
          if ( v82 )
            ExFreePoolWithTag(j, 0);
          goto LABEL_65;
        }
      }
      else
      {
        for ( j = *(_QWORD **)(v25 + 1720); j != (_QWORD *)(v25 + 1720); j = (_QWORD *)*j )
        {
          v63 = *((_BYTE *)j + 37);
          if ( (v63 & 2) == 0 && j[3] == v17 && (v63 & 1) != 0 )
            goto LABEL_108;
        }
      }
      KeBugCheckEx(0xE3u, v17, v25, 0LL, 0LL);
    }
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v17 + 96);
    LockHandle.LockQueue.Next = 0LL;
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    v26 = KeGetCurrentIrql();
    if ( v26 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v26, 2LL);
    LockHandle.OldIrql = v26;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v27 = _InterlockedExchange64((volatile __int64 *)(v17 + 96), (__int64)&LockHandle);
      if ( v27 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v27, a3);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(v17 + 96));
    }
    v28 = KeGetCurrentThread();
    if ( ((*(_BYTE *)(v17 + 26) & 1) != 0 || LODWORD(ExSaPageGroupDescriptorArrayLock.AutoBoostThreadState))
      && (v25 & 3) != 3
      && (struct _KTHREAD *)v25 != v28 )
    {
      KeBugCheckEx(0x16Eu, v17, (ULONG_PTR)v28, v25, 0LL);
    }
    if ( *(char *)(v17 + 26) < 0 )
    {
      v29 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
      if ( ExpResourceEnforcesOwnershipTransfer(v17) && *(_QWORD *)(v17 + 48) != v25 )
        KeBugCheckEx(0xE3u, v17, v25, *(_QWORD *)(v17 + 16), 1uLL);
      LODWORD(v90) = *(_DWORD *)(v17 + 56);
      v30 = ((unsigned int)v90 >> 3) - 1;
      LODWORD(v90) = (8 * v30) | *(_DWORD *)(v17 + 56) & 7;
      *(_DWORD *)(v17 + 56) = (_DWORD)v90;
      if ( v30 )
      {
        v31 = *(_DWORD *)(v17 + 68);
        v38 = 65586;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      else
      {
        ExpFreeOwnerEntry(v17 + 48);
        v31 = *(_DWORD *)(v17 + 68);
        v32 = *(_BYTE *)(v17 + 26);
        v33 = 0LL;
        v34 = *(_DWORD *)(v17 + 72);
        if ( v34 )
        {
          v65 = *(int **)(v17 + 32);
          *(_QWORD *)(v17 + 32) = 0LL;
          *(_DWORD *)(v17 + 72) = 0;
          *(_BYTE *)(v17 + 26) = v32 & 0x7F;
          a5 = v65;
          *(_DWORD *)(v17 + 64) += v34 - 1;
        }
        else
        {
          a5 = 0LL;
          if ( *(_DWORD *)(v17 + 76) )
          {
            if ( *(_QWORD *)(v17 + 40) )
            {
              RtlRemoveEntryCircularList(v17 + 40);
              v33 = *(_QWORD *)(v64 + 16);
              RtlInsertHeadCircularList(&a5, v64);
            }
            --*(_DWORD *)(v17 + 76);
            *(_DWORD *)(v17 + 64) = *(_DWORD *)(v17 + 64);
          }
          else
          {
            *(_BYTE *)(v17 + 26) = v32 & 0x7F;
            *(_DWORD *)(v17 + 64) = 0;
            *(_WORD *)(v17 + 24) = 0;
          }
        }
        if ( !*(_DWORD *)(v17 + 76) && !*(_DWORD *)(v17 + 72) )
          *(_BYTE *)(v17 + 26) &= 0xF9u;
        v35 = *(unsigned __int8 *)(v17 + 27);
        if ( v33 )
        {
          *(_QWORD *)(v17 + 48) = v33;
          LODWORD(v90) = *(_DWORD *)(v17 + 56) & 7 | 8;
          *(_DWORD *)(v17 + 56) = (_DWORD)v90;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        ExpCommitWakeResourceShared(v36, (volatile signed __int32 **)&a5, v37, v35, v33 != 0);
        v38 = 65570;
        v30 = 0;
      }
      __incgsdword(0x90ACu);
      v39 = !v29;
      goto LABEL_63;
    }
    v52 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    v53 = 0LL;
    v54 = 0;
    if ( (v25 & 3) == 0 )
      v54 = *(unsigned __int8 *)(v25 + 1120);
    v55 = *(_QWORD *)(v17 + 48);
    v56 = v17 + 48;
    if ( v55 != v25 )
    {
      LOBYTE(v53) = v55 != 0;
      if ( !v54
        || (v57 = *(_QWORD *)(v17 + 16)) == 0
        || v54 >= *(_DWORD *)(v57 + 8)
        || (v56 = v57 + 16LL * v54, *(_QWORD *)v56 != v25) )
      {
        v58 = *(_QWORD *)(v17 + 16);
        v59 = *(unsigned int *)(v17 + 64) + (unsigned __int64)*(unsigned int *)(v17 + 72);
        if ( !v58 || (v60 = v58 + 16LL * *(unsigned int *)(v58 + 8), v56 = v58 + 16, v53 >= v59) )
LABEL_99:
          KeBugCheckEx(0xE3u, v17, v25, *(_QWORD *)(v17 + 16), 2uLL);
        while ( *(_QWORD *)v56 != v25 )
        {
          if ( !*(_QWORD *)v56 || (++v53, v53 != v59) )
          {
            v56 += 16LL;
            if ( v56 != v60 )
              continue;
          }
          goto LABEL_99;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v56 - *(_DWORD *)(v17 + 16)) >> 4;
      }
    }
    LODWORD(v90) = *(_DWORD *)(v56 + 8) & 7 | (8 * (*(_DWORD *)(v56 + 8) >> 3) - 8);
    v30 = (unsigned int)v90 >> 3;
    *(_DWORD *)(v56 + 8) = (_DWORD)v90;
    if ( v30 )
    {
      v31 = *(_DWORD *)(v17 + 68);
      v38 = 65618;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x90B0u);
      v39 = !v52;
LABEL_63:
      if ( !v39 )
        PerfLogExecutiveResourceRelease(v38, v17, v30, v31);
LABEL_65:
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      goto LABEL_66;
    }
    ExpFreeOwnerEntry(v56);
    v31 = *(_DWORD *)(v17 + 68);
    v66 = *(_BYTE *)(v17 + 26);
    v67 = 0LL;
    v68 = *(_DWORD *)(v17 + 64);
    if ( v68 > 1 )
      goto LABEL_128;
    if ( *(_DWORD *)(v17 + 76) )
    {
      v76 = *(_QWORD *)(v17 + 40);
      a5 = 0LL;
      if ( v76 )
      {
        RtlRemoveEntryCircularList(v17 + 40);
        v67 = *(_QWORD *)(v77 + 16);
        RtlInsertHeadCircularList(&a5, v77);
      }
      v69 = 1;
      --*(_DWORD *)(v17 + 76);
      *(_BYTE *)(v17 + 26) = v66 | 0x80;
      goto LABEL_130;
    }
    v69 = *(_DWORD *)(v17 + 72);
    if ( v69 )
    {
      v70 = *(int **)(v17 + 32);
      *(_QWORD *)(v17 + 32) = 0LL;
      *(_DWORD *)(v17 + 72) = 0;
    }
    else
    {
LABEL_128:
      v70 = 0LL;
      v69 = 0;
    }
    a5 = v70;
LABEL_130:
    *(_DWORD *)(v17 + 64) = v68 + v69 - 1;
    if ( !(v68 + v69 - 1) )
      *(_WORD *)(v17 + 24) = 0;
    if ( !*(_DWORD *)(v17 + 76) && !*(_DWORD *)(v17 + 72) )
      *(_BYTE *)(v17 + 26) &= 0xF9u;
    v71 = *(unsigned __int8 *)(v17 + 27);
    if ( v67 )
    {
      *(_QWORD *)(v17 + 48) = v67;
      LODWORD(v90) = *(_DWORD *)(v17 + 56) & 7 | 8;
      *(_DWORD *)(v17 + 56) = (_DWORD)v90;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExpCommitWakeResourceShared(v72, (volatile signed __int32 **)&a5, v73, v71, v67 != 0);
    __incgsdword(0x90B0u);
    v38 = 65602;
    v39 = !v52;
    v30 = 0;
    goto LABEL_63;
  }
LABEL_66:
  if ( v10 )
  {
    v40 = v10 + 1;
    while ( 1 )
    {
      v41 = (void ***)*v40;
      if ( *v40 == v40 )
        break;
      if ( ((_DWORD)v41[7] & 1) != 0 )
      {
        v42 = *v41;
        if ( (*v41)[1] != v41 || (v43 = v41[1], *v43 != v41) )
LABEL_89:
          __fastfail(3u);
        *v43 = v42;
        v42[1] = v43;
        *((_DWORD *)v41 + 14) &= ~1u;
        --*(_DWORD *)v10;
      }
      v44 = (void **)(v41 + 9);
      while ( 1 )
      {
        v45 = *v44;
        if ( *v44 == v44 )
          break;
        if ( (v45[4] & 2) != 0 )
        {
          v50 = (_QWORD **)v45[2];
          if ( v50[1] != v45 + 2 )
            goto LABEL_89;
          v51 = (void **)v45[3];
          if ( *v51 != v45 + 2 )
            goto LABEL_89;
          *v51 = v50;
          v50[1] = v51;
          *((_DWORD *)v45 + 8) &= ~2u;
          --*((_DWORD *)v41 + 22);
        }
        if ( (v45[4] & 1) != 0 )
        {
          v46 = (_QWORD *)*v45;
          if ( *(_QWORD **)(*v45 + 8LL) != v45 )
            goto LABEL_89;
          v47 = (void **)v45[1];
          if ( *v47 != v45 )
            goto LABEL_89;
          *v47 = v46;
          v46[1] = v47;
          *((_DWORD *)v45 + 8) &= ~1u;
          --*((_DWORD *)v41 + 15);
          if ( (v45[4] & 4) != 0 )
            --*((_DWORD *)v41 + 16);
        }
        ExFreePoolWithTag(v45, 0);
      }
      v48 = (char *)v41[12];
      while ( v48 != (char *)(v41 + 12) )
      {
        v78 = *((_DWORD *)v48 + 4);
        v79 = v48 - 16;
        v48 = *(char **)v48;
        if ( (v78 & 1) == 0 )
        {
          AuthzBasepRemoveSecurityAttributeValueFromLists(v41, v79, 0LL);
          ExFreePoolWithTag(v80, 0);
        }
      }
      ExFreePoolWithTag(v41, 0);
    }
    ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)v84;
}
