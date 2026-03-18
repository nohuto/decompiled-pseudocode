/*
 * XREFs of ?Marshal@?$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0IA@$0BNN@$0BNO@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D0E0
 * Callers:
 *     ?EmitUpdateCommands@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022A990 (-EmitUpdateCommands@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1400ED7E0 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 */

bool __fastcall DirectComposition::CMarshaledArray<D2D_RECT_F,811680580,128,477,478>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch ***a2,
        int a3,
        _DWORD *a4)
{
  return DirectComposition::CMarshaledArrayBase::Marshal(a1, a2, a3, a4, 128, 477, 478, 0x10uLL);
}
