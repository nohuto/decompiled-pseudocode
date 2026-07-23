/*
 * XREFs of MiComputePageCommitment @ 0x140313D10
 * Callers:
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 *     MiPerformVadSplitting @ 0x140317B74 (MiPerformVadSplitting.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14087C968 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14087CD6C (MiLoadSectionIntoVsmEnclave.c)
 *     MiSectionProtectGetCharges @ 0x140997FC0 (MiSectionProtectGetCharges.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiIsPteDecommittedPage @ 0x140314040 (MiIsPteDecommittedPage.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiComputePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  int v5; // eax
  int v6; // edi
  __int64 p_Blink; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // r8d
  char v13; // r14
  __int64 NextPageTable; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r14
  __int64 v17; // r10
  _QWORD *v18; // r12
  unsigned __int64 PteShadow; // rbx
  int IsPteDecommittedPage; // eax
  __int64 v21; // rdx
  int v22; // ecx
  unsigned int v23; // ecx
  int v24; // r8d
  int v25; // r15d
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 PrototypePteDirect; // rax
  __int64 CloneAddress; // rax
  __int64 v33; // [rsp+30h] [rbp-78h]
  volatile _KAFFINITY_EX *ActiveProcessors; // [rsp+40h] [rbp-68h]
  _KPROCESS *Process; // [rsp+48h] [rbp-60h]
  unsigned __int64 v36; // [rsp+50h] [rbp-58h]
  char v37; // [rsp+B0h] [rbp+8h]
  int v38; // [rsp+B8h] [rbp+10h] BYREF
  _QWORD *v39; // [rsp+C8h] [rbp+20h]

  v39 = a4;
  v38 = 0;
  v5 = *(_DWORD *)(a3 + 48);
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  ActiveProcessors = Process[2].ActiveProcessors;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (v5 & 0x80000) != 0 && (v5 & 0x400000) != 0 )
  {
    v6 = 2;
    v10 = ((__int64)(v9 - v8) >> 3) + 1;
  }
  else
  {
    v10 = 0LL;
  }
  if ( a4 )
    *a4 = 0LL;
  v13 = MiLockWorkingSetShared(p_Blink, a2, a3);
  v37 = v13;
LABEL_7:
  if ( v8 <= v9 )
  {
    LOBYTE(v12) = v13;
    NextPageTable = MiGetNextPageTable(v8, v9, v12, 0, (__int64)&v38);
    v8 = NextPageTable;
    if ( NextPageTable )
    {
      v15 = 1LL;
      v16 = NextPageTable;
      if ( v38 >= 1 )
      {
        v28 = (unsigned int)v38;
        do
        {
          v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v15 <<= 9;
          --v28;
        }
        while ( v28 );
      }
      v17 = 8 * v15;
      v36 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v18 = v39;
      v33 = 8 * v15;
      while ( 1 )
      {
        PteShadow = *(_QWORD *)v16;
        if ( v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v16, *(_QWORD *)v16);
        if ( !PteShadow )
          goto LABEL_21;
        IsPteDecommittedPage = MiIsPteDecommittedPage(PteShadow);
        v22 = v6;
        v6 |= 1u;
        v23 = v22 & 0xFFFFFFFE;
        if ( !IsPteDecommittedPage )
          v6 = v23;
        v24 = v6;
        v25 = v6 & 1;
        if ( (v6 & 2) != 0 )
        {
          v27 = v10 - v21;
          if ( (v6 & 1) == 0 )
            v27 = v10;
          v10 = v27;
        }
        else if ( (v6 & 1) == 0 )
        {
          v10 += v21;
        }
        if ( v18 && ActiveProcessors[4].StaticBitmap[16] && (v6 & 1) == 0 )
        {
          if ( (PteShadow & 1) != 0 )
          {
            if ( *(__int64 *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40) < 0
              && (*(__int64 *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 8) <= 0
               || (*(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40) & 0x10000000000LL) != 0) )
            {
              PrototypePteDirect = *(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 8) | 0x8000000000000000uLL;
LABEL_51:
              CloneAddress = MiLocateCloneAddress(Process, PrototypePteDirect);
              v17 = v33;
              v24 = v6;
              if ( CloneAddress && ActiveProcessors[4].StaticBitmap[16] > *(_QWORD *)(CloneAddress + 96) )
                ++*v18;
            }
          }
          else if ( (PteShadow & 0x400) != 0
                 && !(unsigned int)MiIsPrototypePteVadLookup(PteShadow)
                 && ((unsigned int)MiIsPrototypePteVadLookup(PteShadow) || (PteShadow & 0x800) == 0) )
          {
            PrototypePteDirect = MiGetPrototypePteDirect(PteShadow);
            goto LABEL_51;
          }
        }
        if ( a5 )
        {
          v6 = v24;
          if ( !v25
            && *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock
                                     + 8
                                     * ((*(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL))
                         + 256LL) != *a5 )
          {
            *a5 = 0LL;
          }
        }
LABEL_21:
        v8 += v17;
        v16 += 8LL;
        if ( (v16 & 0xFFF) == 0 || v8 > v9 )
        {
          p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
          MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, v36);
          if ( (unsigned int)MiWorkingSetIsContended(&Process[2].ReadyListHead.Blink) || KeShouldYieldProcessor() )
          {
            LOBYTE(v11) = v37;
            MiUnlockWorkingSetShared(p_Blink, v11);
            v13 = MiLockWorkingSetShared(p_Blink, v29, v30);
            v37 = v13;
          }
          else
          {
            v13 = v37;
          }
          goto LABEL_7;
        }
      }
    }
  }
  LOBYTE(v11) = v13;
  MiUnlockWorkingSetShared(p_Blink, v11);
  return v10;
}
