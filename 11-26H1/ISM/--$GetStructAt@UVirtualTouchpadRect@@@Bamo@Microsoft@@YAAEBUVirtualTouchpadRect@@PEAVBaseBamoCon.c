/*
 * XREFs of ??$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@I@Z @ 0x18013DAF4
 * Callers:
 *     ?OnInserted@TouchpadRectListProxy@@MEAAJI@Z @ 0x18013E040 (-OnInserted@TouchpadRectListProxy@@MEAAJI@Z.c)
 *     ?OnReplaced@TouchpadRectListProxy@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x18013E1B0 (-OnReplaced@TouchpadRectListProxy@@MEAAJIAEBUVirtualTouchpadRect@@@Z.c)
 *     ?GetItemAt@?$ListPrincipalDetails@UVirtualTouchpadRect@@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_VirtualTouchpadRect_Stub@3456@$0A@$00$0A@@Bamo@Microsoft@@QEAAAEBUVirtualTouchpadRect@@I@Z @ 0x18013FEF4 (-GetItemAt@-$ListPrincipalDetails@UVirtualTouchpadRect@@VBamoList_VirtualTouchpadRect_Principal@.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ @ 0x1800280E4 (-VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::GetStructAt<VirtualTouchpadRect>(
        Microsoft::Bamo::BaseBamoConnection *a1,
        _QWORD *a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rbx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  Microsoft::Bamo::BaseBamoConnection::VerifyLockHeldIfOffThread(a1);
  if ( v3 >= 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2[1] - *a2) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5C,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v5);
  return *a2 + 24 * v3;
}
