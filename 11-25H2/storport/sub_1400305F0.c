/*
 * XREFs of sub_1400305F0 @ 0x1400305F0
 * Callers:
 *     sub_140030360 @ 0x140030360 (sub_140030360.c)
 *     sub_140030450 @ 0x140030450 (sub_140030450.c)
 *     sub_14004DE10 @ 0x14004DE10 (sub_14004DE10.c)
 *     sub_1400772D0 @ 0x1400772D0 (sub_1400772D0.c)
 *     sub_14007A2E0 @ 0x14007A2E0 (sub_14007A2E0.c)
 *     sub_14007A7B0 @ 0x14007A7B0 (sub_14007A7B0.c)
 *     sub_140095F04 @ 0x140095F04 (sub_140095F04.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400305F0(__int64 a1, char a2)
{
  bool v4; // zf
  __int64 v5; // r14
  KSPIN_LOCK *v6; // rcx
  int v7; // esi
  ULONG v8; // ebp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_BYTE *)(a1 + 3368) == 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v5 = 500LL;
  v6 = (KSPIN_LOCK *)(a1 + 48);
  if ( v4 )
    v5 = 2000LL;
  v7 = 1;
  if ( v4 )
    v7 = 4;
  v8 = 50;
  if ( v4 )
    v8 = 300;
  LockHandle.LockQueue = 0LL;
  KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
  if ( (*(_BYTE *)(a1 + 505) & 0x20) != 0 || a2 )
  {
    KeSetCoalescableTimer((PKTIMER)(a1 + 1056), (LARGE_INTEGER)(-10000 * v5), v5, v8, (PKDPC)(a1 + 1120));
    *(_DWORD *)(*(_QWORD *)(a1 + 560) + 4LL) = v7;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 504), 0xDu);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
