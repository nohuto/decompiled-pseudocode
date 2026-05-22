/*
 * XREFs of ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x18010C4B0
 * Callers:
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800262D8 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180045EAC (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?SetContext@KernelContextProvider@@QEAAXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z @ 0x18006FD2C (-SetContext@KernelContextProvider@@QEAAXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180076500 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ??1DisplayOcclusionContextMessage@@QEAA@XZ @ 0x18010C290 (--1DisplayOcclusionContextMessage@@QEAA@XZ.c)
 *     ??1?$ListProxyCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@@Bamo@Microsoft@@UEAA@XZ @ 0x18013CBB4 (--1-$ListProxyCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@.c)
 *     ??1?$ListPrincipalCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UDisplayOcclusionRect@@@Bamo@Microsoft@@UEAA@XZ @ 0x18013EB54 (--1-$ListPrincipalCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Mi.c)
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x1801A5D68 (--$-4AEAUDisplayOcclusionContextMessage@@$0A@$0A@@-$variant@Umonostate@std@@UInputConfigContextM.c)
 *     ??1?$_Tidy_guard@V?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@@std@@QEAA@XZ @ 0x1801A61CC (--1-$_Tidy_guard@V-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std.c)
 *     ??1DisplayOcclusionContextProvider@@UEAA@XZ @ 0x1801A61EC (--1DisplayOcclusionContextProvider@@UEAA@XZ.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x1801A62C0 (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 *     ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801A6400 (-GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DisplayOcclusionRect>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)(16 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 4)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
