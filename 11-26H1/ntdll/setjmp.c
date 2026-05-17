/*
 * XREFs of setjmp @ 0x180164440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl setjmp(jmp_buf Buf)
{
  return _setjmp(Buf);
}
