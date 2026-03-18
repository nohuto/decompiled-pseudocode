/*
 * XREFs of ApiSetRetrieveCalibrationData @ 0x1401C0790
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RetrieveCalibrationData @ 0x140249484 (RetrieveCalibrationData.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetRetrieveCalibrationData(__int64 a1, __int128 *a2))(void)
{
  __int64 (*result)(void); // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4048LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      v5 = *a2;
      return (__int64 (*)(void))RetrieveCalibrationData(a1, &v5);
    }
  }
  return result;
}
