/*
 * XREFs of ?GetRuntimeClassName@StateChangedEventArgsImpl@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18056E0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall StateChangedEventArgsImpl::GetRuntimeClassName(StateChangedEventArgsImpl *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(&pvData, 0, a2);
}
