/*
 * XREFs of ??$?4AEAUDisplayOcclusionContextMessage@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x1801A5D68
 * Callers:
 *     ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801A6400 (-GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180076500 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x18010C4B0 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Construct_n@AEBQEAUDisplayOcclusionRect@@AEBQEAU1@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_KAEBQEAUDisplayOcclusionRect@@1@Z @ 0x1801A5F30 (--$_Construct_n@AEBQEAUDisplayOcclusionRect@@AEBQEAU1@@-$vector@UDisplayOcclusionRect@@V-$alloca.c)
 *     ??4?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801A6214 (--4-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAAEAV01@AE.c)
 */

__int64 __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::operator=<DisplayOcclusionContextMessage &,0,0>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 24) == 2 )
  {
    std::vector<DisplayOcclusionRect>::operator=(a1, a2, a2);
  }
  else
  {
    v7 = 0LL;
    v3 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a2[1] - *a2) >> 4);
    v6 = 0LL;
    std::vector<DisplayOcclusionRect>::_Construct_n<DisplayOcclusionRect * const &,DisplayOcclusionRect * const &>(
      &v6,
      v3);
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(a1);
    v4 = v7;
    *(_OWORD *)a1 = v6;
    *(_QWORD *)(a1 + 16) = v4;
    v7 = 0LL;
    v6 = 0uLL;
    *(_BYTE *)(a1 + 24) = 2;
    std::vector<DisplayOcclusionRect>::_Tidy((__int64)&v6);
  }
  return a1;
}
