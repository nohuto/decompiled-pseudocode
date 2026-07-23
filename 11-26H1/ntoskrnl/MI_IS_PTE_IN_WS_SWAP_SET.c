/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x14046BF10
 * Callers:
 *     MiAbandonPrivatePfn @ 0x1402ED8CC (MiAbandonPrivatePfn.c)
 *     MiDecommitAddToList @ 0x140325550 (MiDecommitAddToList.c)
 *     MiDecommitHandleTransitionPte @ 0x14033FE54 (MiDecommitHandleTransitionPte.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140362970 (MiDecommitHandlePageFileFormatPte.c)
 *     MiReservePageFileSpace @ 0x140368E88 (MiReservePageFileSpace.c)
 *     MiAddToReservationCluster @ 0x14046BBE0 (MiAddToReservationCluster.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 */

__int64 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // r11
  unsigned int v4; // r10d
  _KPROCESS *v6; // rax
  __int16 v7; // dx
  unsigned __int64 v8; // r9
  unsigned __int64 KernelWaitTime; // rax
  __int64 v10; // rax

  v2 = *a2;
  v3 = a1;
  v4 = 0;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
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
        LOWORD(v2) = v7 | 0x42;
        if ( (v10 & 0x42) == 0 )
          LOWORD(v2) = v7;
      }
    }
  }
  if ( (*(_WORD *)(*(_QWORD *)(v3 + 8LL * ((unsigned __int16)v2 >> 12) + 22304) + 172LL) & 0x10) != 0
    || (*(_WORD *)(*(_QWORD *)(v3 + 8LL * ((unsigned __int16)v2 >> 12) + 22304) + 172LL) & 0x20) != 0 && (v2 & 4) != 0 )
  {
    return 1;
  }
  return v4;
}
