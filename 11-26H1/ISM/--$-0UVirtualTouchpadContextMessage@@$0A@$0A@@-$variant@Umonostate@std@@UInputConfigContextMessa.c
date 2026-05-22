/*
 * XREFs of ??$?0UVirtualTouchpadContextMessage@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAA@$$QEAUVirtualTouchpadContextMessage@@@Z @ 0x1801A5204
 * Callers:
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x1801A5700 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 result; // rax

  v2 = *a2;
  v3 = a2[2];
  v4 = a2[1];
  a2[2] = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  *(_QWORD *)a1 = v2;
  result = a1;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = v3;
  *(_BYTE *)(a1 + 24) = 3;
  return result;
}
