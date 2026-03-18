/*
 * XREFs of NtLoadKeyEx @ 0x14097B380
 * Callers:
 *     DifNtLoadKeyExWrapper @ 0x14067A980 (DifNtLoadKeyExWrapper.c)
 *     NtLoadKey @ 0x14097A0E0 (NtLoadKey.c)
 * Callees:
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 */

__int64 __fastcall NtLoadKeyEx(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        ACCESS_MASK DesiredAccess,
        __int64 a7,
        __int64 a8)
{
  return CmLoadDifferencingKey(a1, a4, a5, DesiredAccess, a7, a8, 0LL, 0, 0LL, KeGetCurrentThread()->PreviousMode);
}
