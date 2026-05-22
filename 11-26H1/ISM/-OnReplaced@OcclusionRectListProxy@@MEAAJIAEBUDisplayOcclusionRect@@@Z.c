/*
 * XREFs of ?OnReplaced@OcclusionRectListProxy@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013D020
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@I@Z @ 0x18013C700 (--$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoC.c)
 *     ?GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x18013CCE4 (-GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPE.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x1801A6460 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x1801A67A0 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 */

__int64 __fastcall OcclusionRectListProxy::OnReplaced(
        OcclusionRectListProxy *this,
        __int64 a2,
        const struct DisplayOcclusionRect *a3)
{
  Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  unsigned int v4; // r8d
  _QWORD *v5; // r9
  __int64 Struct; // rbx
  DisplayOcclusionContextProvider *Instance; // rax

  Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
  Struct = Microsoft::Bamo::GetStructAt<DisplayOcclusionRect>(Connection, v5, v4);
  Instance = DisplayOcclusionContextProvider::GetInstance();
  DisplayOcclusionContextProvider::OnOcclusionRectUpdated(
    Instance,
    (const struct DockInputIdentity *)Struct,
    (const struct tagRECT *)(Struct + 24));
  return 0LL;
}
