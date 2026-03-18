/*
 * XREFs of ?GetGuestPhysicalAddress@VIDMM_SYSTEM_HEAP@@UEAAPEAXPEBUVIDMM_HEAP_ALLOC@@@Z @ 0x1400AE280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VIDMM_SYSTEM_HEAP::GetGuestPhysicalAddress(
        VIDMM_SYSTEM_HEAP *this,
        const struct VIDMM_HEAP_ALLOC *a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)*((_QWORD *)a2 + 3);
  if ( result )
    return (_QWORD *)result[2];
  return result;
}
