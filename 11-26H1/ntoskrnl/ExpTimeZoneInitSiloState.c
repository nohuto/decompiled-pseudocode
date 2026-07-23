/*
 * XREFs of ExpTimeZoneInitSiloState @ 0x14083C738
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     ZwSetSystemTime @ 0x14072B7A0 (ZwSetSystemTime.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpReadTimeZoneInformation @ 0x14083C4D8 (ExpReadTimeZoneInformation.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A73A3C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A73AB4 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
