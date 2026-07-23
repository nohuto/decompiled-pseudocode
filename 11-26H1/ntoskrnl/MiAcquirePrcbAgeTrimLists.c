/*
 * XREFs of MiAcquirePrcbAgeTrimLists @ 0x14029C380
 * Callers:
 *     MiUpdateOldPteWorker @ 0x14029B8EC (MiUpdateOldPteWorker.c)
 *     MiResetAccessBitPteWorker @ 0x14029BA28 (MiResetAccessBitPteWorker.c)
 *     MiResetAccessBitPte @ 0x14029BDF0 (MiResetAccessBitPte.c)
 *     MiUpdateOldPte @ 0x1402DFDB0 (MiUpdateOldPte.c)
 *     MiAgePte @ 0x1402E0900 (MiAgePte.c)
 *     MiAgePteWorker @ 0x1402E10E0 (MiAgePteWorker.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiTrimPte @ 0x140323430 (MiTrimPte.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 */

__int64 __fastcall MiAcquirePrcbAgeTrimLists(__int64 a1, __int64 *a2)
{
  __int64 ProcessorFlushList; // r9
  BOOL v5; // eax
  __int64 result; // rax
  bool v7; // zf

  ProcessorFlushList = MiGetProcessorFlushList();
  *(_DWORD *)(ProcessorFlushList + 16) = 0;
  *(_DWORD *)(ProcessorFlushList + 20) = 2;
  *(_QWORD *)ProcessorFlushList = a1;
  *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(a1 + 184) & 0x40) != 0;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
    || (struct _LIST_ENTRY **)a1 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
  {
    v5 = (*(_DWORD *)(a1 + 184) & 0xF) == 0;
  }
  else
  {
    *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
    v5 = 0;
  }
  *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
  *(_DWORD *)(ProcessorFlushList + 8) = v5;
  *(_WORD *)(ProcessorFlushList + 25) = 0;
  *(_DWORD *)(ProcessorFlushList + 28) = 0;
  *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
  *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
  *a2 = ProcessorFlushList;
  *(_DWORD *)(ProcessorFlushList + 4152) = 2;
  *(_DWORD *)(ProcessorFlushList + 4156) = 1;
  *(_QWORD *)(ProcessorFlushList + 4136) = a1;
  *(_BYTE *)(ProcessorFlushList + 4160) = (*(_DWORD *)(a1 + 184) & 0x40) != 0;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
    || (struct _LIST_ENTRY **)a1 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
  {
    result = (*(_DWORD *)(a1 + 184) & 0xF) == 0;
  }
  else
  {
    *(_DWORD *)(ProcessorFlushList + 4152) |= 9u;
    result = 0LL;
  }
  *(_DWORD *)(ProcessorFlushList + 4152) &= 0xFFFFFFDB;
  *(_DWORD *)(ProcessorFlushList + 4144) = result;
  *(_WORD *)(ProcessorFlushList + 4161) = 0;
  *(_DWORD *)(ProcessorFlushList + 4164) = 0;
  *(_QWORD *)(ProcessorFlushList + 4168) = 0LL;
  *(_QWORD *)(ProcessorFlushList + 4176) = 0LL;
  v7 = a2[2] == 1;
  a2[1] = ProcessorFlushList + 4136;
  if ( v7 )
  {
    result = ProcessorFlushList + 8272;
    a2[2] = ProcessorFlushList + 8272;
  }
  return result;
}
