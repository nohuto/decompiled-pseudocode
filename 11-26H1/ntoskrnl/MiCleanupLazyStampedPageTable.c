/*
 * XREFs of MiCleanupLazyStampedPageTable @ 0x14029F55C
 * Callers:
 *     MiEvictPageTableLock @ 0x14029DEE8 (MiEvictPageTableLock.c)
 *     MiTerminateWsle @ 0x140326960 (MiTerminateWsle.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

__int64 __fastcall MiCleanupLazyStampedPageTable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 ProcessorFlushList; // rdi
  int v5; // r13d
  __int64 v6; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  __int64 HasShadow; // rax
  __int64 v12; // rax
  BOOL v13; // eax
  signed __int32 v14[18]; // [rsp+0h] [rbp-48h] BYREF

  v3 = a1;
  ProcessorFlushList = 0LL;
  _InterlockedOr(v14, 0);
  v5 = KiTbFlushTimeStamp;
  v6 = 512LL;
  v7 = a2 << 25 >> 16;
  do
  {
    v8 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      a2 = *(_QWORD *)v7;
      if ( (v8 & 1) != 0 && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        HasShadow = MiPteHasShadow(a1, a2, a3);
        if ( HasShadow )
        {
          a1 = *(_QWORD *)(HasShadow + 1288);
          if ( a1 )
          {
            v12 = *(_QWORD *)(a1 + 8 * ((v7 >> 3) & 0x1FF));
            if ( (v12 & 0x20) != 0 )
              a2 |= 0x20uLL;
            v8 = a2 | 0x42;
            if ( (v12 & 0x42) == 0 )
              v8 = a2;
          }
        }
      }
    }
    v9 = v8;
    if ( qword_140E2D8C0 && (v8 & 0x10) == 0 )
      v9 = v8 & qword_140E2D8C8;
    result = v9 >> 31;
    if ( (_DWORD)result )
    {
      a1 = (unsigned int)(v5 - result);
      if ( (unsigned int)a1 <= 2 && ((result & 1) != 0 || (unsigned int)a1 < 2) )
      {
        if ( !ProcessorFlushList )
        {
          ProcessorFlushList = MiGetProcessorFlushList(a1, a2);
          *(_DWORD *)(ProcessorFlushList + 16) = 0;
          *(_DWORD *)(ProcessorFlushList + 20) = 1;
          *(_QWORD *)ProcessorFlushList = v3;
          *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v3 + 184) & 0x40) != 0;
          if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
            || (struct _LIST_ENTRY **)v3 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            v13 = (*(_DWORD *)(v3 + 184) & 0xF) == 0;
          }
          else
          {
            *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
            v13 = 0;
          }
          *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
          *(_DWORD *)(ProcessorFlushList + 8) = v13;
          *(_WORD *)(ProcessorFlushList + 25) = 0;
          *(_DWORD *)(ProcessorFlushList + 28) = 0;
          *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
          *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
        }
        result = MiInsertTbFlushEntry(ProcessorFlushList, (__int64)(v7 << 25) >> 16, 1LL);
      }
    }
    if ( v8 )
    {
      result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      *(_QWORD *)v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    }
    v7 += 8LL;
    --v6;
  }
  while ( v6 );
  if ( ProcessorFlushList )
  {
    MiFlushTbList(ProcessorFlushList);
    return MiReleaseProcessorFlushList();
  }
  return result;
}
