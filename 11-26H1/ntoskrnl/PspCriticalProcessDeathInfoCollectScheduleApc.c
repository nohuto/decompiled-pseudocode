/*
 * XREFs of PspCriticalProcessDeathInfoCollectScheduleApc @ 0x140800794
 * Callers:
 *     PspCriticalProcessDeathInfoCollect @ 0x1408006B0 (PspCriticalProcessDeathInfoCollect.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeRemoveQueueApc @ 0x140460EE0 (KeRemoveQueueApc.c)
 *     PsGetThreadTeb @ 0x14047EB60 (PsGetThreadTeb.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PspCriticalProcessDeathInfoCollectScheduleApc(__int64 a1)
{
  void *ThreadTeb; // rax
  NTSTATUS v3; // eax
  NTSTATUS v4; // edi
  _BYTE v6[88]; // [rsp+40h] [rbp-88h] BYREF
  struct _KEVENT Event; // [rsp+98h] [rbp-30h] BYREF
  __int64 v8; // [rsp+B0h] [rbp-18h]
  LARGE_INTEGER Timeout; // [rsp+D8h] [rbp+10h] BYREF

  ThreadTeb = (void *)PsGetThreadTeb(*(_QWORD *)(a1 + 56));
  RtlCopyFromUser((void *)(a1 + 64), ThreadTeb, 0x38uLL);
  memset_0(v6, 0, 0x70uLL);
  v8 = a1 + 8;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeApc(
    (__int64)v6,
    *(_QWORD *)(a1 + 56),
    3,
    (__int64)PspCriticalProcessDeathInfoCollectApc,
    0LL,
    0LL,
    0,
    0LL);
  LOBYTE(v3) = KeInsertQueueApc((__int64)v6, 0LL, 0LL, 0);
  if ( (_BYTE)v3 )
  {
    Timeout.QuadPart = -1000000LL;
    v3 = KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
    v4 = v3;
    if ( v3 == 258 )
    {
      LOBYTE(v3) = KeRemoveQueueApc((__int64)v6);
      if ( !(_BYTE)v3 )
      {
        v3 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v4 = v3;
      }
    }
    if ( v4 )
      *(_DWORD *)(a1 + 120) = 6;
    else
      *(_DWORD *)(a1 + 24) |= 1u;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 5;
  }
  return v3;
}
