/*
 * XREFs of IssueSendAccessibleNexus @ 0x1806A48A0
 * Callers:
 *     IssueSendAccessibleNexusToAllGamepads @ 0x1806A4930 (IssueSendAccessibleNexusToAllGamepads.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

signed int __fastcall IssueSendAccessibleNexus(void *a1, unsigned __int8 a2, int a3)
{
  signed int result; // eax
  _DWORD v4[4]; // [rsp+40h] [rbp-28h] BYREF

  v4[0] = a2;
  v4[1] = a3;
  v4[2] = 50;
  if ( DeviceIoControl(a1, 0x8000A38C, v4, 0xCu, 0LL, 0, 0LL, 0LL) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
