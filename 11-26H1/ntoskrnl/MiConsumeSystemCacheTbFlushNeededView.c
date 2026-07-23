/*
 * XREFs of MiConsumeSystemCacheTbFlushNeededView @ 0x1402A29D8
 * Callers:
 *     MiObtainSystemCacheView @ 0x1402C6BA0 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiRebalanceSystemCacheFreedViews @ 0x1402A2790 (MiRebalanceSystemCacheFreedViews.c)
 *     MiInsertReadiedSystemCacheViews @ 0x1402A28A4 (MiInsertReadiedSystemCacheViews.c)
 *     MiTbFlushListPromoteThreshold @ 0x1402A41A0 (MiTbFlushListPromoteThreshold.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

__int64 __fastcall MiConsumeSystemCacheTbFlushNeededView(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // r8
  _QWORD *v4; // rax
  unsigned int v5; // r9d
  __int64 ProcessorFlushList; // rsi
  unsigned __int64 v9; // r12
  unsigned int v10; // r14d
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-50h] BYREF
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h]

  v2 = a1 + 2560;
  v3 = 0LL;
  v4 = (_QWORD *)(a1 + 2576);
  v17 = 0LL;
  v5 = 0;
  v18 = 0LL;
  while ( 1 )
  {
    v3 += *v4;
    if ( v3 >= a2 )
      break;
    ++v5;
    v4 += 4;
    if ( v5 >= 4 )
      return 0LL;
  }
  *(_QWORD *)&v18 = 0LL;
  *((_QWORD *)&v17 + 1) = &v17;
  *(_QWORD *)&v17 = &v17;
  ProcessorFlushList = MiGetProcessorFlushList(a1, a2);
  MiInitializeTbFlushList(ProcessorFlushList, a1 + 22592, *(_DWORD *)(ProcessorFlushList + 12), 8, 1);
  v9 = MiTbFlushListPromoteThreshold();
  v10 = 0;
  while ( 1 )
  {
    v11 = *(_QWORD **)v2;
    if ( *(_QWORD *)v2 == v2 )
      goto LABEL_14;
    if ( v11[1] != v2 )
      goto LABEL_10;
    v12 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 )
      goto LABEL_10;
    *(_QWORD *)v2 = v12;
    *(_QWORD *)(v12 + 8) = v2;
    --*(_QWORD *)(v2 + 16);
    v11[4] = v11[4] & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
    MiInsertTbFlushEntry(ProcessorFlushList, v11[2] & 0xFFFFFFFFFFFFF000uLL, 64LL);
    v13 = (_QWORD *)*((_QWORD *)&v17 + 1);
    if ( **((__int128 ***)&v17 + 1) != &v17 )
      goto LABEL_10;
    v11[1] = *((_QWORD *)&v17 + 1);
    *v11 = &v17;
    *v13 = v11;
    *(_QWORD *)&v18 = v18 + 1;
    *((_QWORD *)&v17 + 1) = v11;
    if ( *(_DWORD *)(ProcessorFlushList + 28) == *(_DWORD *)(ProcessorFlushList + 12)
      || *(_QWORD *)(ProcessorFlushList + 32) + 1LL >= v9 )
    {
      v10 = 3;
LABEL_14:
      ++v10;
      v2 += 32LL;
      if ( v10 >= 4 )
        break;
    }
  }
  MiFlushTbList(ProcessorFlushList);
  v14 = v17;
  if ( *(__int128 **)(v17 + 8) != &v17 || (v15 = *(_QWORD *)v17, *(_QWORD *)(*(_QWORD *)v17 + 8LL) != (_QWORD)v17) )
LABEL_10:
    __fastfail(3u);
  *(_QWORD *)&v17 = *(_QWORD *)v17;
  *(_QWORD *)(v15 + 8) = &v17;
  *(_QWORD *)&v18 = v18 - 1;
  MiInsertReadiedSystemCacheViews(a1, &v17);
  MiReleaseProcessorFlushList();
  _InterlockedOr(v16, 0);
  MiRebalanceSystemCacheFreedViews(a1, KiTbFlushTimeStamp, 0);
  return v14;
}
