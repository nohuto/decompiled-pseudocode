/*
 * XREFs of IsNonwrappingACountMCountSupported @ 0x14002AF9C
 * Callers:
 *     InitDriver @ 0x14004A03C (InitDriver.c)
 * Callees:
 *     GetCPUFamilyAndModel @ 0x140049008 (GetCPUFamilyAndModel.c)
 */

bool IsNonwrappingACountMCountSupported()
{
  unsigned __int8 v1; // [rsp+30h] [rbp+8h] BYREF
  __int16 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v1 = 0;
  GetCPUFamilyAndModel(&v2, &v1);
  if ( v2 == 15 )
    return 0;
  if ( v2 == 6 )
    return v1 >= 0x2Au;
  return 1;
}
