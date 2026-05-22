/*
 * XREFs of ??$?0AEAUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAA@AEAUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z @ 0x18010C50C
 * Callers:
 *     ?SetContext@KernelContextProvider@@QEAAXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z @ 0x18006FD2C (-SetContext@KernelContextProvider@@QEAAXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(
        __int64 a1,
        _OWORD *a2)
{
  __int64 result; // rax

  result = a1;
  *(_OWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 24) = 4;
  return result;
}
