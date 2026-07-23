/*
 * XREFs of MiReplaceRotateWithDemandZeroNoCopy @ 0x1403146B4
 * Callers:
 *     MmRotatePhysicalView @ 0x140AEF280 (MmRotatePhysicalView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1402E88A0 (MiPageTableLockIsContended.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiUnmapFrameBuffer @ 0x140314AD4 (MiUnmapFrameBuffer.c)
 *     MiDereferenceIoPages @ 0x1403152FC (MiDereferenceIoPages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031594C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

__int64 __fastcall MiReplaceRotateWithDemandZeroNoCopy(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v5; // r15
  unsigned int v6; // r12d
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  _QWORD *v9; // r14
  unsigned __int64 v10; // r13
  struct _LIST_ENTRY **p_Blink; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  _QWORD *v19; // r15
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v27; // rdx
  __int64 v28; // rdx
  unsigned int v29; // [rsp+30h] [rbp-68h]
  int v30; // [rsp+34h] [rbp-64h] BYREF
  __int64 ProcessorFlushList; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  char v34; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v35; // [rsp+B0h] [rbp+18h]

  v29 = 0;
  v4 = 0LL;
  ProcessorFlushList = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v35 = v8;
  v9 = (_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v34 = MiLockWorkingSetShared((__int64)p_Blink, 0x7FFFFFFFF8LL, a3);
  if ( v7 <= v8 )
  {
    v32 = 0LL;
    while ( 1 )
    {
      do
      {
        if ( !v10 )
        {
          v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiLockPageTableInternal((signed __int64)p_Blink, v10, 0);
          LOBYTE(v27) = v34;
          MiUnlockOpportunisticPagesInPageTable(p_Blink, v27, v7, v8);
          if ( !v6 )
          {
            LOBYTE(v28) = 17;
            if ( MiUnlockOpportunisticPagesInPageTable(p_Blink, v28, v7, v8) )
              v6 = 1073741849;
          }
        }
        v12 = (*(_QWORD *)v7 >> 12) & 0xFFFFFFFFFFLL;
        MiUnmapFrameBuffer(a1, v7, a4);
        if ( !v5 )
        {
          ProcessorFlushList = MiGetProcessorFlushList(v14, v13);
          v5 = ProcessorFlushList;
          MiInitializeTbFlushList(ProcessorFlushList, (_DWORD)p_Blink, *(_DWORD *)(ProcessorFlushList + 12), 0, 1);
          v4 = v15 + 4136;
          MiInitializeTbFlushList(v15 + 4136, (_DWORD)p_Blink, *(_DWORD *)(v15 + 4148), 24, 1);
        }
        if ( v12 > qword_140E2D920 || ((*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
          MiInsertTbFlushEntry(v4, v12 << 12, 1LL);
        MiInsertTbFlushEntry(ProcessorFlushList, (__int64)((v7 << 25) - v32) >> 16, 1LL);
        ++v29;
        v7 += 8LL;
        if ( (v7 & 0xFFF) == 0 )
          break;
        v8 = v35;
        if ( v7 > v35 )
          break;
      }
      while ( (v7 & 0x78) != 0
           || !(unsigned int)MiWorkingSetIsContended(p_Blink)
           && !(unsigned int)MiPageTableLockIsContended((__int64)p_Blink, v10)
           && !KeShouldYieldProcessor() );
      MiFlushTbList(ProcessorFlushList);
      v18 = *(unsigned int *)(v4 + 28);
      if ( (_DWORD)v18 )
      {
        v19 = (_QWORD *)(v4 + 8 * (v18 + 5));
        do
        {
          --v19;
          MiDereferenceIoPages(1LL, *v19 >> 12, (*v19 & 0x3FFLL) + 1);
          LODWORD(v18) = v18 - 1;
        }
        while ( (_DWORD)v18 );
        *(_DWORD *)(v4 + 16) &= 0xFFFFFFDB;
        *(_WORD *)(v4 + 25) = 0;
        *(_DWORD *)(v4 + 28) = 0;
        *(_QWORD *)(v4 + 32) = 0LL;
      }
      MiReleaseProcessorFlushList(v17, v16, 0LL);
      v5 = v20;
      v21 = (*v9 >> 12) & 0xFFFFFFFFFFLL;
      v30 = v20;
      v22 = 48 * v21;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( *(__int64 *)(v22 - 0x21FFFFFFFFE8LL) < 0 );
      }
      *(_QWORD *)(v22 - 0x21FFFFFFFFE8LL) = (*(_QWORD *)(v22 - 0x21FFFFFFFFE8LL) - v29) ^ (*(_QWORD *)(v22 - 0x21FFFFFFFFE8LL) ^ (*(_QWORD *)(v22 - 0x21FFFFFFFFE8LL) - v29)) & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v22 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTableInternal((__int64)p_Blink, v10);
      LOBYTE(v23) = v34;
      MiUnlockWorkingSetShared((__int64)p_Blink, v23);
      v8 = v35;
      if ( v7 > v35 )
        break;
      v9 = (_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v29 = 0;
      v10 = 0LL;
      MiLockWorkingSetShared((__int64)p_Blink, v24, v25);
    }
  }
  return v6;
}
