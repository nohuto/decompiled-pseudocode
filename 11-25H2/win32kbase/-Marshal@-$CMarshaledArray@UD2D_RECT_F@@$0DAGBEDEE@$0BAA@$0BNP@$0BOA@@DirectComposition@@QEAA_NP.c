/*
 * XREFs of ?Marshal@?$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0BAA@$0BNP@$0BOA@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D0A8
 * Callers:
 *     ?EmitUpdateCommands@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022A990 (-EmitUpdateCommands@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1400ED7E0 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 */

bool __fastcall DirectComposition::CMarshaledArray<D2D_RECT_F,811680580,256,479,480>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch ***a2,
        int a3,
        _DWORD *a4)
{
  return DirectComposition::CMarshaledArrayBase::Marshal(a1, a2, a3, a4, 256, 479, 480, 0x10uLL);
}
