/*
 * XREFs of MiSetPageProtection @ 0x1404E4A38
 * Callers:
 *     MmSetPageProtection @ 0x1405031A0 (MmSetPageProtection.c)
 *     MmAllocateIsrStack @ 0x14087C1D0 (MmAllocateIsrStack.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiLockPageAndSetDirty @ 0x14031C814 (MiLockPageAndSetDirty.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiMarkKernelStack @ 0x1403D4CC4 (MiMarkKernelStack.c)
 */

void __fastcall MiSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // edi
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rsi
  __int64 ValidPte; // rbx
  void *v8; // r15
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 *ProcessorFlushList; // r12
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // [rsp+30h] [rbp-58h]
  char v21; // [rsp+90h] [rbp+8h]
  int v22; // [rsp+98h] [rbp+10h]
  int v24; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 4;
  if ( a3 != 31 )
    v3 = a3;
  v4 = a1;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v20 = v6;
  ValidPte = MiMakeValidPte(v5, 0LL, v3 | 0xA0000000);
  v8 = MiVaToFlushVm(v4);
  v9 = 0LL;
  v21 = MiLockWorkingSetShared((__int64)v8, v10, v11);
  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v8, 20, 0, 36);
  if ( v6 )
  {
    v22 = v3 & 4;
    do
    {
      if ( !v9 || (v5 & 0xFFF) == 0 )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        if ( v9 )
          MiUnlockPageTableInternal((__int64)v8, v9);
        v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((signed __int64)v8, v9, 0);
      }
      v13 = *(_QWORD *)v5;
      v14 = *(_QWORD *)v5 >> 12;
      v15 = (v14 << 12) ^ ((v14 << 12) ^ ValidPte) & 0xFFF0000000000FFFuLL;
      v16 = 3 * (v14 & 0xFFFFFFFFFFLL);
      v17 = v15;
      v18 = 16 * v16 - 0x220000000000LL;
      if ( v22 )
      {
        v15 |= 0x42uLL;
        if ( (v13 & 0x42) == 0 )
          v15 = v17;
        if ( a3 == 31 )
        {
          v24 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v24);
            while ( *(__int64 *)(v18 + 24) < 0 );
          }
          MiMarkKernelStack(v17, v18, 0xFFFFFFFFFFFFFFE0uLL);
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        MiLockPageAndSetDirty(v18, 0, 0xFFF0000000000FFFuLL);
      }
      ValidPte = v15 | 0x20;
      if ( ValidPte != v13 )
      {
        MiWriteValidPteNewProtection((__int64 *)v5, ValidPte);
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, v4, 1LL, 0);
      }
      v4 += 4096LL;
      v5 += 8LL;
      --v20;
    }
    while ( v20 );
  }
  MiFlushTbList((__int64)ProcessorFlushList);
  MiReleaseProcessorFlushList();
  if ( v9 )
    MiUnlockPageTableInternal((__int64)v8, v9);
  LOBYTE(v19) = v21;
  MiUnlockWorkingSetShared((__int64)v8, v19);
}
