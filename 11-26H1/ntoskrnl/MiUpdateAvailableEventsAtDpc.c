/*
 * XREFs of MiUpdateAvailableEventsAtDpc @ 0x1403E8DF0
 * Callers:
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiInsertPageLockStandbyList @ 0x1402C0C30 (MiInsertPageLockStandbyList.c)
 *     MiDecreaseAvailablePages @ 0x1402DAD50 (MiDecreaseAvailablePages.c)
 *     MiUpdatePageThresholdsDpc @ 0x1403E7A10 (MiUpdatePageThresholdsDpc.c)
 *     MiIncreaseAvailablePages @ 0x1403E8BC0 (MiIncreaseAvailablePages.c)
 *     MiUpdateAvailableEvents @ 0x1407099E0 (MiUpdateAvailableEvents.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 */

void __fastcall MiUpdateAvailableEventsAtDpc(__int64 a1)
{
  volatile LONG *v1; // rdi
  unsigned __int64 v3; // rsi
  struct _KEVENT *v4; // rcx
  struct _KEVENT *v5; // rcx

  v1 = (volatile LONG *)(a1 + 16576);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16576));
  v3 = *(_QWORD *)(a1 + 22464);
  v4 = *(struct _KEVENT **)(a1 + 352);
  if ( v3 <= *(_QWORD *)(a1 + 17024) )
    KeSetEvent(v4, 0, 0);
  else
    KeResetEvent(v4);
  v5 = *(struct _KEVENT **)(a1 + 360);
  if ( v3 <= *(_QWORD *)(a1 + 17032) )
    KeResetEvent(v5);
  else
    KeSetEvent(v5, 0, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
