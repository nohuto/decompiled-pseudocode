/*
 * XREFs of PspTerminateSiloSubsystemProcesses @ 0x1407F5658
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407F45D0 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 *     PspShutdownCsrProcess @ 0x1407F4F18 (PspShutdownCsrProcess.c)
 *     PspGetNextJobProcess @ 0x1409FF594 (PspGetNextJobProcess.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

int __fastcall PspTerminateSiloSubsystemProcesses(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  int ServerSiloServiceSessionId; // ebp
  struct _KPROCESS *i; // r9
  unsigned int SessionId; // eax
  __int64 v6; // rax
  struct _KPROCESS *v7; // rbx
  void *ServerSiloGlobals; // rax
  struct _LIST_ENTRY *v9; // rcx
  struct _KPROCESS *v10; // r8
  __int64 v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  PspEnumJobsAndProcessesInJobHierarchy(a1, (__int64)&v16, 2);
  CurrentThread = KeGetCurrentThread();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a1);
  for ( i = 0LL; ; i = v7 )
  {
    v6 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, struct _KTHREAD *, __int128 *, struct _KPROCESS *, __int64, __int64))PspGetNextJobProcess)(
           a1,
           CurrentThread,
           &v14,
           i,
           v12,
           v13);
    v7 = (struct _KPROCESS *)v6;
    if ( !v6 )
      break;
    if ( ((*(_DWORD *)(v6 + 1532) & 0x40) != 0 || (*(_DWORD *)(v6 + 496) & 1) == 0)
      && (*(_DWORD *)(v6 + 1532) & 0x1000) == 0 )
    {
      SessionId = PsGetSessionId(v6);
      if ( SessionId != ServerSiloServiceSessionId )
        PspShutdownCsrProcess(a1, SessionId, v7);
    }
  }
  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
  v10 = (struct _KPROCESS *)*((_QWORD *)ServerSiloGlobals + 106);
  if ( v10 )
    LODWORD(ServerSiloGlobals) = PspShutdownCsrProcess(v9, **((_DWORD **)ServerSiloGlobals + 161), v10);
  return (int)ServerSiloGlobals;
}
