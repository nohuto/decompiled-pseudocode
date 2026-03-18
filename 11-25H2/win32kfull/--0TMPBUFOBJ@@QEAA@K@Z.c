/*
 * XREFs of ??0TMPBUFOBJ@@QEAA@K@Z @ 0x140338C5C
 * Callers:
 *     NtGdiScaleValues @ 0x14033A4D0 (NtGdiScaleValues.c)
 * Callees:
 *     <none>
 */

TMPBUFOBJ *__fastcall TMPBUFOBJ::TMPBUFOBJ(TMPBUFOBJ *this, unsigned int a2)
{
  *(_QWORD *)this = 0LL;
  *(_QWORD *)this = AllocFreeTmpBuffer(a2);
  return this;
}
