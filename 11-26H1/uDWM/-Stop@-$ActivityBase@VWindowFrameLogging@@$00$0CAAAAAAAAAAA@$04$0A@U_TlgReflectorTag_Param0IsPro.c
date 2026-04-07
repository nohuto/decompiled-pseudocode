/*
 * XREFs of ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800868AC
 * Callers:
 *     ?StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800763C0 (-StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     wil::details::lambda_call__CCaptureManager::StopWindowCapture_::_2_::_lambda_1___::_lambda_call__CCaptureManager::StopWindowCapture_::_2_::_lambda_1___ @ 0x180086888 (wil--details--lambda_call__CCaptureManager--StopWindowCapture_--_2_--_lambda_1___--_lambda_call_.c)
 *     ?StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1DD0 (-StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A20B0 (-StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A2FF0 (-StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180025440 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180025CFC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180075E60 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        _QWORD *a1,
        DWORD a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // edi
  const struct wil::FailureInfo *v6; // rdx
  int v7; // edi
  PSRWLOCK v8; // rcx
  _QWORD *v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // r9
  _BYTE v12[168]; // [rsp+40h] [rbp-A8h] BYREF
  PSRWLOCK SRWLock; // [rsp+F0h] [rbp+8h] BYREF
  DWORD CurrentThreadId; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v15; // [rsp+100h] [rbp+18h] BYREF

  CurrentThreadId = a2;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v4 = a1[34];
  v5 = *(_DWORD *)(v4 + 248);
  if ( v5 < 1 )
  {
    memset_0(v12, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v12, v6);
  }
  if ( *(int *)(v4 + 72) >= 0 )
    *(_DWORD *)(v4 + 72) = 0;
  v7 = v5 - 1;
  *(_DWORD *)(v4 + 248) = v7;
  v8 = SRWLock;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v7 )
  {
    v9 = wil::details::static_lazy<WindowFrameLogging>::get((__int64)v8, v3);
    v10 = (_DWORD *)v9[1];
    if ( *v10 > 5u && tlgKeywordOn(v9[1], 0x200000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      LODWORD(SRWLock) = 0;
      v15 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v10,
        byte_18010048B,
        a1[34] + 8LL,
        v11,
        (__int64)&v15,
        (__int64)&SRWLock,
        (__int64)&CurrentThreadId);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)a1);
}
