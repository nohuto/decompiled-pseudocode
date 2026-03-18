/*
 * XREFs of ACPIThermalGetParameter @ 0x1400C7DF4
 * Callers:
 *     ACPIThermalWorker @ 0x1400C6DC0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     OSReadRegValue @ 0x1400C8470 (OSReadRegValue.c)
 */

__int64 __fastcall ACPIThermalGetParameter(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+58h] [rbp-30h] BYREF
  char SourceString[4]; // [rsp+60h] [rbp-28h] BYREF
  char v11; // [rsp+64h] [rbp-24h]

  v4 = 0LL;
  v9 = 0LL;
  if ( a2 && (*(_DWORD *)SourceString = a3, v11 = 0, result = OSReadRegValue(SourceString), (int)result >= 0)
    || (result = ACPIGet(a1, a3, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v9, 0LL), (int)result >= 0) )
  {
    v4 = v9;
  }
  *a4 = v4;
  return result;
}
