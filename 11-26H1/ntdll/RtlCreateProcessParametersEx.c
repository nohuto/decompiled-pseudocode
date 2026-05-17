/*
 * XREFs of RtlCreateProcessParametersEx @ 0x18009FA80
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateProcessParametersInternal @ 0x18009F3E0 (RtlCreateProcessParametersInternal.c)
 */

__int64 __fastcall RtlCreateProcessParametersEx(
        _QWORD *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        void *a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  return RtlCreateProcessParametersInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, 0LL, a11);
}
