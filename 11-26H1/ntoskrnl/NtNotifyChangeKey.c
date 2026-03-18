/*
 * XREFs of NtNotifyChangeKey @ 0x14097A110
 * Callers:
 *     DifNtNotifyChangeKeyWrapper @ 0x14067C410 (DifNtNotifyChangeKeyWrapper.c)
 *     ExpWatchProductTypeInitialization @ 0x140CE4EEC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 */

__int64 __fastcall NtNotifyChangeKey(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        int a6,
        char a7,
        volatile void *Address,
        int a9,
        char a10)
{
  SIZE_T Length; // [rsp+50h] [rbp-18h]

  LODWORD(Length) = a9;
  return NtNotifyChangeMultipleKeys(a1, 0, 0, a2, a3, a4, a5, a6, a7, Address, Length, a10);
}
