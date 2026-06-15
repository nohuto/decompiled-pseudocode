/*
 * XREFs of sub_14007AAA0 @ 0x14007AAA0
 * Callers:
 *     sub_14007AAD0 @ 0x14007AAD0 (sub_14007AAD0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_14007AAA0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.EventRegistrationToken>",
           0x57u,
           a2);
}
