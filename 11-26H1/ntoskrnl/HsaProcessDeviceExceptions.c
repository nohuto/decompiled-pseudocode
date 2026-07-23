/*
 * XREFs of HsaProcessDeviceExceptions @ 0x1405ACB08
 * Callers:
 *     HsaInitializeIommu @ 0x140BF6BE0 (HsaInitializeIommu.c)
 * Callees:
 *     HalpHsapInitializeReservedDomain @ 0x1405AA7A8 (HalpHsapInitializeReservedDomain.c)
 *     HsaUpdateDeviceTableEntry @ 0x1405AD260 (HsaUpdateDeviceTableEntry.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HsaProcessDeviceExceptions(__int64 a1)
{
  _DWORD *v2; // rdx
  int v3; // edi
  int v4; // ebx
  __int64 i; // rbx
  int v6; // r9d
  __int64 v8; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v9[104]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v10; // [rsp+D0h] [rbp+8h] BYREF

  memset_0(&v8, 0, 0x70uLL);
  v2 = *(_DWORD **)(a1 + 216);
  v3 = 0;
  v4 = 0;
  v10 = 0LL;
  if ( *v2 )
  {
    while ( 1 )
    {
      v3 = HalpHsapInitializeReservedDomain(a1, &v2[4 * v4 + 2]);
      if ( v3 < 0 )
        break;
      v2 = *(_DWORD **)(a1 + 216);
      if ( (unsigned int)++v4 >= *v2 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    for ( i = HalpIommuExceptionList; (__int64 *)i != &HalpIommuExceptionList; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) == *(_DWORD *)(a1 + 160) )
      {
        memset_0(v9, 0, sizeof(v9));
        LOBYTE(v6) = 1;
        v10 = *(unsigned int *)(i + 24);
        v8 = 1LL;
        HsaUpdateDeviceTableEntry(a1, (unsigned int)&v10, 0, v6, (__int64)&v8, 1, 1);
      }
    }
  }
  return (unsigned int)v3;
}
