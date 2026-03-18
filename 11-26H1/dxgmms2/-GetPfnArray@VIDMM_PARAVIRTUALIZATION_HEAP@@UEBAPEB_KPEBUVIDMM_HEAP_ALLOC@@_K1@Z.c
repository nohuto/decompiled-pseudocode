/*
 * XREFs of ?GetPfnArray@VIDMM_PARAVIRTUALIZATION_HEAP@@UEBAPEB_KPEBUVIDMM_HEAP_ALLOC@@_K1@Z @ 0x1400B52D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const unsigned __int64 *__fastcall VIDMM_PARAVIRTUALIZATION_HEAP::GetPfnArray(
        VIDMM_PARAVIRTUALIZATION_HEAP *this,
        const struct VIDMM_HEAP_ALLOC *a2,
        unsigned __int64 a3)
{
  if ( (*((_DWORD *)a2 + 8) & 3) != 0 && *(_QWORD *)a2 )
    return (const unsigned __int64 *)(*(_QWORD *)a2 + 8 * (a3 >> 12) + 48);
  else
    return 0LL;
}
