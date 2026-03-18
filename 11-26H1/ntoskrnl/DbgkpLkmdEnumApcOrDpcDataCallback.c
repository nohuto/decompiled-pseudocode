/*
 * XREFs of DbgkpLkmdEnumApcOrDpcDataCallback @ 0x1405B3D30
 * Callers:
 *     <none>
 * Callees:
 *     DbgkpLkmdSnapDataEx @ 0x1405B3D9C (DbgkpLkmdSnapDataEx.c)
 */

__int64 __fastcall DbgkpLkmdEnumApcOrDpcDataCallback(int a1, int a2, int a3)
{
  return DbgkpLkmdSnapDataEx(a3, a1, a2, 0, 0LL, 0LL);
}
