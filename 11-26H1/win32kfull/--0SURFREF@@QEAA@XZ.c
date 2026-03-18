/*
 * XREFs of ??0SURFREF@@QEAA@XZ @ 0x1400181B8
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1401AA4B0 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x14021A6A0 (NtGdiDdDDIDestroyDCFromMemory.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x14001811C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this)
{
  SURFREF *result; // rax

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  return result;
}
