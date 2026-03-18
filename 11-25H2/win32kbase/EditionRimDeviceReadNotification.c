/*
 * XREFs of EditionRimDeviceReadNotification @ 0x14023EAD4
 * Callers:
 *     ApiSetEditionRimDeviceReadNotification @ 0x1401968F0 (ApiSetEditionRimDeviceReadNotification.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionRimDeviceReadNotification(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4))(__int64, _QWORD, _QWORD, __int64)
{
  unsigned int v6; // esi
  __int64 (__fastcall *result)(__int64, _QWORD, _QWORD, __int64); // rax

  v6 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2)
                                                                                  + 48)
                                                                      + 4744LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64))result(a1, v6, a3, a4);
  return result;
}
