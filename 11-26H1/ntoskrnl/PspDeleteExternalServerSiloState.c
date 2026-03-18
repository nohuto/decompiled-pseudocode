/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x1407EED58
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407EEA70 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x1407EF070 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     ObCleanupSiloState @ 0x1407C216C (ObCleanupSiloState.c)
 *     RtlNlsDeleteState @ 0x140801D94 (RtlNlsDeleteState.c)
 *     SeShutdownServerSilo @ 0x1408101CC (SeShutdownServerSilo.c)
 *     ExpTimeZoneCleanupSiloState @ 0x140836454 (ExpTimeZoneCleanupSiloState.c)
 *     CmpGetContextForSiloNoRef @ 0x140A30C60 (CmpGetContextForSiloNoRef.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A67634 (CmpStopSiloKeyLockTracker.c)
 *     EtwShutdown @ 0x140B362AC (EtwShutdown.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
