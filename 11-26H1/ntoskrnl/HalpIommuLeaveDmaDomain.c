/*
 * XREFs of HalpIommuLeaveDmaDomain @ 0x1405905CC
 * Callers:
 *     HalpIommuBlockDevice @ 0x1404F8D00 (HalpIommuBlockDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x1405A14F0 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDevice @ 0x1405A16E0 (IommuDomainDetachDevice.c)
 *     IommuDomainDetachDeviceEx @ 0x1405A1820 (IommuDomainDetachDeviceEx.c)
 * Callees:
 *     HalpIommuGetHardwareDomain @ 0x14050D954 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuIsInPermanentPassthrough @ 0x1405330DC (HalpIommuIsInPermanentPassthrough.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpIommuAttachDeviceDomain @ 0x14058E2E0 (HalpIommuAttachDeviceDomain.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14058FD00 (HalpIommuDereferenceHardwareDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuLeaveDmaDomain(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  if ( HalpHvIommu )
  {
    v10 = 0LL;
    if ( !*(_BYTE *)(a1 + 408) || HalpIommuSecurityPolicy == 1 )
    {
      v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), a2);
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 32);
      LODWORD(v10) = -1;
      BYTE4(v10) = 0;
      v5 = guard_dispatch_icall_no_overrides(v4, &v10);
    }
    v6 = 0;
    if ( (_WORD)v5 != 118 )
      v6 = v5;
    if ( v6 < 0 )
      KeBugCheckEx(0x1D9u, 2uLL, v6, a2, 0LL);
    goto LABEL_23;
  }
  if ( HalpIommuIsInPermanentPassthrough(a1, a2) )
  {
    v6 = 0;
LABEL_23:
    *(_QWORD *)(a1 + 24) = 0LL;
    return (unsigned int)v6;
  }
  result = HalpIommuGetHardwareDomain(a2, *(_QWORD *)(v7 + 32), 0, 0, 0, &v11);
  if ( (int)result < 0 )
    return result;
  if ( HalpIommuSecurityPolicy == 1 && *(_BYTE *)(a1 + 80) )
  {
    result = HalpIommuGetHardwareDomain(HalpIommuBypassDomain, *(_QWORD *)(a1 + 32), 0, 0, 0, &v10);
    if ( (int)result < 0 )
      return result;
    v6 = HalpIommuAttachDeviceDomain(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v10 + 32);
  }
  else if ( HalpHvIommu )
  {
    v6 = -1073741637;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 40);
    guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL), v9);
    *(_QWORD *)(v9 + 16) = 0LL;
    v6 = 0;
  }
  if ( v6 >= 0 )
  {
    if ( v11 )
      HalpIommuDereferenceHardwareDomain(a2, v11);
    goto LABEL_23;
  }
  return (unsigned int)v6;
}
