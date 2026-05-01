/*
 * XREFs of ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180068BDC
 * Callers:
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180067D04 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 *     ?OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180174590 (-OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x1801747C0 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180174988 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800186C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180068EA8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18028C95C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        DWORD a2)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // esi
  const struct wil::FailureInfo *v8; // rdx
  int v9; // esi
  const struct _tlgProvider_t *v10; // rbx
  _BYTE v11[176]; // [rsp+40h] [rbp-59h] BYREF
  PSRWLOCK SRWLock; // [rsp+100h] [rbp+67h] BYREF
  DWORD CurrentThreadId; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v14; // [rsp+110h] [rbp+77h] BYREF

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
    v14 = 0LL;
  }
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 272);
  v7 = *(_DWORD *)(v6 + 248);
  if ( v7 < 1 )
  {
    memset_0(v11, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v11, v8);
  }
  if ( *(int *)(v6 + 72) >= 0 )
    *(_DWORD *)(v6 + 72) = 0;
  v9 = v7 - 1;
  *(_DWORD *)(v6 + 248) = v9;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v9 )
  {
    v10 = SingleViewExperienceLogging::Provider(v5);
    if ( *(_DWORD *)v10 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      LODWORD(SRWLock) = 0;
      v14 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v10,
        byte_18082F719,
        (const GUID *)(*(_QWORD *)(a1 + 272) + 8LL),
        0LL,
        (__int64)&v14,
        (__int64)&SRWLock,
        (__int64)&CurrentThreadId);
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  if ( *(_DWORD *)(a1 + 312) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
}
