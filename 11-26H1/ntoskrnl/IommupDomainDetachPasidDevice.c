/*
 * XREFs of IommupDomainDetachPasidDevice @ 0x140588288
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x14059ED10 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x14059F030 (IommuDomainDetachDeviceEx.c)
 *     IommuDomainDetachPasidDevice @ 0x140787000 (IommuDomainDetachPasidDevice.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     HalpIommuGetHardwareDomain @ 0x140513EE4 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14058D580 (HalpIommuDereferenceHardwareDomain.c)
 *     IommuDisableDevicePasid @ 0x14059B9F0 (IommuDisableDevicePasid.c)
 *     IommuSetAddressSpace @ 0x14059CC00 (IommuSetAddressSpace.c)
 *     IommupHvDetachPasidDeviceDomain @ 0x14059E134 (IommupHvDetachPasidDeviceDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupDomainDetachPasidDevice(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  __int64 v4; // r15
  char v5; // bl
  KIRQL v6; // al
  _QWORD *i; // rdx
  unsigned int *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbx
  KIRQL v11; // al
  __int64 v12; // r9
  _QWORD *v13; // r8
  int v14; // eax
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 56);
  v16 = 0LL;
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
    v8 = (unsigned int *)(a1 + 48);
    v9 = *(unsigned int *)(a1 + 48);
    if ( (_DWORD)v9 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      v17 = 0LL;
      guard_dispatch_icall_no_overrides(0LL, v9);
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v10 + 32), *v8);
    }
    else
    {
      IommupHvDetachPasidDeviceDomain(v3, v9);
    }
  }
  else
  {
    IommuSetAddressSpace(v4, 0LL);
    v8 = (unsigned int *)(a1 + 48);
  }
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
  v12 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v12 + 8) != a1 + 32 || (v13 = *(_QWORD **)(a1 + 40), *v13 != a1 + 32) )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88), v11);
  v14 = *v8;
  if ( HalpHvIommu )
  {
    if ( !v14 )
      IommupHvDetachPasidDeviceDomain(v3, 1LL);
  }
  else
  {
    if ( v14 )
      IommuDisableDevicePasid(v4, v3);
    HalpIommuGetHardwareDomain(v1, *(_QWORD *)(v3 + 32), 0, 0, 0, &v16);
    if ( v16 )
      HalpIommuDereferenceHardwareDomain(v1, v16);
    *(_QWORD *)(*(_QWORD *)(v4 + 8) + 24LL) = 0LL;
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  return 0LL;
}
