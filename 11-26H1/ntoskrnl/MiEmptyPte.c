/*
 * XREFs of MiEmptyPte @ 0x14035F400
 * Callers:
 *     <none>
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiWalkVaCheckCommon @ 0x14035F710 (MiWalkVaCheckCommon.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035F944 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 */

__int64 __fastcall MiEmptyPte(__int64 a1, unsigned __int64 a2, int a3)
{
  int *v3; // rdi
  int v7; // r9d
  ULONG_PTR v8; // rbx
  int v9; // ebp
  __int64 v10; // r15
  __int64 *ProcessorFlushList; // rax
  BOOL v12; // ecx
  int v13; // r12d
  __int64 v14; // rdi
  unsigned int v15; // r12d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rsi
  ULONG *v21; // rax
  __int64 v22; // rdx
  _KPROCESS *v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(int **)(a1 + 184);
  if ( (*v3 & 2) != 0 )
  {
    if ( !a3 )
    {
      if ( *(__int64 *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0 )
        return 0LL;
      goto LABEL_6;
    }
  }
  else if ( (*v3 & 1) == 0 || !a3 )
  {
LABEL_6:
    v7 = 1;
    v8 = *((_QWORD *)v3 + 1);
    v9 = 0;
    v10 = *(_QWORD *)(a1 + 32);
    if ( !v8 )
    {
      ProcessorFlushList = MiGetProcessorFlushList();
      v7 = 1;
      v8 = (ULONG_PTR)(ProcessorFlushList + 517);
      *((_DWORD *)ProcessorFlushList + 1038) = 2;
      *((_DWORD *)ProcessorFlushList + 1039) = 1;
      ProcessorFlushList[517] = v10;
      *((_BYTE *)ProcessorFlushList + 4160) = (*(_DWORD *)(v10 + 184) & 0x40) != 0;
      if ( (*(_DWORD *)(v10 + 184) & 0xF) != 0
        || (struct _LIST_ENTRY **)v10 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
      {
        v12 = (*(_DWORD *)(v10 + 184) & 0xF) == 0;
      }
      else
      {
        *((_DWORD *)ProcessorFlushList + 1038) |= 9u;
        v12 = 0;
      }
      *((_DWORD *)ProcessorFlushList + 1038) &= 0xFFFFFFDB;
      *((_DWORD *)ProcessorFlushList + 1036) = v12;
      *(_WORD *)((char *)ProcessorFlushList + 4161) = 0;
      *((_DWORD *)ProcessorFlushList + 1041) = 0;
      ProcessorFlushList[521] = 0LL;
      ProcessorFlushList[522] = 0LL;
      *((_QWORD *)v3 + 1) = v8;
    }
    v13 = *v3;
    v14 = *(_QWORD *)(a1 + 32);
    v15 = v13 & 4;
    v16 = 0xFFFFF68000000000uLL;
    v17 = *(_QWORD *)a2;
    v18 = (__int64)(a2 << 25) >> 16;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      v23 = MiPteHasShadow();
      if ( v23 )
      {
        KernelWaitTime = v23[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v26 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v26 & 0x20) != 0 )
            v24 |= 0x20uLL;
          v17 = v24 | 0x42;
          if ( (v26 & 0x42) == 0 )
            v17 = v24;
        }
      }
    }
    v27 = v17;
    v19 = (v17 >> 12) & 0xFFFFFFFFFFLL;
    v20 = 48 * v19 - 0x220000000000LL;
    if ( v18 < v16 || v18 > 0xFFFFF6FFFFFFFFFFuLL )
      v9 = v7;
    if ( (unsigned int)MiWalkVaCheckCommon(v14, a2, 48 * (int)v19, v9, (__int64)&v27)
      && ((unsigned __int16)*(_DWORD *)(v20 + 32) <= 1u || (*(_DWORD *)(v14 + 184) & 0xF) == 0) )
    {
      if ( (*(_DWORD *)(v14 + 184) & 0xF) == 1 )
        v21 = &MiSystemPartition;
      else
        v21 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v14 + 174));
      if ( v21[4539] )
        MI_WSLE_LOG_ACCESS(v14, a2);
      MiInsertTbFlushEntry(v8, (__int64)(a2 << 25) >> 16, 1LL);
      if ( *(_DWORD *)(v8 + 28) == *(_DWORD *)(v8 + 12) )
        MiFreeWsleList(v14, v22, v8, v15);
    }
  }
  return 0LL;
}
