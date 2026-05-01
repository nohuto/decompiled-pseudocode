/*
 * XREFs of ?StopActivity@OnShellHookMessage@IamTraceLogging@@MEAAXXZ @ 0x180116D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18020D158 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18020D158.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

void __fastcall IamTraceLogging::OnShellHookMessage::StopActivity(IamTraceLogging::OnShellHookMessage *this)
{
  __int64 v1; // rsi
  int v3; // eax
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  int v10; // r9d
  _DWORD *v11; // rcx
  __int64 **v12; // rbx
  __int64 v13; // rax
  RTL_SRWLOCK *v14; // rbx
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v16)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v17; // r8
  int UserDataCount; // [rsp+20h] [rbp-120h]
  WINBOOL fPending; // [rsp+C0h] [rbp-80h] BYREF
  LPVOID Context; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v21; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-68h] BYREF
  PSRWLOCK SRWLock; // [rsp+E0h] [rbp-60h] BYREF
  int v24; // [rsp+E8h] [rbp-58h] BYREF
  int v25; // [rsp+ECh] [rbp-54h] BYREF
  int v26; // [rsp+F0h] [rbp-50h] BYREF
  int v27; // [rsp+F4h] [rbp-4Ch] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v29; // [rsp+108h] [rbp-38h] BYREF
  __int64 v30; // [rsp+110h] [rbp-30h] BYREF
  __int64 v31; // [rsp+118h] [rbp-28h] BYREF
  __int64 v32; // [rsp+120h] [rbp-20h] BYREF
  __int64 v33; // [rsp+128h] [rbp-18h] BYREF
  __int64 v34; // [rsp+130h] [rbp-10h] BYREF
  __int64 v35; // [rsp+138h] [rbp-8h] BYREF
  __int64 v36; // [rsp+140h] [rbp+0h] BYREF
  __int64 v37; // [rsp+148h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+10h] BYREF
  void *v39; // [rsp+160h] [rbp+20h]
  int v40; // [rsp+168h] [rbp+28h]
  int v41; // [rsp+16Ch] [rbp+2Ch]
  PSRWLOCK *p_SRWLock; // [rsp+170h] [rbp+30h]
  __int64 v43; // [rsp+178h] [rbp+38h]
  __int64 *v44; // [rsp+180h] [rbp+40h]
  __int64 v45; // [rsp+188h] [rbp+48h]
  LPVOID *p_Context; // [rsp+190h] [rbp+50h]
  __int64 v47; // [rsp+198h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+88h]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 >= 0 || (v4 = v1 + 80, v3 != *(_DWORD *)(v4 + 8)) )
    v4 = 0LL;
  v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 35);
  if ( v4 )
  {
    if ( v5 )
    {
      v14 = v5 + 33;
      AcquireSRWLockExclusive(v14);
      Context = 0LL;
    }
    else
    {
      v14 = 0LL;
      v22 = 0LL;
    }
    **((_DWORD **)this + 34) = 2;
    if ( v14 )
      ReleaseSRWLockExclusive(v14);
    Context = 0LL;
    fPending = 0;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      qword_1808DA380 = 0LL;
      Context = &qword_1808DA378;
      qword_1808DA378 = &ShellScreenClippingLogging::`vftable';
      byte_1808DA388 = 0;
      dword_1808DA38C = 0;
      qword_1808DA390 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DA378, qword_1808DA390, v15);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1808DA378);
    }
    v11 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v11 > 5u )
    {
      v29 = *(_QWORD *)(v4 + 48);
      fPending = *(_DWORD *)(v4 + 68);
      v24 = *(_DWORD *)(v4 + 16);
      v30 = *(_QWORD *)(v4 + 120);
      v31 = *(_QWORD *)(v4 + 112);
      v17 = *((_QWORD *)this + 34);
      v25 = *(_DWORD *)(v4 + 104);
      v32 = *(_QWORD *)(v4 + 96);
      v33 = *(_QWORD *)(v4 + 88);
      v26 = *(_DWORD *)(v4 + 80);
      v34 = *(_QWORD *)(v4 + 72);
      v27 = *(_DWORD *)(v4 + 32);
      v35 = *(_QWORD *)(v4 + 24);
      v21 = *(_DWORD *)v4;
      v36 = *(_QWORD *)(v4 + 128);
      LODWORD(v22) = *(_DWORD *)(v4 + 64);
      v37 = *(_QWORD *)(v4 + 56);
      LODWORD(Context) = *(_DWORD *)(v4 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      SRWLock = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (_DWORD)v11,
        (unsigned int)&unk_1807E3A57,
        v17 + 8,
        v10,
        (__int64)&SRWLock,
        (__int64)&EventDescriptor,
        (__int64)&Context,
        (__int64)&v37,
        (__int64)&v22,
        (__int64)&v36,
        (__int64)&v21,
        (__int64)&v35,
        (__int64)&v27,
        (__int64)&v34,
        (__int64)&v26,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v25,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v24,
        (__int64)&fPending,
        (__int64)&v29);
    }
  }
  else
  {
    if ( v5 )
    {
      v6 = v5 + 33;
      AcquireSRWLockExclusive(v6);
      SRWLock = 0LL;
    }
    else
    {
      v6 = 0LL;
      *(_QWORD *)&EventDescriptor.Id = 0LL;
    }
    **((_DWORD **)this + 34) = 2;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    Context = 0LL;
    fPending = 0;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      qword_1808DA380 = 0LL;
      Context = &qword_1808DA378;
      qword_1808DA378 = &ShellScreenClippingLogging::`vftable';
      byte_1808DA388 = 0;
      dword_1808DA38C = 0;
      qword_1808DA390 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DA378, qword_1808DA390, v16);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1808DA378);
    }
    v7 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 34);
      LODWORD(Context) = CurrentThreadId;
      v47 = 4LL;
      v45 = 4LL;
      LODWORD(v22) = *(_DWORD *)(v9 + 72);
      p_Context = &Context;
      v44 = &v22;
      p_SRWLock = &SRWLock;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v7 + 8);
      SRWLock = 0LL;
      v43 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v39 = &unk_1807E3BAF;
      UserData.Reserved = 2;
      v40 = 71;
      v41 = 1;
      v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, (LPCGUID)(v9 + 8), 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 78) )
  {
    v12 = (__int64 **)((char *)this + 288);
    if ( *((_DWORD *)this + 78) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3BE,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        UserDataCount);
    *((_DWORD *)this + 78) = 0;
    while ( 1 )
    {
      v13 = **v12;
      if ( !v13 )
        break;
      if ( (__int64 **)v13 == v12 )
      {
        **v12 = *((_QWORD *)this + 38);
        break;
      }
      *v12 = (__int64 *)(v13 + 16);
    }
    *v12 = 0LL;
  }
}
