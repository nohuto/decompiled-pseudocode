/*
 * XREFs of ?LogReceiveCancelResize@BamoResizeContextualProcessorPrincipalImpl@BamoImpl@@AEAAXIPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801524F4
 * Callers:
 *     ?CancelResize@BamoResizeContextualProcessorPrincipalImpl@BamoImpl@@QEAAJII@Z @ 0x18015234C (-CancelResize@BamoResizeContextualProcessorPrincipalImpl@BamoImpl@@QEAAJII@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180001FB4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800A9B74 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall BamoImpl::BamoResizeContextualProcessorPrincipalImpl::LogReceiveCancelResize(
        BamoImpl::BamoResizeContextualProcessorPrincipalImpl *this,
        __int64 a2,
        struct BamoResizeControllerClientProxy *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  int v5; // r9d
  Microsoft::BamoImpl::BamoPrincipalImpl *v6; // r10
  int v7; // r11d
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v13[4]; // [rsp+48h] [rbp-10h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v3 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    if ( v4 )
      v5 = *(_DWORD *)(v4 + 40);
    v14 = v5;
    v11 = v7;
    v12 = *(_DWORD *)(*((_QWORD *)Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(v6) + 4) + 36LL);
    v13[0] = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId((struct Microsoft::BamoImpl::ConnectionIndirector **)(v8 - 16));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_180223F94,
      v9,
      v10,
      (__int64)v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v14);
  }
}
