/*
 * XREFs of MiCopyTradePageMetaData @ 0x140292E3C
 * Callers:
 *     MiTradePageMarkedActive @ 0x140292720 (MiTradePageMarkedActive.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x140293AD0 (MiCopyPfnEntryEx.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSmallVaStillMapsFrame @ 0x1403167FC (MiSmallVaStillMapsFrame.c)
 *     MiVaIsPageFileHash @ 0x14044DB50 (MiVaIsPageFileHash.c)
 */

__int64 __fastcall MiCopyTradePageMetaData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v5; // esi
  unsigned int v6; // edi
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  signed __int64 v11; // rcx
  signed __int64 v12; // rdx
  signed __int64 i; // rax
  __int64 v15; // rsi
  __int64 IsPageFileHash; // rax
  __int64 v17; // rdi
  volatile LONG *v18; // rbp

  v4 = *(_QWORD *)(a1 + 264);
  v5 = (*(_DWORD *)(*(_QWORD *)(a1 + 256) + 32LL) >> 22) & 3;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  v7 = *(_QWORD *)(a1 + 264);
  if ( ((*(_DWORD *)(v7 + 32) >> 22) & 3) != v5 )
    MiChangePageAttribute(*(_QWORD *)(a1 + 264), v5, 9LL);
  *(_QWORD *)(v7 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
  if ( *(_DWORD *)(a1 + 56) != 2 )
    goto LABEL_6;
  v15 = *(_QWORD *)(a1 + 176);
  IsPageFileHash = MiVaIsPageFileHash(*(_QWORD *)(a1 + 216), v15);
  v17 = IsPageFileHash;
  v18 = (volatile LONG *)(IsPageFileHash + 200);
  if ( IsPageFileHash )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(IsPageFileHash + 200));
    if ( v17 == MiVaIsPageFileHash(*(_QWORD *)(a1 + 216), v15) )
    {
      if ( (unsigned int)MiSmallVaStillMapsFrame(v15, *(_QWORD *)(a1 + 240)) )
      {
        *(_QWORD *)(a1 + 232) = v17;
LABEL_6:
        v8 = 2LL;
        if ( (*(_DWORD *)(a1 + 8) & 0x410000) != 0x410000 )
          v8 = 0LL;
        MiCopyPfnEntryEx(*(_QWORD *)(a1 + 264), *(_QWORD *)(a1 + 256), v8);
        *(_DWORD *)a1 |= 2u;
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 256) + 40LL) & 0xFFFFFFFFFFLL) == *(_QWORD *)(a1 + 240) )
        {
          v9 = *(_QWORD *)(a1 + 264);
          v10 = *(_QWORD *)(a1 + 248);
          v11 = *(_QWORD *)(v9 + 40);
          v12 = v11 ^ v10;
          for ( i = v11; ; v12 = i ^ v10 )
          {
            i = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v9 + 40),
                  v10 ^ v12 & 0xFFFFFF0000000000uLL,
                  i);
            if ( v11 == i )
              break;
            v11 = i;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 264) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        return 0LL;
      }
    }
  }
  _InterlockedIncrement(&dword_140EF9018);
  if ( v17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v18);
  _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 264) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 256) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
