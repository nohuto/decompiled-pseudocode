/*
 * XREFs of sub_140127120 @ 0x140127120
 * Callers:
 *     <none>
 * Callees:
 *     sub_140126F38 @ 0x140126F38 (sub_140126F38.c)
 *     sub_1401271C0 @ 0x1401271C0 (sub_1401271C0.c)
 */

BOOLEAN __fastcall sub_140127120(_QWORD *Context)
{
  BOOLEAN result; // al

  ++*(_QWORD *)(*(_QWORD *)(Context[20] + 24LL) + 40LL);
  result = sub_140126F38((__int64)Context);
  if ( result )
  {
    *(_DWORD *)(*(_QWORD *)(Context[20] + 8LL) + 20LL) &= ~1u;
    return sub_1401271C0(Context);
  }
  return result;
}
