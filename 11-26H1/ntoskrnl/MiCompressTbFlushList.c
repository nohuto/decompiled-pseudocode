/*
 * XREFs of MiCompressTbFlushList @ 0x1404D427C
 * Callers:
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiGetPteFromCopyList @ 0x1402849F0 (MiGetPteFromCopyList.c)
 *     MiClearPteAccessed @ 0x1402E1A30 (MiClearPteAccessed.c)
 *     MiMakePteClean @ 0x14031C2D0 (MiMakePteClean.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiTrimPteWorker @ 0x140322C20 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140323430 (MiTrimPte.c)
 *     MiDecommitAddToList @ 0x140325550 (MiDecommitAddToList.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiCompressTbFlushList(__int64 a1)
{
  unsigned __int64 result; // rax
  int v2; // r11d
  unsigned __int64 *v3; // r8
  unsigned int v4; // ebx
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v7; // r10
  __int64 v8; // rbp
  _UNKNOWN *retaddr; // [rsp+10h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = 0;
  v3 = (unsigned __int64 *)(a1 + 40);
  v4 = 1;
  if ( *(_DWORD *)(a1 + 28) > 1u )
  {
    do
    {
      v5 = *v3;
      v6 = *v3 & 0x3FF;
      v7 = *(_QWORD *)(a1 + 8LL * v4 + 40);
      v8 = 4096LL << (9 * ((unsigned __int8)(v7 >> 10) & 3u));
      if ( ((v7 >> 10) & 3) == ((*v3 >> 10) & 3)
        && (v7 & 0xFFFFFFFFFFFFF000uLL) - v8 * (v6 + 1) == (v5 & 0xFFFFFFFFFFFFF000uLL)
        && v6 != 1023 )
      {
        if ( v6 + (v7 & 0x3FF) + 1 > 0x3FF )
        {
          *(_QWORD *)(a1 + 8LL * v4 + 40) = v8 * (1023 - v6)
                                          + ((v7 - (1023 - v6)) ^ (v7 ^ (v7 - (1023 - v6))) & 0xFFFFFFFFFFFFFC00uLL);
          *v3++ |= 0x3FFuLL;
          *v3 = *(_QWORD *)(a1 + 8LL * v4 + 40);
        }
        else
        {
          *v3 = (v5 + v7 + 1) ^ (v5 ^ (v5 + v7 + 1)) & 0xFFFFFFFFFFFFFC00uLL;
          ++v2;
        }
      }
      else
      {
        *++v3 = v7;
      }
      result = *(unsigned int *)(a1 + 28);
      ++v4;
    }
    while ( v4 < (unsigned int)result );
    if ( v2 )
    {
      result = (unsigned int)(result - v2);
      *(_DWORD *)(a1 + 28) = result;
    }
  }
  return result;
}
