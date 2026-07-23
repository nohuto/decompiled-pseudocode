/*
 * XREFs of MiMarkBootKernelStack @ 0x140D02B7C
 * Callers:
 *     MiInitializeKernelStacks @ 0x140D02980 (MiInitializeKernelStacks.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiMarkKernelStack @ 0x1403D4CC4 (MiMarkKernelStack.c)
 */

void __fastcall MiMarkBootKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  __int64 *ProcessorFlushList; // rdi
  void *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  char v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r15
  char v14; // [rsp+70h] [rbp+8h]
  int v15; // [rsp+78h] [rbp+10h] BYREF

  v3 = a1;
  v4 = 0LL;
  ProcessorFlushList = 0LL;
  v6 = MiVaToFlushVm(a1);
  v14 = MiLockWorkingSetShared((__int64)v6, v7, v8);
  v10 = v14;
  if ( v3 < a2 )
  {
    do
    {
      if ( !v4 || (v3 & 0xFFF) == 0 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        if ( v4 )
          MiUnlockPageTableInternal((__int64)v6, v4);
        v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((signed __int64)v6, v4, 0);
      }
      v11 = *(_QWORD *)v3;
      v12 = 0xFFFFDE0000000000uLL;
      v13 = 48 * ((*(_QWORD *)v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v15);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      MiMarkKernelStack(v12, v13, 0xFFFFFFFFFFFFFFF0uLL);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (MiFlags & 0x80000) == 0 )
      {
        MiWriteValidPteNewProtection((__int64 *)v3, v11 | 0x8000000000000062uLL);
        if ( !ProcessorFlushList )
        {
          ProcessorFlushList = MiGetProcessorFlushList();
          MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v6, *((_DWORD *)ProcessorFlushList + 3), 1, 32);
        }
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, (__int64)(v3 << 25) >> 16, 1LL, 0);
      }
      v3 += 8LL;
    }
    while ( v3 < a2 );
    v10 = v14;
    if ( ProcessorFlushList )
    {
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList();
    }
    if ( v4 )
      MiUnlockPageTableInternal((__int64)v6, v4);
  }
  LOBYTE(v9) = v10;
  MiUnlockWorkingSetShared((__int64)v6, v9);
}
