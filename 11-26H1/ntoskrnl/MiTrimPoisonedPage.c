/*
 * XREFs of MiTrimPoisonedPage @ 0x1406FFBBC
 * Callers:
 *     MiTradePageMarkedActive @ 0x1402931C0 (MiTradePageMarkedActive.c)
 * Callees:
 *     MiGetWsleContents @ 0x140297070 (MiGetWsleContents.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiGetProcessorFlushList @ 0x1403229E0 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x140328E50 (MiFreeWsleList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035DBA4 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140360920 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
 */

__int64 __fastcall MiTrimPoisonedPage(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  __int64 *v4; // r9
  __int64 v5; // rdx
  _KPROCESS *v6; // rax
  char v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 KernelWaitTime; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *ProcessorFlushList; // rax
  ULONG_PTR v13; // rsi
  __int64 v14; // rcx
  ULONG *v15; // rax
  __int64 v16; // rdx

  v2 = 1;
  v3 = *(_DWORD *)(a1 + 16);
  if ( (v3 & 0x20) != 0
    || (*(_BYTE *)(*(_QWORD *)(a1 + 256) + 34LL) & 0x10) != 0
    || *(_DWORD *)(a1 + 56) == 2
    || (v3 & 8) != 0 )
  {
    goto LABEL_27;
  }
  v4 = *(__int64 **)(a1 + 192);
  v5 = *v4;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    v6 = MiPteHasShadow();
    if ( v6 )
    {
      KernelWaitTime = v6[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v10 = *(_QWORD *)(KernelWaitTime + 8 * ((v8 >> 3) & 0x1FF));
        if ( (v10 & 0x20) != 0 )
          v7 |= 0x20u;
        LOBYTE(v5) = v7 | 0x42;
        if ( (v10 & 0x42) == 0 )
          LOBYTE(v5) = v7;
      }
    }
  }
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 40LL) & 0xFFFFFFFFFFLL;
  if ( v11 == *(_QWORD *)(a1 + 240) )
  {
    _InterlockedAdd(&dword_140EF8D60, 1u);
    return v2;
  }
  if ( (v5 & 0x42) != 0 )
  {
LABEL_27:
    _InterlockedAdd(&dword_140EF8D64, 1u);
    return v2;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 256) + 32LL) & 0x8000000) == 0
    && (MiGetWsleContents(v11, *(_QWORD *)(a1 + 176)) & 0xF) != 8 )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    v13 = (ULONG_PTR)(ProcessorFlushList + 517);
    MiInitializeTbFlushList(
      (__int64)(ProcessorFlushList + 517),
      *(_QWORD *)(a1 + 200),
      *((_DWORD *)ProcessorFlushList + 1037),
      2,
      1);
    v14 = *(_QWORD *)(a1 + 200);
    if ( (*(_DWORD *)(v14 + 184) & 0xF) == 1 )
      v15 = &MiSystemPartition;
    else
      v15 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v14 + 174));
    if ( v15[4539] )
      MI_WSLE_LOG_ACCESS(*(_QWORD *)(a1 + 200), *(_QWORD *)(a1 + 192));
    MiInsertTbFlushEntry(v13, *(_QWORD *)(a1 + 176), 1LL, 0);
    v2 = 2 - (MiFreeWsleList(*(_QWORD *)(a1 + 200), v16, v13, 0) != 0);
    MiReleaseProcessorFlushList();
  }
  return v2;
}
