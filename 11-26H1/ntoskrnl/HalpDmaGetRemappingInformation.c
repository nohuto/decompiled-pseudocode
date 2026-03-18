/*
 * XREFs of HalpDmaGetRemappingInformation @ 0x1407832FC
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BED8E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpIommuGetSecurityPolicy @ 0x14053161C (HalpIommuGetSecurityPolicy.c)
 */

__int64 __fastcall HalpDmaGetRemappingInformation(int a1, int *a2)
{
  __int64 result; // rax
  int v3; // ecx
  int SecurityPolicy; // eax
  bool *v5; // r8

  if ( a1 )
  {
    SecurityPolicy = HalpIommuGetSecurityPolicy();
    *v5 = SecurityPolicy != 0;
    result = 0LL;
    v3 = 1;
  }
  else
  {
    result = 3221225507LL;
    v3 = 0;
  }
  *a2 = v3;
  return result;
}
