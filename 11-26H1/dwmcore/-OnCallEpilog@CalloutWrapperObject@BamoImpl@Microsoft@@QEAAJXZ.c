/*
 * XREFs of ?OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x18023FFE8
 * Callers:
 *     ?SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z @ 0x180161AC8 (-SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z.c)
 *     ?OnDisconnectedCallout@BamoDataSourceProxy@@EEAAJXZ @ 0x180161D90 (-OnDisconnectedCallout@BamoDataSourceProxy@@EEAAJXZ.c)
 *     ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180161E00 (-Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnPeerConnectedThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z @ 0x180162170 (-OnPeerConnectedThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerI.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180162260 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?CreateDataSourceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18020123C (-CreateDataSourceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprov.c)
 *     ?Thunk_SetBooleanValue_17@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18020B2B0 (-Thunk_SetBooleanValue_17@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEA.c)
 *     ??1?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18023EAFC (--1-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn Microsoft::BamoImpl::CalloutWrapperObject::OnCallEpilog(
        Microsoft::BamoImpl::CalloutWrapperObject *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    (void *)0xEA,
    (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.h",
    a4);
}
