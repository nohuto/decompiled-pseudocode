/*
 * XREFs of AcpiGetD3ColdCapability @ 0x1400D1270
 * Callers:
 *     <none>
 * Callees:
 *     AcpiGetIdleWakeInfo @ 0x1400CCFC0 (AcpiGetIdleWakeInfo.c)
 */

__int64 __fastcall AcpiGetD3ColdCapability(__int64 a1, _BYTE *a2)
{
  int v3; // eax
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = *(_DWORD *)(a1 + 1008);
  v5 = 0;
  if ( (v3 & 0x800) == 0 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 440) )
  {
    *a2 = 1;
    return 0LL;
  }
  result = AcpiGetIdleWakeInfo(a1, 1, &v5);
  if ( (int)result >= 0 && v5 == 5 )
    *a2 = 1;
  return result;
}
