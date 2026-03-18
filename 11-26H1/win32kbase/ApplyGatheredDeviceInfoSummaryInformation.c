/*
 * XREFs of ApplyGatheredDeviceInfoSummaryInformation @ 0x140178FA4
 * Callers:
 *     ApiSetApplyGatheredDeviceInfoSummaryInformation @ 0x1401BD3AC (ApiSetApplyGatheredDeviceInfoSummaryInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall ApplyGatheredDeviceInfoSummaryInformation(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6))(_QWORD, _QWORD, _QWORD, _QWORD, int, int)
{
  unsigned int v9; // ebp
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, int, int); // rax

  v9 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                          + 48)
                                                                              + 5048LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, int, int))result(v9, a2, a3, a4, a5, a6);
  return result;
}
