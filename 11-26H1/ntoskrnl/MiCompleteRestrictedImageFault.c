/*
 * XREFs of MiCompleteRestrictedImageFault @ 0x140376250
 * Callers:
 *     MiSoftFaultMappedView @ 0x1403C5480 (MiSoftFaultMappedView.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     PfSnLogPageFaultCommon @ 0x1402650C0 (PfSnLogPageFaultCommon.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402C7EE0 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiGetSharedProtos @ 0x140374988 (MiGetSharedProtos.c)
 *     PfSnReferenceProcessTrace @ 0x1403769CC (PfSnReferenceProcessTrace.c)
 *     MiIsAddressGlobal @ 0x140376AA0 (MiIsAddressGlobal.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140390AC0 (MiReferenceControlAreaFileWithTag.c)
 */

__int64 __fastcall MiCompleteRestrictedImageFault(__int64 *a1, ULONG_PTR a2, _QWORD *a3, unsigned int a4)
{
  __int64 *v4; // rbp
  unsigned int v5; // edi
  _QWORD *v6; // r15
  ULONG_PTR v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r12d
  unsigned __int64 v16; // r9
  __int64 v17; // r15
  _QWORD *v18; // r13
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  _KPROCESS *Process; // rax
  unsigned __int64 CycleTime; // rcx
  unsigned int v26; // r10d
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v31; // rdx
  __int64 v32; // rbp
  __int64 v33; // r8
  __int64 v34; // r9
  ULONG_PTR v35; // r14
  signed __int64 v36; // rax
  unsigned __int64 v37; // rbx
  __int64 v38; // rbx
  char v39; // cl
  unsigned __int64 v40; // rbx
  int v41; // eax
  __int16 v42; // ax
  int Wsle; // eax
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  int IsAddressGlobal; // eax
  __int64 v47; // rdx
  unsigned __int64 v48; // rdi
  unsigned int v49; // r13d
  unsigned __int64 v50; // rbx
  int v52; // eax
  char v53; // al
  char v54; // al
  struct _KTHREAD *v55; // rax
  __int64 v56; // [rsp+40h] [rbp-68h]
  unsigned __int64 v57; // [rsp+48h] [rbp-60h]
  __int64 v58; // [rsp+50h] [rbp-58h]
  __int64 v59; // [rsp+58h] [rbp-50h]
  unsigned int v63; // [rsp+C8h] [rbp+20h] BYREF

  v63 = a4;
  v4 = a1;
  v58 = *a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = 48LL * *a3 - 0x220000000000LL;
  v57 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
  v9 = 0LL;
  v10 = *(_QWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v8 + 16));
  v59 = v10;
  if ( LODWORD(stru_140E67200.ThreadLock) )
  {
    v13 = MiReferenceControlAreaFileWithTag(v10, 1666411853LL, 1LL);
    v11 = v57;
    v14 = v13;
    v12 = 0x8000000000000000uLL;
  }
  else
  {
    v14 = 0LL;
  }
  v56 = v14;
  v15 = 0;
  while ( 1 )
  {
    v16 = 0xFFFFF68000000000uLL;
    if ( v15 >= v5 )
      break;
    v17 = v6[v15];
    v18 = (_QWORD *)(48 * v17 - 0x220000000000LL);
    v19 = v18[2];
    v20 = v19;
    if ( qword_140E2D8C0 && (v19 & 0x10) == 0 )
      v20 = v19 & qword_140E2D8C8;
    v21 = (v20 >> 12) & 0x3FFFFFFFFFFLL;
    if ( v21 )
      v9 = qword_140E37D10 - 8 + 8 * v21;
    v22 = v12 | v18[1];
    v23 = v7 + 8 * ((__int64)(v22 - v11) >> 3);
    if ( v14 )
    {
      if ( (unsigned __int64)((__int64)(v23 << 25) >> 16) >= 0xFFFF800000000000uLL
        || (Process = KeGetCurrentThread()->ApcState.Process, (CycleTime = Process[1].CycleTime) == 0)
        || (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
      {
        v26 = -1;
      }
      else
      {
        v26 = *(_DWORD *)(CycleTime + 8);
      }
      v27 = *(_QWORD *)(v9 + 8);
      if ( (*(_DWORD *)(*(_QWORD *)v9 + 56LL) & 0x20) != 0 )
      {
        if ( v22 < v27 || v22 >= v27 + 8LL * *(unsigned int *)(v9 + 44) )
          v48 = (v22 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v9, v26, v9) + 72) << 9);
        else
          v48 = (v22 << 9) - (v27 << 9);
        v29 = ((unsigned __int64)*(unsigned int *)(v9 + 36) << 9) + (v48 & 0xFFFFFFFFFFFFF000uLL);
      }
      else
      {
        if ( v27 )
          v28 = (__int64)(v22 - v27) >> 3 << 12;
        else
          v28 = 0LL;
        v29 = v28 + ((*(unsigned int *)(v9 + 36) | ((unsigned __int64)(*(_DWORD *)(v9 + 32) & 0xFFC0) << 26)) << 12);
      }
      CurrentThread = KeGetCurrentThread();
      v32 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
      if ( v32 )
      {
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x2000000) != 0 )
          goto LABEL_90;
        if ( (int)PsGetIoPriorityThread(CurrentThread, v31, v33, v34) >= 2 )
        {
          v55 = *(struct _KTHREAD **)(v32 + 432);
          if ( !v55 || v55 == CurrentThread && *(_QWORD *)(v32 + 440) == *(_QWORD *)&CurrentThread[1].CurrentRunTime )
          {
            v35 = v56;
            PfSnLogPageFaultCommon(v32, v56, *(_QWORD *)(v56 + 24), v29, 1);
          }
          else
          {
LABEL_90:
            v35 = v56;
          }
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v32 + 360));
          v4 = a1;
          v12 = 0x8000000000000000uLL;
          v16 = 0xFFFFF68000000000uLL;
          goto LABEL_21;
        }
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 336));
        goto LABEL_90;
      }
      v4 = a1;
      v12 = 0x8000000000000000uLL;
      v16 = 0xFFFFF68000000000uLL;
    }
    v35 = v56;
