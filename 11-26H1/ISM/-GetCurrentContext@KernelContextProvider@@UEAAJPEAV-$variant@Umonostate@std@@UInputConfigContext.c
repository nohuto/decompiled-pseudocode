/*
 * XREFs of ?GetCurrentContext@KernelContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18010C6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?4AEAUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z @ 0x18010C524 (--$-4AEAUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@$0A@$0A@@-$variant@Umonostate@std@@UInputConfigC.c)
 */

__int64 __fastcall KernelContextProvider::GetCurrentContext(__int64 a1, __int64 a2)
{
  std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::operator=<MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE &,0,0>(
    a2,
    (_OWORD *)(a1 + 128));
  return 0LL;
}
