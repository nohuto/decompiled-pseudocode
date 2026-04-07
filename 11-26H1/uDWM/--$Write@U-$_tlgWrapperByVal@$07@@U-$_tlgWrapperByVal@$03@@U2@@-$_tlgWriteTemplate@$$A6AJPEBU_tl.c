/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180025CFC
 * Callers:
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002403C (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180024760 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180025274 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180026C10 (-StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x18006CF00 (-StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180071080 (-StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180074CA0 (-StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180075740 (-StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800868AC (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x1800986A0 (-StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800A2480 (-StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800A26B0 (-StopActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800A28E0 (-StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800A2B10 (-StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v8; // [rsp+30h] [rbp-41h]
  _DWORD v9[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v10; // [rsp+40h] [rbp-31h]
  unsigned __int16 *v11; // [rsp+50h] [rbp-21h] BYREF
  int v12; // [rsp+58h] [rbp-19h]
  int v13; // [rsp+5Ch] [rbp-15h]
  unsigned __int8 *v14; // [rsp+60h] [rbp-11h]
  int v15; // [rsp+68h] [rbp-9h]
  int v16; // [rsp+6Ch] [rbp-5h]
  __int64 v17; // [rsp+70h] [rbp-1h]
  __int64 v18; // [rsp+78h] [rbp+7h]
  __int64 v19; // [rsp+80h] [rbp+Fh]
  __int64 v20; // [rsp+88h] [rbp+17h]
  __int64 v21; // [rsp+90h] [rbp+1Fh]
  __int64 v22; // [rsp+98h] [rbp+27h]

  v21 = a7;
  v19 = a6;
  v17 = a5;
  v9[0] = *a2 << 24;
  v9[1] = *(unsigned __int16 *)(a2 + 1);
  v10 = *(_QWORD *)(a2 + 3);
  v11 = *(unsigned __int16 **)(a1 + 8);
  v22 = 4LL;
  v20 = 4LL;
  v18 = 8LL;
  v12 = *v11;
  v15 = *(unsigned __int16 *)(a2 + 11);
  v14 = a2 + 11;
  v13 = 2;
  v16 = 1;
  v8 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  return ((__int64 (__fastcall *)(_QWORD, _DWORD *, __int64, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
           *(_QWORD *)(a1 + 32),
           v9,
           a3,
           0LL,
           5,
           &v11,
           v8);
}
