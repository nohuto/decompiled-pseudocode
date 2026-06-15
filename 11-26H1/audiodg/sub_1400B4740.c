/*
 * XREFs of sub_1400B4740 @ 0x1400B4740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG sub_1400B4740()
{
  int *v0; // rax
  REGHANDLE v1; // rcx

  v0 = off_1400E7630[0];
  v1 = *((_QWORD *)off_1400E7630[0] + 4);
  *((_QWORD *)off_1400E7630[0] + 4) = 0LL;
  *v0 = 0;
  return EventUnregister(v1);
}
