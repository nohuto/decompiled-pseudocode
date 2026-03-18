/*
 * XREFs of ?Init@VIDMM_PARAVIRTUALIZATION_HEAP@@UEAAJPEAVVIDMM_PROCESS@@K@Z @ 0x1400B5300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PARAVIRTUALIZATION_HEAP::Init(VIDMM_PARAVIRTUALIZATION_HEAP *this, struct VIDMM_PROCESS *a2)
{
  *((_QWORD *)this + 1) = a2;
  return 0LL;
}
