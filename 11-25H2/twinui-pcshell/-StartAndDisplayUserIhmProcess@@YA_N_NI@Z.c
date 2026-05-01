/*
 * XREFs of ?StartAndDisplayUserIhmProcess@@YA_N_NI@Z @ 0x18065EADC
 * Callers:
 *     ?EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x18046BB90 (-EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ.c)
 *     ?ToggleTabTip@KeyboardHosting@@YAJXZ @ 0x1804724D8 (-ToggleTabTip@KeyboardHosting@@YAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall StartAndDisplayUserIhmProcess(char a1)
{
  bool v1; // zf
  const WCHAR *v2; // rcx

  v1 = a1 == 0;
  v2 = L"{DFFDE213-8CB4-46a9-90EB-3DA843AF66F9}-crashed";
  if ( v1 )
    v2 = L"{DFFDE213-8CB4-46a9-90EB-3DA843AF66F9}-request";
  return _EnsureEventIsSet(v2, (unsigned int)L"{DFFDE213-8CB4-46a9-90EB-3DA843AF66F9}-request");
}
