/*
 * XREFs of sub_1401273F0 @ 0x1401273F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140126F38 @ 0x140126F38 (sub_140126F38.c)
 *     sub_140127508 @ 0x140127508 (sub_140127508.c)
 */

BOOLEAN __fastcall sub_1401273F0(_QWORD *Context)
{
  BOOLEAN result; // al

  ++*(_QWORD *)(*(_QWORD *)(Context[20] + 24LL) + 48LL);
  result = sub_140126F38((__int64)Context);
  if ( result )
  {
    *(_DWORD *)(*(_QWORD *)(Context[20] + 8LL) + 20LL) |= 1u;
    return sub_140127508(Context);
  }
  return result;
}
