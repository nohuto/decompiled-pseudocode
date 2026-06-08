/*
 * XREFs of IsTargettedCpuForQosExperiment_Intel @ 0x140006C7C
 * Callers:
 *     GetHwpPerfControlHandler @ 0x14002AA80 (GetHwpPerfControlHandler.c)
 * Callees:
 *     GetCPUFamilyAndModel @ 0x140049008 (GetCPUFamilyAndModel.c)
 */

char IsTargettedCpuForQosExperiment_Intel()
{
  char v0; // bl
  unsigned __int8 v2; // [rsp+30h] [rbp+8h] BYREF
  __int16 v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 0;
  v2 = 0;
  GetCPUFamilyAndModel(&v3, &v2);
  if ( v3 == 6 && (v2 == 170 || v2 == 172 || (unsigned int)v2 - 188 <= 1) )
    return 1;
  return v0;
}
