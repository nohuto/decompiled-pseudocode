/*
 * XREFs of ?Replace@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@QEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180142E98
 * Callers:
 *     ?OnTouchpadUpdated@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z @ 0x1801412B0 (-OnTouchpadUpdated@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z.c)
 * Callees:
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x180027508 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18002752C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800276A8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?BroadcastRemoteReplace@BamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x18013FB30 (-BroadcastRemoteReplace@BamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Micro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub,VirtualTouchpadRect,VirtualTouchpadRect const &>::Replace(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rbx
  struct Microsoft::Bamo::BaseBamoConnection *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  int v11; // eax
  Microsoft::BamoImpl::BamoImplObject *v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  if ( *(int *)(v6 + 8) <= 0 )
    v7 = 0LL;
  else
    v7 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v6 + 16);
  Microsoft::Bamo::Lock::Lock(v13, v7);
  v8 = *(_QWORD *)(a1 + 56);
  if ( v4 >= 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 64) - v8) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x114,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      (const char *)0xAAAAAAAAAAAAAAABLL);
  v9 = *(_QWORD *)(a3 + 16);
  v10 = 3 * v4;
  *(_OWORD *)(v8 + 8 * v10) = *(_OWORD *)a3;
  *(_QWORD *)(v8 + 8 * v10 + 16) = v9;
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(v7) )
  {
    v11 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal::BroadcastRemoteReplace(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 8),
            v4,
            (const struct VirtualTouchpadRect *)a3);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x11E,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v11,
        (int)v13[0]);
  }
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v13);
  return 0LL;
}
