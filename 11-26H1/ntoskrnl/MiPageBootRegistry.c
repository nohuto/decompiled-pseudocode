/*
 * XREFs of MiPageBootRegistry @ 0x1406E8744
 * Callers:
 *     MmFreeLoaderBlock @ 0x140CF858C (MmFreeLoaderBlock.c)
 * Callees:
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiWriteWsle @ 0x14029ED40 (MiWriteWsle.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MmFreeBootRegistry @ 0x14086A188 (MmFreeBootRegistry.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140D0A564 (MiInsertRegistryPageInModifiedList.c)
 */

_QWORD *__fastcall MiPageBootRegistry(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rbx
  _QWORD *i; // rdi
  _QWORD *result; // rax
  signed __int64 v5; // r14
  __int64 v6; // r13
  __int64 *ProcessorFlushList; // rbx
  char *AnyMultiplexedVm; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // al
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  unsigned __int64 v14; // r8
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  __int64 KernelWaitTime; // rcx
  __int64 v18; // rdi
  _QWORD *v19; // r15
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rax
  __int64 v23; // r11
  _KPROCESS *v24; // rax
  __int64 v25; // r11
  char WsleContents; // al
  __int64 v27; // rcx
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r11
  int v30; // r9d
  bool v31; // cf
  unsigned __int64 *v32; // [rsp+30h] [rbp-78h]
  unsigned __int64 v33; // [rsp+38h] [rbp-70h]
  unsigned __int64 v34; // [rsp+40h] [rbp-68h]
  _QWORD *v35; // [rsp+50h] [rbp-58h]
  char v37; // [rsp+B8h] [rbp+10h]
  __int64 v38; // [rsp+C0h] [rbp+18h]
  __int64 v39; // [rsp+C8h] [rbp+20h]

  v1 = (_QWORD *)*a1;
  v2 = 0LL;
  for ( i = a1; v1 != a1; v1 = (_QWORD *)*v1 )
    v2 += v1[5];
  result = (_QWORD *)ExAllocatePoolMm(
                       64LL,
                       8 * v2 + 8,
                       1649241421,
                       KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v35 = result;
  v5 = (signed __int64)result;
  if ( result )
  {
    *result = v2;
    v6 = 0LL;
    v38 = 0LL;
    ProcessorFlushList = 0LL;
    v32 = result + 1;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v11 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v9, v10);
    v13 = (_QWORD *)*i;
    v37 = v11;
    if ( (_QWORD *)*i != i )
    {
      v14 = 0xFFFFF68000000000uLL;
      v15 = 0LL;
      do
      {
        v16 = 0LL;
        v39 = 0LL;
        if ( v13[5] )
        {
          KernelWaitTime = 0LL;
          v18 = v13[4];
          v19 = (_QWORD *)(48 * v18 - 0x21FFFFFFFFF8LL);
          do
          {
            v20 = *v19 | 0x8000000000000000uLL;
            v21 = (__int64)(v20 << 25) >> 16;
            *v32++ = v21;
            v33 = v21;
            v22 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v34 = v22;
            if ( v16 != v22 )
            {
              if ( v16 )
              {
                if ( ProcessorFlushList )
                {
                  MiFlushTbList((__int64)ProcessorFlushList);
                  MiReleaseProcessorFlushList();
                  ProcessorFlushList = 0LL;
                }
                MiInsertRegistryPageInModifiedList(v38, v15, v14);
                MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v16);
                v22 = v34;
              }
              v16 = v22;
              MiLockPageTableInternal((signed __int64)AnyMultiplexedVm, v22, 0);
              v21 = (__int64)(v20 << 25) >> 16;
            }
            v23 = *(_QWORD *)v20;
            if ( v20 >= 0xFFFFF6FB7DBED000uLL
              && v20 <= 0xFFFFF6FB7DBED7F8uLL
              && (v23 & 1) != 0
              && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
            {
              v24 = MiPteHasShadow();
              if ( v24 )
              {
                KernelWaitTime = v24[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  if ( (*(_QWORD *)(KernelWaitTime + 8 * ((v20 >> 3) & 0x1FF)) & 0x20) != 0 )
                    v25 |= 0x20uLL;
                  KernelWaitTime = v25;
                }
              }
            }
            WsleContents = MiGetWsleContents(KernelWaitTime, v21);
            MiWriteWsle(v27, v28, WsleContents & 0xF0 | 0xA);
            *(_QWORD *)v20 = MiMakeTransitionPte((v29 >> 12) & 0xFFFFFFFFFFLL, 4);
            if ( ProcessorFlushList )
            {
              v6 = v38;
              ++v15;
            }
            else
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              MiInitializeTbFlushList(
                (__int64)ProcessorFlushList,
                (__int64)AnyMultiplexedVm,
                *((_DWORD *)ProcessorFlushList + 3),
                0,
                1);
              v15 = (unsigned int)(v30 + 1);
              v6 = v18 + v39;
              v38 = v18 + v39;
            }
            MiInsertTbFlushEntry((__int64)ProcessorFlushList, v33, 1LL, 0);
            v19 += 6;
            v14 = 0xFFFFF68000000000uLL;
            v31 = (unsigned __int64)++v39 < v13[5];
            KernelWaitTime = 0LL;
          }
          while ( v31 );
          i = a1;
        }
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        MiInsertRegistryPageInModifiedList(v6, v15, v14);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v16);
        v13 = (_QWORD *)*v13;
        v14 = 0xFFFFF68000000000uLL;
      }
      while ( v13 != i );
      v5 = (signed __int64)v35;
      v11 = v37;
    }
    LOBYTE(v12) = v11;
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v12);
    result = (_QWORD *)_InterlockedCompareExchange64(
                         (volatile signed __int64 *)((char *)&stru_140E366D8.116 + 4),
                         v5,
                         0LL);
    if ( result )
    {
      *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&stru_140E366D8.116 + 4) = ($C9C4F79064DE35237E3F199A7D1BD3E1)v5;
      return (_QWORD *)MmFreeBootRegistry();
    }
  }
  return result;
}
