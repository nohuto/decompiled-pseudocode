/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x14039C3F8
 * Callers:
 *     CcFlushCacheOneRange @ 0x14039BEE0 (CcFlushCacheOneRange.c)
 *     CcZeroDataInCache @ 0x1403A0CB8 (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x1404A3690 (CcUnpinRepinnedBcb.c)
 *     CcPurgeAndClearCacheSection @ 0x1404ACF44 (CcPurgeAndClearCacheSection.c)
 *     MmSetAddressRangeModified @ 0x1404B06C0 (MmSetAddressRangeModified.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiGetMultiplexedVm @ 0x1402C67F0 (MiGetMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 */

char __fastcall MmSetAddressRangeModifiedEx(unsigned __int64 a1)
{
  char v2; // si
  int v3; // ebp
  __int64 *ProcessorFlushList; // r14
  __int64 v5; // r8
  unsigned __int64 v6; // r15
  signed __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 MultiplexedVm; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  ULONG_PTR v15; // rbp
  bool v16; // zf
  struct _KEVENT *v17; // rcx
  unsigned __int64 v18; // rax
  BOOL v19; // eax
  __int64 v20; // rdx
  BOOL v22; // eax
  struct _KEVENT *v23; // [rsp+20h] [rbp-68h] BYREF
  int ProtectionMask; // [rsp+28h] [rbp-60h]
  unsigned __int64 v25; // [rsp+30h] [rbp-58h]
  unsigned __int64 v26; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+90h] [rbp+8h]
  char v28; // [rsp+98h] [rbp+10h]
  char v29; // [rsp+A0h] [rbp+18h]

  v2 = 0;
  v29 = 0;
  ProtectionMask = MiMakeProtectionMask(4u);
  v3 = ProtectionMask;
  ProcessorFlushList = 0LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v25 = (((a1 + v5 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v26 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = MiLockWorkingSetShared((__int64)&unk_140E3D680, 0xFFFFF68000000000uLL, v5);
  MiLockPageTableInternal((signed __int64)&unk_140E3D680, v26, 0);
  MultiplexedVm = MiGetMultiplexedVm(v8, a1 & 0xFFFFFFFFFFFFF000uLL);
  v10 = v25;
  v11 = MultiplexedVm;
  v12 = a1 & 0xFFFFFFFFFFFFF000uLL;
  do
  {
    v13 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 1) != 0 )
    {
      v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      v15 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      LODWORD(v23) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v23);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      v16 = (*(_BYTE *)(v15 + 34) & 0x10) == 0;
      v17 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
      v23 = v17;
      if ( v16 || (*(_DWORD *)(v15 + 16) & 0x400LL) == 0 )
      {
        v18 = MiCaptureDirtyBitToPfn(v15);
        v17 = v23;
        v14 = v18;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v14 )
        MiReleasePageFileInfo(v17, v14, 0LL);
      v3 = ProtectionMask;
      if ( ProtectionMask == 2 && (v13 & 0x800) != 0 )
      {
        v7 = (v13 >> 12 << 12) ^ ((v13 >> 12 << 12) ^ v7) & 0xFFF0000000000FFFuLL;
        MiWriteValidPteNewProtection((__int64 *)v6, v7);
        v22 = (MiFlags & 0x400) == 0 && (MiFlags & 0x800) == 0
           || (v7 & 0x40) == 0 && (v13 & 0x40) != 0
           || (v7 & 2) == 0 && (v13 & 2) != 0
           || v7 < 0 && (v13 & 0x8000000000000000uLL) == 0LL;
        if ( (v13 & 0x40) != 0 || (v13 & 2) != 0 )
          v2 = 1;
        else
          v2 = v29;
        v29 = v2;
        if ( v22 )
        {
LABEL_15:
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            *((_DWORD *)ProcessorFlushList + 4) = 0;
            *((_DWORD *)ProcessorFlushList + 5) = 32;
            *ProcessorFlushList = v11;
            *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(v11 + 184) & 0x40) != 0;
            if ( (*(_DWORD *)(v11 + 184) & 0xF) != 0
              || (struct _LIST_ENTRY **)v11 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
            {
              v19 = (*(_DWORD *)(v11 + 184) & 0xF) == 0;
            }
            else
            {
              v19 = 0;
              *((_DWORD *)ProcessorFlushList + 4) |= 9u;
            }
            *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
            *((_DWORD *)ProcessorFlushList + 2) = v19;
            *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
            *((_DWORD *)ProcessorFlushList + 7) = 0;
            ProcessorFlushList[4] = 0LL;
            ProcessorFlushList[5] = 0LL;
          }
          MiInsertTbFlushEntry((__int64)ProcessorFlushList, v27, 1LL, 0);
        }
      }
      else
      {
        if ( (v13 & 0x40) != 0 || (v13 & 2) != 0 )
        {
          MiWriteValidPteNewProtection((__int64 *)v6, v13 & 0xFFFFFFFFFFFFFFBDuLL);
          v2 = 1;
          v29 = 1;
          goto LABEL_15;
        }
        v2 = v29;
      }
      v12 = v27;
      v10 = v25;
      goto LABEL_22;
    }
    if ( v3 == 2 && (v13 & 8) == 0 )
      *(_QWORD *)v6 = v13 | 8;
LABEL_22:
    v12 += 4096LL;
    v6 += 8LL;
    v27 = v12;
  }
  while ( v6 <= v10 );
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  MiUnlockPageTableInternal(v11, v26);
  LOBYTE(v20) = v28;
  MiUnlockWorkingSetShared(v11, v20);
  return v2;
}
