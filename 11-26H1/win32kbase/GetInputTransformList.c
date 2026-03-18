/*
 * XREFs of GetInputTransformList @ 0x14016460C
 * Callers:
 *     ApiSetGetInputTransformList @ 0x1400535C0 (ApiSetGetInputTransformList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GetInputTransformList(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(__int64, _QWORD, __int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, _QWORD, __int64, __int64, __int64); // rax
  __int64 v9; // r9

  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                            + 48)
                                                                                + 5784LL);
  if ( result )
  {
    v9 = a5;
    LOBYTE(v9) = 1;
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))result(a1, a2, a3, v9, a5);
  }
  return result;
}
