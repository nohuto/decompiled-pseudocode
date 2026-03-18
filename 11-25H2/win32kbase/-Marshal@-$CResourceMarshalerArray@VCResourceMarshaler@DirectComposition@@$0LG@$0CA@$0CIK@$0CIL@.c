/*
 * XREFs of ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LG@$0CA@$0CIK@$0CIL@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D3D0
 * Callers:
 *     ?EmitUpdateCommands@CVisualGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022CEA0 (-EmitUpdateCommands@CVisualGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1400CCAB4 (-Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,182,32,650,651>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch ***a2,
        int a3,
        _DWORD *a4)
{
  return DirectComposition::CResourceMarshalerArrayBase::Marshal(a1, a2, a3, a4, 32, 650, 651);
}
