/*
 * XREFs of MiActOnValidPte @ 0x140296698
 * Callers:
 *     MiActOnPte @ 0x1402B61E0 (MiActOnPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUpdatePfnPriority @ 0x140298800 (MiUpdatePfnPriority.c)
 *     MiUpdateWsleAge @ 0x14029B680 (MiUpdateWsleAge.c)
 *     MiGetVaAge @ 0x14029BC40 (MiGetVaAge.c)
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiRotatedToFrameBuffer @ 0x1403145E4 (MiRotatedToFrameBuffer.c)
 *     MI_IS_RESET_PTE @ 0x140369B90 (MI_IS_RESET_PTE.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiActOnValidPte(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r12
  unsigned __int64 v5; // r9
  int v6; // r14d
  unsigned __int64 v7; // rbx
  __int64 v8; // r15
  _KPROCESS *Process; // r13
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // r12
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // r14
  char v16; // al
  char v17; // al
  int v18; // r10d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rcx
  unsigned __int8 VaAge; // al
  int v27; // r9d
  char updated; // r8
  struct _LIST_ENTRY **v29; // rbx
  __int64 v30; // r8
  _KPROCESS *v31; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v33; // rdx
  int v34; // r14d
  int v35; // ebx
  int v36; // r8d
  unsigned int v37; // esi
  _DWORD *v38; // rax
  _DWORD *SubsectionFromPte; // rax
  unsigned __int64 v40; // [rsp+30h] [rbp-48h] BYREF
  __int64 v41; // [rsp+38h] [rbp-40h]
  int v42; // [rsp+80h] [rbp+8h] BYREF
  struct _LIST_ENTRY **p_Blink; // [rsp+88h] [rbp+10h]
  _QWORD *v44; // [rsp+90h] [rbp+18h]
  __int64 v45; // [rsp+98h] [rbp+20h]

  v4 = *(_QWORD **)(a1 + 32);
  v5 = 0x8000000000000000uLL;
  v6 = *(_DWORD *)(a1 + 56);
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_QWORD *)(a1 + 24);
  v41 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)a1 = 0;
  v42 = v6;
  v44 = v4;
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = &Process[2].ReadyListHead.Blink;
  if ( v4 )
  {
    v12 = MiLockLeafPage(v4, 0LL, a3, 0x8000000000000000uLL);
    if ( v12 )
    {
      v7 = *v4;
      if ( (*v4 & 1) != 0 )
        goto LABEL_18;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    *(_DWORD *)a1 = 2;
    return 3221226029LL;
  }
  v10 = *(_QWORD *)(a1 + 48);
  v11 = (v7 >> 12) & 0xFFFFFFFFFFLL;
  v45 = v10;
  if ( v11 > qword_140E2D920 || ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    return 3221226548LL;
  v12 = 48 * v11 - 0x220000000000LL;
  if ( *(__int64 *)(v12 + 8) <= 0 || (*(_QWORD *)(v12 + 40) & 0x10000000000LL) != 0 )
  {
    v13 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
    if ( Process[1].IdealProcessorAssignmentBlock )
    {
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)&Process[2].ActiveProcessors[4].StaticBitmap[27]);
      IdealProcessorAssignmentBlock = Process[1].IdealProcessorAssignmentBlock;
      while ( IdealProcessorAssignmentBlock )
      {
        if ( v13 > *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[8] )
        {
          IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->Breakpoints.High.0;
        }
        else
        {
          if ( v13 >= *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[4] )
            break;
          IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->ExpectedConcurrencyCount.0;
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&Process[2].ActiveProcessors[4].StaticBitmap[27]);
      if ( IdealProcessorAssignmentBlock )
        return 3221226548LL;
      v6 = v42;
    }
    v4 = v44;
  }
  else
  {
    if ( v6 == 1 )
      return 3221226548LL;
    if ( !v6 )
      return 274LL;
  }
  v42 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v42);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  if ( (*(_DWORD *)(v45 + 48) & 0x1C) == 0x10 && (unsigned int)MiRotatedToFrameBuffer(v8, v10, a3, v5) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221226548LL;
  }
LABEL_18:
  if ( v6 == 2 )
  {
    updated = MiUpdatePfnPriority(v12, (unsigned int)v41, v4 == 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v4 )
    {
      v29 = p_Blink;
      if ( updated != -1 )
        MiUpdateWsleAge(p_Blink, v8);
      v30 = *(_QWORD *)(v12 + 8);
      if ( v30 > 0 && (*(_QWORD *)(v12 + 40) & 0x10000000000LL) == 0 )
        MiDemoteCombinedPte(v29, v8, v30 | 0x8000000000000000uLL);
    }
    return 0LL;
  }
  v16 = *(_BYTE *)(v12 + 34);
  if ( (v16 & 8) != 0 )
  {
    v37 = -1073740748;
LABEL_91:
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v37;
  }
  v17 = v16 & 0x10;
  if ( v6 == 1 )
  {
    v34 = 0;
    if ( !v17 && (v4 || (v7 & 0x42) == 0) || (v34 = -1073740748, !v17) )
    {
      if ( (*(_DWORD *)(v12 + 16) & 8) == 0 )
      {
        v35 = *(_DWORD *)(v12 + 32);
        v36 = 1024;
        if ( *(__int64 *)(v12 + 40) < 0 && (*(_QWORD *)(v12 + 16) & 0x400000000000400LL) == 0x400 )
        {
          SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v12 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20
            && (SubsectionFromPte[8] & 0x20000) == 0 )
          {
            KeBugCheckEx(0x1Au, 0x8840uLL, v12, 0LL, 1uLL);
          }
        }
        if ( *(__int64 *)(v12 + 40) < 0
          && (*(_DWORD *)(v12 + 16) & v36) != 0
          && (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) == 0 )
        {
          v38 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v12 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)v38 + 56LL) & 0x20) == 0 && (v38[38] & 1) == 0 )
            MiSetSubsectionModified(v38, 0LL);
        }
        if ( (v35 & 0x80000) != 0
          && (unsigned int)MiCanPfnOriginalPteBeLost(v12)
          && (*(_QWORD *)(v12 + 16) & 8LL) != 0
          && (v35 & 0x100000) == 0 )
        {
          *(_QWORD *)(v12 + 16) &= ~8uLL;
        }
        *(_DWORD *)(v12 + 32) = v35 | 0x100000;
      }
    }
    if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v12 + 16)) )
      *(_QWORD *)(v12 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v12 + 16), 0);
    else
      v34 = -1073740748;
    v37 = v34;
    goto LABEL_91;
  }
  if ( v17 )
  {
    v18 = *(_DWORD *)(v12 + 32);
    if ( (v18 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(v12)
      && (*(_QWORD *)(v12 + 16) & 8LL) != 0
      && (v18 & 0x100000) == 0 )
    {
      *(_QWORD *)(v12 + 16) &= ~8uLL;
    }
    *(_DWORD *)(v12 + 32) = v18 & 0xFFEFFFFF;
  }
  v19 = *(_QWORD *)(v12 + 16);
  if ( (v19 & 8) != 0 )
  {
    *(_QWORD *)(v12 + 16) &= ~8uLL;
  }
  else
  {
    v20 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    if ( (v19 & 4) != 0 )
      v20 = *(_QWORD *)(v12 + 16);
    v19 = v20;
  }
  *(_QWORD *)(a1 + 16) = v19;
  if ( v19 )
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
  v21 = *(_QWORD *)(v12 + 16);
  if ( v21 && qword_140E2D8C0 )
  {
    if ( (v21 & 0x10) != 0 )
      LODWORD(v21) = v21 & 0xFFFFFFEF;
    else
      LODWORD(v21) = qword_140E2D8C8 & v21;
  }
  v22 = (unsigned int)v21 | 0x100000000LL;
  if ( qword_140E2D8C0 )
  {
    if ( (qword_140E2D8C0 & v22) != 0 )
      v22 = (unsigned int)v21 | 0x100000010LL;
    else
      v22 |= qword_140E2D8C0;
  }
  v40 = v22;
  v23 = v22;
  if ( (unsigned __int64)&v40 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v40 <= 0xFFFFF6FB7DBED7F8uLL
    && (v22 & 1) != 0
    && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0)
    && (MiFlags & 0x1800000) != 0 )
  {
    v31 = KeGetCurrentThread()->ApcState.Process;
    if ( v31->AddressPolicy != 1 )
    {
      KernelWaitTime = v31[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v33 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v40 >> 3) & 0x1FF));
        if ( (v33 & 0x20) != 0 )
          v22 |= 0x20uLL;
        v23 = v22 | 0x42;
        if ( (v33 & 0x42) == 0 )
          v23 = v22;
      }
    }
  }
  v40 = v23 & 0xFFFFFFFFFFFFFFFBuLL;
  *(_QWORD *)(v12 + 16) = v23 & 0xFFFFFFFFFFFFFFFBuLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v4 || (v7 & 0x42) == 0 )
    return 0LL;
  MiWriteValidPteNewProtection(v8, v7 & 0xFFFFFFFFFFFFFF9DuLL);
  v24 = v8 << 25 >> 16;
  VaAge = MiGetVaAge(v25, v24);
  if ( VaAge < 7u && VaAge != 1 )
  {
    LOBYTE(v27) = 1;
    MiSetVaAgeListEx((_DWORD)p_Blink, v24, 1, v27, 0);
  }
  return 3221225505LL;
}
