/*
 * XREFs of ?StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@MEAAXXZ @ 0x180117FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180068EA8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18020D158 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18020D158.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StopActivity(
        ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *this)
{
  __int64 v1; // rsi
  int v3; // eax
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  RTL_SRWLOCK *v10; // rbx
  int v11; // r9d
  _DWORD *v12; // rcx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v15; // r8
  WINBOOL fPending; // [rsp+C0h] [rbp-80h] BYREF
  LPVOID Context; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v18; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v19; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-60h] BYREF
  int v21; // [rsp+E8h] [rbp-58h] BYREF
  int v22; // [rsp+ECh] [rbp-54h] BYREF
  int v23; // [rsp+F0h] [rbp-50h] BYREF
  int v24; // [rsp+F4h] [rbp-4Ch] BYREF
  EVENT_DESCRIPTOR SRWLock; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+108h] [rbp-38h] BYREF
  __int64 v27; // [rsp+110h] [rbp-30h] BYREF
  __int64 v28; // [rsp+118h] [rbp-28h] BYREF
  __int64 v29; // [rsp+120h] [rbp-20h] BYREF
  __int64 v30; // [rsp+128h] [rbp-18h] BYREF
  __int64 v31; // [rsp+130h] [rbp-10h] BYREF
  __int64 v32; // [rsp+138h] [rbp-8h] BYREF
  __int64 v33; // [rsp+140h] [rbp+0h] BYREF
  __int64 v34; // [rsp+148h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+10h] BYREF
  void *v36; // [rsp+160h] [rbp+20h]
  int v37; // [rsp+168h] [rbp+28h]
  int v38; // [rsp+16Ch] [rbp+2Ch]
  __int64 *v39; // [rsp+170h] [rbp+30h]
  __int64 v40; // [rsp+178h] [rbp+38h]
  __int64 *v41; // [rsp+180h] [rbp+40h]
  __int64 v42; // [rsp+188h] [rbp+48h]
  LPVOID *p_Context; // [rsp+190h] [rbp+50h]
  __int64 v44; // [rsp+198h] [rbp+58h]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 >= 0 || (v4 = v1 + 80, v3 != *(_DWORD *)(v4 + 8)) )
    v4 = 0LL;
  v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 35);
  if ( v4 )
  {
    if ( v5 )
    {
      v10 = v5 + 33;
      AcquireSRWLockExclusive(v10);
      Context = 0LL;
    }
    else
    {
      v10 = 0LL;
      v19 = 0LL;
    }
    **((_DWORD **)this + 34) = 2;
    if ( v10 )
      ReleaseSRWLockExclusive(v10);
    Context = 0LL;
    fPending = 0;
    if ( __std_init_once_begin_initialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context)
      && fPending )
    {
      qword_1808DB078 = 0LL;
      Context = &qword_1808DB070;
      qword_1808DB070 = &ShellScreenClippingLogging::`vftable';
      byte_1808DB080 = 0;
      dword_1808DB084 = 0;
      qword_1808DB088 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DB070, qword_1808DB088, v14);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &qword_1808DB070);
    }
    v12 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v12 > 5u )
    {
      v26 = *(_QWORD *)(v4 + 48);
      fPending = *(_DWORD *)(v4 + 68);
      v21 = *(_DWORD *)(v4 + 16);
      v27 = *(_QWORD *)(v4 + 120);
      v28 = *(_QWORD *)(v4 + 112);
      v15 = *((_QWORD *)this + 34);
      v22 = *(_DWORD *)(v4 + 104);
      v29 = *(_QWORD *)(v4 + 96);
      v30 = *(_QWORD *)(v4 + 88);
      v23 = *(_DWORD *)(v4 + 80);
      v31 = *(_QWORD *)(v4 + 72);
      v24 = *(_DWORD *)(v4 + 32);
      v32 = *(_QWORD *)(v4 + 24);
      v18 = *(_DWORD *)v4;
      v33 = *(_QWORD *)(v4 + 128);
      LODWORD(v19) = *(_DWORD *)(v4 + 64);
      v34 = *(_QWORD *)(v4 + 56);
      LODWORD(Context) = *(_DWORD *)(v4 + 8);
      *(_QWORD *)&SRWLock.Id = 0x1000000LL;
      v20 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (_DWORD)v12,
        (unsigned int)&unk_1807E7A2F,
        v15 + 8,
        v11,
        (__int64)&v20,
        (__int64)&SRWLock,
        (__int64)&Context,
        (__int64)&v34,
        (__int64)&v19,
        (__int64)&v33,
        (__int64)&v18,
        (__int64)&v32,
        (__int64)&v24,
        (__int64)&v31,
        (__int64)&v23,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v22,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v21,
        (__int64)&fPending,
        (__int64)&v26);
    }
  }
  else
  {
    if ( v5 )
    {
      v6 = v5 + 33;
      AcquireSRWLockExclusive(v6);
      v20 = 0LL;
    }
    else
    {
      v6 = 0LL;
      *(_QWORD *)&SRWLock.Id = 0LL;
    }
    **((_DWORD **)this + 34) = 2;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    Context = 0LL;
    fPending = 0;
    if ( __std_init_once_begin_initialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context)
      && fPending )
    {
      qword_1808DB078 = 0LL;
      Context = &qword_1808DB070;
      qword_1808DB070 = &ShellScreenClippingLogging::`vftable';
      byte_1808DB080 = 0;
      dword_1808DB084 = 0;
      qword_1808DB088 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DB070, qword_1808DB088, v13);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &qword_1808DB070);
    }
    v7 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 34);
      LODWORD(Context) = CurrentThreadId;
      v44 = 4LL;
      v42 = 4LL;
      LODWORD(v19) = *(_DWORD *)(v9 + 72);
      p_Context = &Context;
      v41 = &v19;
      v39 = &v20;
      UserData.Ptr = *(_QWORD *)(v7 + 8);
      v20 = 0LL;
      v40 = 8LL;
      *(_QWORD *)&SRWLock.Id = 0x2050B000000LL;
      SRWLock.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v36 = &unk_1807E79DF;
      UserData.Reserved = 2;
      v37 = 79;
      v38 = 1;
      v18 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v7 + 32), &SRWLock, (LPCGUID)(v9 + 8), 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)((char *)this + 288));
}
