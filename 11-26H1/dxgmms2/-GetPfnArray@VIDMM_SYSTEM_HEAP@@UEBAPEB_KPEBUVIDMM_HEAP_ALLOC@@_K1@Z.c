/*
 * XREFs of ?GetPfnArray@VIDMM_SYSTEM_HEAP@@UEBAPEB_KPEBUVIDMM_HEAP_ALLOC@@_K1@Z @ 0x140117F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const unsigned __int64 *__fastcall VIDMM_SYSTEM_HEAP::GetPfnArray(
        VIDMM_SYSTEM_HEAP *this,
        const struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  if ( a4 )
    return (const unsigned __int64 *)(*((_QWORD *)a2 + 5) + 48LL);
  else
    return (const unsigned __int64 *)((*((_QWORD *)a2 + 4) + 48LL) & -(__int64)(*((_QWORD *)a2 + 4) != 0LL));
}
