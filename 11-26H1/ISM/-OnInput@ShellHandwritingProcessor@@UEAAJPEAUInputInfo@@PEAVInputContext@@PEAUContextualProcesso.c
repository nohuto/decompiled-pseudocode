/*
 * XREFs of ?OnInput@ShellHandwritingProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B3B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546FC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?IsInputContextOptedOut@ContextualProcessor@ShellHandwriting@InputTraceLogging@@SAX_N@Z @ 0x1801B3A4C (-IsInputContextOptedOut@ContextualProcessor@ShellHandwriting@InputTraceLogging@@SAX_N@Z.c)
 *     ?IsShellHandwritingCanvasContext@ShellHandwritingProcessor@@CA_NPEAVInputContext@@@Z @ 0x1801B3A98 (-IsShellHandwritingCanvasContext@ShellHandwritingProcessor@@CA_NPEAVInputContext@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShIIPD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801B3F30 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShIIPD@@@details@wil@@QEAAX_NW4Rep.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellHandwritingProcessor::OnInput(
        ShellHandwritingProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  struct InputInfo *v6; // rsi
  char v8; // bl
  bool IsShellHandwritingCanvasContext; // al
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-99h] BYREF
  __int128 v12; // [rsp+28h] [rbp-91h] BYREF
  _DWORD v13[4]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v14; // [rsp+50h] [rbp-69h]
  int v15; // [rsp+58h] [rbp-61h]
  int v16; // [rsp+5Ch] [rbp-5Dh]
  int v17; // [rsp+60h] [rbp-59h]
  int v18; // [rsp+64h] [rbp-55h]
  int v19; // [rsp+68h] [rbp-51h]
  int v20; // [rsp+6Ch] [rbp-4Dh]
  int v21; // [rsp+70h] [rbp-49h]
  int v22; // [rsp+74h] [rbp-45h]
  int v23; // [rsp+78h] [rbp-41h]
  int v24; // [rsp+7Ch] [rbp-3Dh]
  int v25; // [rsp+80h] [rbp-39h]
  int v26; // [rsp+84h] [rbp-35h]
  int v27; // [rsp+88h] [rbp-31h]
  __int64 v28; // [rsp+90h] [rbp-29h]
  int v29; // [rsp+98h] [rbp-21h]
  int v30; // [rsp+9Ch] [rbp-1Dh]
  int v31; // [rsp+A0h] [rbp-19h]
  int v32; // [rsp+A4h] [rbp-15h]
  int v33; // [rsp+A8h] [rbp-11h]
  int v34; // [rsp+ACh] [rbp-Dh]
  LARGE_INTEGER v35; // [rsp+B0h] [rbp-9h]
  __int64 v36; // [rsp+B8h] [rbp-1h]
  __int128 v37; // [rsp+C0h] [rbp+7h]

  v6 = a2;
  if ( *((_BYTE *)this + 48) )
    goto LABEL_7;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbShIIPD>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MTestAbShIIPD>::GetImpl'::`2'::impl,
    a2);
  v8 = (*((_BYTE *)v6 + 416) & 6) != 0;
  *((_BYTE *)this + 49) = 0;
  if ( !*((_BYTE *)v6 + 313) )
  {
    IsShellHandwritingCanvasContext = ShellHandwritingProcessor::IsShellHandwritingCanvasContext(a3);
    *((_BYTE *)this + 49) = IsShellHandwritingCanvasContext;
    if ( !IsShellHandwritingCanvasContext )
      v8 = 1;
  }
  InputTraceLogging::ShellHandwriting::ContextualProcessor::IsInputContextOptedOut(v8);
  *((_BYTE *)this + 48) = 1;
  if ( !v8 )
  {
LABEL_7:
    *((_DWORD *)a4 + 2) = 4 - (*((_BYTE *)this + 49) != 0);
    if ( (*((_DWORD *)v6 + 83) & 0x10000) != 0 )
    {
      *(_QWORD *)&v12 = *((_QWORD *)v6 + 11);
      *((_QWORD *)&v12 + 1) = *((unsigned int *)v6 + 81);
      *(_OWORD *)((char *)this + 56) = v12;
    }
    AcquireSRWLockExclusive((PSRWLOCK)this + 4);
    *(_QWORD *)&v12 = (char *)this + 32;
    if ( *((_QWORD *)this + 5) )
    {
      memset_0(v13, 0, 0x90uLL);
      v13[0] = *((_DWORD *)v6 + 80);
      v13[1] = *((_DWORD *)v6 + 81);
      v13[2] = *((_DWORD *)v6 + 82);
      v14 = *((_QWORD *)v6 + 42);
      v15 = *((_DWORD *)v6 + 83);
      v16 = *((_DWORD *)v6 + 88);
      v17 = *((_DWORD *)v6 + 89);
      v18 = *((_DWORD *)v6 + 90);
      v19 = *((_DWORD *)v6 + 91);
      v20 = *((_DWORD *)v6 + 92);
      v21 = *((_DWORD *)v6 + 93);
      v22 = *((_DWORD *)v6 + 94);
      v23 = *((_DWORD *)v6 + 95);
      v24 = *((_DWORD *)v6 + 96);
      v25 = *((_DWORD *)v6 + 97);
      v26 = *((_DWORD *)v6 + 98);
      v27 = *((_DWORD *)v6 + 99);
      v28 = *((_QWORD *)v6 + 50);
      v29 = *((_DWORD *)v6 + 104);
      v30 = *((_DWORD *)v6 + 105);
      v31 = *((_DWORD *)v6 + 106);
      v32 = *((_DWORD *)v6 + 107);
      v33 = *((_DWORD *)v6 + 108);
      v34 = *((_DWORD *)v6 + 109);
      if ( (*((_DWORD *)v6 + 83) & 0x50000) != 0 )
      {
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        v35 = PerformanceCount;
        v36 = *((_QWORD *)v6 + 11);
      }
      v37 = *(_OWORD *)((char *)this + 56);
      (*(void (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 24LL))(
        *((_QWORD *)this + 5) + 8LL,
        v13,
        1LL);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v12);
  }
  else
  {
    *((_DWORD *)a4 + 2) = 0;
  }
  return 0LL;
}
