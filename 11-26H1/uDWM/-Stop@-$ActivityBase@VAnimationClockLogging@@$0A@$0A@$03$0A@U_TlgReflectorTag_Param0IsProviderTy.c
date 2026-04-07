/*
 * XREFs of ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180025274
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180024AB0 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x18003EAFC (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003F854 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x180040D60 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x180040EC8 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x180098148 (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180025070 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180025390 (-LockExclusive@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180025440 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180025CFC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        _QWORD *a1,
        int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // edi
  const struct wil::FailureInfo *v7; // rdx
  int v8; // edi
  PSRWLOCK v9; // rcx
  _DWORD *v10; // rdi
  int v11; // r9d
  _BYTE v12[184]; // [rsp+40h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock; // [rsp+100h] [rbp+8h] BYREF
  int v14; // [rsp+110h] [rbp+18h] BYREF
  __int64 v15; // [rsp+118h] [rbp+20h] BYREF

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v5 = a1[34];
  v6 = *(_DWORD *)(v5 + 248);
  if ( v6 < 1 )
  {
    memset_0(v12, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v12, v7);
  }
  if ( *(int *)(v5 + 72) >= 0 )
    *(_DWORD *)(v5 + 72) = a2;
  v8 = v6 - 1;
  *(_DWORD *)(v5 + 248) = v8;
  v9 = SRWLock;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v8 )
  {
    v10 = (_DWORD *)wil::details::static_lazy<AnimationClockLogging>::get((__int64)v9, v4)[1];
    if ( *v10 > 5u )
    {
      LODWORD(SRWLock) = GetCurrentThreadId();
      v14 = a2;
      v15 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v10,
        (unsigned int)&unk_1800FF5FD,
        a1[34] + 8,
        v11,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&SRWLock);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)a1);
}
