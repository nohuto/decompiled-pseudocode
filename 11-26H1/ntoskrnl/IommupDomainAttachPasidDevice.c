/*
 * XREFs of IommupDomainAttachPasidDevice @ 0x14058A5DC
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x1405A14F0 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainAttachPasidDevice @ 0x140789A10 (IommuDomainAttachPasidDevice.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     HalpIommuGetHardwareDomain @ 0x14050D954 (HalpIommuGetHardwareDomain.c)
 *     Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline @ 0x140589CFC (Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14058FD00 (HalpIommuDereferenceHardwareDomain.c)
 *     IommuDisableDevicePasid @ 0x14059E170 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x14059E450 (IommuEnableDevicePasid.c)
 *     IommuSetAddressSpace @ 0x14059F380 (IommuSetAddressSpace.c)
 *     IommupHvAttachPasidDeviceDomain @ 0x1405A03C4 (IommupHvAttachPasidDeviceDomain.c)
 *     IommupHvAttachPasidSubDeviceDomain @ 0x1405A0574 (IommupHvAttachPasidSubDeviceDomain.c)
 *     IommupHvDetachPasidDeviceDomain @ 0x1405A08B4 (IommupHvDetachPasidDeviceDomain.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1405A331C (HalpIommuGetDmarptRootAddress.c)
 */

