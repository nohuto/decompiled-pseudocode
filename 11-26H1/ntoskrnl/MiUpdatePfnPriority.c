/*
 * XREFs of MiUpdatePfnPriority @ 0x140298800
 * Callers:
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MiUpdatePrefetchPriority @ 0x1403169DC (MiUpdatePrefetchPriority.c)
 *     MiLockVirtualMemoryVa @ 0x14031AC40 (MiLockVirtualMemoryVa.c)
 *     MiActOnTransitionPte @ 0x14033E930 (MiActOnTransitionPte.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14043ACA8 (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x140298DC0 (MiRelinkStandbyPage.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 */

__int64 __fastcall MiUpdatePfnPriority(unsigned __int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // r11d
  unsigned __int64 v5; // r10
  unsigned __int8 v6; // bl
  unsigned int v7; // r9d
  char v9; // al
  __int64 v10; // rax

  v3 = *(_DWORD *)(a1 + 32);
  v4 = a2;
  v5 = a1;
  v6 = -1;
  if ( (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_29;
  if ( (*(_DWORD *)(a1 + 32) & 0x8000000) == 0 )
    goto LABEL_3;
  if ( a1 < 0xFFFFDE0000000000uLL
    || a1 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
    || (unsigned int)MiIsDecayPfn((__int64)(a1 + 0x220000000000LL) / 48) )
  {
LABEL_29:
    v7 = 5;
    goto LABEL_4;
  }
  if ( (v3 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v5) == 9 )
  {
    v7 = 5;
    goto LABEL_4;
  }
LABEL_3:
  v7 = HIBYTE(v3) & 7;
LABEL_4:
  if ( v4 == v7 || v4 < v7 && (!a3 || v7 > 5 && *(__int64 *)(v5 + 40) < 0) )
    return v6;
  v9 = *(_BYTE *)(v5 + 34) & 7;
  if ( v9 != 2 )
  {
    if ( v9 != 6 || (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || v4 >= v7 )
    {
      if ( (*(_QWORD *)(v5 + 40) & 0x20000000000000LL) == 0 )
        *(_DWORD *)(v5 + 32) = ((char)v4 << 24) ^ (*(_DWORD *)(v5 + 32) ^ ((char)v4 << 24)) & 0xF8FFFFFF;
      if ( v7 < 5 )
      {
        v6 = -1;
        if ( v4 == 5 )
          return 0;
      }
      else if ( v4 < 5 )
      {
        return 7LL;
      }
    }
    return v6;
  }
  if ( !v7
    && (*(_DWORD *)(v5 + 16) & 0x400LL) == 0
    && (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) == 0 )
  {
    v10 = *(_QWORD *)(v5 + 16);
    if ( (v10 & 8) != 0
      && (unsigned __int16)v10 >> 12 == *(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock
                                                              + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL))
                                                  + 1300LL) )
    {
      return v6;
    }
  }
  MiRelinkStandbyPage(v5, v4);
  return 255LL;
}
