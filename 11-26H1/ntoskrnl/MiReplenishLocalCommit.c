/*
 * XREFs of MiReplenishLocalCommit @ 0x14045BAD8
 * Callers:
 *     MiChargeCommitSlow @ 0x1402D6E68 (MiChargeCommitSlow.c)
 * Callees:
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MiUpdateCommitCounts @ 0x14045BB84 (MiUpdateCommitCounts.c)
 */

int __fastcall MiReplenishLocalCommit(__int64 a1, __int64 a2, signed __int64 a3, __int64 a4)
{
  signed __int64 v7; // rax
  __int64 i; // rdx
  unsigned __int64 v9; // r8

  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 23104), a3 + a4, a3);
  if ( a3 == v7 )
  {
    MiUpdateCommitCounts(a1, a3, a4, 0LL);
    _m_prefetchw((const void *)(a2 + 35800));
    for ( i = *(unsigned int *)(a2 + 35800); (unsigned __int64)(i + a4) <= 0x200; i = (int)v7 )
    {
      LODWORD(v7) = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 35800), i + a4, i);
      if ( (int)v7 == i )
        return v7;
    }
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 23168), -a4);
    v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 23104), -a4);
    LODWORD(v7) = MiSignalCommitSignals(a1, v9 - a4, v9);
  }
  return v7;
}
