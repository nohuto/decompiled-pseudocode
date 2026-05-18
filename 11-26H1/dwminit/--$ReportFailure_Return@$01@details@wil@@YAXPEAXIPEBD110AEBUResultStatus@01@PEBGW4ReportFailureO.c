/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1800045F8
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180003E0C (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     __security_check_cookie @ 0x1800021F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800032B4 (memset_0.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x18000401C (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800053D4 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180005BF8 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x180006034 (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180006B5C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180006C38 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     _alloca_probe @ 0x180011390 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::ReportFailure_Return<2>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        _WORD *a8,
        __int64 a9,
        int a10)
{
  int v14; // edx
  int v15; // ebx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // ebx
  DWORD CurrentThreadId; // eax
  const struct wil::FailureInfo *v21; // rdx
  wil::details::in1diag3 *v22; // rcx
  const struct wil::FailureInfo *v23; // r9
  bool v24; // zf
  wil::details *v25; // [rsp+30h] [rbp-D0h]
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh]
  int v28; // [rsp+58h] [rbp-A8h]
  int v29; // [rsp+5Ch] [rbp-A4h]
  signed __int32 v30; // [rsp+60h] [rbp-A0h]
  _WORD *v31; // [rsp+68h] [rbp-98h]
  DWORD v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+90h] [rbp-70h]
  int v37; // [rsp+94h] [rbp-6Ch]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int128 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int128 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int64 ModuleName; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  char v46[1024]; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR OutputString[2048]; // [rsp+4F0h] [rbp+3F0h] BYREF

  memset_0(&v26, 0, 0x98uLL);
  OutputString[0] = 0;
  v46[0] = 0;
  v15 = *a7;
  v16 = a7[1];
  v28 = v15;
  v29 = v16;
  if ( v15 >= 0 )
  {
    v15 = -2147024228;
    LODWORD(v25) = -2147024228;
    wil::details::ReportFailure_Hr<2>(a1, a2, a3, a4, a5, a6, v25);
    v28 = -2147024228;
    v29 = wil::details::HrToNtStatus((wil::details *)0x8007029CLL, v17);
  }
  v18 = wil::details::RecordLog((wil::details *)(unsigned int)v15, v14);
  v24 = a7[2] == 1;
  v19 = v18;
  v26 = 2;
  v27 = a10;
  if ( v24 )
    v27 = a10 | 8;
  v30 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  if ( !a8 || (v31 = a8, !*a8) )
    v31 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v35 = a3;
  v32 = CurrentThreadId;
  v44 = a6;
  v42 = 0LL;
  v40 = 0LL;
  v36 = a2;
  v37 = v19;
  v33 = a5;
  v34 = a4;
  v45 = a1;
  v38 = 0LL;
  v41 = 0LL;
  v39 = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(v22);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnNotifyFailure )
    wil::details::g_pfnNotifyFailure(&v26);
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v26, v46, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v26);
  if ( wil::details::g_pfnOriginateCallback && (v27 & 2) == 0 )
    wil::details::g_pfnOriginateCallback(&v26);
  if ( v28 >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v22);
  if ( !wil::g_fIsDebuggerPresent
    && (!wil::g_pfnIsDebuggerPresent
      ? (v24 = !IsDebuggerPresent())
      : (v24 = (unsigned __int8)wil::g_pfnIsDebuggerPresent(v22) == 0),
        v24)
    || (v27 & 2) != 0 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v26, 0LL, 0LL);
  }
  else
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v26, OutputString, 2048LL);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (unsigned __int16 *)0x800, (unsigned __int64)&v26, v23);
    OutputDebugStringW(OutputString);
  }
  if ( ((v27 & 4) != 0 || wil::g_fBreakOnFailure) && wil::details::g_pfnDebugBreak )
    wil::details::g_pfnDebugBreak(v22);
  if ( (v27 & 1) != 0 )
    wil::details::WilFailFast((wil::details *)&v26, v21);
}
