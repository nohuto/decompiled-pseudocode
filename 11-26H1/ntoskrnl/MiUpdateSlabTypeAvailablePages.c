/*
 * XREFs of MiUpdateSlabTypeAvailablePages @ 0x14036BE78
 * Callers:
 *     MiRemoveSlabEntry @ 0x1402A8C10 (MiRemoveSlabEntry.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1402ABA58 (MiGetSlabRepurposedStandbyListWorker.c)
 *     MiFreePageToSlabEntry @ 0x14036BB5C (MiFreePageToSlabEntry.c)
 *     MiInsertSlabEntry @ 0x1404BCC44 (MiInsertSlabEntry.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiUpdateSlabTypeAvailablePages(__int64 a1, int a2, signed __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  int v7; // esi
  volatile LONG *v8; // rbp
  struct _KEVENT *v9; // rbx

  if ( a2 == 8 )
  {
    v3 = 0;
    if ( a3 > 0 )
    {
      v5 = 1LL;
      if ( a3 != 1 )
        v5 = a3;
      v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 22080), v5);
      v7 = v6 == 0;
      if ( v6 < 1056 && a3 + v6 >= 1056 )
        v7 |= 2u;
      if ( v7 )
      {
        v8 = (volatile LONG *)(a1 + 16576);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16576));
        v9 = (struct _KEVENT *)(a1 + 22112);
        do
        {
          if ( _bittest(&v7, v3) )
          {
            KeSetEvent(v9 - 1, 0, 0);
            ++v9->Header.LockNV;
          }
          ++v3;
          v9 = (struct _KEVENT *)((char *)v9 + 32);
        }
        while ( v3 < 2 );
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      }
    }
    else if ( a3 == -1 )
    {
      _InterlockedDecrement64((volatile signed __int64 *)(a1 + 22080));
    }
    else
    {
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 22080), a3);
    }
  }
}
