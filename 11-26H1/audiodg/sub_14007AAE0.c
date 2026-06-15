/*
 * XREFs of sub_14007AAE0 @ 0x14007AAE0
 * Callers:
 *     sub_14007AB10 @ 0x14007AB10 (sub_14007AB10.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_14007AAE0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Foundation.Collections.IVector`1<Windows.Foundation.EventRegistrationToken>",
           0x53u,
           a2);
}
