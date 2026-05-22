/*
 * XREFs of ??$?4AEAUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z @ 0x18010C524
 * Callers:
 *     ?GetCurrentContext@KernelContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18010C6D0 (-GetCurrentContext@KernelContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigContext.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180076500 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 */

__int64 __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::operator=<MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE &,0,0>(
        __int64 a1,
        _OWORD *a2)
{
  if ( *(_BYTE *)(a1 + 24) == 4 )
  {
    *(_OWORD *)a1 = *a2;
  }
  else
  {
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(a1);
    *(_BYTE *)(a1 + 24) = -1;
    *(_OWORD *)a1 = *a2;
    *(_BYTE *)(a1 + 24) = 4;
  }
  return a1;
}
