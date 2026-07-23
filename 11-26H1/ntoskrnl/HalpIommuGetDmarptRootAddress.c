/*
 * XREFs of HalpIommuGetDmarptRootAddress @ 0x1405A331C
 * Callers:
 *     HalpIommuGetHardwareDomain @ 0x14050D954 (HalpIommuGetHardwareDomain.c)
 *     IommupDomainAttachPasidDevice @ 0x14058A5DC (IommupDomainAttachPasidDevice.c)
 *     IommupHvSetUpDomainConfig @ 0x1405A110C (IommupHvSetUpDomainConfig.c)
 *     HalpIommuConstructReservedPageTable @ 0x140BF1C40 (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall HalpIommuGetDmarptRootAddress(__int64 a1, unsigned int a2, PHYSICAL_ADDRESS *a3)
{
  unsigned int v3; // eax
  char *v7; // rdx
  unsigned int v8; // eax
  _DWORD *v9; // r8
  __int64 v10; // r9
  int v11; // eax

  v3 = *(_DWORD *)(a1 + 24);
  if ( a2 > v3 )
    return 3221225485LL;
  v7 = *(char **)(a1 + 16);
  v8 = v3 - a2;
  if ( v8 )
  {
    v9 = (_DWORD *)(a1 + 36);
    v10 = v8;
    do
    {
      v11 = 1 << *v9++;
      v7 = *(char **)&v7[v11 << *(_DWORD *)(a1 + 28)];
      --v10;
    }
    while ( v10 );
  }
  *a3 = MmGetPhysicalAddress(v7);
  return 0LL;
}
