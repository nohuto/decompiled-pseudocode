/*
 * XREFs of MiWalkLevelCompleted @ 0x140249800
 * Callers:
 *     MiWalkPageTablesEvaluatePte @ 0x140329B60 (MiWalkPageTablesEvaluatePte.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMarkResumptionPoint @ 0x1404553E0 (MiMarkResumptionPoint.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiWalkLevelCompleted(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r14
  int v6; // edx
  __int64 v7; // r13
  __int64 v8; // r15
  int v9; // eax
  __int64 *v10; // rdx
  unsigned int v11; // eax
  _DWORD *v12; // rbx
  unsigned int v13; // ebp
  unsigned __int8 v14; // si
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  _DWORD *v17; // rcx
  signed __int64 v19; // r9
  int v20; // edx
  __int64 v21; // r10
  int **v22; // rdx
  int *v23; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v25; // edi
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // rbx
  _DWORD *MmInternal; // rcx
  int *v31; // rbx
  __int64 v32; // rsi
  unsigned int v33; // edi
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r12
  struct _KPRCB *v36; // r8
  int v37; // eax
  char v38; // al
  unsigned int v39; // ecx
  unsigned __int64 KernelWaitTime; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v41; // rcx
  __int64 v42; // r14
  signed __int64 v43; // rcx
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // r11
  signed __int64 v47; // rbx
  int v48; // r9d
  unsigned __int64 v49; // r12
  int v50; // eax
  unsigned int v51; // esi
  _KPROCESS *v52; // rcx
  __int64 v53; // rax
  signed __int64 v54; // rcx
  volatile signed __int64 v55; // r8
  __int64 v56; // rbx
  unsigned __int64 v57; // r10
  __int64 v58; // r8
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  unsigned int v61; // ebx
  signed __int64 v62; // rax
  struct _KPRCB *v63; // r8
  char v64; // al
  unsigned int v65; // ecx
  volatile __int64 *v66; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v67; // rcx
  unsigned __int64 v68; // r12
  struct _KPRCB *CurrentPrcb; // r8
  int v70; // eax
  char v71; // al
  unsigned __int64 v72; // rdx
  unsigned int v73; // ecx
  __int64 Process; // rcx
  signed __int64 v75; // r14
  __int64 v76; // rax
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // rdi
  signed __int64 v79; // rbx
  int v80; // r13d
  unsigned __int64 v81; // r15
  unsigned int v82; // r12d
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  volatile signed __int64 v86; // r8
  __int64 v87; // rbx
  unsigned __int64 v88; // r9
  unsigned __int64 v89; // r10
  __int64 v90; // r8
  __int64 v91; // rax
  __int64 *v92; // r8
  __int64 v93; // rax
  unsigned __int64 v94; // rdx
  unsigned int v95; // ebx
  signed __int64 v96; // rax
  struct _KPRCB *v97; // r8
  char v98; // al
  unsigned int v99; // ecx
  volatile __int64 *v100; // rdx
  unsigned int v101; // ecx
  unsigned __int64 v102; // rdx
  char v103; // r15
  int v104; // r12d
  int v105; // r8d
  volatile signed __int32 *v106; // rbx
  int v107; // r13d
  unsigned __int32 v108; // edx
  bool v109; // zf
  signed __int32 v110; // eax
  __int64 v111; // rax
  __int64 v112; // rax
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 HasShadow; // rax
  __int64 v118; // rax
  struct _KPRCB *v119; // rdx
  char v120; // al
  __int64 v121; // rcx
  __int64 v122; // rcx
  struct _KPRCB *v123; // rdx
  char v124; // al
  __int64 v125; // rcx
  struct _KPRCB *v126; // rcx
  char v127; // al
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rcx
  signed __int64 v132; // rax
  signed __int64 v133; // rax
  unsigned int v134; // r12d
  unsigned __int64 v135; // rdx
  char v136; // bl
  unsigned __int32 v137; // r8d
  volatile signed __int32 *v138; // r9
  int v139; // r10d
  int v140; // edx
  signed __int32 v141; // eax
  unsigned int v142; // r12d
  signed __int64 v143; // rax
  signed __int64 v144; // rax
  signed __int32 v145; // edx
  signed __int32 v146; // eax
  int v147; // ecx
  signed __int32 v148; // eax
  unsigned __int32 *v149; // r12
  int v150; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v151; // [rsp+28h] [rbp-80h]
  unsigned __int64 v152; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v153; // [rsp+38h] [rbp-70h]
  signed __int64 v154; // [rsp+40h] [rbp-68h]
  __int64 v155; // [rsp+48h] [rbp-60h]
  unsigned __int64 v156; // [rsp+50h] [rbp-58h]
  unsigned __int64 v157; // [rsp+58h] [rbp-50h]
  unsigned __int64 v158; // [rsp+60h] [rbp-48h]
  __int64 v159; // [rsp+68h] [rbp-40h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]

  v5 = a1;
  v6 = *(_DWORD *)(a1 + 4);
  if ( (v6 & 2) != 0 )
  {
    if ( (_DWORD)a3 != 3 )
      goto LABEL_214;
    v19 = *(_QWORD *)(a1 + 32);
    v20 = v6 | 1;
    *(_DWORD *)(a1 + 4) = v20;
    v154 = v19;
    v21 = 0LL;
    v155 = 0LL;
    if ( (*(_DWORD *)a1 & 0x800) != 0 )
      goto LABEL_25;
    v156 = 0xFFFFF6FB7DBEDF68uLL;
    v157 = 0xFFFFF6FB7DBEDF68uLL;
    v158 = 0xFFFFF6FB7DBEDF68uLL;
    v159 = 0xFFFFF6FB7DBEDF68uLL;
    v68 = 0xFFFFF6FB7DBEDF68uLL;
    CurrentPrcb = KeGetCurrentPrcb();
    v70 = *(_DWORD *)(v19 + 184);
    v151 = 0xFFFFF6FB7DBEDF68uLL;
    v71 = v70 & 0xF;
    if ( v71 )
    {
      if ( v71 == 7 )
      {
        v73 = 1;
      }
      else
      {
        v73 = 3;
        if ( v71 == 5 )
          v73 = 0;
      }
      v72 = (unsigned __int64)(&MiState + 2 * v73 + 2278);
    }
    else
    {
      v72 = v19 + 176;
      v73 = 2;
    }
    Process = (__int64)CurrentPrcb->SelfmapLockHandle + 16 * v73 + 8 * v73;
    *(_QWORD *)(Process + 8) = v72;
    *(_QWORD *)Process = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( !_InterlockedExchange64((volatile __int64 *)v72, Process) )
      {
LABEL_165:
        v75 = v154;
        v76 = 2LL;
        v77 = 0xFFFFF6FB7DBED000uLL;
        while ( 1 )
        {
          v78 = *(&v156 + v76);
          v153 = v76;
          v79 = *(_QWORD *)v78;
          if ( v78 >= 0xFFFFF6FB7DBED000uLL
            && v78 <= 0xFFFFF6FB7DBED7F8uLL
            && (v79 & 1) != 0
            && ((v79 & 0x20) == 0 || (v79 & 0x42) == 0)
            && (MiFlags & 0x1800000) != 0 )
          {
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(Process + 352) != 1 )
            {
              if ( Process )
              {
                v72 = *(_QWORD *)(Process + 1288);
                if ( v72 )
                {
                  v83 = *(_QWORD *)(v72 + 8 * ((v78 >> 3) & 0x1FF));
                  if ( (v83 & 0x20) != 0 )
                    v79 |= 0x20uLL;
                  Process = v79;
                  v79 |= 0x42uLL;
                  if ( (v83 & 0x42) == 0 )
                    v79 = Process;
                }
              }
            }
          }
          if ( (v79 & 0x81) != 1 )
          {
LABEL_195:
            v5 = a1;
            if ( v68 != 0xFFFFF6FB7DBEDF68uLL )
            {
              if ( (*(_DWORD *)(v154 + 184) & 0xF) != 0
                || v68 < 0xFFFFF6FB7DBED000uLL
                || v68 > 0xFFFFF6FB7DBEDFFFuLL
                || (v130 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
              {
                if ( (*(_DWORD *)(v154 + 184) & 0xF) != 0
                  && v68 >= 0xFFFFF6FB7DBED000uLL
                  && v68 <= 0xFFFFF6FB7DBEDFFFuLL )
                {
                  _InterlockedAnd(
                    (volatile signed __int32 *)&MiState
                  + ((unsigned __int64)(2 * (unsigned int)((__int64)(v68 + 0x90482413000LL) >> 3)) >> 5)
                  + 1467,
                    ~(2 << ((2 * ((__int64)(v68 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                            * ((__int64)(v68 + 0x90482413000LL) >> 3)) & 0x1F)));
                  *(_DWORD *)(a1 + 4) &= ~2u;
                }
                else
                {
                  _InterlockedAnd64((volatile signed __int64 *)v68, 0xCFFFFFFFFFFFFFFFuLL);
                  *(_DWORD *)(a1 + 4) &= ~2u;
                }
              }
              else
              {
                ExReleaseSpinLockRegardlessFromDpcLevel(v130 + 4 * ((v68 >> 3) & 0x1FF));
                *(_DWORD *)(a1 + 4) &= ~2u;
              }
              return 0LL;
            }
            v20 = *(_DWORD *)(a1 + 4);
LABEL_25:
            *(_QWORD *)(v5 + 56) = 0xFFFFF6FB7DBEDF68uLL;
            *(_DWORD *)(v5 + 4) = v20 & 0xFFFFFFFE;
            *(_DWORD *)(v5 + 4) &= ~2u;
            return 0LL;
          }
          if ( (v79 & 0x20) == 0 )
            break;
LABEL_233:
          if ( v78 == v68 )
            goto LABEL_264;
          if ( v78 == 0xFFFFF6FB7DBEDF68uLL )
          {
            v97 = KeGetCurrentPrcb();
            v98 = *(_DWORD *)(v75 + 184) & 0xF;
            if ( v98 )
            {
              if ( v98 == 7 )
              {
                v99 = 1;
              }
              else
              {
                v99 = 3;
                if ( v98 == 5 )
                  v99 = 0;
              }
              v100 = (volatile __int64 *)(&MiState + 2 * v99 + 2278);
            }
            else
            {
              v99 = 2;
              v100 = (volatile __int64 *)(v75 + 176);
            }
            Process = (__int64)v97->SelfmapLockHandle + 16 * v99 + 8 * v99;
            *(_QWORD *)(Process + 8) = v100;
            *(_QWORD *)Process = 0LL;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
            {
              if ( _InterlockedExchange64(v100, Process) )
                KxWaitForLockOwnerShip(Process);
            }
            else
            {
              KiAcquireQueuedSpinLockInstrumented(Process, v100);
            }
          }
          else if ( (*(_DWORD *)(v75 + 184) & 0xF) != 0
                 || v78 < 0xFFFFF6FB7DBED000uLL
                 || v78 > 0xFFFFF6FB7DBEDFFFuLL
                 || (Process = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
          {
            if ( (*(_DWORD *)(v75 + 184) & 0xF) != 0 && v78 >= 0xFFFFF6FB7DBED000uLL && v78 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              LODWORD(v152) = 0;
              v101 = 2 * ((__int64)(v78 + 0x90482413000LL) >> 3);
              v102 = (unsigned __int64)v101 >> 5;
              v103 = v101 & 0x1F;
              LOBYTE(v101) = v101 & 0x1F;
              v104 = 1 << v101;
              v105 = 2 << v101;
              v150 = 2 << v101;
              v106 = (volatile signed __int32 *)(&MiState + v102 + 1467);
              v107 = ~(2 << v101);
              v108 = *v106;
              do
              {
                while ( ((v108 >> v103) & 1) != 0 )
                {
                  if ( ((v108 >> v103) & 2) != 0 )
                  {
                    do
                    {
                      KeYieldProcessorEx(&v152);
                      v108 = *v106;
                    }
                    while ( (((unsigned __int32)*v106 >> v103) & 1) != 0 );
                    v105 = v150;
                  }
                  else
                  {
                    v147 = v105 | v108;
                    v148 = _InterlockedCompareExchange(v106, v105 | v108, v108);
                    v109 = v108 == v148;
                    v108 = v148;
                    if ( v109 )
                      v108 = v147;
                  }
                }
                Process = v107 & (v104 | v108);
                v110 = _InterlockedCompareExchange(v106, Process, v108);
                v109 = v108 == v110;
                v108 = v110;
              }
              while ( !v109 );
            }
            else
            {
              v94 = *(_QWORD *)v78;
              v95 = 0;
              if ( v78 >= 0xFFFFF6FB7DBED000uLL
                && v78 <= 0xFFFFF6FB7DBED7F8uLL
                && (v94 & 1) != 0
                && ((v94 & 0x20) == 0 || (v94 & 0x42) == 0) )
              {
                HasShadow = MiPteHasShadow(Process, v94, 0xFFFFF6FB7DBED000uLL);
                if ( HasShadow )
                {
                  Process = *(_QWORD *)(HasShadow + 1288);
                  if ( Process )
                  {
                    v118 = *(_QWORD *)(Process + 8 * ((v78 >> 3) & 0x1FF));
                    if ( (v118 & 0x20) != 0 )
                      v94 |= 0x20uLL;
                    Process = v94;
                    v94 |= 0x42uLL;
                    if ( (v118 & 0x42) == 0 )
                      v94 = Process;
                  }
                }
              }
              while ( (v94 & 1) != 0 )
              {
                if ( (v94 & 0x1000000000000000LL) != 0 )
                {
                  if ( ((v94 >> 60) & 2) != 0 )
                  {
                    do
                    {
                      if ( (++v95 & HvlLongSpinCountMask) == 0
                        && (HvlEnlightenments & 0x40) != 0
                        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process, v94, v77) )
                      {
                        HvlNotifyLongSpinWait(v95);
                      }
                      else
                      {
                        _mm_pause();
                      }
                      v94 = *(_QWORD *)v78;
                    }
                    while ( (*(_QWORD *)v78 & 0x1000000000000000LL) != 0 );
                  }
                  else
                  {
                    Process = v94 | 0x2000000000000000LL;
                    if ( (MiFlags & 0x8000000) != 0 )
                      _mm_lfence();
                    v133 = _InterlockedCompareExchange64((volatile signed __int64 *)v78, Process, v94);
                    if ( v94 == v133 )
                      v94 |= 0x2000000000000000uLL;
                    else
                      v94 = v133;
                  }
                }
                else
                {
                  Process = v94 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
                  if ( (MiFlags & 0x8000000) != 0 )
                    _mm_lfence();
                  v96 = _InterlockedCompareExchange64((volatile signed __int64 *)v78, Process, v94);
                  if ( v94 == v96 )
                    break;
                  v94 = v96;
                }
              }
              v75 = v154;
            }
            v68 = v151;
          }
          else
          {
            ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(Process + 4 * ((v78 >> 3) & 0x1FF)));
          }
          if ( v68 == 0xFFFFF6FB7DBEDF68uLL )
          {
            v123 = KeGetCurrentPrcb();
            v124 = *(_DWORD *)(v75 + 184) & 0xF;
            if ( v124 )
            {
              if ( v124 == 7 )
              {
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v123->SelfmapLockHandle[1]);
                goto LABEL_263;
              }
              v125 = 3LL;
              if ( v124 == 5 )
                v125 = 0LL;
            }
            else
            {
              v125 = 2LL;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v123->SelfmapLockHandle[v125]);
          }
          else
          {
            if ( (*(_DWORD *)(v75 + 184) & 0xF) != 0 )
            {
              v72 = 0xFFFFF6FB7DBEDFFFuLL;
LABEL_259:
              if ( (*(_DWORD *)(v75 + 184) & 0xF) != 0 && v68 >= 0xFFFFF6FB7DBED000uLL && v68 <= 0xFFFFF6FB7DBEDFFFuLL )
              {
                v142 = 2 * ((__int64)(v68 + 0x90482413000LL) >> 3);
                Process = v142;
                v72 = (unsigned __int64)v142 >> 5;
                _InterlockedAnd((volatile signed __int32 *)&MiState + v72 + 1467, ~(3 << v142));
              }
              else
              {
                _InterlockedAnd64((volatile signed __int64 *)v68, 0xCFFFFFFFFFFFFFFFuLL);
              }
              goto LABEL_263;
            }
            v72 = 0xFFFFF6FB7DBEDFFFuLL;
            if ( v68 < 0xFFFFF6FB7DBED000uLL )
              goto LABEL_259;
            if ( v68 > 0xFFFFF6FB7DBEDFFFuLL )
              goto LABEL_259;
            Process = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
            if ( !Process )
              goto LABEL_259;
            ExReleaseSpinLockRegardlessFromDpcLevel(Process + 4 * ((v68 >> 3) & 0x1FF));
          }
LABEL_263:
          v68 = v78;
          v151 = v78;
LABEL_264:
          v77 = 0xFFFFF6FB7DBED000uLL;
          if ( !v153 )
            goto LABEL_195;
          v21 = v155;
          v76 = v153 - 1;
        }
        v80 = 0;
        v81 = (__int64)((v78 << 25) - v21) >> 16;
        if ( (*(_DWORD *)(v75 + 184) & 0xF) != 0 && v78 >= 0xFFFFF6FB7DBED000uLL && v78 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v80 = 1;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            v82 = 0;
            if ( _interlockedbittestandset(&dword_140E36200, 0x1Fu) )
              v82 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E36200, 0xFFu);
            for ( Process = (unsigned int)dword_140E36200;
                  (dword_140E36200 & 0xBFFFFFFF) != 0x80000000;
                  Process = (unsigned int)dword_140E36200 )
            {
              if ( (Process & 0x40000000) == 0 )
                _InterlockedOr(&dword_140E36200, 0x40000000u);
              if ( (++v82 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process, v72, v77) )
              {
                HvlNotifyLongSpinWait(v82);
              }
              else
              {
                _mm_pause();
              }
            }
            v68 = v151;
          }
          else
          {
            LOBYTE(v72) = -1;
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E36200, v72);
          }
        }
        if ( v81 >= 0xFFFFF68000000000uLL && v81 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          while ( 1 )
          {
            Process = v79 | 0x20;
            if ( (MiFlags & 0x8000000) != 0 )
              _mm_lfence();
            v144 = _InterlockedCompareExchange64((volatile signed __int64 *)v78, Process, v79);
            if ( v79 == v144 )
              break;
            v79 = v144;
          }
          goto LABEL_229;
        }
        v86 = *(_QWORD *)v78;
        v87 = v79 | 0x20;
        v88 = 0xFFFFF6FB7DBED000uLL;
        v89 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v78 >= 0xFFFFF6FB7DBED000uLL
          && v78 <= 0xFFFFF6FB7DBED7F8uLL
          && (v86 & 1) != 0
          && ((v86 & 0x20) == 0 || (v86 & 0x42) == 0) )
        {
          v111 = ((__int64 (*)(void))MiPteHasShadow)();
          if ( v111 )
          {
            Process = *(_QWORD *)(v111 + 1288);
            if ( Process )
            {
              v112 = *(_QWORD *)(Process + 8 * ((v78 >> 3) & 0x1FF));
              if ( (v112 & 0x20) != 0 )
                v86 |= 0x20uLL;
              Process = v86;
              v86 |= 0x42uLL;
              if ( (v112 & 0x42) == 0 )
                v86 = Process;
            }
          }
        }
        v72 = v86 ^ (v87 ^ v86) & 0x80FFFFFFFFFFFFFFuLL;
        v90 = 0LL;
        v152 = v72;
        if ( v78 >= v88 && v78 <= v89 )
        {
          if ( MiPteHasShadow(Process, v72, 0LL) )
          {
            v90 = 1LL;
            if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
            {
              v114 = v152;
              if ( (v152 & 1) != 0 )
                goto LABEL_403;
            }
          }
          else
          {
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
            {
              v114 = v152;
              if ( (v152 & 1) != 0 )
LABEL_403:
                v72 = v114 | 0x8000000000000000uLL;
            }
          }
        }
        *(_QWORD *)v78 = v72;
        if ( (_DWORD)v90 )
        {
          v91 = MiPteHasShadow(Process, v72, v90);
          if ( v91 )
          {
            Process = *(_QWORD *)(v91 + 1288);
            if ( Process )
            {
              v92 = (__int64 *)(Process + 8 * ((v78 >> 3) & 0x1FF));
              Process = v72 & 0x7FFFFFFFFFFFFFFFLL;
              v93 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
              if ( (v72 & 1) != 0 )
                v93 = v72 & 0x7FFFFFFFFFFFFFFFLL;
              *v92 = v93;
            }
          }
        }
LABEL_229:
        if ( v80 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            dword_140E36200 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36200, retaddr);
        }
        v77 = 0xFFFFF6FB7DBED000uLL;
        goto LABEL_233;
      }
      KxWaitForLockOwnerShip(Process);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(Process, v72);
    }
    v21 = v155;
    goto LABEL_165;
  }
  if ( a4 >= 4 )
    return 1LL;
  v7 = *(_QWORD *)(a1 + 32);
  if ( (v6 & 1) == 0 )
    return 0LL;
  if ( (_DWORD)a3 != 3 )
  {
LABEL_214:
    if ( (v6 & 0x1C) == 0 )
      MiMarkResumptionPoint(a1, a2, a3, (unsigned int)((_DWORD)a3 != 0) + 2);
    return 1LL;
  }
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    if ( (*(_DWORD *)(v7 + 184) & 0xF) == 1 )
      v22 = (int **)&qword_140E37980;
    else
      v22 = (int **)(v7 + 192);
    v23 = *v22;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v22) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v22);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v25 = 0;
      if ( _interlockedbittestandset(v23, 0x1Fu) )
        v25 = ExpWaitForSpinLockExclusiveAndAcquire(v23, CurrentIrql);
      v26 = (unsigned int)*v23;
      v27 = v26 & 0xFFFFFFFFBFFFFFFFuLL;
      if ( (v26 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v26 & 0x40000000) == 0 )
            _InterlockedOr(v23, 0x40000000u);
          if ( (++v25 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v27, v26, a3) )
          {
            HvlNotifyLongSpinWait(v25);
          }
          else
          {
            _mm_pause();
          }
          v26 = (unsigned int)*v23;
        }
        while ( (*v23 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v23, CurrentIrql);
    }
    v31 = v23 + 16;
    v32 = 3LL;
    do
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v33 = 0;
        if ( _interlockedbittestandset(v31, 0x1Fu) )
          v33 = ExpWaitForSpinLockExclusiveAndAcquire(v31, 0xFFu);
        v26 = (unsigned int)*v31;
        v34 = v26 & 0xFFFFFFFFBFFFFFFFuLL;
        if ( (v26 & 0xBFFFFFFF) != 0x80000000 )
        {
          do
          {
            if ( (v26 & 0x40000000) == 0 )
              _InterlockedOr(v31, 0x40000000u);
            if ( (++v33 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v34, v26, a3) )
            {
              HvlNotifyLongSpinWait(v33);
            }
            else
            {
              _mm_pause();
            }
            v26 = (unsigned int)*v31;
          }
          while ( (*v31 & 0xBFFFFFFF) != 0x80000000 );
        }
      }
      else
      {
        LOBYTE(v26) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v31, v26);
      }
      v31 += 16;
      --v32;
    }
    while ( v32 );
    goto LABEL_21;
  }
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = *(_DWORD *)(v7 + 184);
  if ( *(_BYTE *)(a1 + 9) == 17 )
  {
    if ( (v9 & 0xFu) <= 5 )
    {
      v28 = (*(_DWORD *)(v7 + 184) & 0xF) == 1 ? &qword_140E37980 : (__int64 *)(v7 + 192);
      v29 = (KeGetPcr()->Prcb.Number >> 1) & 3;
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*v28 + (v29 << 6)));
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        MmInternal[81] = v29;
    }
  }
  else if ( (v9 & 0xFu) > 5 )
  {
    v131 = KeGetCurrentIrql();
    if ( (_BYTE)v131 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v131, 2LL);
  }
  else
  {
    if ( (*(_DWORD *)(v7 + 184) & 0xF) == 1 )
      v10 = &qword_140E37980;
    else
      v10 = (__int64 *)(v7 + 192);
    v11 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v12 = (_DWORD *)(*v10 + ((unsigned __int64)v11 << 6));
    v13 = v11;
    v14 = KeGetCurrentIrql();
    if ( v14 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v14, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v12);
      v15 = *v12 & 0x7FFFFFFF;
      while ( 1 )
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange(v12, v15 + 1, v15);
        if ( v16 == v15 )
          break;
        if ( v15 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v12, v14);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v12, v14);
    }
    v17 = KeGetCurrentPrcb()->MmInternal;
    if ( v17 )
      v17[81] = v13;
  }
  if ( (*(_DWORD *)v5 & 0x800) != 0 )
  {
LABEL_20:
    *(_QWORD *)(v5 + 56) = v8;
LABEL_21:
    *(_DWORD *)(v5 + 4) &= ~1u;
    return 0LL;
  }
  v156 = (((unsigned __int64)(v8 << 25 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v157 = ((v156 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v158 = ((v157 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v159 = ((v158 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v35 = 0xFFFFF6FB7DBEDF68uLL;
  v36 = KeGetCurrentPrcb();
  v37 = *(_DWORD *)(v7 + 184);
  v151 = 0xFFFFF6FB7DBEDF68uLL;
  v38 = v37 & 0xF;
  if ( v38 )
  {
    if ( v38 == 7 )
    {
      v39 = 1;
    }
    else if ( v38 == 5 )
    {
      v39 = 0;
    }
    else
    {
      v39 = 3;
    }
    KernelWaitTime = (unsigned __int64)(&MiState + 2 * v39 + 2278);
  }
  else
  {
    v39 = 2;
    KernelWaitTime = v7 + 176;
  }
  v41 = &v36->SelfmapLockHandle[0].LockQueue.Next + 2 * v39 + v39;
  *((_QWORD *)v41 + 1) = KernelWaitTime;
  *v41 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64((volatile __int64 *)KernelWaitTime, (__int64)v41) )
      KxWaitForLockOwnerShip(v41);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v41, KernelWaitTime);
  }
  v42 = 2LL;
  v43 = 0LL;
  v154 = 0LL;
  v44 = 0xFFFFF6FB7DBEDFFFuLL;
  while ( 1 )
  {
    v45 = *(&v156 + v42);
    v46 = 0xDFFFFFFFFFFFFFFFuLL;
    v47 = *(_QWORD *)v45;
    if ( v45 >= 0xFFFFF6FB7DBED000uLL
      && v45 <= 0xFFFFF6FB7DBED7F8uLL
      && (v47 & 1) != 0
      && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
    {
      if ( (MiFlags & 0x1800000) != 0 )
      {
        v52 = KeGetCurrentThread()->ApcState.Process;
        if ( v52->AddressPolicy != 1 )
        {
          if ( v52 )
          {
            KernelWaitTime = v52[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v53 = *(_QWORD *)(KernelWaitTime + 8 * ((v45 >> 3) & 0x1FF));
              if ( (v53 & 0x20) != 0 )
                v47 |= 0x20uLL;
              v54 = v47;
              v47 |= 0x42uLL;
              if ( (v53 & 0x42) == 0 )
                v47 = v54;
            }
          }
        }
      }
      v43 = v154;
    }
    if ( (v47 & 0x81) != 1 )
      break;
    if ( (v47 & 0x20) != 0 )
      goto LABEL_131;
    v48 = 0;
    v49 = (__int64)((v45 << 25) - v43) >> 16;
    if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0 && v45 >= 0xFFFFF6FB7DBED000uLL && v45 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v48 = 1;
      v150 = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
      {
        LOBYTE(KernelWaitTime) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E36200, KernelWaitTime);
LABEL_116:
        v48 = v150;
        goto LABEL_117;
      }
      LODWORD(v152) = 0;
      if ( _interlockedbittestandset(&dword_140E36200, 0x1Fu) )
      {
        v50 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E36200, 0xFFu);
        v48 = v150;
        LODWORD(v152) = v50;
      }
      KernelWaitTime = (unsigned int)dword_140E36200;
      v43 = (unsigned int)dword_140E36200;
      LODWORD(v43) = dword_140E36200 & 0xBFFFFFFF;
      if ( (dword_140E36200 & 0xBFFFFFFF) != 0x80000000 )
      {
        v51 = v152;
        do
        {
          if ( (KernelWaitTime & 0x40000000) == 0 )
            _InterlockedOr(&dword_140E36200, 0x40000000u);
          if ( (++v51 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v43, KernelWaitTime, v44) )
          {
            HvlNotifyLongSpinWait(v51);
          }
          else
          {
            _mm_pause();
          }
          KernelWaitTime = (unsigned int)dword_140E36200;
        }
        while ( (dword_140E36200 & 0xBFFFFFFF) != 0x80000000 );
        goto LABEL_116;
      }
    }
LABEL_117:
    if ( v49 >= 0xFFFFF68000000000uLL && v49 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      while ( 1 )
      {
        v43 = v47 | 0x20;
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
        v143 = _InterlockedCompareExchange64((volatile signed __int64 *)v45, v43, v47);
        if ( v47 == v143 )
          break;
        v47 = v143;
      }
      goto LABEL_127;
    }
    v55 = *(_QWORD *)v45;
    v56 = v47 | 0x20;
    v57 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v45 >= 0xFFFFF6FB7DBED000uLL
      && v45 <= 0xFFFFF6FB7DBED7F8uLL
      && (v55 & 1) != 0
      && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
    {
      v84 = MiPteHasShadow(v43, KernelWaitTime, v55);
      if ( v84 )
      {
        v43 = *(_QWORD *)(v84 + 1288);
        if ( v43 )
        {
          v85 = *(_QWORD *)(v43 + 8 * ((v45 >> 3) & 0x1FF));
          if ( (v85 & 0x20) != 0 )
            v55 |= 0x20uLL;
          v43 = v55;
          v55 |= 0x42uLL;
          if ( (v85 & 0x42) == 0 )
            v55 = v43;
        }
      }
    }
    KernelWaitTime = v55 ^ (v56 ^ v55) & 0x80FFFFFFFFFFFFFFuLL;
    v58 = 0LL;
    v153 = KernelWaitTime;
    if ( v45 >= 0xFFFFF6FB7DBED000uLL && v45 <= v57 )
    {
      if ( MiPteHasShadow(v43, KernelWaitTime, 0LL) )
      {
        v58 = 1LL;
        if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
        {
          v113 = v153;
          if ( (v153 & 1) != 0 )
LABEL_400:
            KernelWaitTime = v113 | 0x8000000000000000uLL;
        }
      }
      else
      {
        v43 = (signed __int64)KeGetCurrentThread()->ApcState.Process;
        if ( (*(_DWORD *)(v43 + 1532) & 0x1000) != 0 )
        {
          v113 = v153;
          if ( (v153 & 1) != 0 )
            goto LABEL_400;
        }
      }
    }
    *(_QWORD *)v45 = KernelWaitTime;
    if ( (_DWORD)v58 )
    {
      v59 = MiPteHasShadow(v43, KernelWaitTime, v58);
      if ( v59 )
      {
        v43 = *(_QWORD *)(v59 + 1288);
        if ( v43 )
        {
          if ( (KernelWaitTime & 1) != 0 )
            KernelWaitTime &= ~0x8000000000000000uLL;
          else
            KernelWaitTime = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          *(_QWORD *)(v43 + 8 * ((v45 >> 3) & 0x1FF)) = KernelWaitTime;
        }
      }
    }
LABEL_127:
    if ( v48 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E36200 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36200, retaddr);
    }
    v35 = v151;
    v44 = 0xFFFFF6FB7DBEDFFFuLL;
    v46 = 0xDFFFFFFFFFFFFFFFuLL;
LABEL_131:
    if ( v45 == v35 )
      goto LABEL_158;
    if ( v45 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v63 = KeGetCurrentPrcb();
      v64 = *(_DWORD *)(v7 + 184) & 0xF;
      if ( v64 )
      {
        if ( v64 == 7 )
        {
          v65 = 1;
        }
        else if ( v64 == 5 )
        {
          v65 = 0;
        }
        else
        {
          v65 = 3;
        }
        v66 = (volatile __int64 *)(&MiState + 2 * v65 + 2278);
      }
      else
      {
        v65 = 2;
        v66 = (volatile __int64 *)(v7 + 176);
      }
      v67 = &v63->SelfmapLockHandle[0].LockQueue.Next + 2 * v65 + v65;
      *((_QWORD *)v67 + 1) = v66;
      *v67 = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _InterlockedExchange64(v66, (__int64)v67) )
          KxWaitForLockOwnerShip(v67);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(v67, v66);
      }
    }
    else if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0
           || v45 < 0xFFFFF6FB7DBED000uLL
           || v45 > 0xFFFFF6FB7DBEDFFFuLL
           || (v43 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0 && v45 >= 0xFFFFF6FB7DBED000uLL && v45 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v150 = 0;
        v135 = (unsigned __int64)(2 * (unsigned int)((__int64)(v45 + 0x90482413000LL) >> 3)) >> 5;
        v136 = (2 * ((__int64)(v45 + 0x90482413000LL) >> 3)) & 0x1F;
        v137 = *(&MiState + v135 + 1467);
        v138 = (volatile signed __int32 *)(&MiState + v135 + 1467);
        v153 = (unsigned __int64)v138;
        v139 = 1 << v136;
        v140 = ~(2 << v136);
        LODWORD(v155) = 1 << v136;
        LODWORD(v152) = v140;
        do
        {
          while ( ((v137 >> v136) & 1) != 0 )
          {
            if ( ((v137 >> v136) & 2) != 0 )
            {
              v149 = (unsigned __int32 *)v153;
              do
              {
                KeYieldProcessorEx(&v150);
                v137 = *v149;
              }
              while ( ((*v149 >> v136) & 1) != 0 );
              v35 = v151;
              v138 = (volatile signed __int32 *)v153;
              v140 = v152;
              v139 = v155;
            }
            else
            {
              v145 = v137 | (2 << v136);
              v146 = _InterlockedCompareExchange(v138, v145, v137);
              v109 = v137 == v146;
              v137 = v146;
              if ( v109 )
                v137 = v145;
              v140 = v152;
            }
          }
          v141 = _InterlockedCompareExchange(v138, v140 & (v139 | v137), v137);
          v109 = v137 == v141;
          v137 = v141;
        }
        while ( !v109 );
      }
      else
      {
        v60 = *(_QWORD *)v45;
        v61 = 0;
        if ( v45 >= 0xFFFFF6FB7DBED000uLL
          && v45 <= 0xFFFFF6FB7DBED7F8uLL
          && (v60 & 1) != 0
          && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
        {
          v115 = MiPteHasShadow(v43, v60, 0xFFFFF6FB7DBEDFFFuLL);
          if ( v115 )
          {
            v43 = *(_QWORD *)(v115 + 1288);
            if ( v43 )
            {
              v116 = *(_QWORD *)(v43 + 8 * ((v45 >> 3) & 0x1FF));
              if ( (v116 & 0x20) != 0 )
                v60 |= 0x20uLL;
              v43 = v60;
              v60 |= 0x42uLL;
              if ( (v116 & 0x42) == 0 )
                v60 = v43;
            }
          }
        }
        while ( (v60 & 1) != 0 )
        {
          if ( (v60 & 0x1000000000000000LL) != 0 )
          {
            if ( ((v60 >> 60) & 2) != 0 )
            {
              do
              {
                if ( (++v61 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v43, v60, v44) )
                {
                  HvlNotifyLongSpinWait(v61);
                }
                else
                {
                  _mm_pause();
                }
                v60 = *(_QWORD *)v45;
              }
              while ( (*(_QWORD *)v45 & 0x1000000000000000LL) != 0 );
              v46 = 0xDFFFFFFFFFFFFFFFuLL;
            }
            else
            {
              v43 = v60 | 0x2000000000000000LL;
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v132 = _InterlockedCompareExchange64((volatile signed __int64 *)v45, v43, v60);
              if ( v60 == v132 )
                v60 |= 0x2000000000000000uLL;
              else
                v60 = v132;
            }
          }
          else
          {
            v43 = v46 & v60 | 0x1000000000000020LL;
            if ( (MiFlags & 0x8000000) != 0 )
              _mm_lfence();
            v62 = _InterlockedCompareExchange64((volatile signed __int64 *)v45, v43, v60);
            if ( v60 == v62 )
              break;
            v60 = v62;
          }
        }
        v35 = v151;
      }
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v43 + 4 * ((v45 >> 3) & 0x1FF)));
    }
    if ( v35 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v119 = KeGetCurrentPrcb();
      v120 = *(_DWORD *)(v7 + 184) & 0xF;
      if ( v120 )
      {
        if ( v120 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v119->SelfmapLockHandle[1]);
          goto LABEL_157;
        }
        v121 = 3LL;
        if ( v120 == 5 )
          v121 = 0LL;
      }
      else
      {
        v121 = 2LL;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v119->SelfmapLockHandle[v121]);
    }
    else
    {
      if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0 )
      {
        KernelWaitTime = 0xFFFFF6FB7DBEDFFFuLL;
LABEL_153:
        if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0 && v35 >= 0xFFFFF6FB7DBED000uLL && v35 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v134 = 2 * ((__int64)(v35 + 0x90482413000LL) >> 3);
          KernelWaitTime = (unsigned __int64)v134 >> 5;
          _InterlockedAnd((volatile signed __int32 *)&MiState + KernelWaitTime + 1467, ~(3 << v134));
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v35, 0xCFFFFFFFFFFFFFFFuLL);
        }
        goto LABEL_157;
      }
      KernelWaitTime = 0xFFFFF6FB7DBEDFFFuLL;
      if ( v35 < 0xFFFFF6FB7DBED000uLL )
        goto LABEL_153;
      if ( v35 > 0xFFFFF6FB7DBEDFFFuLL )
        goto LABEL_153;
      v122 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
      if ( !v122 )
        goto LABEL_153;
      ExReleaseSpinLockRegardlessFromDpcLevel(v122 + 4 * ((v35 >> 3) & 0x1FF));
    }
LABEL_157:
    v35 = v45;
    v151 = v45;
LABEL_158:
    v44 = 0xFFFFF6FB7DBEDFFFuLL;
    if ( !v42 )
      break;
    v43 = v154;
    --v42;
  }
  v5 = a1;
  if ( v35 == v8 )
    goto LABEL_20;
  if ( (*(_DWORD *)a1 & 0x800) != 0 && v35 == 0xFFFFF6FB7DBEDF68uLL )
    goto LABEL_113;
  if ( v35 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v126 = KeGetCurrentPrcb();
    v127 = *(_DWORD *)(v7 + 184) & 0xF;
    if ( v127 )
    {
      if ( v127 == 7 )
      {
        v128 = 1LL;
      }
      else
      {
        v128 = 3LL;
        if ( v127 == 5 )
          v128 = 0LL;
      }
    }
    else
    {
      v128 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v126->SelfmapLockHandle[v128]);
    MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 9));
  }
  else
  {
    if ( (*(_DWORD *)(v7 + 184) & 0xF) == 0 && v35 >= 0xFFFFF6FB7DBED000uLL && v35 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v129 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
      if ( v129 )
      {
        ExReleaseSpinLockRegardlessFromDpcLevel(v129 + 4 * ((v35 >> 3) & 0x1FF));
        MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 9));
        return 0LL;
      }
    }
    if ( (*(_DWORD *)(v7 + 184) & 0xF) == 0 || v35 < 0xFFFFF6FB7DBED000uLL || v35 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      _InterlockedAnd64((volatile signed __int64 *)v35, 0xCFFFFFFFFFFFFFFFuLL);
LABEL_113:
      MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 9));
      return 0LL;
    }
    _InterlockedAnd(
      (volatile signed __int32 *)&MiState
    + ((unsigned __int64)(2 * (unsigned int)((__int64)(v35 + 0x90482413000LL) >> 3)) >> 5)
    + 1467,
      ~(2 << ((2 * ((__int64)(v35 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                              * ((__int64)(v35 + 0x90482413000LL) >> 3)) & 0x1F)));
    MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 9));
  }
  return 0LL;
}
