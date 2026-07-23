/*
 * XREFs of MiUnmapKernelScp @ 0x1404F0274
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiWriteWsle @ 0x14029ED40 (MiWriteWsle.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiDecreaseUsedPtes @ 0x1403410A0 (MiDecreaseUsedPtes.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

void __fastcall MiUnmapKernelScp(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // r12
  __int64 v5; // r15
  __int64 *ProcessorFlushList; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  char v9; // r13
  _QWORD *v10; // r13
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  char WsleContents; // al
  __int64 v14; // rcx
  unsigned __int64 ContainingPageTable; // rax
  __int64 v16; // rcx
  char v17; // [rsp+70h] [rbp+8h]
  _QWORD *Object; // [rsp+78h] [rbp+10h]
  __int64 v19; // [rsp+78h] [rbp+10h]

  v1 = 0LL;
  v2 = ((WORD2(stru_140E366D8.SListFaultAddress) + LOWORD(stru_140E366D8.QuantumTarget)) & 0xFFF) != 0 ? 0x1000 : 0;
  v3 = (HIDWORD(stru_140E366D8.SListFaultAddress) + LODWORD(stru_140E366D8.QuantumTarget)) & 0xFFFFF000;
  v4 = *(_QWORD *)(a1 + 48) + (unsigned int)v3 + (_DWORD)v2 + (*(_DWORD *)(a1 + 64) & 0xFFFFF000);
  v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ProcessorFlushList = 0LL;
  Object = stru_140E2D2D0.WaitBlock[1].Object;
  v7 = 0LL;
  v17 = MiLockWorkingSetShared((__int64)&unk_140E36F80, v2, v3);
  v9 = v17;
  if ( !*(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] )
    goto LABEL_18;
  v10 = Object;
  do
  {
    v11 = v10[v7 + 6];
    v12 = v5 + 8 * v7;
    v19 = v11;
    if ( v1 )
    {
      if ( (v12 & 0xFFF) != 0 )
        goto LABEL_9;
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal((__int64)&unk_140E36F80, v1);
    }
    v1 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((signed __int64)&unk_140E36F80, v1, 0);
LABEL_9:
    if ( *(_QWORD *)v12 )
    {
      WsleContents = MiGetWsleContents(v11, v4 + (unsigned int)((_DWORD)v7 << 12));
      MiWriteWsle(v14, v4 + (unsigned int)((_DWORD)v7 << 12), WsleContents & 0xF0 | 0xA);
      *(_QWORD *)v12 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( !ProcessorFlushList )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        MiInitializeTbFlushList(
          (__int64)ProcessorFlushList,
          (__int64)&unk_140E36F80,
          *((_DWORD *)ProcessorFlushList + 3),
          0,
          1);
      }
      MiInsertTbFlushEntry((__int64)ProcessorFlushList, v4 + (unsigned int)((_DWORD)v7 << 12), 1LL, 0);
      MiLockAndDecrementShareCount(48 * v19 - 0x220000000000LL, 2LL);
      ContainingPageTable = MiGetContainingPageTable(v5 + 8 * v7);
      MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 2LL);
      MiDecreaseUsedPtes(v16, v1, (_KPROCESS *)1);
    }
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] );
  v9 = v17;
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  if ( v1 )
    MiUnlockPageTableInternal((__int64)&unk_140E36F80, v1);
LABEL_18:
  LOBYTE(v8) = v9;
  MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v8);
}
