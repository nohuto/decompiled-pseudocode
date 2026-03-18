/*
 * XREFs of ??0TMPBUFOBJ@@QEAA@K@Z @ 0x140329F7C
 * Callers:
 *     NtGdiScaleValues @ 0x14032BA80 (NtGdiScaleValues.c)
 * Callees:
 *     <none>
 */

TMPBUFOBJ *__fastcall TMPBUFOBJ::TMPBUFOBJ(TMPBUFOBJ *this, unsigned int a2)
{
  *(_QWORD *)this = 0LL;
  *(_QWORD *)this = AllocFreeTmpBuffer(a2);
  return this;
}
