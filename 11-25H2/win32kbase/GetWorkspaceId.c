/*
 * XREFs of GetWorkspaceId @ 0x140066AA0
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x140207C38 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetWorkspaceId(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 19;
  result = HMValidateHandleNoSecure(a1, a2);
  if ( result )
    return *(unsigned int *)(result + 1320);
  return result;
}
