/*
 * XREFs of ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1401722F8
 * Callers:
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x140172248 (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CHwndTargetProp>(__int64 a1, __int64 *a2)
{
  __int64 UserSessionState; // rax
  __int64 Prop; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 42242), 1u);
  *a2 = Prop;
  return Prop != 0;
}
