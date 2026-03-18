/*
 * XREFs of IommupDomainAttachPasidDevice @ 0x140588004
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x14059ED10 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainAttachPasidDevice @ 0x140786EE0 (IommuDomainAttachPasidDevice.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     HalpIommuGetHardwareDomain @ 0x140513EE4 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14058D580 (HalpIommuDereferenceHardwareDomain.c)
 *     IommuDisableDevicePasid @ 0x14059B9F0 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x14059BCD0 (IommuEnableDevicePasid.c)
 *     IommuSetAddressSpace @ 0x14059CC00 (IommuSetAddressSpace.c)
 *     IommupHvAttachPasidDeviceDomain @ 0x14059DC44 (IommupHvAttachPasidDeviceDomain.c)
 *     IommupHvAttachPasidSubDeviceDomain @ 0x14059DDF4 (IommupHvAttachPasidSubDeviceDomain.c)
 *     IommupHvDetachPasidDeviceDomain @ 0x14059E134 (IommupHvDetachPasidDeviceDomain.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1405A0B0C (HalpIommuGetDmarptRootAddress.c)
 */

__int64 __fastcall IommupDomainAttachPasidDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  _QWORD *v3; // r12
  int DmarptRootAddress; // ebx
  bool v7; // zf
  __int64 v8; // rbp
  __int64 v10; // rax
  int HardwareDomain; // eax
  _DWORD *v12; // r15
  KIRQL v13; // al
  __int64 **v14; // rdx
  __int64 *v15; // r13
  bool v16; // sf
  int v17; // eax
  KIRQL v18; // al
  __int64 *v19; // r9
  __int64 **v20; // r8
  _QWORD v21[9]; // [rsp+30h] [rbp-48h] BYREF
  char v22; // [rsp+88h] [rbp+10h]
  char v23; // [rsp+90h] [rbp+18h]
  __int64 v24; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD **)(a2 + 56);
  v21[0] = 0LL;
  DmarptRootAddress = 0;
  v23 = 0;
  v7 = *(_DWORD *)(v2 + 384) == 1;
  v8 = 0LL;
  v24 = 0LL;
  v22 = 0;
  if ( v7 )
    return (unsigned int)-1073741637;
  if ( *(_DWORD *)(a1 + 8) != 3 )
    return (unsigned int)-1073741585;
  v10 = *(_QWORD *)(a2 + 24);
  if ( v10 )
  {
    if ( v10 != a1 )
      return (unsigned int)-1073741823;
    return (unsigned int)DmarptRootAddress;
  }
  DmarptRootAddress = HalpIommuGetDmarptRootAddress(
                        *(_QWORD *)(a1 + 40),
                        *(unsigned int *)(*(_QWORD *)(a1 + 40) + 24LL),
                        v21);
  if ( DmarptRootAddress < 0 )
    return (unsigned int)DmarptRootAddress;
  if ( HalpHvIommu )
  {
    v12 = (_DWORD *)(a2 + 48);
    if ( !*(_DWORD *)(a2 + 48) )
    {
      DmarptRootAddress = IommupHvAttachPasidDeviceDomain(v2, a1, 0LL);
      if ( DmarptRootAddress < 0 )
        return (unsigned int)DmarptRootAddress;
      v22 = 1;
    }
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(*v3 + 16LL);
  HardwareDomain = HalpIommuGetHardwareDomain(a1, *(_QWORD *)(v2 + 32), 1, 1, 1, &v24);
  v8 = v24;
  DmarptRootAddress = HardwareDomain;
  if ( HardwareDomain < 0 )
    goto LABEL_35;
  if ( *(_DWORD *)(v24 + 80) != *(_DWORD *)(*v3 + 16LL) )
  {
    DmarptRootAddress = -1073741823;
    goto LABEL_35;
  }
  v12 = (_DWORD *)(a2 + 48);
  *(_QWORD *)(v3[1] + 24LL) = v24 + 32;
  if ( !*(_DWORD *)(a2 + 48) )
  {
LABEL_20:
    v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
    v14 = *(__int64 ***)(a1 + 80);
    v15 = (__int64 *)(a2 + 32);
    if ( *v14 != (__int64 *)(a1 + 72) )
      goto LABEL_37;
    *v15 = a1 + 72;
    *(_QWORD *)(a2 + 40) = v14;
    *v14 = v15;
    *(_QWORD *)(a1 + 80) = v15;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v13);
    if ( HalpHvIommu )
    {
      if ( *v12 )
        v17 = IommupHvAttachPasidSubDeviceDomain(a2, a1);
      else
        v17 = IommupHvAttachPasidDeviceDomain(v2, a1, 1LL);
      DmarptRootAddress = v17;
      v16 = v17 < 0;
    }
    else
    {
      DmarptRootAddress = IommuSetAddressSpace(v3, v21[0]);
      v16 = DmarptRootAddress < 0;
    }
    if ( !v16 )
    {
      *(_QWORD *)(a2 + 24) = a1;
      return (unsigned int)DmarptRootAddress;
    }
    v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
    v19 = (__int64 *)*v15;
    if ( *(__int64 **)(*v15 + 8) != v15 || (v20 = *(__int64 ***)(a2 + 40), *v20 != v15) )
LABEL_37:
      __fastfail(3u);
    *v20 = v19;
    v19[1] = (__int64)v20;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v18);
    if ( v22 )
    {
      IommupHvDetachPasidDeviceDomain(v2, 0LL);
      IommupHvDetachPasidDeviceDomain(v2, 1LL);
    }
    if ( v23 )
      IommuDisableDevicePasid(v3, v2);
    goto LABEL_35;
  }
  DmarptRootAddress = IommuEnableDevicePasid(v3, v2);
  if ( DmarptRootAddress >= 0 )
  {
    v23 = 1;
    goto LABEL_20;
  }
LABEL_35:
  if ( v8 )
  {
    HalpIommuDereferenceHardwareDomain(a1, v8);
    *(_QWORD *)(v3[1] + 24LL) = 0LL;
  }
  return (unsigned int)DmarptRootAddress;
}
