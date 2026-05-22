/*
 * XREFs of ?LogSendSendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@AEAAXGMII@Z @ 0x18011E920
 * Callers:
 *     ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMII@Z @ 0x180127AD8 (-SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMII@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@333@Z @ 0x180006048 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::LogSendSendHapticFeedbackForPlayCount(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this,
        __int64 a2,
        float a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int16 v8; // r11
  __int64 v9; // rax
  int v10; // ecx
  _WORD v11[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+54h] [rbp-1Ch] BYREF
  int v13; // [rsp+58h] [rbp-18h] BYREF
  float v14; // [rsp+5Ch] [rbp-14h] BYREF
  int v15; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v16[3]; // [rsp+64h] [rbp-Ch] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v12 = a5;
    v9 = *(_QWORD *)(v7 + 16);
    v14 = a3;
    v13 = v6;
    v11[0] = v8;
    v10 = *(_DWORD *)(v9 + 36);
    v16[0] = *(_DWORD *)(v7 + 24);
    v15 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      (__int64)&unk_18021B50A,
      v5,
      v6,
      (__int64)v16,
      (__int64)&v15,
      (__int64)v11,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
}
