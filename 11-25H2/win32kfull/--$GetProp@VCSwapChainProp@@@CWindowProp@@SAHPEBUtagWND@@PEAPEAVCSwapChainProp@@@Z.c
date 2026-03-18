/*
 * XREFs of ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x140172684
 * Callers:
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x140172368 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x140172570 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CSwapChainProp>(__int64 a1, __int64 *a2)
{
  __int64 UserSessionState; // rax
  __int64 Prop; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 42258), 1u);
  *a2 = Prop;
  return Prop != 0;
}
