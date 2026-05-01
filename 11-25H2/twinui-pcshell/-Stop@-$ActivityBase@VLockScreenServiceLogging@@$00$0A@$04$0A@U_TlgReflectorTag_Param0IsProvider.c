/*
 * XREFs of ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D1208
 * Callers:
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x180018CB4 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 *     ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x180018F8C (-GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@.c)
 *     ?PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ @ 0x1800D10F0 (-PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ.c)
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x1800D2ED4 (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 * Callees:
 *     ?Provider@LockScreenServiceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180019344 (-Provider@LockScreenServiceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180042A88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?ReportStopActivity@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800D1358 (-ReportStopActivity@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180295924 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

void __fastcall wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        DWORD a2)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // r14d
  const struct wil::FailureInfo *v8; // rdx
  int v9; // esi
  int v10; // r14d
  const struct _tlgProvider_t *v11; // rbx
  _BYTE v12[192]; // [rsp+40h] [rbp-69h] BYREF
  PSRWLOCK SRWLock; // [rsp+110h] [rbp+67h] BYREF
  DWORD CurrentThreadId; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v15; // [rsp+120h] [rbp+77h] BYREF

  CurrentThreadId = a2;
  v3 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v3 )
  {
    v4 = v3 + 33;
    AcquireSRWLockExclusive(v4);
    SRWLock = 0LL;
  }
  else
  {
    v4 = 0LL;
    v15 = 0LL;
  }
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 272);
  v7 = *(_DWORD *)(v6 + 248);
  if ( v7 < 1 )
  {
    memset_0(v12, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v12, v8);
  }
  v9 = *(_DWORD *)(v6 + 72);
  if ( v9 >= 0 )
  {
    *(_DWORD *)(v6 + 72) = 0;
    v9 = 0;
  }
  v10 = v7 - 1;
  *(_DWORD *)(v6 + 248) = v10;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v10 )
  {
    v11 = LockScreenServiceLogging::Provider(v5);
    if ( *(_DWORD *)v11 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      LODWORD(SRWLock) = 0;
      v15 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v11,
        byte_1807B6E26,
        (const GUID *)(*(_QWORD *)(a1 + 272) + 8LL),
        0LL,
        (__int64)&v15,
        (__int64)&SRWLock,
        (__int64)&CurrentThreadId);
    }
  }
  else
  {
    wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
      a1,
      (unsigned int)v9);
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