__int64 __fastcall IommupDomainAttachPasidDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  _QWORD *v3; // r12
  int DmarptRootAddress; // ebx
  bool v7; // zf
  __int64 v8; // r14
  char v9; // di
  __int64 v10; // r13
  __int64 v11; // rax
  int HardwareDomain; // eax
  _DWORD *v13; // rdi
  KIRQL v14; // al
  _QWORD *v15; // r9
  _QWORD *v16; // rdx
  bool v17; // sf
  int v18; // eax
  KIRQL v19; // al
  _QWORD *v20; // rdi
  __int64 v21; // r8
  _QWORD *v22; // rdx
  KIRQL v23; // al
  _QWORD *v24; // r8
  KIRQL v25; // al
  _QWORD *v26; // rsi
  __int64 v27; // r8
  _QWORD *v28; // rdx
  __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v31[8]; // [rsp+38h] [rbp-40h] BYREF
  char v32; // [rsp+88h] [rbp+10h]
  char v33; // [rsp+90h] [rbp+18h]
  char v34; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD **)(a2 + 56);
  v31[0] = 0LL;
  DmarptRootAddress = 0;
  v34 = 0;
  v7 = *(_DWORD *)(v2 + 384) == 1;
  v8 = 0LL;
  v30 = 0LL;
  v9 = 0;
  v33 = 0;
  v10 = 0LL;
  v32 = 0;
  if ( !v7 )
  {
    if ( *(_DWORD *)(a1 + 8) != 3 )
    {
      DmarptRootAddress = -1073741585;
      goto LABEL_45;
    }
    if ( (unsigned int)Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline() )
    {
      v10 = *(_QWORD *)(a2 + 24);
      if ( v10 == a1 )
        return (unsigned int)DmarptRootAddress;
      if ( v10 && (*(_DWORD *)(a2 + 48) || *(_BYTE *)(*(_QWORD *)(a2 + 16) + 265LL)) )
      {
LABEL_12:
        DmarptRootAddress = -1073741823;
        goto LABEL_45;
      }
    }
    else
    {
      v11 = *(_QWORD *)(a2 + 24);
      if ( v11 )
      {
        if ( v11 == a1 )
          return (unsigned int)DmarptRootAddress;
        goto LABEL_12;
      }
    }
    DmarptRootAddress = HalpIommuGetDmarptRootAddress(
                          *(_QWORD *)(a1 + 40),
                          *(unsigned int *)(*(_QWORD *)(a1 + 40) + 24LL),
                          v31);
    if ( DmarptRootAddress < 0 )
      goto LABEL_45;
    if ( HalpHvIommu )
    {
      v13 = (_DWORD *)(a2 + 48);
      if ( !*(_DWORD *)(a2 + 48) )
      {
        DmarptRootAddress = IommupHvAttachPasidDeviceDomain(v2, a1, 0LL);
        if ( DmarptRootAddress < 0 )
        {
          v9 = 0;
          goto LABEL_45;
        }
        v33 = 1;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(*v3 + 16LL);
      HardwareDomain = HalpIommuGetHardwareDomain(a1, *(_QWORD *)(v2 + 32), 1, 1, 1, &v30);
      v8 = v30;
      DmarptRootAddress = HardwareDomain;
      if ( HardwareDomain < 0 )
        goto LABEL_45;
      if ( *(_DWORD *)(v30 + 80) != *(_DWORD *)(*v3 + 16LL) )
        goto LABEL_12;
      v13 = (_DWORD *)(a2 + 48);
      *(_QWORD *)(v3[1] + 24LL) = v30 + 32;
      if ( *(_DWORD *)(a2 + 48) )
      {
        DmarptRootAddress = IommuEnableDevicePasid(v3, v2);
        if ( DmarptRootAddress < 0 )
        {
LABEL_44:
          v9 = v32;
          goto LABEL_45;
        }
        v34 = 1;
        v13 = (_DWORD *)(a2 + 48);
      }
    }
    if ( !(unsigned int)Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline() )
    {
      v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
      v15 = *(_QWORD **)(a1 + 80);
      v16 = (_QWORD *)(a2 + 32);
      if ( *v15 != a1 + 72 )
        goto LABEL_57;
      *v16 = a1 + 72;
      *(_QWORD *)(a2 + 40) = v15;
      *v15 = v16;
      *(_QWORD *)(a1 + 80) = v16;
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v14);
      v32 = 1;
    }
    if ( HalpHvIommu )
    {
      if ( *v13 )
        v18 = IommupHvAttachPasidSubDeviceDomain(a2, a1);
      else
        v18 = IommupHvAttachPasidDeviceDomain(v2, a1, 1LL);
      DmarptRootAddress = v18;
      v17 = v18 < 0;
    }
    else
    {
      DmarptRootAddress = IommuSetAddressSpace(v3, v31[0]);
      v17 = DmarptRootAddress < 0;
    }
    if ( !v17 )
    {
      if ( (unsigned int)Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v10 )
        {
          v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 88));
          v20 = (_QWORD *)(a2 + 32);
          v21 = *(_QWORD *)(a2 + 32);
          if ( *(_QWORD *)(v21 + 8) != a2 + 32 )
            goto LABEL_57;
          v22 = *(_QWORD **)(a2 + 40);
          if ( (_QWORD *)*v22 != v20 )
            goto LABEL_57;
          *v22 = v21;
          *(_QWORD *)(v21 + 8) = v22;
          *(_QWORD *)(a2 + 40) = a2 + 32;
          *v20 = v20;
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 88), v19);
        }
        else
        {
          v20 = (_QWORD *)(a2 + 32);
        }
        v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
        v24 = *(_QWORD **)(a1 + 80);
        if ( *v24 != a1 + 72 )
          goto LABEL_57;
        *v20 = a1 + 72;
        v20[1] = v24;
        *v24 = v20;
        *(_QWORD *)(a1 + 80) = v20;
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v23);
      }
      *(_QWORD *)(a2 + 24) = a1;
      return (unsigned int)DmarptRootAddress;
    }
    goto LABEL_44;
  }
  DmarptRootAddress = -1073741637;
LABEL_45:
  if ( (unsigned int)Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline() || !v9 )
    goto LABEL_50;
  v25 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v26 = (_QWORD *)(a2 + 32);
  v27 = *v26;
  if ( *(_QWORD **)(*v26 + 8LL) != v26 || (v28 = (_QWORD *)v26[1], (_QWORD *)*v28 != v26) )
LABEL_57:
    __fastfail(3u);
  *v28 = v27;
  *(_QWORD *)(v27 + 8) = v28;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v25);
LABEL_50:
  if ( v33 )
  {
    IommupHvDetachPasidDeviceDomain(v2, 0LL);
    IommupHvDetachPasidDeviceDomain(v2, 1LL);
  }
  if ( v34 )
    IommuDisableDevicePasid(v3, v2);
  if ( v8 )
  {
    HalpIommuDereferenceHardwareDomain(a1, v8);
    *(_QWORD *)(v3[1] + 24LL) = 0LL;
  }
  return (unsigned int)DmarptRootAddress;
}
