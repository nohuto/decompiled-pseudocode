/*
 * XREFs of ?UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z @ 0x14022EA14
 * Callers:
 *     NtGdiExtEscape @ 0x140167C30 (NtGdiExtEscape.c)
 * Callees:
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x14020C2AC (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x140216268 (--1ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ??0ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x14022FC28 (--0ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x140263A94 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 */

void __fastcall UmfdDispatchWinLogonEscape(struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *a1)
{
  __int64 v1; // rdx
  HANDLE Handle[2]; // [rsp+28h] [rbp-20h]
  struct W32_PUSH_LOCK *v3; // [rsp+58h] [rbp+10h] BYREF

  if ( ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  *(_OWORD *)Handle = *(_OWORD *)a1;
  ExclusiveWinlognRequestLock::ExclusiveWinlognRequestLock((ExclusiveWinlognRequestLock *)&v3);
  if ( LODWORD(Handle[0]) )
  {
    if ( LODWORD(Handle[0]) == 1 )
      UmfdHostLifeTimeManager::TerminateUmfdHost(LODWORD(Handle[1]) != 0);
  }
  else
  {
    UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(Handle[1], v1);
  }
  ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock(&v3);
}
