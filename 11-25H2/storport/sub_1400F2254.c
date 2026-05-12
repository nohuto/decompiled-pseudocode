/*
 * XREFs of sub_1400F2254 @ 0x1400F2254
 * Callers:
 *     sub_1400D4930 @ 0x1400D4930 (sub_1400D4930.c)
 *     sub_1400E2990 @ 0x1400E2990 (sub_1400E2990.c)
 *     sub_1400E74D0 @ 0x1400E74D0 (sub_1400E74D0.c)
 *     sub_1400F2360 @ 0x1400F2360 (sub_1400F2360.c)
 *     sub_140130818 @ 0x140130818 (sub_140130818.c)
 * Callees:
 *     sub_140121120 @ 0x140121120 (sub_140121120.c)
 *     sub_140121184 @ 0x140121184 (sub_140121184.c)
 */

void __fastcall sub_1400F2254(__int64 a1)
{
  char v2; // si
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  __int64 *v6; // rdi
  __int64 *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  **(_QWORD **)(*(_QWORD *)(a1 + 1272) + 40LL) = KeQueryUnbiasedInterruptTime();
  _interlockedbittestandreset(*(volatile signed __int32 **)(a1 + 1024), 2u);
  sub_140121120(*(_QWORD *)(a1 + 1024));
  if ( (*(_BYTE *)(a1 + 136) & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 128);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 160);
      if ( v4 )
      {
        v5 = *(_DWORD *)(v4 + 76);
        if ( (v5 & 2) != 0 )
        {
          if ( (v5 & 0x20) != 0 )
            return;
          v2 = 1;
        }
      }
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 632), &LockHandle);
  v6 = (__int64 *)(a1 + 640);
  for ( i = *(__int64 **)(a1 + 640); i != v6; i = (__int64 *)*i )
  {
    if ( !v2 || *(_BYTE *)(i[13] + 1) != 1 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)i[29], 2u);
      sub_140121184(i[29]);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
