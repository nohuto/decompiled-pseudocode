/*
 * XREFs of ?StartActivity@CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18007B9BC
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1801DF1D8 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007BA98 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x1801E6074 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall MultitaskingViewTelemetry::CreateMultitaskingViewHost::StartActivity(__int64 a1, int a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  int v6; // edi
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  int v9; // ecx
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF
  DWORD v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = WindowManagementLogging::Provider(v4);
  v6 = (int)v5;
  if ( *(_DWORD *)v5 > 5u && (unsigned __int8)tlgKeywordOn(v5, 0x200000000000LL) )
  {
    v13 = 0x1000000LL;
    v11 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v8 = *(_QWORD *)(a1 + 272);
    v12 = CurrentThreadId;
    v10[0] = 0LL;
    if ( !*(_BYTE *)(v8 + 4) || _tlgGuidIsZero((const struct _GUID *)(v8 + 24)) )
      v9 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v6,
      (unsigned int)&unk_180811715,
      v8 + 8,
      v9,
      (__int64)v10,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v13);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
}
