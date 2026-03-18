/*
 * XREFs of ?GetGuestPhysicalAddress@VIDMM_PARAVIRTUALIZATION_HEAP@@UEAAPEAXPEBUVIDMM_HEAP_ALLOC@@@Z @ 0x1400B52B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_PARAVIRTUALIZATION_HEAP::GetGuestPhysicalAddress(
        VIDMM_PARAVIRTUALIZATION_HEAP *this,
        const struct VIDMM_HEAP_ALLOC *a2)
{
  if ( (*((_DWORD *)a2 + 8) & 1) != 0 )
    return (void *)*((_QWORD *)a2 + 3);
  else
    return 0LL;
}
