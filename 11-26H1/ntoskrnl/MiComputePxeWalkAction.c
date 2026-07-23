/*
 * XREFs of MiComputePxeWalkAction @ 0x14032A400
 * Callers:
 *     MiWalkPageTablesEvaluatePte @ 0x140329B60 (MiWalkPageTablesEvaluatePte.c)
 * Callees:
 *     MiGetSystemCacheReverseMap @ 0x1402C6730 (MiGetSystemCacheReverseMap.c)
 *     MiWalkLeap @ 0x1403280E0 (MiWalkLeap.c)
 *     MiIsPageAGapPage @ 0x14033BB90 (MiIsPageAGapPage.c)
 *     MiMakeSystemLeavesNonZero @ 0x1405129C0 (MiMakeSystemLeavesNonZero.c)
 */

__int64 __fastcall MiComputePxeWalkAction(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v10; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v13; // rcx
  int v14; // r15d
  __int64 SystemCacheReverseMap; // rax

  v4 = *(_QWORD *)a2;
  v6 = a3;
  if ( a3 == 3 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v10 = *(_QWORD *)a2;
    if ( (v4 & 1) != 0 && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v13 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v13 & 0x20) != 0 )
            v10 = v4 | 0x20;
          v4 = v10 | 0x42;
          if ( (v13 & 0x42) == 0 )
            v4 = v10;
        }
      }
    }
  }
  if ( (v4 & 1) == 0 )
    return (unsigned int)((*(_DWORD *)a1 & 1) != 0) + 1;
  v14 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x4000) != 0
    && ((unsigned int)MiIsPageAGapPage((v4 >> 12) & 0xFFFFFFFFFFLL, (unsigned int)v6)
     || (v4 & 0x800) == 0 && (v4 & 0x42) == 0) )
  {
    return (unsigned int)((*(_DWORD *)a1 & 1) != 0) + 1;
  }
  if ( !(_DWORD)v6 )
    return 2LL;
  if ( (v4 & 0x80u) != 0LL )
  {
    if ( (v14 & 1) != 0 )
      return 2LL;
    result = MiWalkLeap(a1, a2, (unsigned int)v6);
    if ( (_DWORD)result == 2 )
      return 1LL;
  }
  else
  {
    if ( a2 == 0xFFFFF6FB7DBEDF68uLL
      || (v14 & 0x100) != 0
      && qword_140E36180[0] != (PVOID)qword_140E36198
      && (PVOID)((v4 >> 12) & 0xFFFFFFFFFFLL) == qword_140E36180[v6] )
    {
      return 1LL;
    }
    if ( (v14 & 1) == 0 )
    {
      if ( (*(_QWORD *)(48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        return 2LL;
      if ( (_DWORD)v6 == 1 && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 184LL) & 0xF) == 1 )
      {
        SystemCacheReverseMap = MiGetSystemCacheReverseMap((__int64)(a2 << 25) >> 16 << 25 >> 16);
        if ( !SystemCacheReverseMap
          || ((*(_QWORD *)(SystemCacheReverseMap + 32) >> 6) & 0x3FFLL) != *(_WORD *)(*(_QWORD *)(a1 + 32) + 174LL) )
        {
          return 2LL;
        }
      }
    }
    if ( a4 != 3
      || (_DWORD)v6 == 1
      && (*(_DWORD *)a1 & 9) == 8
      && (((*(_QWORD *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 49) & 0x3FF) == 0
       || (unsigned __int8)((*(_QWORD *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 59) & 7) < (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)(a1 + 4)) >> 4)) )
    {
      return 2LL;
    }
    if ( (*(_DWORD *)a1 & 0x4000) != 0 && (int)v6 > 1 && (_DWORD)v6 == ((*(_DWORD *)(a1 + 4) >> 6) & 7) )
      MiMakeSystemLeavesNonZero(a1, a2, (unsigned int)v6);
    return 3LL;
  }
  return result;
}
