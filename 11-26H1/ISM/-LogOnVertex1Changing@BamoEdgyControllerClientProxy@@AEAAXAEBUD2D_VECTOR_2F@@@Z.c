/*
 * XREFs of ?LogOnVertex1Changing@BamoEdgyControllerClientProxy@@AEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x180159ECC
 * Callers:
 *     ?UpdateVertex1@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJ_NPEBUD2D_VECTOR_2F@@@Z @ 0x18015AA34 (-UpdateVertex1@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJ_NPEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800020DC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall BamoEdgyControllerClientProxy::LogOnVertex1Changing(
        BamoEdgyControllerClientProxy *this,
        const struct D2D_VECTOR_2F *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  const struct D2D_VECTOR_2F *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    LODWORD(v5) = *(_DWORD *)(v3 + 40);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_180224A36,
      v3,
      v4,
      (__int64)&v5);
  }
}
