/*
 * XREFs of IommupHvSetUpDomainConfig @ 0x14059E92C
 * Callers:
 *     IommupHvAttachPasidDevice @ 0x14059D89C (IommupHvAttachPasidDevice.c)
 *     IommupHvAttachPasidDeviceDomain @ 0x14059DC44 (IommupHvAttachPasidDeviceDomain.c)
 *     IommupHvAttachPasidSubDeviceDomain @ 0x14059DDF4 (IommupHvAttachPasidSubDeviceDomain.c)
 * Callees:
 *     HalpIommuGetDmarptRootAddress @ 0x1405A0B0C (HalpIommuGetDmarptRootAddress.c)
 */

__int64 __fastcall IommupHvSetUpDomainConfig(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v5 = 0LL;
  if ( a1 )
  {
    result = HalpIommuGetDmarptRootAddress(*(_QWORD *)(a1 + 40), *(unsigned int *)(*(_QWORD *)(a1 + 40) + 24LL), &v5);
    if ( (int)result < 0 )
      return result;
    v2 = v5;
  }
  *(_DWORD *)a2 = 1;
  *(_BYTE *)(a2 + 16) = 1;
  if ( v2 )
    *(_QWORD *)(a2 + 8) = v2;
  else
    *(_BYTE *)(a2 + 17) = 1;
  return 0LL;
}
