/*
 * XREFs of sub_14003D68C @ 0x14003D68C
 * Callers:
 *     sub_1400B0E67 @ 0x1400B0E67 (sub_1400B0E67.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_14003D68C(HSTRING *a1)
{
  HRESULT result; // eax

  result = WindowsDeleteString(*a1);
  *a1 = 0LL;
  return result;
}
