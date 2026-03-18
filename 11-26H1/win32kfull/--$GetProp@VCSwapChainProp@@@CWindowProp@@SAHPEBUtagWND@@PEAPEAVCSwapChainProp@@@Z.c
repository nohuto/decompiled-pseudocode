/*
 * XREFs of ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1402026DC
 * Callers:
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1402024A8 (UserSetWindowedSwapChain.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CSwapChainProp>(__int64 a1, __int64 *a2)
{
  __int64 UserSessionState; // rax
  __int64 Prop; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 42286), 1u);
  *a2 = Prop;
  return Prop != 0;
}
