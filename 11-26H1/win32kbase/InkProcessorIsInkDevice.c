/*
 * XREFs of InkProcessorIsInkDevice @ 0x140174748
 * Callers:
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1401BC890 (ApiSetInkProcessorIsInkDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall InkProcessorIsInkDevice(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3))(_QWORD, _QWORD, __int64, _QWORD)
{
  unsigned __int16 v5; // si
  __int64 (__fastcall *result)(_QWORD, _QWORD, __int64, _QWORD); // rax

  v5 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                     + 4248LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))result(v5, a2, a3, 0LL);
  return result;
}
