/*
 * XREFs of ?LogReceiveSendHapticFeedbackForDuration@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXGMI@Z @ 0x1801897AC
 * Callers:
 *     ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMI@Z @ 0x18018A72C (-SendHapticFeedbackForDuration@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@33@Z @ 0x180005FA4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U1@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800A9B74 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::LogReceiveSendHapticFeedbackForDuration(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this,
        __int64 a2,
        float a3)
{
  __int64 v3; // rbx
  Microsoft::BamoImpl::BamoPrincipalImpl *v4; // r8
  int v5; // r9d
  __int16 v6; // r10
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r9
  _WORD v10[2]; // [rsp+50h] [rbp-28h] BYREF
  int v11; // [rsp+54h] [rbp-24h] BYREF
  float v12; // [rsp+58h] [rbp-20h] BYREF
  int v13; // [rsp+5Ch] [rbp-1Ch] BYREF
  _DWORD v14[6]; // [rsp+60h] [rbp-18h] BYREF

  v3 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v12 = a3;
    v11 = v5;
    v10[0] = v6;
    v13 = *(_DWORD *)(*((_QWORD *)Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(v4) + 4) + 36LL);
    v14[0] = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId((struct Microsoft::BamoImpl::ConnectionIndirector **)(v7 - 16));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_180227ED8,
      v8,
      v9,
      (__int64)v14,
      (__int64)&v13,
      (__int64)v10,
      (__int64)&v12,
      (__int64)&v11);
  }
}
