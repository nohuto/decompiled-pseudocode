/*
 * XREFs of ?StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@MEAAXXZ @ 0x180124EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031054 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800384BC (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1800908D8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800908D8.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StopActivity(
        ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *this)
{
  __int64 v1; // rdi
  int v3; // eax
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  _DWORD *v10; // rcx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v13; // rdi
  RTL_SRWLOCK *v14; // rbx
  RTL_SRWLOCK *v15; // rbx
  __int64 v16; // r8
  WINBOOL fPending; // [rsp+C0h] [rbp-80h] BYREF
  LPVOID Context; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v19; // [rsp+D0h] [rbp-70h] BYREF
  int v20; // [rsp+D4h] [rbp-6Ch] BYREF
  __int64 v21; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-60h] BYREF
  int v23; // [rsp+E8h] [rbp-58h] BYREF
  int v24; // [rsp+ECh] [rbp-54h] BYREF
  int v25; // [rsp+F0h] [rbp-50h] BYREF
  int v26; // [rsp+F4h] [rbp-4Ch] BYREF
  int v27; // [rsp+F8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR SRWLock; // [rsp+100h] [rbp-40h] BYREF
  const wchar_t *v29; // [rsp+110h] [rbp-30h] BYREF
  const WCHAR *v30; // [rsp+118h] [rbp-28h] BYREF
  const wchar_t *v31; // [rsp+120h] [rbp-20h] BYREF
  const WCHAR *v32; // [rsp+128h] [rbp-18h] BYREF
  const wchar_t *v33; // [rsp+130h] [rbp-10h] BYREF
  const wchar_t *v34; // [rsp+138h] [rbp-8h] BYREF
  const WCHAR *v35; // [rsp+140h] [rbp+0h] BYREF
  const wchar_t *v36; // [rsp+148h] [rbp+8h] BYREF
  const wchar_t *v37; // [rsp+150h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+20h] BYREF
  void *v39; // [rsp+170h] [rbp+30h]
  int v40; // [rsp+178h] [rbp+38h]
  int v41; // [rsp+17Ch] [rbp+3Ch]
  __int64 *v42; // [rsp+180h] [rbp+40h]
  __int64 v43; // [rsp+188h] [rbp+48h]
  int *v44; // [rsp+190h] [rbp+50h]
  __int64 v45; // [rsp+198h] [rbp+58h]
  __int64 *v46; // [rsp+1A0h] [rbp+60h]
  __int64 v47; // [rsp+1A8h] [rbp+68h]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 < 0 && v3 == *(_DWORD *)(v1 + 88) && (v13 = v1 + 80) != 0 )
  {
    v14 = (RTL_SRWLOCK *)*((_QWORD *)this + 35);
    if ( v14 )
    {
      v15 = v14 + 33;
      AcquireSRWLockExclusive(v15);
      Context = 0LL;
    }
    else
    {
      v15 = 0LL;
      v21 = 0LL;
    }
    **((_DWORD **)this + 34) = 2;
    if ( v15 )
      ReleaseSRWLockExclusive(v15);
    Context = 0LL;
    fPending = 0;
    if ( __std_init_once_begin_initialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context)
      && fPending )
    {
      qword_18089A9A8 = 0LL;
      Context = &qword_18089A9A0;
      qword_18089A9A0 = &ShellScreenClippingLogging::`vftable';
      byte_18089A9B0 = 0;
      dword_18089A9B4 = 0;
      qword_18089A9B8 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18089A9A0, qword_18089A9B8, v12);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &qword_18089A9A0);
    }
    v10 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v10 > 5u )
    {
      v29 = *(const wchar_t **)(v13 + 48);
      v23 = *(_DWORD *)(v13 + 68);
      v24 = *(_DWORD *)(v13 + 16);
      v30 = *(const WCHAR **)(v13 + 120);
      v31 = *(const wchar_t **)(v13 + 112);
      v16 = *((_QWORD *)this + 34);
      v25 = *(_DWORD *)(v13 + 104);
      v32 = *(const WCHAR **)(v13 + 96);
      v33 = *(const wchar_t **)(v13 + 88);
      v26 = *(_DWORD *)(v13 + 80);
      v34 = *(const wchar_t **)(v13 + 72);
      v27 = *(_DWORD *)(v13 + 32);
      v35 = *(const WCHAR **)(v13 + 24);
      v19 = *(_DWORD *)v13;
      v36 = *(const wchar_t **)(v13 + 128);
      v20 = *(_DWORD *)(v13 + 64);
      v37 = *(const wchar_t **)(v13 + 56);
      LODWORD(v21) = *(_DWORD *)(v13 + 8);
      *(_QWORD *)&SRWLock.Id = 0x1000000LL;
      v22 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v10,
        byte_1807BA6CB,
        (const GUID *)(v16 + 8),
        v9,
        (__int64)&v22,
        (__int64)&SRWLock,
        (__int64)&v21,
        &v37,
        (__int64)&v20,
        &v36,
        (__int64)&v19,
        &v35,
        (__int64)&v27,
        &v34,
        (__int64)&v26,
        &v33,
        &v32,
        (__int64)&v25,
        &v31,
        &v30,
        (__int64)&v24,
        (__int64)&v23,
        &v29);
    }
  }
  else
  {
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 35);
    if ( v4 )
    {
      v5 = v4 + 33;
      AcquireSRWLockExclusive(v5);
      v22 = 0LL;
    }
    else
    {
      v5 = 0LL;
      *(_QWORD *)&SRWLock.Id = 0LL;
    }
    **((_DWORD **)this + 34) = 2;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    Context = 0LL;
    fPending = 0;
    if ( __std_init_once_begin_initialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context)
      && fPending )
    {
      qword_18089A9A8 = 0LL;
      Context = &qword_18089A9A0;
      qword_18089A9A0 = &ShellScreenClippingLogging::`vftable';
      byte_18089A9B0 = 0;
      dword_18089A9B4 = 0;
      qword_18089A9B8 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18089A9A0, qword_18089A9B8, v11);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &qword_18089A9A0);
    }
    v6 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 34);
      LODWORD(v21) = CurrentThreadId;
      v47 = 4LL;
      v45 = 4LL;
      v20 = *(_DWORD *)(v8 + 72);
      v22 = 0LL;
      v46 = &v21;
      v44 = &v20;
      v42 = &v22;
      UserData.Ptr = *(_QWORD *)(v6 + 8);
      v43 = 8LL;
      *(_QWORD *)&SRWLock.Id = 0x2050B000000LL;
      SRWLock.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v39 = &unk_1807BA82B;
      UserData.Reserved = 2;
      v40 = 79;
      v41 = 1;
      v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v6 + 32), &SRWLock, (LPCGUID)(v8 + 8), 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)((char *)this + 288));
}
