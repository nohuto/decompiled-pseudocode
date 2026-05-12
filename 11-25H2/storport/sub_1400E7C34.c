/*
 * XREFs of sub_1400E7C34 @ 0x1400E7C34
 * Callers:
 *     sub_1400BCF34 @ 0x1400BCF34 (sub_1400BCF34.c)
 *     sub_1400BD9F4 @ 0x1400BD9F4 (sub_1400BD9F4.c)
 *     sub_1400E00D0 @ 0x1400E00D0 (sub_1400E00D0.c)
 *     sub_1400E5964 @ 0x1400E5964 (sub_1400E5964.c)
 * Callees:
 *     sub_140034560 @ 0x140034560 (sub_140034560.c)
 *     sub_140133810 @ 0x140133810 (sub_140133810.c)
 */

__int64 __fastcall sub_1400E7C34(__int64 a1, _QWORD *a2)
{
  int v4; // edx
  int v5; // edi
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 632), &LockHandle);
  v4 = *(_DWORD *)(a1 + 668);
  if ( *(_DWORD *)(a1 + 664) != v4 || (v5 = sub_140133810(a1 + 664, (unsigned int)(v4 + 32)), v5 >= 0) )
  {
    v5 = sub_140034560(a1 + 664, a2 + 5);
    if ( v5 >= 0 )
    {
      v6 = *(_QWORD **)(a1 + 648);
      v7 = a2 + 3;
      if ( *v6 != a1 + 640 )
        __fastfail(3u);
      *v7 = a1 + 640;
      a2[4] = v6;
      *v6 = v7;
      *(_QWORD *)(a1 + 648) = v7;
      if ( (*(_DWORD *)(a1 + 656))++ != -1 )
        KeClearEvent((PRKEVENT)(a1 + 256));
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)v5;
}
