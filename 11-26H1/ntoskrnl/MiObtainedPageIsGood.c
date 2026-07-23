/*
 * XREFs of MiObtainedPageIsGood @ 0x14042B75C
 * Callers:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiDemoteLargeFreePage @ 0x14042B4F0 (MiDemoteLargeFreePage.c)
 *     MiPreemptivePageDemote @ 0x14042B6E8 (MiPreemptivePageDemote.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x1403D04D4 (MiInsertPossiblyBadPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiObtainedPageIsGood(__int64 a1)
{
  unsigned int v1; // edi
  BOOL v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // rdx
  ULONG_PTR v6; // rsi
  unsigned __int8 CurrentIrql; // bl

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 32) & 0x40000000) != 0
    || (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 && (*(_QWORD *)(a1 + 40) & 0x20000000000LL) != 0 )
  {
    v1 = 0;
    v3 = (*(_QWORD *)(a1 + 16) & 0x3E0LL) != 0;
    v4 = a1 + 0x220000000000LL;
    v5 = (unsigned __int128)(v4 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v6 = v4 / 48;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v5) = 2;
        LOBYTE(v4) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v4, v5);
      }
    }
    MiInsertPossiblyBadPage(v6, v3 + 1);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  return v1;
}
