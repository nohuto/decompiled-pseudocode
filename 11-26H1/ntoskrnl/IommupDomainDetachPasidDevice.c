/*
 * XREFs of IommupDomainDetachPasidDevice @ 0x14058A958
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x1405A14F0 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x1405A1820 (IommuDomainDetachDeviceEx.c)
 *     IommuDomainDetachPasidDevice @ 0x140789B30 (IommuDomainDetachPasidDevice.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     HalpIommuGetHardwareDomain @ 0x14050D954 (HalpIommuGetHardwareDomain.c)
 *     Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline @ 0x140589CFC (Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14058FD00 (HalpIommuDereferenceHardwareDomain.c)
 *     IommuDisableDevicePasid @ 0x14059E170 (IommuDisableDevicePasid.c)
 *     IommuSetAddressSpace @ 0x14059F380 (IommuSetAddressSpace.c)
 *     IommupHvDetachPasidDeviceDomain @ 0x1405A08B4 (IommupHvDetachPasidDeviceDomain.c)
 *     IommupHvDetachPasidSubDeviceDomain @ 0x1405A09B0 (IommupHvDetachPasidSubDeviceDomain.c)
 */

__int64 __fastcall IommupDomainDetachPasidDevice(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v4; // r13
  char v5; // di
  KIRQL v6; // al
  _QWORD *i; // rdx
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  int v11; // eax
  KIRQL OldIrql; // [rsp+70h] [rbp+8h]
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 56);
  v14 = 0LL;
  if ( !v1 )
    return 3221225711LL;
  v5 = 0;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v1 + 88));
  for ( i = *(_QWORD **)(v1 + 72); i != (_QWORD *)(v1 + 72); i = (_QWORD *)*i )
  {
    if ( i - 4 == (_QWORD *)a1 )
    {
      v5 = 1;
      break;
    }
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v1 + 88), v6);
  if ( !v5 )
    return 3221225711LL;
  if ( HalpHvIommu )
  {
    if ( *(_DWORD *)(a1 + 48) )
      IommupHvDetachPasidSubDeviceDomain(a1);
    else
      IommupHvDetachPasidDeviceDomain(v2, 0LL);
  }
  else
  {
    IommuSetAddressSpace(v4, 0LL);
  }
  v8 = (_QWORD *)(a1 + 32);
  OldIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
  v9 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v9 + 8) != a1 + 32 || (v10 = *(_QWORD **)(a1 + 40), (_QWORD *)*v10 != v8) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  if ( (unsigned int)Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_QWORD *)(a1 + 40) = a1 + 32;
    *v8 = v8;
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88), OldIrql);
  v11 = *(_DWORD *)(a1 + 48);
  if ( HalpHvIommu )
  {
    if ( !v11 )
      IommupHvDetachPasidDeviceDomain(v2, 1LL);
  }
  else
  {
    if ( v11 )
      IommuDisableDevicePasid(v4, v2);
    HalpIommuGetHardwareDomain(v1, *(_QWORD *)(v2 + 32), 0, 0, 0, &v14);
    if ( v14 )
      HalpIommuDereferenceHardwareDomain(v1, v14);
    *(_QWORD *)(*(_QWORD *)(v4 + 8) + 24LL) = 0LL;
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  return 0LL;
}