LABEL_21:
    v36 = *(_QWORD *)v23;
    if ( v23 >= 0xFFFFF6FB7DBED000uLL
      && v23 <= 0xFFFFF6FB7DBED7F8uLL
      && (v36 & 1) != 0
      && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
    {
      MiPteHasShadow();
    }
    v37 = ((v17 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[(v19 >> 5) & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
    if ( v23 < v16 || v23 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v38 = v37 | 0x100;
    }
    else
    {
      if ( v23 >= 0xFFFFF6FB40000000uLL && v23 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( v23 == 0xFFFFF6FB7DBEDF68uLL )
          v37 |= v12;
        else
          v37 &= ~0x8000000000000000uLL;
        v52 = MiUserPdeOrAbove(v23);
        v16 = 0xFFFFF68000000000uLL;
        if ( v52 )
          v37 |= 4uLL;
      }
      v44 = v37 | 4;
      v45 = (__int64)((v23 << 25) - (v16 << 25)) >> 16;
      if ( v45 >= 0x7FFFFFFF0000LL )
        v44 = v37;
      IsAddressGlobal = MiIsAddressGlobal(v45, v44);
      v38 = v47 | 0x100;
      if ( !IsAddressGlobal )
        v38 = v47;
    }
    v39 = *((_BYTE *)v4 + 13);
    v40 = v38 & 0xF0FFFFFFFFFFFFDFuLL | 0xA00000000000000LL;
    if ( (v39 & 9) == 8 && (v39 & 4) == 0 )
    {
      v41 = *((unsigned __int16 *)v4 + 5);
      if ( (_WORD)v41 )
      {
        if ( v41 + *((unsigned __int16 *)v4 + 4) != (((unsigned int)v23 >> 3) & 0x1FF) )
          goto LABEL_30;
        if ( (__int64)v18[5] < 0 )
        {
          if ( (*((_BYTE *)v4 + 13) & 2) != 0 )
LABEL_30:
            MiEmptyDeferredWorkingSetEntries(v4);
        }
        else if ( (*((_BYTE *)v4 + 13) & 2) == 0 )
        {
          goto LABEL_30;
        }
      }
      v42 = *((_WORD *)v4 + 5);
      if ( v42 )
      {
        v39 = *((_BYTE *)v4 + 13);
        *((_WORD *)v4 + 5) = v42 + 1;
      }
      else
      {
        *((_WORD *)v4 + 5) = 1;
        *((_WORD *)v4 + 4) = ((unsigned int)v23 >> 3) & 0x1FF;
        v53 = *((_BYTE *)v4 + 13);
        v39 = v53 & 0xFD;
        v54 = v53 | 2;
        if ( (__int64)v18[5] >= 0 )
          v39 = v54;
        *((_BYTE *)v4 + 13) = v39;
      }
    }
    Wsle = MiAllocateWsle(v58, (signed __int64 *)v23, v18, 0, v40, 16 * (v39 & 1u) + 12, 0LL);
    v7 = a2;
    v6 = a3;
    if ( !Wsle )
    {
      v49 = 0;
      --*((_WORD *)v4 + 5);
      v5 = v63;
      goto LABEL_55;
    }
    v5 = v63;
    ++v15;
    v14 = v56;
    v9 = 0LL;
    v11 = v57;
    v12 = 0x8000000000000000uLL;
  }
  v35 = v56;
  v49 = 1;
LABEL_55:
  if ( v15 )
  {
    if ( *((_WORD *)v4 + 5) )
      MiEmptyDeferredWorkingSetEntries(v4);
    v50 = 48 * MiGetContainingPageTable(v7) - 0x220000000000LL;
    v63 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v50 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v63);
      while ( *(__int64 *)(v50 + 24) < 0 );
    }
    *(_QWORD *)(v50 + 24) = (*(_QWORD *)(v50 + 24) + v15) ^ ((*(_QWORD *)(v50 + 24) + v15) ^ *(_QWORD *)(v50 + 24)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiIncreaseUsedPtes(0xC000000000000000uLL, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v15, 2);
  }
  else
  {
    *((_WORD *)v4 + 5) = 0;
  }
  for ( ; v15 != v5; ++v15 )
    MiLockAndDecrementShareCount(48LL * v6[v15] - 0x220000000000LL, 2LL);
  if ( v35 )
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v59 + 64), v35, 0x63536D4Du);
  return v49;
}
