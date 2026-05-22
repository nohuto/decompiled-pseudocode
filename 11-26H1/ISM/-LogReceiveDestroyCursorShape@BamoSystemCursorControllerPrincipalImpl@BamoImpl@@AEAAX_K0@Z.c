/*
 * XREFs of ?LogReceiveDestroyCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAX_K0@Z @ 0x1800F90B8
 * Callers:
 *     ?DestroyCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K0@Z @ 0x1800F87D0 (-DestroyCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180005434 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800A9B74 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::LogReceiveDestroyCursorShape(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  Microsoft::BamoImpl::BamoPrincipalImpl *v3; // r9
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  int ItemId; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+88h] [rbp+20h] BYREF

  v1 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v9 = v2;
    v10[0] = v4;
    v11 = *(_DWORD *)(*((_QWORD *)Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(v3) + 4) + 36LL);
    ItemId = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId((struct Microsoft::BamoImpl::ConnectionIndirector **)(v5 - 16));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v1,
      (__int64)&unk_180217C99,
      v6,
      v7,
      (__int64)&ItemId,
      (__int64)&v11,
      (__int64)v10,
      (__int64)&v9);
  }
}
