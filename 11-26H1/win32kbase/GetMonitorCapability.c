/*
 * XREFs of GetMonitorCapability @ 0x140029B44
 * Callers:
 *     PruneModesByDisplayDeviceCaps @ 0x140029454 (PruneModesByDisplayDeviceCaps.c)
 * Callees:
 *     GetMonitorCapabilityFromInf @ 0x14002AD24 (GetMonitorCapabilityFromInf.c)
 *     GetRegEDID @ 0x14002B390 (GetRegEDID.c)
 *     GetMonitorCapability1 @ 0x14002B614 (GetMonitorCapability1.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall GetMonitorCapability(__int64 a1, __int64 a2, _DWORD *a3, char a4)
{
  _DWORD *v5; // rbx
  __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // [rsp+20h] [rbp-248h] BYREF
  _BYTE v11[512]; // [rsp+30h] [rbp-238h] BYREF

  a3[2] = 0;
  a3[4] = 0;
  v10 = 0LL;
  v5 = a3;
  a3[1] = -1;
  *a3 = a4 == 0 ? 0x38 : 0;
  a3[3] = -1;
  a3[5] = -1;
  LOBYTE(a3) = a4;
  result = GetMonitorCapabilityFromInf(a1, a2, a3);
  if ( (_DWORD)result )
  {
    *v5 = *(_DWORD *)(a2 + 12);
    v5[1] = *(_DWORD *)(a2 + 8);
  }
  else if ( (unsigned int)GetRegEDID(a1, v11, &v10) )
  {
    LOBYTE(v9) = a4;
    return GetMonitorCapability1(v10, a2, v5, v9);
  }
  else
  {
    return 0LL;
  }
  return result;
}
