/*
 * XREFs of ?GetRuntimeClassName@?$EventInvocationContext@$00@details@wil@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180403A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::EventInvocationContext<1>::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Wil.EventInvocationContext", 0x2Bu, a2);
}
