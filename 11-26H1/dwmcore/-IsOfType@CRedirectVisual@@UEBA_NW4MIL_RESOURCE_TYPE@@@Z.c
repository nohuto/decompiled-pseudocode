/*
 * XREFs of ?IsOfType@CRedirectVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801AE9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRedirectVisual::IsOfType(__int64 a1, int a2)
{
  int v2; // ecx
  bool result; // al

  result = (unsigned int)(a2 - 89) <= 0xF && (v2 = 33793, _bittest(&v2, a2 - 89)) || a2 == 156;
  return result;
}
