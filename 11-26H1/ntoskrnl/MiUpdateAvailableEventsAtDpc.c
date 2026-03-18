/*
 * XREFs of MiUpdateAvailableEventsAtDpc @ 0x1403E5C00
 * Callers:
 *     MiInsertPagesInList @ 0x1402CD600 (MiInsertPagesInList.c)
 *     MiInsertPageLockStandbyList @ 0x1402DEE20 (MiInsertPageLockStandbyList.c)
 *     MiDecreaseAvailablePages @ 0x1402F8CD0 (MiDecreaseAvailablePages.c)
 *     MiUpdatePageThresholdsDpc @ 0x1403E4820 (MiUpdatePageThresholdsDpc.c)
 *     MiIncreaseAvailablePages @ 0x1403E59D0 (MiIncreaseAvailablePages.c)
 *     MiUpdateAvailableEvents @ 0x140704D10 (MiUpdateAvailableEvents.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
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
