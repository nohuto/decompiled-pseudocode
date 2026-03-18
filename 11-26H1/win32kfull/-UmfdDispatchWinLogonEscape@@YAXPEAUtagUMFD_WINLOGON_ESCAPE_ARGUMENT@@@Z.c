/*
 * XREFs of ?UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z @ 0x1402254BC
 * Callers:
 *     NtGdiExtEscape @ 0x14027EE60 (NtGdiExtEscape.c)
 * Callees:
 *     ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x140225530 (--1ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ??0ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x140225554 (--0ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x140225598 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1402256F8 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ??$GreProbeAndReadFromUntrustedVa@UtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@PEBU0@_K@Z @ 0x140349B10 (--$GreProbeAndReadFromUntrustedVa@UtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@@YAXPEAUtagUMFD_WINLOGON_E.c)
 */

void __fastcall UmfdDispatchWinLogonEscape(struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *a1)
{
  HANDLE Handle[2]; // [rsp+28h] [rbp-20h] BYREF
  char v2; // [rsp+58h] [rbp+10h] BYREF

  *(_OWORD *)Handle = 0LL;
  GreProbeAndReadFromUntrustedVa<tagUMFD_WINLOGON_ESCAPE_ARGUMENT>(Handle, a1);
  ExclusiveWinlognRequestLock::ExclusiveWinlognRequestLock((ExclusiveWinlognRequestLock *)&v2);
  if ( LODWORD(Handle[0]) )
  {
    if ( LODWORD(Handle[0]) == 1 )
      UmfdHostLifeTimeManager::TerminateUmfdHost(LODWORD(Handle[1]) != 0);
  }
  else
  {
    UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(Handle[1]);
  }
  ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock((ExclusiveWinlognRequestLock *)&v2);
}
