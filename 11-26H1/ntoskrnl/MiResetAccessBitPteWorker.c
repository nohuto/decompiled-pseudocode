/*
 * XREFs of MiResetAccessBitPteWorker @ 0x14029BA28
 * Callers:
 *     MiResetAccessBitsVpabCallback @ 0x1404C15A0 (MiResetAccessBitsVpabCallback.c)
 * Callees:
 *     MiGetVaAge @ 0x14029BC40 (MiGetVaAge.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x14029C380 (MiAcquirePrcbAgeTrimLists.c)
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiClearPteAccessed @ 0x1402E1A30 (MiClearPteAccessed.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 */

__int64 __fastcall MiResetAccessBitPteWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  char VaAge; // r10
  int v10; // r11d
  int v11; // r8d
  int v12; // r15d
  __int64 v13; // rbp
  int v14; // r12d
  int v15; // r14d
  __int64 result; // rax
  unsigned int v17; // r9d
  unsigned int v18; // r9d
  ULONG *v19; // rax

  VaAge = MiGetVaAge(a1, a3);
  v11 = 1;
  if ( VaAge == 7
    && ((v17 = *(_DWORD *)(a4 + 32), (*(_QWORD *)(a4 + 40) & 0x20000000000000LL) == 0)
     && ((*(_DWORD *)(a4 + 32) & 0x8000000) == 0
      || a4 >= 0xFFFFDE0000000000uLL
      && a4 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
      && !(unsigned int)MiIsDecayPfn((__int64)(a4 + 0x220000000000LL) / 48)
      && ((v17 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(a4) != 9))
      ? (v18 = HIBYTE(v17) & 7)
      : (v18 = 5),
        (*(_DWORD *)(a1 + 184) & 0xF) == (_BYTE)v11
      ? (v19 = &MiSystemPartition)
      : (v19 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174))),
        v18 < v19[4540]) )
  {
    v12 = 0;
  }
  else
  {
    v12 = v11;
    if ( (unsigned __int8)(VaAge - v11) <= 5u )
      MiSetVaAgeListEx(a1, v10, v11, 0, 0);
  }
  v13 = 0LL;
  v14 = 0;
  if ( (a6 & 4) != 0 )
  {
    v14 = 2;
  }
  else if ( *(_DWORD *)(a5 + 4) )
  {
    if ( !*(_QWORD *)(a5 + 8) )
      MiAcquirePrcbAgeTrimLists(a1, a5 + 8);
    v13 = *(_QWORD *)(a5 + 8);
  }
  v15 = v14 | 1;
  if ( !*(_DWORD *)a5 )
    v15 = v14;
  result = MiClearPteAccessed(a1, a4, a2, v13, v15);
  if ( (_DWORD)result && v12 && (v15 & 2) == 0 && *(_DWORD *)a5 && !v13 )
    return MiLogPageAccess(a1, a2);
  return result;
}
