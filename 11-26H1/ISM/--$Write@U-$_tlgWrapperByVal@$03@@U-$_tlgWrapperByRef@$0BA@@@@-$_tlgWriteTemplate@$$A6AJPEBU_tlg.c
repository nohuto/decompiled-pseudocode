/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180006284
 * Callers:
 *     ?LogOnContainerGuidChanging@BamoContainerInfoInputObjectProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011A1F4 (-LogOnContainerGuidChanging@BamoContainerInfoInputObjectProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnEndpointIdChanging@BamoUIAHitTestInputObjectProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011AC80 (-LogOnEndpointIdChanging@BamoUIAHitTestInputObjectProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoDragAreaClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011CF4C (-LogOnTypeChanging@BamoDragAreaClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoDragSourceClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011CFB0 (-LogOnTypeChanging@BamoDragSourceClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoDropTargetClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011D014 (-LogOnTypeChanging@BamoDropTargetClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoEdgyDragSourceClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011D078 (-LogOnTypeChanging@BamoEdgyDragSourceClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoInputForwardAreaInputObjectProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011D0DC (-LogOnTypeChanging@BamoInputForwardAreaInputObjectProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoInputForwardTargetInputObjectProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011D140 (-LogOnTypeChanging@BamoInputForwardTargetInputObjectProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoResizeAreaClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011D1A4 (-LogOnTypeChanging@BamoResizeAreaClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoResizeControllerClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011D208 (-LogOnTypeChanging@BamoResizeControllerClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnSourceTypeChanging@BamoDragManagerClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x180148318 (-LogOnSourceTypeChanging@BamoDragManagerClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoManualDragAreaClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18014B524 (-LogOnTypeChanging@BamoManualDragAreaClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoManualResizeAreaClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x1801519F8 (-LogOnTypeChanging@BamoManualResizeAreaClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD v7[8]; // [rsp+30h] [rbp-58h] BYREF

  v7[7] = 16LL;
  v7[6] = *a6;
  v7[4] = a5;
  v7[5] = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 4, v7);
}
