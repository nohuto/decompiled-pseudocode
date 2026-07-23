/*
 * XREFs of MiDeleteVaDirect @ 0x140363C90
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x140317278 (MiDeleteEmptyPageTables.c)
 *     MiDeletePagablePteRange @ 0x140363600 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     EtwTraceShouldYieldProcessor @ 0x140316318 (EtwTraceShouldYieldProcessor.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiGetPageWalkLocks @ 0x140364BB8 (MiGetPageWalkLocks.c)
 *     MiReleaseWalkLocks @ 0x140364CA0 (MiReleaseWalkLocks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall MiDeleteVaDirect(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // r8d
  __int64 v4; // r15
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  ULONG_PTR i; // rdx
  int v14; // eax
  unsigned __int64 Process; // rdx
  unsigned __int64 CurrentPrcb; // r8
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  int v19; // r12d
  unsigned __int64 v20; // rcx
  __int64 v21; // r14
  _QWORD *v22; // r15
  unsigned __int64 v23; // rcx
  int v24; // r13d
  unsigned __int8 v25; // al
  unsigned __int64 *v26; // rax
  unsigned int *MmInternal; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  int v30; // eax
  bool v31; // zf
  struct _KPRCB *v32; // rcx
  __int64 v33; // r9
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // r14d
  _KTHREAD *NextThread; // rax
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned int j; // r9d
  __int64 v42; // rcx
  __int64 v43; // rcx
  char v44; // al
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ebp
  int v48; // eax
  volatile unsigned __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // rdi
  unsigned __int64 k; // rcx
  char result; // al
  _KPROCESS *v55; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v57; // rax
  volatile unsigned __int64 v58; // rcx
  __int64 v59; // rdi
  unsigned __int64 v60; // rdx
  __int64 v61; // rdx
  struct _KPRCB *v62; // rdx
  char v63; // al
  __int64 v64; // rcx
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  __int64 PteShadow; // rax
  __int64 v68; // rcx
  struct _KPRCB *v69; // rcx
  __int64 v70; // rcx
  unsigned __int32 v71; // eax
  unsigned __int32 v72; // ett
  __int64 v73; // [rsp+20h] [rbp-A8h]
  __int64 v74; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v75; // [rsp+38h] [rbp-90h]
  unsigned __int64 LeafVa; // [rsp+40h] [rbp-88h]
  unsigned __int64 v77; // [rsp+48h] [rbp-80h]
  unsigned int v78; // [rsp+60h] [rbp-68h]
  unsigned __int64 v79; // [rsp+68h] [rbp-60h]
  unsigned int v80; // [rsp+D0h] [rbp+8h]
  int v81; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v82; // [rsp+E0h] [rbp+18h]
  unsigned __int64 v83; // [rsp+E8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v73 = v1;
  if ( *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(a1 + 168) != MiDeleteVa )
    v3 = 8;
  v80 = v3;
  v4 = (unsigned int)(*(_QWORD *)(a1 + 168) != (_QWORD)MiDeleteVa) + 1;
  v78 = (*(_QWORD *)(a1 + 168) != (_QWORD)MiDeleteVa) + 1;
  v81 = *(_DWORD *)(**(_QWORD **)(a1 + 184) + 116LL);
  v5 = ((*(_QWORD *)(a1 + 40) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 96) = v5;
  v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 104) = v6;
  v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 112) = v7;
  *(_QWORD *)(a1 + 120) = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 128) = v8;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 136) = v9;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 144) = v10;
  v83 = -1LL;
  *(_QWORD *)(a1 + 152) = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = *(_QWORD *)(a1 + 8 * v4 + 96);
  v12 = *(_QWORD *)(a1 + 8 * v4 + 128);
  v77 = v11;
  v79 = v12;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v11 > v12 )
        goto LABEL_112;
      for ( i = v11; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
      {
        if ( i > 0xFFFFF6FFFFFFFFFFuLL )
          break;
      }
      v14 = MiFastLockLeafPageTable(v1, i, v3);
      if ( !v14 )
      {
        result = 0;
        goto LABEL_113;
      }
      v82 = v11;
      v17 = v11;
      v18 = (__int64)(v11 << 25) >> 16;
      if ( (int)v4 < v14 )
      {
        Process = 0x7FFFFFFFF8LL;
        v70 = (unsigned int)(v14 - v4);
        do
        {
          v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v70;
        }
        while ( v70 );
        v82 = v17;
      }
      v19 = v14 - 1;
      if ( v14 == 1 )
      {
        v20 = v17 + 8;
        LeafVa = v17 + 8;
        if ( v17 + 8 >= 0xFFFFF68000000000uLL )
        {
          Process = 0xFFFFF6FFFFFFFFFFuLL;
          do
          {
            if ( v20 > 0xFFFFF6FFFFFFFFFFuLL )
              break;
            v20 = (__int64)(v20 << 25) >> 16;
          }
          while ( v20 >= 0xFFFFF68000000000uLL );
          LeafVa = v20;
        }
        v21 = 0LL;
        v74 = 0LL;
      }
      else
      {
        v21 = v19;
        v74 = v19;
        if ( v18 < *(_QWORD *)(a1 + 8LL * v19 + 96) )
          v18 = *(_QWORD *)(a1 + 8LL * v19 + 96);
        LeafVa = MiGetLeafVa(v18 + 8);
      }
LABEL_17:
      *(_QWORD *)(a1 + 56) = v17;
      v22 = **(_QWORD ***)(a1 + 184);
      if ( v18 < *(_QWORD *)(a1 + 8 * v21 + 96) )
        v18 = *(_QWORD *)(a1 + 8 * v21 + 96);
      v23 = v18;
      if ( v19 )
      {
        v75 = v18;
      }
      else
      {
        v23 = v18 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
        v75 = v23;
        if ( v23 > *(_QWORD *)(a1 + 8 * v21 + 128) )
        {
          v23 = *(_QWORD *)(a1 + 8 * v21 + 128);
          v75 = v23;
        }
      }
      v24 = 0;
      do
      {
        if ( v18 > v23 )
        {
          v38 = v74;
LABEL_90:
          guard_dispatch_icall_no_overrides(a1, Process, CurrentPrcb);
          goto LABEL_91;
        }
        if ( v19 )
        {
          PteShadow = *(_QWORD *)v18;
          if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(v18, *(_QWORD *)v18);
          if ( PteShadow && (PteShadow & 1) == 0 )
          {
            guard_dispatch_icall_no_overrides(a1, Process, CurrentPrcb);
            v66 = *(_QWORD *)(a1 + 56);
            if ( v66 )
            {
              MiUnlockPageTableInternal(v73, v66);
              *(_QWORD *)(a1 + 56) = 0LL;
            }
            result = 0;
            goto LABEL_113;
          }
        }
        guard_dispatch_icall_no_overrides(a1, v18, (unsigned int)v19);
        Process = ++*(_QWORD *)(a1 + 160);
        if ( (*(_DWORD *)a1 & 2) != 0 && ((unsigned __int8)Process & *(_BYTE *)(a1 + 8)) == 0 )
        {
          Process = *(_QWORD *)(a1 + 32);
          v25 = *(_DWORD *)(Process + 184) & 0xF;
          if ( v25 == 5 || v25 <= 4u )
          {
            if ( (*(_DWORD *)(Process + 184) & 0xF) == 1 )
              v26 = (unsigned __int64 *)&qword_140E37980;
            else
              v26 = (unsigned __int64 *)(Process + 192);
            CurrentPrcb = *v26;
            if ( (*(_DWORD *)a1 & 4) != 0 )
            {
              MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
              if ( MmInternal )
                v28 = MmInternal[81];
              else
                v28 = 0LL;
              if ( (*(_DWORD *)((v28 << 6) + CurrentPrcb) & 0x40000000) != 0 )
                goto LABEL_56;
            }
            else
            {
              for ( j = 0; j < 4; ++j )
              {
                if ( (*(_DWORD *)(((unsigned __int64)j << 6) + CurrentPrcb) & 0x40000000) != 0 )
                  goto LABEL_56;
              }
            }
          }
          if ( (*(_DWORD *)a1 & 4) != 0 )
          {
            CurrentPrcb = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( ((v18 >> 9) & 0x7FFFFFFFF8LL) != 0x7B7DBEDF68LL )
            {
              if ( (*(_DWORD *)(Process + 184) & 0xF) != 0
                || CurrentPrcb < 0xFFFFF6FB7DBED000uLL
                || CurrentPrcb > 0xFFFFF6FB7DBEDFFFuLL
                || (v46 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
              {
                if ( (*(_DWORD *)(Process + 184) & 0xF) != 0
                  && CurrentPrcb >= 0xFFFFF6FB7DBED000uLL
                  && CurrentPrcb <= 0xFFFFF6FB7DBEDFFFuLL )
                {
                  CurrentPrcb = 2 * (unsigned int)((__int64)(CurrentPrcb + 0x90482413000LL) >> 3);
                  Process = *(&MiState + ((unsigned __int64)(unsigned int)CurrentPrcb >> 5) + 1467) >> (CurrentPrcb & 0x1F);
                  v31 = (Process & 2) == 0;
LABEL_44:
                  if ( !v31 )
                    goto LABEL_56;
                  goto LABEL_45;
                }
                v29 = *(_QWORD *)CurrentPrcb;
                if ( CurrentPrcb >= 0xFFFFF6FB7DBED000uLL
                  && CurrentPrcb <= 0xFFFFF6FB7DBED7F8uLL
                  && (v29 & 1) != 0
                  && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0)
                  && (MiFlags & 0x1800000) != 0 )
                {
                  Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
                  if ( *(_BYTE *)(Process + 352) != 1 )
                  {
                    if ( Process )
                    {
                      v42 = *(_QWORD *)(Process + 1288);
                      if ( v42 )
                      {
                        CurrentPrcb = (CurrentPrcb >> 3) & 0x1FF;
                        v43 = *(_QWORD *)(v42 + 8 * CurrentPrcb);
                        if ( (v43 & 0x20) != 0 )
                          v29 |= 0x20uLL;
                        Process = v29;
                        v29 |= 0x42uLL;
                        if ( (v43 & 0x42) == 0 )
                          v29 = Process;
                      }
                    }
                  }
                }
                v30 = (v29 >> 60) & 2;
              }
              else
              {
                v30 = (*(_DWORD *)(v46 + 4 * ((((v18 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF)) & 0x40000000) != 0;
              }
              v31 = v30 == 0;
              goto LABEL_44;
            }
            CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
            v44 = *(_DWORD *)(Process + 184) & 0xF;
            if ( v44 )
            {
              if ( v44 == 7 )
              {
                v45 = 24LL;
              }
              else
              {
                v45 = 72LL;
                if ( v44 == 5 )
                  v45 = 0LL;
              }
            }
            else
            {
              v45 = 48LL;
            }
            if ( *(_QWORD *)(CurrentPrcb + v45 + 40064) )
            {
LABEL_56:
              v24 = 2;
              goto LABEL_52;
            }
          }
LABEL_45:
          if ( *(_BYTE *)(a1 + 9) >= 2u )
            goto LABEL_52;
          v32 = KeGetCurrentPrcb();
          CurrentPrcb = 0LL;
          v33 = 0LL;
          Process = (unsigned int)v32->DpcRequestSummary;
          DpcWatchdogCount = v32->DpcWatchdogCount;
          DpcTimeCount = v32->DpcTimeCount;
          if ( (Process & 1) != 0 )
          {
            CurrentPrcb = 1LL;
            if ( DpcTimeCount <= 7 )
            {
LABEL_51:
              if ( DpcWatchdogCount <= 7 )
                goto LABEL_52;
              if ( !(_DWORD)CurrentPrcb )
                goto LABEL_183;
              goto LABEL_121;
            }
            if ( v32->QuantumEnd )
            {
              v47 = 1;
              goto LABEL_85;
            }
          }
          else
          {
            if ( !v32->NestingLevel )
            {
              if ( (Process & 0x1E) != 0 )
              {
                v47 = 2;
                goto LABEL_85;
              }
              if ( v32->QuantumEnd )
              {
                v47 = 3;
                goto LABEL_85;
              }
              NextThread = v32->NextThread;
              if ( NextThread && NextThread != v32->CurrentThread )
              {
                v47 = 4;
                goto LABEL_85;
              }
              goto LABEL_51;
            }
            v33 = 1LL;
            if ( DpcWatchdogCount <= 7 )
              goto LABEL_52;
            if ( v32->QuantumEnd )
            {
              v47 = 7;
              goto LABEL_85;
            }
          }
LABEL_121:
          if ( (Process & 0x1E) == 0 )
          {
            if ( v32->CurrentThread != v32->IdleThread )
            {
              v47 = 6;
              goto LABEL_85;
            }
LABEL_183:
            _disable();
            v32->DpcWatchdogCount = 0;
            v32->DpcTimeCount = 0;
            v69 = KeGetCurrentPrcb();
            CurrentPrcb = (unsigned __int64)v69->SchedulerAssist;
            if ( CurrentPrcb )
            {
              _m_prefetchw((const void *)CurrentPrcb);
              v71 = *(_DWORD *)CurrentPrcb;
              do
              {
                Process = v71;
                LODWORD(Process) = v71 & 0xFFDFFFFF;
                v72 = v71;
                v71 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb, v71 & 0xFFDFFFFF, v71);
              }
              while ( v72 != v71 );
              if ( (v71 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v69, Process, CurrentPrcb, v33);
            }
            _enable();
            v47 = 0;
            goto LABEL_85;
          }
          v47 = 5;
LABEL_85:
          if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
            EtwTraceShouldYieldProcessor(v47, DpcWatchdogCount, DpcTimeCount);
          if ( v47 )
            v24 = 2;
        }
LABEL_52:
        v23 = v75;
        v37 = (unsigned int)(*(_DWORD *)(a1 + 12) + 1);
        *(_DWORD *)(a1 + 12) = 0;
        v18 += 8 * v37;
        v22[8] = v18;
        v22[10] = v18;
        v22[6] = (__int64)(v18 << 25) >> 16;
      }
      while ( v24 != 2 );
      v38 = v74;
      if ( v18 <= *(_QWORD *)(a1 + 8 * v74 + 128) )
      {
        if ( v83 == -1LL )
        {
          v83 = MiGetLeafVa(v18);
          guard_dispatch_icall_no_overrides(a1, v39, v40);
          goto LABEL_91;
        }
        goto LABEL_90;
      }
      v24 = 0;
      guard_dispatch_icall_no_overrides(a1, Process, CurrentPrcb);
LABEL_91:
      v48 = *(_DWORD *)(a1 + 4);
      if ( (v48 & 1) != 0 )
      {
        v83 = -1LL;
        *(_DWORD *)(a1 + 4) = v48 & 0xFFFFFFFE;
        MiGetPageWalkLocks(a1);
        v3 = v80;
        v12 = v79;
        v11 = v77;
        v1 = v73;
        LODWORD(v4) = v78;
        continue;
      }
      break;
    }
    v18 = v82;
    if ( (*(_DWORD *)a1 & 0x400) == 0 && (v81 & 0x80u) == 0 || v19 == 3 )
      goto LABEL_98;
    v49 = *(_QWORD *)v82;
    if ( v82 >= 0xFFFFF6FB7DBED000uLL
      && v82 <= 0xFFFFF6FB7DBED7F8uLL
      && (v49 & 1) != 0
      && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
    {
      v55 = MiPteHasShadow();
      if ( v55 )
      {
        KernelWaitTime = v55[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v57 = *(_QWORD *)(KernelWaitTime + 8 * ((v82 >> 3) & 0x1FF));
          if ( (v57 & 0x20) != 0 )
            v49 |= 0x20uLL;
          v58 = v49;
          v49 |= 0x42uLL;
          if ( (v57 & 0x42) == 0 )
            v49 = v58;
        }
      }
    }
    v50 = 48 * ((v49 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v51 = (*(_DWORD *)(v50 + 36) & 0x4000000) != 0 ? *(_QWORD *)v50 >> 36 : *(_QWORD *)(v50 + 16) >> 17;
    if ( (v51 & 0x3FF) != 0 )
    {
LABEL_98:
      v1 = v73;
      if ( v82 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v73 + 184) & 0xF) != 0
          || v82 < 0xFFFFF6FB7DBED000uLL
          || v82 > 0xFFFFF6FB7DBEDFFFuLL
          || (v65 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
        {
          if ( (*(_DWORD *)(v73 + 184) & 0xF) != 0 && v82 >= 0xFFFFF6FB7DBED000uLL && v82 <= 0xFFFFF6FB7DBEDFFFuLL )
            _InterlockedAnd(
              (volatile signed __int32 *)&MiState
            + ((unsigned __int64)(2 * (unsigned int)((__int64)(v82 + 0x90482413000LL) >> 3)) >> 5)
            + 1467,
              ~(2 << ((2 * ((__int64)(v82 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                      * ((__int64)(v82 + 0x90482413000LL) >> 3)) & 0x1F)));
          else
            _InterlockedAnd64((volatile signed __int64 *)v82, 0xCFFFFFFFFFFFFFFFuLL);
        }
        else
        {
          ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v65 + 4 * ((v82 >> 3) & 0x1FF)));
        }
        goto LABEL_105;
      }
      v62 = KeGetCurrentPrcb();
      v63 = *(_DWORD *)(v73 + 184) & 0xF;
      if ( !v63 )
      {
        v64 = 2LL;
        goto LABEL_145;
      }
      if ( v63 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v62->SelfmapLockHandle[1]);
      }
      else
      {
        v64 = 3LL;
        if ( v63 == 5 )
          v64 = 0LL;
LABEL_145:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v62->SelfmapLockHandle[v64]);
      }
LABEL_105:
      *(_QWORD *)(a1 + 56) = 0LL;
      if ( v24 == 2 )
      {
        MiReleaseWalkLocks(a1);
        v52 = v83;
        *(_DWORD *)(a1 + 4) &= ~1u;
        v83 = -1LL;
        MiGetPageWalkLocks(a1);
      }
      else
      {
        v52 = LeafVa;
      }
      LODWORD(v4) = v78;
      v11 = ((v52 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v77 = v11;
      if ( v78 > 1 )
      {
        v68 = v78 - 1;
        do
        {
          v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v68;
        }
        while ( v68 );
        v77 = v11;
      }
      for ( k = *(_QWORD *)(a1 + 128); k >= 0xFFFFF68000000000uLL; k = (__int64)(k << 25) >> 16 )
      {
        if ( k > 0xFFFFF6FFFFFFFFFFuLL )
          break;
      }
      if ( v52 <= k )
      {
        v59 = (v52 >> 9) & 0x7FFFFFFFF8LL;
        *(_QWORD *)(a1 + 96) = v59 - 0x98000000000LL;
        v60 = (((unsigned __int64)(v59 - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        *(_QWORD *)(a1 + 104) = v60;
        v61 = (v60 >> 9) & 0x7FFFFFFFF8LL;
        *(_QWORD *)(a1 + 112) = v61 - 0x98000000000LL;
        v3 = v80;
        v12 = v79;
        *(_QWORD *)(a1 + 120) = (((unsigned __int64)(v61 - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        continue;
      }
LABEL_112:
      result = 1;
    }
    else
    {
      v17 = ((v82 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (unsigned int)MiLockPageTableInternal(v73, v17, 1) )
      {
        MiUnlockPageTableInternal(v73, v82);
        ++v19;
        v82 = ((v82 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v21 = v38 + 1;
        v74 = v21;
        goto LABEL_17;
      }
      MiUnlockPageTableInternal(v73, v82);
      *(_QWORD *)(a1 + 56) = 0LL;
      result = 0;
    }
    break;
  }
LABEL_113:
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  return result;
}
