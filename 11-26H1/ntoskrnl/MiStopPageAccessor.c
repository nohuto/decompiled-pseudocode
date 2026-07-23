/*
 * XREFs of MiStopPageAccessor @ 0x140487B48
 * Callers:
 *     MiPageListCollision @ 0x14048758C (MiPageListCollision.c)
 *     MiInitializeNewUltraHugeContext @ 0x1404875D8 (MiInitializeNewUltraHugeContext.c)
 *     MiHugeRangeFreeToZero @ 0x1404878B0 (MiHugeRangeFreeToZero.c)
 *     MiDereferenceHugeContext @ 0x1404EFE70 (MiDereferenceHugeContext.c)
 *     MiReleaseScrubProtection @ 0x140710C10 (MiReleaseScrubProtection.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiLocatePageCollisionByPfn @ 0x14028A7B8 (MiLocatePageCollisionByPfn.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiHugePfnPartition @ 0x140487CC0 (MiHugePfnPartition.c)
 *     MiStopHugePageAccessor @ 0x140487CF4 (MiStopHugePageAccessor.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiStopPageAccessor(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rsi
  ULONG_PTR BugCheckParameter4; // r10
  __int64 v4; // rbp
  ULONG_PTR v5; // r10
  unsigned int v6; // ebx
  int PfnPageSizeIndex; // ecx
  __int64 v9; // rbx

  if ( BugCheckParameter2 < 0xFFFFDE0000000000uLL || BugCheckParameter2 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL )
  {
    v9 = (__int64)(BugCheckParameter2 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3;
    v2 = MiStopHugePageAccessor(BugCheckParameter2);
    v4 = MiHugePfnPartition(BugCheckParameter2);
    v6 = MiPageToNode((unsigned __int64)(v9 & 0x3FFFFF) << 18);
    PfnPageSizeIndex = 0;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 32) &= ~0x80000u;
    v2 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( !MiLocatePageCollisionByPfn(v2, (__int64)(BugCheckParameter2 + 0x220000000000LL) / 48) )
      KeBugCheckEx(0x1Au, 0x1502uLL, BugCheckParameter2, v2, BugCheckParameter4);
    _mm_lfence();
    *(_QWORD *)(BugCheckParameter2 + 16) = MiMakeDemandZeroPte(4);
    v4 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
    v6 = MiPageToNode(v5);
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(BugCheckParameter2);
  }
  _InterlockedAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(56320LL * v6 + *(_QWORD *)(v4 + 16) + 14192) + 80LL),
    -MiPageSizes[PfnPageSizeIndex]);
  return v2;
}
