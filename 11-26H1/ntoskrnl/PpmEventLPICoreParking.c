/*
 * XREFs of PpmEventLPICoreParking @ 0x140611610
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14025D070 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventLPICoreParking(__int64 a1, int a2)
{
  BOOLEAN result; // al
  int v3; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  __int64 v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  result = PpmParkLpiCap;
  v3 = PpmParkLpiCap;
  if ( PpmEtwRegistered )
  {
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LPI_CORE_PARK);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v3;
      *(_QWORD *)&UserData.Size = 4LL;
      v5 = &v7;
      v6 = 4LL;
      return EtwWriteEx(PpmEtwHandle, &PPM_ETW_LPI_CORE_PARK, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
