/*
 * XREFs of MiTrimPoisonedPage @ 0x14070488C
 * Callers:
 *     MiTradePageMarkedActive @ 0x140292720 (MiTradePageMarkedActive.c)
 * Callees:
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035F944 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
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
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  ULONG *v16; // rax
  __int64 v17; // rdx

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
    _InterlockedAdd(&dword_140EF90C0, 1u);
    return v2;
  }
  if ( (v5 & 0x42) != 0 )
  {
LABEL_27:
    _InterlockedAdd(&dword_140EF90C4, 1u);
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
    v15 = *(_QWORD *)(a1 + 200);
    if ( (*(_DWORD *)(v15 + 184) & 0xF) == 1 )
      v16 = &MiSystemPartition;
    else
      v16 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v15 + 174));
    if ( v16[4539] )
      MI_WSLE_LOG_ACCESS(*(_QWORD *)(a1 + 200), *(_QWORD *)(a1 + 192), v14);
    MiInsertTbFlushEntry(v13, *(_QWORD *)(a1 + 176), 1LL, 0);
    v2 = 2 - (MiFreeWsleList(*(_QWORD *)(a1 + 200), v17, v13, 0) != 0);
    MiReleaseProcessorFlushList();
  }
  return v2;
}
