/*
 * XREFs of MiReleaseWsSwapReservationPfn @ 0x14029E62C
 * Callers:
 *     MiProcessWsInSwapFault @ 0x14029E50C (MiProcessWsInSwapFault.c)
 *     MiInPageSingleKernelStack @ 0x14029F764 (MiInPageSingleKernelStack.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReleaseWsSwapReservationPfn(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  int v5; // edi
  int v6; // r10d
  _DWORD *v7; // rcx
  unsigned __int8 v8; // r9
  unsigned __int64 v9; // rcx
  _DWORD *SubsectionFromPte; // r8
  ULONG_PTR BugCheckParameter4; // r9

  v2 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 && (*(_BYTE *)(BugCheckParameter2 + 16) & 0xC) != 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 8) == 0 )
    {
      v2 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( (v2 & 8) != 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 16) &= ~8uLL;
      }
      else
      {
        v4 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (v2 & 4) != 0 )
          v4 = *(_QWORD *)(BugCheckParameter2 + 16);
        v2 = v4;
      }
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
    }
    v5 = *(_DWORD *)(BugCheckParameter2 + 32);
    v6 = 1024;
    if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
    {
      v9 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( (v9 & 0x400000000000400LL) == 0x400 )
      {
        SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(v9);
        if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
          KeBugCheckEx(0x1Au, 0x8840uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
      }
    }
    if ( *(__int64 *)(BugCheckParameter2 + 40) < 0
      && (*(_DWORD *)(BugCheckParameter2 + 16) & v6) != 0
      && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) == 0 )
    {
      v7 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(BugCheckParameter2 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)v7 + 56LL) & 0x20) == 0 && ((unsigned __int8)v7[38] & v8) == 0 )
        MiSetSubsectionModified(v7, 0LL);
    }
    if ( (v5 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(BugCheckParameter2)
      && (v5 & 0x100000) == 0
      && (*(_BYTE *)(BugCheckParameter2 + 16) & 8) != 0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~8uLL;
    }
    *(_DWORD *)(BugCheckParameter2 + 32) = v5 | 0x100000;
  }
  return v2;
}
