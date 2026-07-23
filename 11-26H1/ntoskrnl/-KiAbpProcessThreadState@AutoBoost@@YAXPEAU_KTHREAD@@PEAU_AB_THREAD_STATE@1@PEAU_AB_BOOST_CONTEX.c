/*
 * XREFs of ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0
 * Callers:
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     ?KiAbpDeferredProcessingWorker@AutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1403770D0 (-KiAbpDeferredProcessingWorker@AutoBoost@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?KiAbpPropagateBoosts@AutoBoost@@YAXPEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140461660 (-KiAbpPropagateBoosts@AutoBoost@@YAXPEAU_AB_BOOST_CONTEXT@1@@Z.c)
 * Callees:
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x1402D2680 (PsBoostThreadOutstandingIoQoS.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     ?KiAbpPerformIoBoostsForOwners@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@T_AB_IO_BOOST@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376B00 (-KiAbpPerformIoBoostsForOwners@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@T_AB_IO_BOOST@1@PEAU_AB_BOOST_.c)
 *     ?KiAbpPerformCpuPriorityBoostsForOwners@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@CPEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376BD8 (-KiAbpPerformCpuPriorityBoostsForOwners@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@CPEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpEntryUpdateWaiterTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140376ED8 (-KiAbpEntryUpdateWaiterTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpTryIncrementIoWaiterCounts@AutoBoost@@YA?AT_AB_IO_BOOST@1@PEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@PEAU_KTHREAD@@@Z @ 0x140376FC0 (-KiAbpTryIncrementIoWaiterCounts@AutoBoost@@YA-AT_AB_IO_BOOST@1@PEAU_AB_HEAD_ENTRY@1@PEAU_AB_THR.c)
 *     ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x140377280 (-KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEA.c)
 *     ?KiAbpOwnerComputeCpuPriorityKey@AutoBoost@@YACPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140377770 (-KiAbpOwnerComputeCpuPriorityKey@AutoBoost@@YACPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140378250 (-KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpEntryUpdateOwnerTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140379140 (-KiAbpEntryUpdateOwnerTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

void __fastcall AutoBoost::KiAbpProcessThreadState(
        AutoBoost *this,
        struct _KTHREAD *a2,
        struct AutoBoost::_AB_THREAD_STATE *a3,
        struct AutoBoost::_AB_BOOST_CONTEXT *a4)
{
  struct AutoBoost::_AB_THREAD_STATE *v4; // r15
  struct _KTHREAD *v5; // rbx
  _QWORD *v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r12
  int v10; // edi
  unsigned int v11; // r13d
  bool i; // zf
  __int64 v13; // rax
  __int64 v14; // rsi
  struct AutoBoost::_AB_THREAD_ENTRY *v15; // rdx
  int v16; // ecx
  int v17; // eax
  int v18; // ebx
  signed __int8 v19; // al
  signed __int8 v20; // tt
  signed __int8 v21; // al
  signed __int8 v22; // tt
  __int64 v23; // rax
  BOOLEAN v24; // r8
  int v25; // edx
  char v26; // cl
  char v27; // al
  __int64 v28; // rax
  volatile signed __int64 *v29; // rcx
  unsigned int v30; // r13d
  __int64 v31; // rax
  __int64 v32; // rax
  BOOLEAN v33; // r8
  int v34; // edx
  char v35; // cl
  char v36; // al
  __int64 v37; // rax
  volatile signed __int64 *v38; // rcx
  struct _LIST_ENTRY *Flink; // r12
  int v40; // edi
  __int64 v41; // rsi
  struct AutoBoost::_AB_THREAD_ENTRY *v42; // rdx
  int v43; // ecx
  int v44; // eax
  int v45; // ebx
  signed __int8 v46; // al
  signed __int8 v47; // tt
  signed __int8 v48; // al
  signed __int8 v49; // tt
  __int64 v50; // r14
  volatile signed __int32 *v51; // rcx
  int v52; // eax
  int v53; // ebp
  unsigned int v54; // ebp
  int v55; // ecx
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // r14
  volatile signed __int32 *v61; // rcx
  int v62; // eax
  int v63; // ebp
  unsigned int v64; // ebp
  int v65; // ecx
  __int64 v66; // rax
  __int64 v67; // rdx
  int v68; // r9d
  __int64 v69; // rax
  char v70; // cl
  char v71; // cl
  char v72; // bp
  int v73; // eax
  struct AutoBoost::_AB_BOOST_CONTEXT *v74; // r9
  char v75; // bp
  int v76; // eax
  struct AutoBoost::_AB_BOOST_CONTEXT *v77; // r9
  struct AutoBoost::_AB_THREAD_ENTRY *v78; // r8
  struct AutoBoost::_AB_THREAD_ENTRY *v79; // r8
  char v80; // al
  char v81; // r9
  char v82; // al
  char v83; // r9
  __int64 v84; // rcx
  char v85; // cl
  char v86; // cl
  _DWORD v87[10]; // [rsp+30h] [rbp-68h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  int v92; // [rsp+B8h] [rbp+20h]
  int v93; // [rsp+B8h] [rbp+20h]

  v4 = a3;
  v5 = a2;
  v6 = (_QWORD *)*((_QWORD *)this + 142);
  if ( *v6 && (unsigned __int16)(1LL << *(_BYTE *)(*v6 + 14LL)) - 1 != (*(_WORD *)(*v6 + 8LL) | *(_WORD *)(*v6 + 10LL))
    || (v7 = v6[1]) != 0
    && (unsigned __int16)(1LL << *(_BYTE *)(v7 + 14)) - 1 != (*(_WORD *)(v7 + 8) | *(_WORD *)(v7 + 10)) )
  {
    v8 = 30LL;
    v9 = *(_QWORD *)&a2->Header.Lock;
    if ( *(_QWORD *)&a2->Header.Lock )
    {
      v10 = *((_DWORD *)v4 + 6);
      v11 = (unsigned __int16)((1LL << *(_BYTE *)(v9 + 14)) - 1) ^ (*(unsigned __int16 *)(v9 + 8) | *(unsigned __int16 *)(v9 + 10));
      i = !_BitScanForward((unsigned int *)&v13, v11);
      if ( !i )
      {
        while ( 1 )
        {
          v14 = v9 + 48 * v13 + 16;
          v15 = (struct AutoBoost::_AB_THREAD_ENTRY *)*(unsigned int *)(v14 + 32);
          v16 = *(_DWORD *)(v14 + 32) >> 8;
          if ( ((unsigned __int8)v15 & (unsigned __int8)~BYTE1(*(_DWORD *)(v14 + 32)) & 1) == 0
            || (v10 & 1) != 0 && (v16 & 0x10) != 0 )
          {
            goto LABEL_57;
          }
          if ( ((unsigned __int8)v15 & 2) != 0 )
            break;
          if ( (v10 & 1) != 0 )
            goto LABEL_12;
LABEL_57:
          v11 &= v11 - 1;
          i = !_BitScanForward((unsigned int *)&v13, v11);
          if ( i )
          {
            v5 = a2;
            goto LABEL_59;
          }
        }
        v70 = v16 & 4;
        if ( (v10 & 1) != 0 )
        {
          if ( v70 )
          {
            v85 = *(_BYTE *)(*(_QWORD *)(v9 + 48 * v13 - 48LL * (*(_BYTE *)(v9 + 48 * v13 + 16 + 36) & 0x7F)) + 195LL);
            if ( v85 > 30 )
              v85 = 30;
            if ( v85 == *(_BYTE *)(v14 + 37) )
              goto LABEL_57;
          }
          else
          {
            v80 = AutoBoost::KiAbpOwnerComputeCpuPriorityKey((AutoBoost *)v14, v15);
            if ( v80 == v81 )
              goto LABEL_56;
          }
        }
        else if ( v70 )
        {
          if ( (v10 & 4) == 0 )
            goto LABEL_57;
        }
        else if ( (v10 & 2) == 0 )
        {
          goto LABEL_57;
        }
LABEL_12:
        v17 = *((_DWORD *)v4 + 6);
        v18 = 0;
        v87[0] = 0;
        if ( (v17 & 1) != 0 && (*(_BYTE *)(v14 + 32) & 2) == 0 )
          AutoBoost::KiAbpProcessEntryAddToTree((AutoBoost *)v14, v15);
        _m_prefetchw((const void *)(v14 + 35));
        v19 = *(_BYTE *)(v14 + 35);
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange8((volatile signed __int8 *)(v14 + 35), v19 | 1, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 1) != 0 )
        {
          do
          {
            while ( (*(_BYTE *)(v14 + 35) & 1) != 0 )
              _mm_pause();
            _m_prefetchw((const void *)(v14 + 35));
            v21 = *(_BYTE *)(v14 + 35);
            do
            {
              v22 = v21;
              v21 = _InterlockedCompareExchange8((volatile signed __int8 *)(v14 + 35), v21 | 1, v21);
            }
            while ( v22 != v21 );
          }
          while ( (v21 & 1) != 0 );
        }
        if ( (*(_BYTE *)(v14 + 32) & 2) == 0 )
        {
          _InterlockedAnd8((volatile signed __int8 *)(v14 + 35), 0xFEu);
LABEL_56:
          v8 = 30LL;
          goto LABEL_57;
        }
        v50 = *(_QWORD *)v14;
        v51 = (volatile signed __int32 *)(*(_QWORD *)v14 + 32LL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _interlockedbittestandset64(v51, 0LL) )
            KxWaitForSpinLockAndAcquire(v51);
        }
        else
        {
          KiAcquireSpinLockInstrumented(v51);
        }
        v52 = *((_DWORD *)v4 + 6);
        if ( (*(_BYTE *)(v14 + 33) & 4) == 0 )
        {
          if ( (v52 & 2) != 0 )
          {
            v53 = 0;
            if ( (*(_DWORD *)(v14 + 40) & 0x3FFFFFFF) != 0 )
            {
              _BitScanReverse(&v54, *(_DWORD *)(v14 + 40) & 0x3FFFFFFF);
              v53 = v54 + 1;
            }
            v55 = *(char *)(*(_QWORD *)(v14 - 48LL * (*(_BYTE *)(v14 + 36) & 0x7F) - 16) + 563LL);
            if ( v55 > v53 )
            {
              LOBYTE(v53) = 30;
              if ( v55 < 30 )
                LOBYTE(v53) = *(_BYTE *)(*(_QWORD *)(v14 - 48LL * (*(_BYTE *)(v14 + 36) & 0x7F) - 16) + 563LL);
            }
            if ( *(_BYTE *)(v14 + 37) == (_BYTE)v53 )
              goto LABEL_46;
            RtlRbRemoveNode((PRTL_RB_TREE)(v50 + 40), (PRTL_BALANCED_NODE)(v14 + 8));
            *(_BYTE *)(v14 + 37) = v53;
            v56 = *(_QWORD *)(v50 + 48);
            v57 = *(_QWORD *)(v50 + 40);
            if ( (v56 & 1) != 0 )
            {
              if ( !v57 )
              {
LABEL_162:
                v33 = 0;
LABEL_45:
                RtlRbInsertNodeEx((PRTL_RB_TREE)(v50 + 40), (PRTL_BALANCED_NODE)v57, v33, (PRTL_BALANCED_NODE)(v14 + 8));
                v4 = a3;
LABEL_46:
                v34 = *(_DWORD *)(v50 + 76);
                v93 = 0;
                v35 = 0;
                v36 = 0;
                if ( (_BYTE)v34 )
                  v35 = 2;
                BYTE1(v93) = v35;
                if ( (v34 & 0x7F00) != 0 )
                  v36 = 1;
                BYTE2(v93) = v36;
                v37 = *(_QWORD *)(v50 + 64);
                if ( v37 )
                  LOBYTE(v93) = *(_BYTE *)(v37 + 29);
                if ( v93 )
                {
                  if ( (unsigned int)AutoBoost::KiAbpApplyTargetPriority((ULONG_PTR)this, v14, v93, (__int64)v4, v87) )
                    AutoBoost::KiAbpEntryUpdateOwnerTreePosition(
                      (AutoBoost *)v50,
                      (struct AutoBoost::_AB_HEAD_ENTRY *)v14,
                      v78);
                  v18 = v87[0];
                }
                goto LABEL_53;
              }
              v57 ^= v50 + 40;
            }
            v33 = 0;
            v58 = v56 & 1;
            if ( v57 )
            {
              while ( 1 )
              {
                while ( (char)v53 - *(char *)(v57 + 29) < 0 )
                {
                  v59 = *(_QWORD *)v57;
                  if ( v58 )
                  {
                    if ( !v59 )
                      goto LABEL_162;
                    v59 ^= v57;
                  }
                  if ( !v59 )
                    goto LABEL_162;
                  v57 = v59;
                }
                v32 = *(_QWORD *)(v57 + 8);
                if ( v58 )
                {
                  if ( !v32 )
                    break;
                  v32 ^= v57;
                }
                if ( !v32 )
                  break;
                v57 = v32;
              }
              v33 = 1;
            }
            goto LABEL_45;
          }
LABEL_53:
          v38 = (volatile signed __int64 *)(v50 + 32);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            _InterlockedAnd64(v38, 0LL);
          else
            KiReleaseSpinLockInstrumented(v38, retaddr);
          _InterlockedAnd8((volatile signed __int8 *)(v14 + 35), 0xFEu);
          if ( v18 && ObReferenceObjectSafeWithTag((__int64)this, 0x746C6644u) )
          {
            if ( (v18 & 1) != 0 )
              IoBoostThreadIoPriority((KSPIN_LOCK *)this, 2, 0x80000000);
            if ( (v18 & 2) != 0 )
              PsBoostThreadOutstandingIoQoS((__int64)this);
            ObDereferenceObjectDeferDeleteWithTag(this, 0x746C6644u);
          }
          goto LABEL_56;
        }
        if ( (v52 & 4) == 0 )
          goto LABEL_53;
        AutoBoost::KiAbpEntryUpdateWaiterTreePosition(
          (AutoBoost *)v50,
          (struct AutoBoost::_AB_HEAD_ENTRY *)v14,
          (struct AutoBoost::_AB_THREAD_ENTRY *)v8);
        v75 = *(_BYTE *)(v14 + 37);
        v76 = AutoBoost::KiAbpTryIncrementIoWaiterCounts(v50, v14, (__int64)this);
        if ( (char)v77 < v75 )
        {
          if ( !v76 )
            goto LABEL_141;
        }
        else if ( !v76 )
        {
          goto LABEL_53;
        }
        AutoBoost::KiAbpPerformIoBoostsForOwners(v50, v76, (__int64)v4);
LABEL_141:
        AutoBoost::KiAbpPerformCpuPriorityBoostsForOwners(
          (AutoBoost *)v50,
          (struct AutoBoost::_AB_HEAD_ENTRY *)(unsigned __int8)v75,
          (__int64)v4,
          v77);
        goto LABEL_53;
      }
    }
LABEL_59:
    Flink = v5->Header.WaitListHead.Flink;
    if ( Flink )
    {
      v40 = *((_DWORD *)v4 + 6);
      v30 = (unsigned __int16)((1LL << BYTE6(Flink->Blink)) - 1) ^ (LOWORD(Flink->Blink) | WORD1(Flink->Blink));
      for ( i = !_BitScanForward((unsigned int *)&v31, v30); !i; i = !_BitScanForward((unsigned int *)&v31, v30) )
      {
        v41 = (__int64)&Flink[3 * v31 + 1];
        v42 = (struct AutoBoost::_AB_THREAD_ENTRY *)*(unsigned int *)(v41 + 32);
        v43 = *(_DWORD *)(v41 + 32) >> 8;
        if ( ((unsigned __int8)v42 & (unsigned __int8)~BYTE1(*(_DWORD *)(v41 + 32)) & 1) == 0
          || (v40 & 1) != 0 && (v43 & 0x10) != 0 )
        {
          goto LABEL_40;
        }
        if ( ((unsigned __int8)v42 & 2) != 0 )
        {
          v71 = v43 & 4;
          if ( (v40 & 1) != 0 )
          {
            if ( v71 )
            {
              v86 = BYTE3(Flink[3 * v31 + -3 * (BYTE4(Flink[3 * v31 + 3].Flink) & 0x7F)].Flink[12].Flink);
              if ( v86 > 30 )
                v86 = 30;
              if ( v86 == *(_BYTE *)(v41 + 37) )
                goto LABEL_40;
            }
            else
            {
              v82 = AutoBoost::KiAbpOwnerComputeCpuPriorityKey((AutoBoost *)v41, v42);
              if ( v82 == v83 )
                goto LABEL_40;
            }
          }
          else if ( v71 )
          {
            if ( (v40 & 4) == 0 )
              goto LABEL_40;
          }
          else if ( (v40 & 2) == 0 )
          {
            goto LABEL_40;
          }
        }
        else if ( (v40 & 1) == 0 )
        {
          goto LABEL_40;
        }
        v44 = *((_DWORD *)v4 + 6);
        v45 = 0;
        v87[0] = 0;
        if ( (v44 & 1) != 0 && (*(_BYTE *)(v41 + 32) & 2) == 0 )
          AutoBoost::KiAbpProcessEntryAddToTree((AutoBoost *)v41, v42);
        _m_prefetchw((const void *)(v41 + 35));
        v46 = *(_BYTE *)(v41 + 35);
        do
        {
          v47 = v46;
          v46 = _InterlockedCompareExchange8((volatile signed __int8 *)(v41 + 35), v46 | 1, v46);
        }
        while ( v47 != v46 );
        if ( (v46 & 1) != 0 )
        {
          do
          {
            while ( (*(_BYTE *)(v41 + 35) & 1) != 0 )
              _mm_pause();
            _m_prefetchw((const void *)(v41 + 35));
            v48 = *(_BYTE *)(v41 + 35);
            do
            {
              v49 = v48;
              v48 = _InterlockedCompareExchange8((volatile signed __int8 *)(v41 + 35), v48 | 1, v48);
            }
            while ( v49 != v48 );
          }
          while ( (v48 & 1) != 0 );
        }
        if ( (*(_BYTE *)(v41 + 32) & 2) != 0 )
        {
          v60 = *(_QWORD *)v41;
          v61 = (volatile signed __int32 *)(*(_QWORD *)v41 + 32LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            if ( _interlockedbittestandset64(v61, 0LL) )
              KxWaitForSpinLockAndAcquire(v61);
          }
          else
          {
            KiAcquireSpinLockInstrumented(v61);
          }
          v62 = *((_DWORD *)v4 + 6);
          if ( (*(_BYTE *)(v41 + 33) & 4) == 0 )
          {
            if ( (v62 & 2) != 0 )
            {
              v63 = 0;
              if ( (*(_DWORD *)(v41 + 40) & 0x3FFFFFFF) != 0 )
              {
                _BitScanReverse(&v64, *(_DWORD *)(v41 + 40) & 0x3FFFFFFF);
                v63 = v64 + 1;
              }
              v65 = *(char *)(*(_QWORD *)(v41 - 48LL * (*(_BYTE *)(v41 + 36) & 0x7F) - 16) + 563LL);
              if ( v65 > v63 )
              {
                LOBYTE(v63) = 30;
                if ( v65 < 30 )
                  LOBYTE(v63) = *(_BYTE *)(*(_QWORD *)(v41 - 48LL * (*(_BYTE *)(v41 + 36) & 0x7F) - 16) + 563LL);
              }
              if ( *(_BYTE *)(v41 + 37) != (_BYTE)v63 )
              {
                RtlRbRemoveNode((PRTL_RB_TREE)(v60 + 40), (PRTL_BALANCED_NODE)(v41 + 8));
                *(_BYTE *)(v41 + 37) = v63;
                v66 = *(_QWORD *)(v60 + 48);
                if ( (v66 & 1) != 0 )
                {
                  v84 = *(_QWORD *)(v60 + 40);
                  if ( v84 )
                  {
                    v67 = v84 ^ (v60 + 40);
                    goto LABEL_112;
                  }
                  v67 = 0LL;
LABEL_165:
                  v24 = 0;
                }
                else
                {
                  v67 = *(_QWORD *)(v60 + 40);
LABEL_112:
                  v24 = 0;
                  v68 = v66 & 1;
                  if ( v67 )
                  {
                    while ( 1 )
                    {
                      while ( (char)v63 - *(char *)(v67 + 29) < 0 )
                      {
                        v69 = *(_QWORD *)v67;
                        if ( v68 )
                        {
                          if ( !v69 )
                            goto LABEL_165;
                          v69 ^= v67;
                        }
                        if ( !v69 )
                          goto LABEL_165;
                        v67 = v69;
                      }
                      v23 = *(_QWORD *)(v67 + 8);
                      if ( v68 )
                      {
                        if ( !v23 )
                          break;
                        v23 ^= v67;
                      }
                      if ( !v23 )
                        break;
                      v67 = v23;
                    }
                    v24 = 1;
                  }
                }
                RtlRbInsertNodeEx((PRTL_RB_TREE)(v60 + 40), (PRTL_BALANCED_NODE)v67, v24, (PRTL_BALANCED_NODE)(v41 + 8));
                v4 = a3;
              }
              v25 = *(_DWORD *)(v60 + 76);
              v92 = 0;
              v26 = 0;
              v27 = 0;
              if ( (_BYTE)v25 )
                v26 = 2;
              BYTE1(v92) = v26;
              if ( (v25 & 0x7F00) != 0 )
                v27 = 1;
              BYTE2(v92) = v27;
              v28 = *(_QWORD *)(v60 + 64);
              if ( v28 )
                LOBYTE(v92) = *(_BYTE *)(v28 + 29);
              if ( v92 )
              {
                if ( (unsigned int)AutoBoost::KiAbpApplyTargetPriority((ULONG_PTR)this, v41, v92, (__int64)v4, v87) )
                  AutoBoost::KiAbpEntryUpdateOwnerTreePosition(
                    (AutoBoost *)v60,
                    (struct AutoBoost::_AB_HEAD_ENTRY *)v41,
                    v79);
                v45 = v87[0];
              }
            }
LABEL_37:
            v29 = (volatile signed __int64 *)(v60 + 32);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              _InterlockedAnd64(v29, 0LL);
            else
              KiReleaseSpinLockInstrumented(v29, retaddr);
            _InterlockedAnd8((volatile signed __int8 *)(v41 + 35), 0xFEu);
            if ( v45 && ObReferenceObjectSafeWithTag((__int64)this, 0x746C6644u) )
            {
              if ( (v45 & 1) != 0 )
                IoBoostThreadIoPriority((KSPIN_LOCK *)this, 2, 0x80000000);
              if ( (v45 & 2) != 0 )
                PsBoostThreadOutstandingIoQoS((__int64)this);
              ObDereferenceObjectDeferDeleteWithTag(this, 0x746C6644u);
            }
            goto LABEL_40;
          }
          if ( (v62 & 4) == 0 )
            goto LABEL_37;
          AutoBoost::KiAbpEntryUpdateWaiterTreePosition(
            (AutoBoost *)v60,
            (struct AutoBoost::_AB_HEAD_ENTRY *)v41,
            (struct AutoBoost::_AB_THREAD_ENTRY *)v8);
          v72 = *(_BYTE *)(v41 + 37);
          v73 = AutoBoost::KiAbpTryIncrementIoWaiterCounts(v60, v41, (__int64)this);
          if ( (char)v74 < v72 )
          {
            if ( v73 )
              goto LABEL_134;
          }
          else
          {
            if ( !v73 )
              goto LABEL_37;
LABEL_134:
            AutoBoost::KiAbpPerformIoBoostsForOwners(v60, v73, (__int64)v4);
          }
          AutoBoost::KiAbpPerformCpuPriorityBoostsForOwners(
            (AutoBoost *)v60,
            (struct AutoBoost::_AB_HEAD_ENTRY *)(unsigned __int8)v72,
            (__int64)v4,
            v74);
          goto LABEL_37;
        }
        _InterlockedAnd8((volatile signed __int8 *)(v41 + 35), 0xFEu);
LABEL_40:
        v8 = 30LL;
        v30 &= v30 - 1;
      }
    }
  }
}
