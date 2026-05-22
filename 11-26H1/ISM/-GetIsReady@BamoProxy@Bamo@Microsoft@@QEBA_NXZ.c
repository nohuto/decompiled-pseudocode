/*
 * XREFs of ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ @ 0x18013CD04
 * Callers:
 *     ?RemoteClear@?$ListProxyCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@@Bamo@Microsoft@@MEAAJXZ @ 0x18013D100 (-RemoteClear@-$ListProxyCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo.c)
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013D180 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Li.c)
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x18013D2A0 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Li.c)
 *     ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013D4E0 (-RemoteReplace@-$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@L.c)
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x18013E2C0 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib.c)
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x18013E3E0 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib.c)
 *     ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x18013E570 (-RemoteReplace@-$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Li.c)
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z @ 0x1801A1100 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@L.c)
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJI@Z @ 0x1801A1260 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@L.c)
 *     ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z @ 0x1801A13A0 (-RemoteReplace@-$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall Microsoft::Bamo::BamoProxy::GetIsReady(Microsoft::Bamo::BamoProxy *this)
{
  return *(_BYTE *)((*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 56LL))(this) + 28);
}
