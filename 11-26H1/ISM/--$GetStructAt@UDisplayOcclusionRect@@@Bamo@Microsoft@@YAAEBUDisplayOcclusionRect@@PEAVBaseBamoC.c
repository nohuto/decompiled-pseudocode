/*
 * XREFs of ??$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@I@Z @ 0x18013C700
 * Callers:
 *     ?OnInserted@OcclusionRectListProxy@@MEAAJI@Z @ 0x18013CF00 (-OnInserted@OcclusionRectListProxy@@MEAAJI@Z.c)
 *     ?OnReplaced@OcclusionRectListProxy@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013D020 (-OnReplaced@OcclusionRectListProxy@@MEAAJIAEBUDisplayOcclusionRect@@@Z.c)
 *     ?GetItemAt@?$ListPrincipalDetails@UDisplayOcclusionRect@@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_DisplayOcclusionRect_Stub@3456@$0A@$00$0A@@Bamo@Microsoft@@QEAAAEBUDisplayOcclusionRect@@I@Z @ 0x18013FEC8 (-GetItemAt@-$ListPrincipalDetails@UDisplayOcclusionRect@@VBamoList_DisplayOcclusionRect_Principa.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ @ 0x1800280E4 (-VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::GetStructAt<DisplayOcclusionRect>(
        Microsoft::Bamo::BaseBamoConnection *a1,
        _QWORD *a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rbx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  Microsoft::Bamo::BaseBamoConnection::VerifyLockHeldIfOffThread(a1);
  if ( v3 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a2[1] - *a2) >> 4) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5C,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v5);
  return *a2 + 176LL * (unsigned int)v3;
}
