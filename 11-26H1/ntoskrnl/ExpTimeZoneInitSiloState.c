/*
 * XREFs of ExpTimeZoneInitSiloState @ 0x1408364F8
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407EF070 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     ZwSetSystemTime @ 0x140726BD0 (ZwSetSystemTime.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExpReadTimeZoneInformation @ 0x140836298 (ExpReadTimeZoneInformation.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A66A6C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A66AE4 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpTimeZoneInitSiloState(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *v4; // rdi
  void *Pool2; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = 0;
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  v4 = PsAttachSiloToCurrentThread(v3);
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  ServerSiloGlobals[153] = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x3F0uLL);
    *(_DWORD *)(ServerSiloGlobals[153] + 432LL) = -1;
    ExpReadTimeZoneInformation((__int64)L"ActiveTimeBias", -1, ServerSiloGlobals[153] + 436LL);
    ExAcquireTimeRefreshLockExclusive(v6);
    LOBYTE(v7) = 1;
    ExpRefreshTimeZoneInformation(v7);
    ExReleaseTimeRefreshLockExclusive();
    ZwSetSystemTime(0LL, 0LL);
  }
  else
  {
    v1 = -1073741670;
  }
  PsDetachSiloFromCurrentThread(v4);
  return v1;
}
