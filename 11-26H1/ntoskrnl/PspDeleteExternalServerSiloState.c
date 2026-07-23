/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x1407F48B8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407F45D0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     ObCleanupSiloState @ 0x1407C51CC (ObCleanupSiloState.c)
 *     RtlNlsDeleteState @ 0x140807834 (RtlNlsDeleteState.c)
 *     SeShutdownServerSilo @ 0x140815C5C (SeShutdownServerSilo.c)
 *     ExpTimeZoneCleanupSiloState @ 0x14083C694 (ExpTimeZoneCleanupSiloState.c)
 *     CmpGetContextForSiloNoRef @ 0x140A4BBC0 (CmpGetContextForSiloNoRef.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A74604 (CmpStopSiloKeyLockTracker.c)
 *     EtwShutdown @ 0x140B384BC (EtwShutdown.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rcx
  volatile __int64 *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v4; // rbx
  struct _KTHREAD *ContextForSiloNoRef; // rax
  _QWORD *v6; // rbx
  void *v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  ServerSiloGlobals = (volatile __int64 *)PsGetServerSiloGlobals(a1);
  if ( *((_QWORD *)ServerSiloGlobals + 104) )
  {
    v4 = PsAttachSiloToCurrentThread(v2);
    EtwShutdown(0LL);
    PsDetachSiloFromCurrentThread(v4);
  }
  SeShutdownServerSilo(a1, ServerSiloGlobals + 92);
  v9 = 0LL;
  v10 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v9);
  ContextForSiloNoRef = (struct _KTHREAD *)CmpGetContextForSiloNoRef(a1);
  if ( ContextForSiloNoRef )
    CmpStopSiloKeyLockTracker(ContextForSiloNoRef);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v9);
  ObCleanupSiloState(ServerSiloGlobals);
  v6 = (_QWORD *)*((_QWORD *)ServerSiloGlobals + 128);
  if ( v6 )
  {
    v7 = (void *)v6[1];
    if ( (unsigned __int64)v7 > 1 )
      ObfDereferenceObject(v7);
    ExFreePoolWithTag(v6, 0x58736C4Eu);
    *((_QWORD *)ServerSiloGlobals + 128) = 0LL;
  }
  RtlNlsDeleteState(ServerSiloGlobals);
  return ExpTimeZoneCleanupSiloState(a1);
}
