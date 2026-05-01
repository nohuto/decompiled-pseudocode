/*
 * XREFs of ?StartActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAX_N0@Z @ 0x18032F420
 * Callers:
 *     ??$Start@AEA_N_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEA_N$$QEA_N@Z @ 0x180325E1C (--$Start@AEA_N_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@SA-AV01@AEA_N.c)
 *     ??$Start@_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@$$QEA_N@Z @ 0x180325E6C (--$Start@_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@SA-AV01@$$QEA_N@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?LockExclusive@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18032CD34 (-LockExclusive@-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgRefle.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18032D19C (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::StartActivity(
        GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *this,
        char a2,
        char a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  const GUID *v14; // rcx
  char v15; // [rsp+30h] [rbp-49h] BYREF
  char v16; // [rsp+31h] [rbp-48h] BYREF
  RTL_SRWLOCK *v17; // [rsp+38h] [rbp-41h] BYREF
  __int64 v18; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  RTL_SRWLOCK **v22; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+88h] [rbp+Fh]
  char *v24; // [rsp+90h] [rbp+17h]
  __int64 v25; // [rsp+98h] [rbp+1Fh]
  char *v26; // [rsp+A0h] [rbp+27h]
  __int64 v27; // [rsp+A8h] [rbp+2Fh]

  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v17);
  v6 = *((_QWORD *)this + 34);
  v8 = GamingPostureCoreTelemetryProvider::Provider(v7);
  if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  else
    *(_OWORD *)(v6 + 8) = 0LL;
  *(_DWORD *)v6 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v17);
  v10 = GamingPostureCoreTelemetryProvider::Provider(v9);
  v11 = (__int64)v10;
  if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
  {
    v15 = a3;
    v16 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v13 = *((_QWORD *)this + 34);
    LODWORD(v17) = CurrentThreadId;
    v18 = 50331648LL;
    if ( !*(_BYTE *)(v13 + 4) || _tlgGuidIsZero((const struct _GUID *)(v13 + 24)) )
      v14 = 0LL;
    v27 = 1LL;
    v26 = &v15;
    v25 = 1LL;
    v24 = &v16;
    v23 = 4LL;
    v22 = &v17;
    v21 = 8LL;
    v20 = &v18;
    tlgWriteTransfer_EventWriteTransfer(v11, byte_1807E9FD7, (const GUID *)(v13 + 8), v14, 6u, &v19);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *)((char *)this + 288));
}
