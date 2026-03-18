/*
 * XREFs of ??1TMPBUFOBJ@@QEAA@XZ @ 0x140329FB0
 * Callers:
 *     NtGdiScaleValues @ 0x14032BA80 (NtGdiScaleValues.c)
 * Callees:
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1401F1CE0 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 */

void __fastcall TMPBUFOBJ::~TMPBUFOBJ(TMPBUFOBJ *this)
{
  AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>((__int64 *)this);
}
