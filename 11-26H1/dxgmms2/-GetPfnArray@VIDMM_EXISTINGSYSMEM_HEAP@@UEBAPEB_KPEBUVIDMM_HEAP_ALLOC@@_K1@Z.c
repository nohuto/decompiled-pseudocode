/*
 * XREFs of ?GetPfnArray@VIDMM_EXISTINGSYSMEM_HEAP@@UEBAPEB_KPEBUVIDMM_HEAP_ALLOC@@_K1@Z @ 0x140122DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const unsigned __int64 *__fastcall VIDMM_EXISTINGSYSMEM_HEAP::GetPfnArray(
        VIDMM_EXISTINGSYSMEM_HEAP *this,
        const struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  if ( a4 )
    return (const unsigned __int64 *)(*((_QWORD *)a2 + 3) + 48LL);
  else
    return (const unsigned __int64 *)((*((_QWORD *)a2 + 2) + 48LL) & -(__int64)(*((_QWORD *)a2 + 2) != 0LL));
}
