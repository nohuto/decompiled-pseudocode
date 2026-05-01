/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1805CF1A0
 * Callers:
 *     ??1?$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1805CF16C (--1-$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_1805CF16C.c)
 * Callees:
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802903AC (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1802B3424 (-Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::~_TlgActivityBase<wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>(
        _DWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax

  if ( *a1 == 1 )
  {
    *a1 = 2;
    v2 = MeetAndChatTelemetryLogging::Provider((__int64)a1);
    _tlgWriteActivityAutoStop<70368744177664,5>(v2);
  }
  *a1 = 3;
}
