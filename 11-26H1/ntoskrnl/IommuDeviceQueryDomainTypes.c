/*
 * XREFs of IommuDeviceQueryDomainTypes @ 0x1405A12C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDeviceGetDomainTypes @ 0x14058A2B8 (HalpIommuDeviceGetDomainTypes.c)
 */

__int64 __fastcall IommuDeviceQueryDomainTypes(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = HalpIommuDeviceGetDomainTypes(a1, (__int64)a2);
  *a2 = result;
  return result;
}
