/*
 * XREFs of ?LogSendStartOperation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXI_N_K1IW4GestureProcessorType@@@Z @ 0x18011EC84
 * Callers:
 *     ?StartOperation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJI_N_K1PEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x18012867C (-StartOperation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJI_N_K1PEAVBamoDragManagerClientPrinc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U3@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@533@Z @ 0x180005D64 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U3@U1@.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoGestureServicesProxyImpl::LogSendStartOperation(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rax
  int v13; // ecx
  _BYTE v14[4]; // [rsp+60h] [rbp+Fh] BYREF
  int v15; // [rsp+64h] [rbp+13h] BYREF
  int v16; // [rsp+68h] [rbp+17h] BYREF
  int v17; // [rsp+6Ch] [rbp+1Bh] BYREF
  int v18; // [rsp+70h] [rbp+1Fh] BYREF
  int v19; // [rsp+74h] [rbp+23h] BYREF
  __int64 v20; // [rsp+78h] [rbp+27h] BYREF
  __int64 v21; // [rsp+80h] [rbp+2Fh] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v15 = a7;
    v16 = a6;
    v20 = a5;
    v12 = *(_QWORD *)(v11 + 16);
    v21 = v9;
    v14[0] = v8;
    v17 = a2;
    v13 = *(_DWORD *)(v12 + 36);
    v19 = *(_DWORD *)(v11 + 24);
    v18 = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (__int64)&unk_18021A0A6,
      v8,
      v9,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)v14,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v16,
      (__int64)&v15);
  }
}
