/*
 * XREFs of ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801DAA80
 * Callers:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180181174 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1801D62F0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180254FE0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180042A88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18004738C (-Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180295924 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(
        _QWORD *a1,
        int a2)
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // esi
  const struct wil::FailureInfo *v9; // rdx
  int v10; // esi
  const struct _tlgProvider_t *v11; // rbx
  _BYTE v12[192]; // [rsp+40h] [rbp-69h] BYREF
  PSRWLOCK SRWLock; // [rsp+110h] [rbp+67h] BYREF
  __int64 v14; // [rsp+120h] [rbp+77h] BYREF
  __int64 v15; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = (RTL_SRWLOCK *)a1[35];
  if ( v4 )
  {
    v5 = v4 + 33;
    AcquireSRWLockExclusive(v5);
    SRWLock = 0LL;
  }
  else
  {
    v5 = 0LL;
    v14 = 0LL;
  }
  v6 = 0LL;
  v7 = a1[34];
  v8 = *(_DWORD *)(v7 + 248);
  if ( v8 < 1 )
  {
    memset_0(v12, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v12, v9);
  }
  if ( *(int *)(v7 + 72) >= 0 )
    *(_DWORD *)(v7 + 72) = a2;
  v10 = v8 - 1;
  *(_DWORD *)(v7 + 248) = v10;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v10 )
  {
    v11 = LauncherTelemetryLogging::Provider(v6);
    if ( *(_DWORD *)v11 > 5u
      && (*((_QWORD *)v11 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v11 + 3) & 0x400000000000LL) == *((_QWORD *)v11 + 3) )
    {
      LODWORD(SRWLock) = GetCurrentThreadId();
      LODWORD(v14) = a2;
      v15 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v11,
        byte_1807B8315,
        (const GUID *)(a1[34] + 8LL),
        0LL,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&SRWLock);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)a1);
}
