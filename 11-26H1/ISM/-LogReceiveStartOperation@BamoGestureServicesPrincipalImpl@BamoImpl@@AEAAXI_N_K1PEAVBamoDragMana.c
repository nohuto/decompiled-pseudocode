/*
 * XREFs of ?LogReceiveStartOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXI_N_K1PEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180145B78
 * Callers:
 *     ?StartOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJI_N_K1IW4GestureProcessorType@@@Z @ 0x180146720 (-StartOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJI_N_K1IW4GestureProcessorType@@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U3@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@533@Z @ 0x180005D64 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U3@U1@.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800A9B74 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::LogReceiveStartOperation(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v7; // rbx
  char v9; // r8
  __int64 v10; // r9
  int v11; // r10d
  Microsoft::BamoImpl::BamoPrincipalImpl *v12; // r11
  __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v16[4]; // [rsp+60h] [rbp+Fh] BYREF
  int v17; // [rsp+64h] [rbp+13h] BYREF
  int v18; // [rsp+68h] [rbp+17h] BYREF
  int v19; // [rsp+6Ch] [rbp+1Bh] BYREF
  int v20; // [rsp+70h] [rbp+1Fh] BYREF
  int ItemId; // [rsp+74h] [rbp+23h] BYREF
  __int64 v22; // [rsp+78h] [rbp+27h] BYREF
  __int64 v23; // [rsp+80h] [rbp+2Fh] BYREF

  v7 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v17 = a7;
    if ( a6 )
      v11 = *(_DWORD *)(a6 + 40);
    v22 = a5;
    v18 = v11;
    v23 = v10;
    v16[0] = v9;
    v19 = a2;
    v20 = *(_DWORD *)(*((_QWORD *)Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(v12) + 4) + 36LL);
    ItemId = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId((struct Microsoft::BamoImpl::ConnectionIndirector **)(v13 - 16));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      (__int64)&unk_18022235B,
      v14,
      v15,
      (__int64)&ItemId,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)v16,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v18,
      (__int64)&v17);
  }
}
