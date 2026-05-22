/*
 * XREFs of ?LogReceiveSendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXGMII@Z @ 0x180189864
 * Callers:
 *     ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMII@Z @ 0x18018A928 (-SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMII@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@333@Z @ 0x180006048 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800A9B74 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::LogReceiveSendHapticFeedbackForPlayCount(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this,
        __int64 a2,
        float a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rbx
  Microsoft::BamoImpl::BamoPrincipalImpl *v6; // r8
  int v7; // r9d
  __int16 v8; // r10
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r9
  _WORD v12[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v13; // [rsp+54h] [rbp-1Ch] BYREF
  int v14; // [rsp+58h] [rbp-18h] BYREF
  float v15; // [rsp+5Ch] [rbp-14h] BYREF
  int v16; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v17[3]; // [rsp+64h] [rbp-Ch] BYREF

  v5 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v13 = a5;
    v15 = a3;
    v14 = v7;
    v12[0] = v8;
    v16 = *(_DWORD *)(*((_QWORD *)Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(v6) + 4) + 36LL);
    v17[0] = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId((struct Microsoft::BamoImpl::ConnectionIndirector **)(v9 - 16));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      (__int64)&unk_180227E27,
      v10,
      v11,
      (__int64)v17,
      (__int64)&v16,
      (__int64)v12,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
}
