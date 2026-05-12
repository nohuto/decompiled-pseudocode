/*
 * XREFs of sub_1400F157C @ 0x1400F157C
 * Callers:
 *     sub_1400CC1F4 @ 0x1400CC1F4 (sub_1400CC1F4.c)
 *     sub_1400FA6EC @ 0x1400FA6EC (sub_1400FA6EC.c)
 *     sub_1400FAAB4 @ 0x1400FAAB4 (sub_1400FAAB4.c)
 * Callees:
 *     sub_1400293C8 @ 0x1400293C8 (sub_1400293C8.c)
 */

void __fastcall sub_1400F157C(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  int v8; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 632), &LockHandle);
  v6 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)(v6 + 8) != a2 + 24 || (v7 = *(_QWORD **)(a2 + 32), *v7 != a2 + 24) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = --*(_DWORD *)(a1 + 656);
  sub_1400293C8(a1 + 664, *(unsigned int *)(a2 + 56));
  if ( a3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v8 )
    KeSetEvent((PRKEVENT)(a1 + 256), 0, 0);
}
