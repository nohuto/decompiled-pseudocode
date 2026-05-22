/*
 * XREFs of ?RemoveAt@?$ListPrincipalCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UVirtualTouchpadRect@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180142BE4
 * Callers:
 *     ?OnTouchpadRemoved@SystemContextManager@@QEAAX_K@Z @ 0x1801411DC (-OnTouchpadRemoved@SystemContextManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x180027508 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18002752C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800276A8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?erase@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@2@@Z @ 0x18013E97C (-erase@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA-AV-$_V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,VirtualTouchpadRect>::RemoveAt(
        _QWORD *a1,
        unsigned int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rbx
  struct Microsoft::Bamo::BaseBamoConnection *v5; // rbx
  __int64 v6; // r8
  int v7; // eax
  Microsoft::BamoImpl::BamoImplObject *v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(a1[4] + 32LL);
  if ( *(int *)(v4 + 8) <= 0 )
    v5 = 0LL;
  else
    v5 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v4 + 16);
  Microsoft::Bamo::Lock::Lock(v9, v5);
  v6 = a1[7];
  if ( v2 >= 0xAAAAAAAAAAAAAAABuLL * ((a1[8] - v6) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA7,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      (const char *)retaddr);
  std::vector<VirtualTouchpadRect>::erase((__int64)(a1 + 7), &v11, v6 + 24 * v2);
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(v5) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(a1[1] + 32LL))(a1 + 1, (unsigned int)v2);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB1,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v7,
        (int)v9[0]);
  }
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v9);
  return 0LL;
}
