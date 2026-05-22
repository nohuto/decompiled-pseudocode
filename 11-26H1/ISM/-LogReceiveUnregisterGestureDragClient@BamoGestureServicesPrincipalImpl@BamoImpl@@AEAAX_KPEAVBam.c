/*
 * XREFs of ?LogReceiveUnregisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAX_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18008D5E8
 * Callers:
 *     ?UnregisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJ_KI@Z @ 0x18003D200 (-UnregisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJ_KI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800053A0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800A9B74 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::LogReceiveUnregisterGestureDragClient(
        BamoImpl::BamoGestureServicesPrincipalImpl *this,
        __int64 a2,
        struct BamoDragManagerClientProxy *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  int v5; // r9d
  Microsoft::BamoImpl::BamoPrincipalImpl *v6; // r10
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+40h] [rbp-18h] BYREF
  unsigned int ItemId; // [rsp+44h] [rbp-14h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v3 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    if ( v4 )
      v5 = *(_DWORD *)(v4 + 40);
    v14 = v5;
    v13 = v7;
    v11 = *(_DWORD *)(*((_QWORD *)Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(v6) + 4) + 36LL);
    ItemId = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId((Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal *)(v8 - 16));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_180221FF8,
      v9,
      v10,
      (__int64)&ItemId,
      (__int64)&v11,
      (__int64)&v13,
      (__int64)&v14);
  }
}
