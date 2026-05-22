/*
 * XREFs of ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180076500
 * Callers:
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180043C0C (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?OnInputConfigChanged@SystemContextManager@@QEAAXXZ @ 0x180045FFC (-OnInputConfigChanged@SystemContextManager@@QEAAXXZ.c)
 *     ??1?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAA@XZ @ 0x1800764F4 (--1-$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtu.c)
 *     ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180085480 (-GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ??$?4AEAUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z @ 0x18010C524 (--$-4AEAUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@$0A@$0A@@-$variant@Umonostate@std@@UInputConfigC.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180137A44 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x180141AB0 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180197CF0 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ??$?4AEAUVirtualTouchpadContextMessage@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUVirtualTouchpadContextMessage@@@Z @ 0x1801A5238 (--$-4AEAUVirtualTouchpadContextMessage@@$0A@$0A@@-$variant@Umonostate@std@@UInputConfigContextMe.c)
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x1801A5700 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x1801A5D68 (--$-4AEAUDisplayOcclusionContextMessage@@$0A@$0A@@-$variant@Umonostate@std@@UInputConfigContextM.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x1801A62C0 (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 *     ?Initialize@GazeProcessor@@IEAAJXZ @ 0x1801BD018 (-Initialize@GazeProcessor@@IEAAJXZ.c)
 *     ?OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801BD290 (-OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x18010C4B0 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(
        __int64 a1)
{
  __int64 result; // rax

  result = *(char *)(a1 + 24) + 1LL;
  if ( *(char *)(a1 + 24) != -1LL )
  {
    result = *(char *)(a1 + 24);
    if ( *(_BYTE *)(a1 + 24) )
    {
      if ( --result )
      {
        if ( --result )
        {
          if ( result == 1 )
            return std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64 *)a1);
        }
        else
        {
          return std::vector<DisplayOcclusionRect>::_Tidy(a1);
        }
      }
    }
  }
  return result;
}
