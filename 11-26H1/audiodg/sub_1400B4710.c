/*
 * XREFs of sub_1400B4710 @ 0x1400B4710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG sub_1400B4710()
{
  int *v0; // rax
  REGHANDLE v1; // rcx

  v0 = off_1400E7638;
  v1 = *((_QWORD *)off_1400E7638 + 4);
  *((_QWORD *)off_1400E7638 + 4) = 0LL;
  *v0 = 0;
  return EventUnregister(v1);
}
