/*
 * XREFs of ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUVirtualTouchpadRect@@@Z @ 0x1801403F8
 * Callers:
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x18013ED80 (-Add@-$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@.c)
 * Callees:
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x180027508 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@AEBUVirtualTouchpadRect@@@Z @ 0x18013DCA8 (--$emplace@AEBUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpa.c)
 *     ?BroadcastRemoteInsert@BamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x18013F6F0 (-BroadcastRemoteInsert@BamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Micros.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub,VirtualTouchpadRect,VirtualTouchpadRect const &>::InsertWorker(
        __int64 a1,
        Microsoft::Bamo::BaseBamoConnection *a2,
        unsigned int a3,
        const struct VirtualTouchpadRect *a4)
{
  _QWORD *v8; // rcx
  char *v9; // r8
  const char *v10; // r9
  Microsoft::Bamo::BaseBamoConnection *v11; // rcx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v16; // [rsp+30h] [rbp+8h] BYREF

  v8 = (_QWORD *)(a1 + 56);
  if ( a3 > 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8[1] - *v8) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14D,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      (const char *)retaddr);
  v9 = (char *)(*v8 + 24LL * a3);
  try
  {
    std::vector<VirtualTouchpadRect>::emplace<VirtualTouchpadRect const &>((__int64)v8, &v16, v9, (__int64)a4);
    v11 = a2;
  }
  catch ( ... )
  {
    wil::details::in1diag3::FailFast_CaughtException(
      retaddr,
      (void *)0x153,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v10);
  }
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(v11) )
  {
    v12 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal::BroadcastRemoteInsert(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 8),
            a3,
            a4);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x157,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v12,
        v14);
  }
  return 0LL;
}
