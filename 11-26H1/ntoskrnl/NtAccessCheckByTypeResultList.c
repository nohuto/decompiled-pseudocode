/*
 * XREFs of NtAccessCheckByTypeResultList @ 0x14063B510
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x1402AAD98 (SeAccessCheckByType.c)
 */

__int64 __fastcall NtAccessCheckByTypeResultList(
        void *a1,
        void *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        void *a7,
        void *a8,
        unsigned int *a9,
        _DWORD *a10,
        _DWORD *a11)
{
  return SeAccessCheckByType(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 1);
}
