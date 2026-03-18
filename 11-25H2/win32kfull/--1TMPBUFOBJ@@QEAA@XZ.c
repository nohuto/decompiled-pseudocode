/*
 * XREFs of ??1TMPBUFOBJ@@QEAA@XZ @ 0x140338C8C
 * Callers:
 *     NtGdiScaleValues @ 0x14033A4D0 (NtGdiScaleValues.c)
 * Callees:
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1401C6BD8 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 */

void __fastcall TMPBUFOBJ::~TMPBUFOBJ(TMPBUFOBJ *this)
{
  AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>((__int64 *)this);
}
