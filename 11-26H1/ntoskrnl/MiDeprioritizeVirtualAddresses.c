/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x14043ACA8
 * Callers:
 *     MiFaultTrimBehind @ 0x14043AA6C (MiFaultTrimBehind.c)
 *     HvTrimHive @ 0x1408BEF28 (HvTrimHive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiUpdatePfnPriority @ 0x140298800 (MiUpdatePfnPriority.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035F944 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

void __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // al
  ULONG_PTR v5; // r14
  __int64 *ProcessorFlushList; // r13
  ULONG *v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 valid; // r15
  unsigned __int64 v12; // rbp
  char v13; // al
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rbp
  unsigned __int64 PteShadow; // rax
  __int64 v18; // r12
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r10
  __int64 v21; // r8
  unsigned int v22; // r8d
  unsigned __int64 v23; // r8
  unsigned int v24; // r12d
  ULONG v25; // [rsp+30h] [rbp-68h]
  unsigned __int64 v26; // [rsp+40h] [rbp-58h]
  unsigned __int64 v27; // [rsp+A0h] [rbp+8h] BYREF
  int v28; // [rsp+A8h] [rbp+10h]
  int v29; // [rsp+B0h] [rbp+18h] BYREF
  char v30; // [rsp+B8h] [rbp+20h]

  v4 = *(_DWORD *)(a3 + 184) & 0xF;
  v28 = a4 & 7;
  v5 = 0LL;
  ProcessorFlushList = 0LL;
  if ( v4 == 1 )
    v9 = &MiSystemPartition;
  else
    v9 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a3 + 174));
  v25 = v9[4539];
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  valid = 0LL;
  v12 = v10 + 8 * a2;
  v26 = v12;
  v13 = MiLockWorkingSetShared(a3, a2, a3);
  v30 = v13;
  if ( v10 >= v12 )
    goto LABEL_31;
  v15 = 0xFFFFDE0000000000uLL;
  do
  {
    v16 = v10 >> 9;
    if ( valid )
    {
      if ( valid == (v16 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        goto LABEL_7;
      if ( v5 )
      {
        MiFreeWsleList(a3, v14, v5, 0);
        MiReleaseProcessorFlushList();
        v5 = 0LL;
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal(a3, valid);
    }
    valid = MiLockLowestValidPageTableEx(a3, v10, &v27, 0);
    if ( valid != (v16 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(a3, valid);
      valid = 0LL;
      v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      goto LABEL_28;
    }
    v15 = 0xFFFFDE0000000000uLL;
LABEL_7:
    PteShadow = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v10, *(_QWORD *)v10);
    if ( (PteShadow & 1) != 0 )
    {
      v18 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL);
      v19 = v18 + v15;
      LOBYTE(v27) = MiGetWsleContents((__int64)(v10 << 25) >> 16, (__int64)(v10 << 25) >> 16) & 0xF;
      if ( (_BYTE)v27 != 9 )
      {
        v21 = *(_QWORD *)(v19 + 8);
        if ( v21 > 0 && (*(_QWORD *)(v19 + 40) & 0x10000000000LL) == 0 )
        {
          MiDemoteCombinedPte(a3, v10, v21 | 0x8000000000000000uLL);
          v20 = 0xFFFFDE0000000000uLL;
        }
        v22 = *(_DWORD *)(v19 + 32);
        if ( (*(_QWORD *)(v19 + 40) & 0x20000000000000LL) != 0
          || (*(_DWORD *)(v19 + 32) & 0x8000000) != 0
          && (v19 < v20
           || v19 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
           || MiIsDecayPfn(v18 / 48)
           || (v22 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v19) == 9) )
        {
          v23 = 5LL;
        }
        else
        {
          v23 = HIBYTE(v22) & 7;
        }
        if ( (a4 & 8) == 0 )
        {
          v24 = v28;
          if ( v28 != (_DWORD)v23 )
          {
            v29 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v29);
              while ( *(__int64 *)(v19 + 24) < 0 );
            }
            MiUpdatePfnPriority(v19, v24, 1);
            _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( (a4 & 0x10) != 0 && (_BYTE)v27 != 8 )
        {
          if ( v25 )
            MI_WSLE_LOG_ACCESS(a3, v10, v23);
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            v5 = (ULONG_PTR)(ProcessorFlushList + 517);
            MiInitializeTbFlushList(
              (__int64)(ProcessorFlushList + 517),
              a3,
              *((_DWORD *)ProcessorFlushList + 1037),
              2,
              1);
          }
          MiInsertTbFlushEntry(v5, (__int64)(v10 << 25) >> 16, 1LL, 0);
        }
      }
    }
LABEL_28:
    v10 += 8LL;
    v15 = 0xFFFFDE0000000000uLL;
  }
  while ( v10 < v26 );
  if ( valid )
  {
    if ( v5 )
    {
      MiFreeWsleList(a3, v14, v5, 0);
      MiReleaseProcessorFlushList();
    }
    MiUnlockPageTableInternal(a3, valid);
  }
  v13 = v30;
LABEL_31:
  LOBYTE(v14) = v13;
  MiUnlockWorkingSetShared(a3, v14);
}
