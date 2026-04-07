/*
 * XREFs of ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800866C0
 * Callers:
 *     ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800864F8 (-StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800865DC (-StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x1800A1BC8 (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800A1CCC (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180075E60 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  RTL_SRWLOCK *v6; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 272);
  v5 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(v4, v3) + 1);
  if ( *v5 > 5u && tlgKeywordOn((__int64)v5, 0x200000000000LL) )
    EtwEventActivityIdControl(3LL, v2 + 8);
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  v6 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
}
