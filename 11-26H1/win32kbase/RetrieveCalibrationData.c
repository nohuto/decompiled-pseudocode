/*
 * XREFs of RetrieveCalibrationData @ 0x140249484
 * Callers:
 *     ApiSetRetrieveCalibrationData @ 0x1401C0790 (ApiSetRetrieveCalibrationData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall RetrieveCalibrationData(__int64 a1, __int128 *a2))(__int64, __int128 *)
{
  __int64 (__fastcall *result)(__int64, __int128 *); // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  result = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4056LL);
  if ( result )
  {
    v5 = *a2;
    return (__int64 (__fastcall *)(__int64, __int128 *))result(a1, &v5);
  }
  return result;
}
