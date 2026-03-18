/*
 * XREFs of EditionLLMouseWheelHook @ 0x140159738
 * Callers:
 *     ApiSetEditionLLMouseWheelHook @ 0x14019CEDC (ApiSetEditionLLMouseWheelHook.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionLLMouseWheelHook(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        unsigned int a4))(__int64, _QWORD, __int128 *, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD, __int128 *, _QWORD); // rax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                     + 48)
                                                                         + 4328LL);
  if ( result )
  {
    v9 = *a3;
    return (__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))result(a1, a2, &v9, a4);
  }
  return result;
}
