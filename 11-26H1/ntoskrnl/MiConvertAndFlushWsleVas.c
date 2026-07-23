/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x1404AC2BC
 * Callers:
 *     MiEliminateZeroPages @ 0x14099AF5C (MiEliminateZeroPages.c)
 * Callees:
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

void __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  ULONG_PTR v6; // rbp
  __int64 *ProcessorFlushList; // r15
  char v8; // r13
  unsigned __int64 valid; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // rdx
  unsigned __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 28) )
  {
    v5 = *(_QWORD *)(a2 + 40);
    v6 = 0LL;
    ProcessorFlushList = 0LL;
    v8 = MiLockWorkingSetShared(a1, a2, a3);
    valid = MiLockLowestValidPageTableEx(a1, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v15, 0);
    if ( valid == ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v10 = 0LL;
      if ( *(_DWORD *)(a2 + 28) )
      {
        do
        {
          v11 = *(_QWORD *)(a2 + 8 * v10 + 40);
          if ( (*(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0
            && (MiGetWsleContents(0xFFFFF68000000000uLL, *(_QWORD *)(a2 + 8 * v10 + 40)) & 0xF) != 0xA )
          {
            v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
            if ( *(__int64 *)(48 * v13 - 0x220000000000LL + 8) <= 0
              || (*(_QWORD *)(48 * v13 - 0x220000000000LL + 40) & 0x10000000000LL) != 0 )
            {
              if ( !ProcessorFlushList )
              {
                ProcessorFlushList = MiGetProcessorFlushList();
                v6 = (ULONG_PTR)(ProcessorFlushList + 517);
                MiInitializeTbFlushList(
                  (__int64)(ProcessorFlushList + 517),
                  a1,
                  *((_DWORD *)ProcessorFlushList + 1037),
                  2,
                  1);
              }
              MiInsertTbFlushEntry(v6, v11, 1LL, 0);
            }
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(a2 + 28) );
        if ( v6 )
        {
          MiFreeWsleList(a1, 0x7FFFFFFFF8LL, v6, 0);
          MiReleaseProcessorFlushList();
        }
      }
    }
    MiUnlockPageTableInternal(a1, valid);
    LOBYTE(v14) = v8;
    MiUnlockWorkingSetShared(a1, v14);
    *(_DWORD *)(a2 + 28) = 0;
  }
}
