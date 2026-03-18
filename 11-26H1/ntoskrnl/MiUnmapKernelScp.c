/*
 * XREFs of MiUnmapKernelScp @ 0x1404F6C64
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetWsleContents @ 0x140297070 (MiGetWsleContents.c)
 *     MiWriteWsle @ 0x14029F7F0 (MiWriteWsle.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiLockAndDecrementShareCount @ 0x1403091DC (MiLockAndDecrementShareCount.c)
 *     MiGetProcessorFlushList @ 0x1403229E0 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiDecreaseUsedPtes @ 0x14033F020 (MiDecreaseUsedPtes.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140360920 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
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
  v2 = ((WORD2(stru_140E36558.SListFaultAddress) + LOWORD(stru_140E36558.QuantumTarget)) & 0xFFF) != 0 ? 0x1000 : 0;
  v3 = (HIDWORD(stru_140E36558.SListFaultAddress) + LODWORD(stru_140E36558.QuantumTarget)) & 0xFFFFF000;
  v4 = *(_QWORD *)(a1 + 48) + (unsigned int)v3 + (_DWORD)v2 + (*(_DWORD *)(a1 + 64) & 0xFFFFF000);
  v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ProcessorFlushList = 0LL;
  Object = stru_140E2D150.WaitBlock[1].Object;
  v7 = 0LL;
  v17 = MiLockWorkingSetShared((__int64)&unk_140E36E00, v2, v3);
  v9 = v17;
  if ( !*(_DWORD *)&stru_140E2D150.WaitBlockFill11[76] )
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
      MiUnlockPageTableInternal((__int64)&unk_140E36E00, v1);
    }
    v1 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((signed __int64)&unk_140E36E00, v1, 0);
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
          (__int64)&unk_140E36E00,
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
  while ( (unsigned int)v7 < *(_DWORD *)&stru_140E2D150.WaitBlockFill11[76] );
  v9 = v17;
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  if ( v1 )
    MiUnlockPageTableInternal((__int64)&unk_140E36E00, v1);
LABEL_18:
  LOBYTE(v8) = v9;
  MiUnlockWorkingSetShared((__int64)&unk_140E36E00, v8);
}
