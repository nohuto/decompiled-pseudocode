/*
 * XREFs of ?LogReceiveStartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXIPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180145A98
 * Callers:
 *     ?StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@Z @ 0x180146208 (-StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x1800034FC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800A9B74 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::LogReceiveStartAnimation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // rbx
  int v7; // r8d
  int v8; // r9d
  Microsoft::BamoImpl::BamoPrincipalImpl *v9; // r10
  int v10; // r11d
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+50h] [rbp-20h] BYREF
  int v15; // [rsp+54h] [rbp-1Ch] BYREF
  int v16; // [rsp+58h] [rbp-18h] BYREF
  int v17; // [rsp+5Ch] [rbp-14h] BYREF
  _DWORD v18[4]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v19; // [rsp+90h] [rbp+20h] BYREF

  v19 = a3;
  v6 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    LODWORD(v19) = a6;
    if ( a5 )
      v7 = *(_DWORD *)(a5 + 40);
    v14 = v7;
    v15 = v8;
    v16 = v10;
    v17 = *(_DWORD *)(*((_QWORD *)Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(v9) + 4) + 36LL);
    v18[0] = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId((struct Microsoft::BamoImpl::ConnectionIndirector **)(v11 - 16));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      (__int64)&unk_180222234,
      v12,
      v13,
      (__int64)v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v19);
  }
}
