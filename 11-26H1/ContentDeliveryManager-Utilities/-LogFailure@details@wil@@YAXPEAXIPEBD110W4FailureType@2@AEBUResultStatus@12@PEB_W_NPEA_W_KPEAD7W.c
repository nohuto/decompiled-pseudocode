/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7W4FailureFlags@2@PEAUFailureInfo@2@@Z @ 0x180077ABC
 * Callers:
 *     ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180078338 (--$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFail.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18002EC44 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?IsDebuggerPresent@details@wil@@YA_NXZ @ 0x180033F10 (-IsDebuggerPresent@details@wil@@YA_NXZ.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x180037188 (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x1800777F8 (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::LogFailure(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int *a8,
        __int64 a9,
        __int64 a10,
        wil *lpOutputString,
        __int64 a12,
        _BYTE *a13,
        __int64 a14,
        __int64 a15,
        unsigned __int64 a16)
{
  wil::details *v19; // rcx
  int v20; // r12d
  __int64 v21; // r9
  wil::details::in1diag3 *v22; // rcx
  __int64 ModuleName; // rax
  wchar_t *v24; // rdx
  __int64 v25; // rcx
  const struct wil::FailureInfo *v26; // r9

  *(_WORD *)lpOutputString = 0;
  *a13 = 0;
  v19 = (wil::details *)*a8;
  *(_DWORD *)(a16 + 8) = (_DWORD)v19;
  *(_DWORD *)(a16 + 12) = a8[1];
  v20 = wil::details::RecordException(v19);
  *(_QWORD *)a16 = 0LL;
  if ( *(_DWORD *)(v21 + 8) == 1 )
    *(_DWORD *)(a16 + 4) = 8;
  *(_DWORD *)(a16 + 16) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  *(_QWORD *)(a16 + 24) = 0LL;
  *(_DWORD *)(a16 + 32) = GetCurrentThreadId();
  *(_QWORD *)(a16 + 56) = a3;
  *(_DWORD *)(a16 + 64) = a2;
  *(_DWORD *)(a16 + 68) = v20;
  *(_QWORD *)(a16 + 40) = 0LL;
  *(_QWORD *)(a16 + 48) = 0LL;
  *(_QWORD *)(a16 + 136) = a6;
  *(_QWORD *)(a16 + 144) = a1;
  *(_QWORD *)(a16 + 72) = 0LL;
  *(_OWORD *)(a16 + 104) = 0LL;
  *(_QWORD *)(a16 + 120) = 0LL;
  *(_OWORD *)(a16 + 80) = 0LL;
  *(_QWORD *)(a16 + 96) = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(v22);
  else
    ModuleName = 0LL;
  *(_QWORD *)(a16 + 128) = ModuleName;
  if ( wil::details::g_pfnNotifyFailure )
    wil::details::g_pfnNotifyFailure(a16);
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(a16, a13, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(a16);
  if ( wil::details::g_pfnOriginateCallback && (*(_BYTE *)(a16 + 4) & 2) == 0 )
    wil::details::g_pfnOriginateCallback(a16);
  if ( *(int *)(a16 + 8) >= 0 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v22);
  if ( !wil::details::IsDebuggerPresent(v22) || (*(_BYTE *)(a16 + 4) & 2) != 0 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(a16, 0LL, 0LL);
  }
  else
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(a16, lpOutputString, 2048LL);
    if ( !*(_WORD *)lpOutputString )
      wil::GetFailureLogString(lpOutputString, v24, a16, v26);
    OutputDebugStringW((LPCWSTR)lpOutputString);
  }
  if ( (*(_BYTE *)(a16 + 4) & 4) != 0 || wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(v25);
  }
}
