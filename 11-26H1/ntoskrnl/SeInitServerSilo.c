/*
 * XREFs of SeInitServerSilo @ 0x1408100DC
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407EF070 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x14046E630 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     SepInitializationPhase1 @ 0x140810284 (SepInitializationPhase1.c)
 *     SepCreateLogonSessionTrack @ 0x140AAF14C (SepCreateLogonSessionTrack.c)
 *     SepReferenceLogonSessionSilo @ 0x140AB6FE8 (SepReferenceLogonSessionSilo.c)
 *     SepDeleteLogonSessionTrack @ 0x140AFE360 (SepDeleteLogonSessionTrack.c)
 */

__int64 __fastcall SeInitServerSilo(__int64 a1)
{
  char *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *v4; // rbp
  signed int LogonSessionTrack; // ebx

  if ( PsIsHostSilo(a1) )
    KeBugCheckEx(0x33u, 0LL, 0LL, 0LL, 0LL);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a1);
  v4 = PsAttachSiloToCurrentThread(v3);
  LogonSessionTrack = SepCreateLogonSessionTrack(&SeSystemAuthenticationId);
  if ( LogonSessionTrack >= 0 )
  {
    LogonSessionTrack = SepReferenceLogonSessionSilo(&SeSystemAuthenticationId, a1, ServerSiloGlobals + 736);
    if ( LogonSessionTrack >= 0 )
    {
      LogonSessionTrack = SepCreateLogonSessionTrack(&SeAnonymousAuthenticationId);
      if ( LogonSessionTrack < 0 )
        goto LABEL_9;
      LogonSessionTrack = SepReferenceLogonSessionSilo(&SeAnonymousAuthenticationId, a1, ServerSiloGlobals + 744);
      if ( LogonSessionTrack >= 0 )
      {
        LogonSessionTrack = (unsigned __int8)SepInitializationPhase1() == 0 ? 0xC0000001 : 0;
        goto LABEL_9;
      }
    }
    SepDeleteLogonSessionTrack(&SeSystemAuthenticationId, 0LL);
  }
LABEL_9:
  PsDetachSiloFromCurrentThread(v4);
  return (unsigned int)LogonSessionTrack;
}
