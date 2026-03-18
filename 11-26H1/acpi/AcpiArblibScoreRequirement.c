/*
 * XREFs of AcpiArblibScoreRequirement @ 0x1400AD6E0
 * Callers:
 *     <none>
 * Callees:
 *     _ACPIInternalError @ 0x14004B798 (_ACPIInternalError.c)
 *     AcpiArblibUnpackRequirement @ 0x1400AD790 (AcpiArblibUnpackRequirement.c)
 */

signed __int64 __fastcall AcpiArblibScoreRequirement(__int64 a1)
{
  unsigned __int64 v1; // r8
  signed __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v4; // [rsp+58h] [rbp+18h] BYREF
  __int64 v5; // [rsp+60h] [rbp+20h] BYREF
  __int64 v6; // [rsp+68h] [rbp+28h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v4 = 0LL;
  v3 = 0LL;
  if ( (int)AcpiArblibUnpackRequirement(a1, &v5, &v6, &v3, &v4) < 0 )
    ACPIInternalError(0x50113uLL);
  v1 = v4;
  if ( !v4 )
    v1 = 1LL;
  result = (v6 - (~(v1 - 1) & (v1 + v5 - 1)) - v3 + 1) / v1;
  if ( result < 0 )
    return 0xFFFFFFFFLL;
  if ( result > 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  return result;
}
