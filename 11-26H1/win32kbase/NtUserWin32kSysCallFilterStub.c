/*
 * XREFs of NtUserWin32kSysCallFilterStub @ 0x140184A50
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@2@Z @ 0x140002F20 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapperByVal@$03@@.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x140184C20 (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x140184D98 (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     EtwSyscallFilterMessage @ 0x1401C5EE0 (EtwSyscallFilterMessage.c)
 *     ??$GenerateNonTerminatingUserModeWerReport@$02@@YAXKPEAXAEAY02_K@Z @ 0x1401DFF88 (--$GenerateNonTerminatingUserModeWerReport@$02@@YAXKPEAXAEAY02_K@Z.c)
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1401E0228 (-_ShouldCaptureWerReport@@YAHK@Z.c)
 */

void __fastcall NtUserWin32kSysCallFilterStub(const char *a1, unsigned int a2)
{
  char *ProcessAppContainerSid; // rsi
  char *ProcessCommandLine; // rdi
  __int64 Win32KFilterSet; // r15
  const WCHAR *v7; // r13
  const WCHAR *v8; // rax
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  const WCHAR *v18; // [rsp+50h] [rbp-30h] BYREF
  const char *v19; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v21[3]; // [rsp+68h] [rbp-18h] BYREF
  int v22; // [rsp+C0h] [rbp+40h] BYREF
  const WCHAR *v23; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+58h] BYREF

  ProcessAppContainerSid = (char *)GetProcessAppContainerSid();
  ProcessCommandLine = (char *)GetProcessCommandLine();
  Win32KFilterSet = (unsigned int)PsGetWin32KFilterSet();
  v7 = &word_14026AF94;
  v8 = &word_14026AF94;
  if ( ProcessAppContainerSid )
    v8 = (const WCHAR *)ProcessAppContainerSid;
  v23 = v8;
  if ( ProcessCommandLine )
    v7 = (const WCHAR *)ProcessCommandLine;
  if ( !a1 )
    a1 = (const char *)&unk_140269890;
  EtwSyscallFilterMessage(a1, v8, v7, Win32KFilterSet);
  CurrentProcess = PsGetCurrentProcess(v9);
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
  DbgPrintEx(0x70u, 4u, "NtUserWin32kSysCallFilterStub: SyscallName='%s', Process='%s'\n", a1, ProcessImageFileName);
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() )
  {
    if ( !*(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 16LL * (unsigned int)Win32KFilterSet + 70780)
      && (unsigned int)_ShouldCaptureWerReport(a2) )
    {
      v21[0] = 41LL;
      v21[1] = a2;
      v21[2] = Win32KFilterSet;
      GenerateNonTerminatingUserModeWerReport<3>(v16, a2, v21);
    }
    if ( (unsigned int)dword_1402A9EE8 > 5 && tlgKeywordOn((__int64)&dword_1402A9EE8, 0x800000000000LL) )
    {
      v24 = 0x1000000LL;
      v22 = Win32KFilterSet;
      v18 = v7;
      v19 = a1;
      v20 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v17,
        (int)&unk_1402830BD,
        v14,
        (__int64)&v20,
        (void **)&v19,
        &v23,
        &v18,
        (__int64)&v22,
        (__int64)&v24);
    }
  }
  if ( ProcessAppContainerSid )
    GreDeleteFastMutex(ProcessAppContainerSid, v12, v14, v15);
  if ( ProcessCommandLine )
    GreDeleteFastMutex(ProcessCommandLine, v12, v14, v15);
}
