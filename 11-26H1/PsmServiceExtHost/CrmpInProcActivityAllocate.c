/*
 * XREFs of CrmpInProcActivityAllocate @ 0x180069420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CrmpInProcActivityAllocate(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        const wchar_t *a5,
        _QWORD *a6)
{
  return CrmSrvActivityAllocate(a1, a2, a3, a4, a5, a6);
}
