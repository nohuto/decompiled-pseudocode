/*
 * XREFs of ?IsEmpty@?$CGenericSet@PEAVCWindowData@@@@QEAA_NXZ @ 0x18004D2A0
 * Callers:
 *     ??1CWindowList@@UEAA@XZ @ 0x1800DF464 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGenericSet<CWindowData *>::IsEmpty(struct _RTL_GENERIC_TABLE *a1)
{
  return RtlIsGenericTableEmpty(a1) != 0;
}
