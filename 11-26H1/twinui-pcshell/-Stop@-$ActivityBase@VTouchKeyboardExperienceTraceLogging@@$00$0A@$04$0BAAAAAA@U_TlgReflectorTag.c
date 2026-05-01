/*
 * XREFs of ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800144F8
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180013620 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180056430 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::operator() @ 0x1804697C8 (_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_--operator().c)
 *     _lambda_3f93e84ee3927ec557523765ee2fe070_::operator() @ 0x180469CEC (_lambda_3f93e84ee3927ec557523765ee2fe070_--operator().c)
 *     _lambda_5c8612707d1ce1f8a03bb177e1540ce1_::operator() @ 0x180469EBC (_lambda_5c8612707d1ce1f8a03bb177e1540ce1_--operator().c)
 *     _lambda_a469c2389bb8dc71f832d95fbc03d5e0_::operator() @ 0x18046AB78 (_lambda_a469c2389bb8dc71f832d95fbc03d5e0_--operator().c)
 *     _lambda_fc11afed419eac497169c2fc21e58d6f_::operator() @ 0x18046B3E8 (_lambda_fc11afed419eac497169c2fc21e58d6f_--operator().c)
 *     ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18046ED10 (-OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x18046F438 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ?ReportStopActivity@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18001467C (-ReportStopActivity@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_T.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800186C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18028C95C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        int a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rax
  int v6; // r14d
  const struct wil::FailureInfo *v7; // rdx
  int v8; // esi
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  const struct _tlgProvider_t *v14; // rax
  int v15; // ebx
  _BYTE v16[192]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v17; // [rsp+110h] [rbp+67h] BYREF
  PSRWLOCK SRWLock; // [rsp+120h] [rbp+77h] BYREF
  __int64 v19; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v4 )
  {
    v4 += 33;
    AcquireSRWLockExclusive(v4);
    v17 = 0LL;
  }
  else
  {
    SRWLock = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 272);
  v6 = *(_DWORD *)(v5 + 248);
  if ( v6 < 1 )
  {
    memset_0(v16, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v16, v7);
  }
  v8 = *(_DWORD *)(v5 + 72);
  if ( v8 >= 0 )
  {
    *(_DWORD *)(v5 + 72) = a2;
    v8 = a2;
  }
  v9 = v6 - 1;
  *(_DWORD *)(v5 + 248) = v9;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v9 )
  {
    v14 = TouchKeyboardExperienceTraceLogging::Provider();
    v15 = (int)v14;
    if ( *(_DWORD *)v14 > 5u )
    {
      LODWORD(v17) = GetCurrentThreadId();
      LODWORD(SRWLock) = a2;
      v19 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v15,
        (unsigned int)&unk_1808070D8,
        *(_DWORD *)(a1 + 272) + 8,
        0,
        (__int64)&v19,
        (__int64)&SRWLock,
        (__int64)&v17);
    }
  }
  else
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
      a1,
      (unsigned int)v8);
  }
  return wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
           a1,
           v10,
           v11,
           v12);
}
