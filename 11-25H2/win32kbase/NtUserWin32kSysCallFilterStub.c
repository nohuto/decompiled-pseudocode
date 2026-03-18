/*
 * XREFs of NtUserWin32kSysCallFilterStub @ 0x1401481D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@2@Z @ 0x14000261C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapperByVal@$03@@.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x1401483BC (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x140148538 (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     EtwSyscallFilterMessage @ 0x1401A2060 (EtwSyscallFilterMessage.c)
 *     ??$GenerateNonTerminatingUserModeWerReport@$02@@YAXKPEAXAEAY02_K@Z @ 0x1401B9858 (--$GenerateNonTerminatingUserModeWerReport@$02@@YAXKPEAXAEAY02_K@Z.c)
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1401B9B48 (-_ShouldCaptureWerReport@@YAHK@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall NtUserWin32kSysCallFilterStub(const char *a1, unsigned int a2)
{
  char *ProcessAppContainerSid; // rsi
  char *ProcessCommandLine; // rdi
  __int64 Win32KFilterSet; // r15
  const WCHAR *v7; // r13
  const WCHAR *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+50h] [rbp-29h] BYREF
  const WCHAR *v19; // [rsp+58h] [rbp-21h] BYREF
  __int64 v20; // [rsp+60h] [rbp-19h] BYREF
  const WCHAR *v21; // [rsp+68h] [rbp-11h] BYREF
  const char *v22; // [rsp+70h] [rbp-9h] BYREF
  __int64 v23; // [rsp+78h] [rbp-1h] BYREF
  _QWORD v24[3]; // [rsp+80h] [rbp+7h] BYREF

  ProcessAppContainerSid = (char *)GetProcessAppContainerSid();
  ProcessCommandLine = (char *)GetProcessCommandLine();
  Win32KFilterSet = (unsigned int)PsGetWin32KFilterSet();
  v7 = &word_14025FAA8;
  v8 = &word_14025FAA8;
  if ( ProcessAppContainerSid )
    v8 = (const WCHAR *)ProcessAppContainerSid;
  v19 = v8;
  if ( ProcessCommandLine )
    v7 = (const WCHAR *)ProcessCommandLine;
  if ( !a1 )
    a1 = (const char *)&unk_14025EF20;
  EtwSyscallFilterMessage(a1, v8, v7, Win32KFilterSet);
  CurrentProcess = PsGetCurrentProcess(v10, v9);
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
  DbgPrintEx(0x70u, 4u, "NtUserWin32kSysCallFilterStub: SyscallName='%s', Process='%s'\n", a1, ProcessImageFileName);
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() )
  {
    if ( !*(_DWORD *)(W32GetUserSessionState(v14, v13) + 16LL * (unsigned int)Win32KFilterSet + 70796)
      && (unsigned int)_ShouldCaptureWerReport(a2) )
    {
      v24[0] = 41LL;
      v24[1] = a2;
      v24[2] = Win32KFilterSet;
      GenerateNonTerminatingUserModeWerReport<3>(v15, a2, v24);
    }
    if ( (unsigned int)dword_14029EEC8 > 5 && tlgKeywordOn((__int64)&dword_14029EEC8, 0x800000000000LL) )
    {
      v20 = 0x1000000LL;
      v18 = Win32KFilterSet;
      v21 = v7;
      v22 = a1;
      v23 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v16,
        (int)&unk_140278E03,
        v17,
        (__int64)&v23,
        (void **)&v22,
        &v19,
        &v21,
        (__int64)&v18,
        (__int64)&v20);
    }
  }
  if ( ProcessAppContainerSid )
    GreDeleteFastMutex(ProcessAppContainerSid);
  if ( ProcessCommandLine )
    GreDeleteFastMutex(ProcessCommandLine);
}
