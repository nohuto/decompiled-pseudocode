/*
 * XREFs of ?DxgkCddAdapterReference@@YAXQEAXPEA_K@Z @ 0x14041BDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkCddAdapterReference(volatile signed __int64 *a1, unsigned __int64 *a2)
{
  _InterlockedIncrement64(a1 + 3);
  *a2 = -1LL;
}
