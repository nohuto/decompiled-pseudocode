/*
 * XREFs of MiSetPagingOfDriver @ 0x1402F173C
 * Callers:
 *     MmPageEntireDriver @ 0x140ACBBB0 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x140CF8850 (MiEnablePagingOfDriver.c)
 * Callees:
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiWriteWsle @ 0x14029ED40 (MiWriteWsle.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiTrimSystemImagePages @ 0x1402F1124 (MiTrimSystemImagePages.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

void __fastcall MiSetPagingOfDriver(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r12
  unsigned __int64 *v6; // rbp
  unsigned __int64 v7; // r14
  __int64 ProcessorFlushList; // rbx
  __int64 v9; // rdi
  unsigned __int64 v10; // r15
  char v11; // al
  __int64 v12; // rdx
  int v13; // r8d
  unsigned __int64 *v14; // r12
  __int64 v15; // rcx
  char WsleContents; // r8
  __int64 v17; // r10
  PVOID v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r11
  char v24; // [rsp+78h] [rbp+10h]

  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v7 = a2 << 25 >> 16;
  ProcessorFlushList = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = MiLockWorkingSetShared((__int64)&unk_140E36F80, a2, (__int64)a3);
  v24 = v11;
  if ( v4 <= (unsigned __int64)a3 )
  {
    v13 = 1;
    do
    {
      if ( !v10 || (v4 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          if ( ProcessorFlushList )
          {
            MiFlushTbList(ProcessorFlushList);
            MiReleaseProcessorFlushList();
            ProcessorFlushList = 0LL;
          }
          v9 += MiTrimSystemImagePages(v6, (unsigned __int64 *)(v4 - 8), v13);
          v6 = 0LL;
        }
        if ( v10 )
          MiUnlockPageTableInternal((__int64)&unk_140E36F80, v10);
        v10 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(&unk_140E36F80, v10, 0LL);
        v13 = 1;
      }
      v12 = a1;
      v14 = v6;
      v15 = (__int64)(v4 - ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL) >> 3;
      if ( (unsigned int)v15 >= *(_DWORD *)(a1 + 304)
        || !_bittest64(*(const signed __int64 **)(a1 + 312), (unsigned int)v15) )
      {
        if ( (*(_QWORD *)v4 & 1) != 0 )
        {
          WsleContents = MiGetWsleContents(0xFFFFFFFFFFLL, v7);
          if ( (WsleContents & 0xF) == 9 )
          {
            v19 = *(_DWORD *)(v17 + 32);
            if ( (_WORD)v19 == 1 || (_WORD)v19 == 2 && (*(_BYTE *)(v17 + 34) & 8) != 0 )
            {
              v6 = (unsigned __int64 *)v4;
              if ( v14 )
                v6 = v14;
              MiWriteWsle(1LL, v7, WsleContents & 0xF0 | 0xA);
              *(_QWORD *)v4 = v22 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              if ( !ProcessorFlushList )
              {
                ProcessorFlushList = MiGetProcessorFlushList(v21, v20);
                MiInitializeTbFlushList(
                  ProcessorFlushList,
                  (unsigned int)&unk_140E36F80,
                  *(_DWORD *)(ProcessorFlushList + 12),
                  0,
                  1);
              }
              MiInsertTbFlushEntry(ProcessorFlushList, v7, 1LL);
            }
          }
        }
        else if ( (*(_QWORD *)v4 & 0x400LL) != 0 && v6 )
        {
          if ( ProcessorFlushList )
          {
            MiFlushTbList(ProcessorFlushList);
            MiReleaseProcessorFlushList();
            ProcessorFlushList = 0LL;
          }
          v9 += MiTrimSystemImagePages(v6, (unsigned __int64 *)(v4 - 8), v13);
          v6 = 0LL;
        }
      }
      v4 += 8LL;
      v7 += 4096LL;
      v13 = 1;
    }
    while ( v4 <= (unsigned __int64)a3 );
    if ( v6 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList(ProcessorFlushList);
        MiReleaseProcessorFlushList();
      }
      v9 += MiTrimSystemImagePages(v6, a3, v13);
    }
    if ( v10 )
      MiUnlockPageTableInternal((__int64)&unk_140E36F80, v10);
    v11 = v24;
    v5 = a1;
  }
  LOBYTE(v12) = v11;
  MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v12);
  if ( v9 )
  {
    v18 = *(PVOID *)(v5 + 48);
    if ( v18 == PsNtosImageBase || v18 == PsHalImageBase )
      _InterlockedAdd((volatile signed __int32 *)&stru_140E2D2D0.SchedulerApcFill5[80], v9);
    else
      _InterlockedAdd((volatile signed __int32 *)&stru_140E2D2D0.UserTime, v9);
  }
}
