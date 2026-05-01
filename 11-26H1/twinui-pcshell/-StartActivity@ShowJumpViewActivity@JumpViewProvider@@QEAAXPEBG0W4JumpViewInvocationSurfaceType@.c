/*
 * XREFs of ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x180202010
 * Callers:
 *     ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x1802ADB88 (-BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA-AVShowJumpViewActivity@JumpViewProvider.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@544@Z @ 0x1800038D4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U2@@-$_tlgWrit.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?CensorPath@JumpViewTelemetryHelper@@YAPEBGPEBG@Z @ 0x180202164 (-CensorPath@JumpViewTelemetryHelper@@YAPEBGPEBG@Z.c)
 *     ?zInternalStart@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180298218 (-zInternalStart@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 *     ?Provider@JumpViewProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1802982A4 (-Provider@JumpViewProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IsEdgePinnedWebsiteAumid@Details@JumpViewTelemetryHelper@@YA_NPEBG@Z @ 0x1802BF0E8 (-IsEdgePinnedWebsiteAumid@Details@JumpViewTelemetryHelper@@YA_NPEBG@Z.c)
 */

void __fastcall JumpViewProvider::ShowJumpViewActivity::StartActivity(__int64 a1, const WCHAR *a2, const WCHAR *a3)
{
  const unsigned __int16 *v6; // rdx
  const WCHAR *v7; // rsi
  const WCHAR *v8; // r14
  const unsigned __int16 *v9; // rdx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  __int64 v14; // rcx
  DWORD v15; // [rsp+54h] [rbp-1Ch] BYREF
  const WCHAR *v16; // [rsp+58h] [rbp-18h] BYREF
  const WCHAR *v17; // [rsp+60h] [rbp-10h] BYREF
  __int64 v18; // [rsp+68h] [rbp-8h] BYREF

  if ( JumpViewTelemetryHelper::Details::IsEdgePinnedWebsiteAumid(a2, a2) )
  {
    v7 = L"Microsoft.Edge.?";
    v8 = &pvData;
  }
  else
  {
    v7 = JumpViewTelemetryHelper::CensorPath(a2, v6);
    v8 = JumpViewTelemetryHelper::CensorPath(a3, v9);
  }
  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v10 = JumpViewProvider::Provider();
  v11 = (__int64)v10;
  if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
  {
    v16 = v8;
    v17 = v7;
    CurrentThreadId = GetCurrentThreadId();
    v13 = *(_QWORD *)(a1 + 272);
    v15 = CurrentThreadId;
    v18 = 0LL;
    if ( !*(_BYTE *)(v13 + 4) || _tlgGuidIsZero((const struct _GUID *)(v13 + 24)) )
      v14 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (__int64)&unk_1807F62B2,
      v13 + 8,
      v14,
      (__int64)&v18,
      (__int64)&v15,
      &v17,
      &v16);
  }
  if ( !*(_DWORD *)(a1 + 312) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
}
