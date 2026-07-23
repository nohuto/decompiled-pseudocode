/*
 * XREFs of MiLocateOldestSecure @ 0x1404D0A1C
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x140A027C4 (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiLocateOldestSecure(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *i; // rdx

  result = 0LL;
  for ( i = (_QWORD *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL); i; i = (_QWORD *)*i )
    result = i;
  return result;
}
