/*
 * XREFs of ?LogReceiveRequestHitTest@BamoTestCommandsPrincipalImpl@BamoImpl@@AEAAX_J0PEBG@Z @ 0x1801A6A44
 * Callers:
 *     ?RequestHitTest@BamoTestCommandsPrincipalImpl@BamoImpl@@QEAAJ_J0PEBG@Z @ 0x1801A6CC0 (-RequestHitTest@BamoTestCommandsPrincipalImpl@BamoImpl@@QEAAJ_J0PEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x1800061B0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTe.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800A9B74 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall BamoImpl::BamoTestCommandsPrincipalImpl::LogReceiveRequestHitTest(
        BamoImpl::BamoTestCommandsPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  const WCHAR *v6; // r9
  Microsoft::BamoImpl::BamoPrincipalImpl *v7; // r10
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+50h] [rbp-28h] BYREF
  int ItemId; // [rsp+54h] [rbp-24h] BYREF
  const WCHAR *v14; // [rsp+58h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  __int64 v16; // [rsp+68h] [rbp-10h] BYREF

  v4 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v14 = v6;
    v15 = v5;
    v16 = v8;
    v12 = *(_DWORD *)(*((_QWORD *)Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(v7) + 4) + 36LL);
    ItemId = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId((struct Microsoft::BamoImpl::ConnectionIndirector **)(v9 - 16));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      v4,
      (__int64)&unk_180229A5B,
      v10,
      v11,
      (__int64)&ItemId,
      (__int64)&v12,
      (__int64)&v16,
      (__int64)&v15,
      &v14);
  }
}
