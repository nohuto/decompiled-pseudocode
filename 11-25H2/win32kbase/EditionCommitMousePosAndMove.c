/*
 * XREFs of EditionCommitMousePosAndMove @ 0x1400E4AF0
 * Callers:
 *     ApiSetEditionCommitMousePosAndMove @ 0x140194D7C (ApiSetEditionCommitMousePosAndMove.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionCommitMousePosAndMove(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8))(__int64, __int64, __int64, __int64, int, __int64, int, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64, int, __int64, int, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, __int64, int, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6864LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, __int64, int, __int64))result(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     a3,
                                                                                                     a4,
                                                                                                     a5,
                                                                                                     a6,
                                                                                                     a7,
                                                                                                     a8);
  return result;
}
