/*
 * XREFs of HalpIommuGetDeviceId @ 0x1404F6EB0
 * Callers:
 *     IommuDomainAttachDevice @ 0x14059EB00 (IommuDomainAttachDevice.c)
 *     IommupCreateDeviceId @ 0x14059FDDC (IommupCreateDeviceId.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x1407824AC (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IoQueryInterface @ 0x140AA8B20 (IoQueryInterface.c)
 */

__int64 __fastcall HalpIommuGetDeviceId(__int64 a1, _QWORD *a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rbx
  int Interface; // edi
  int v6; // eax
  __int64 v7; // rdx
  _BYTE v9[8]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v10; // [rsp+48h] [rbp-1h]

  memset_0(v9, 0, 0x50uLL);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x746C6644u);
  Interface = IoQueryInterface(a1, 0LL, &GUID_IOMMU_BUS_INTERFACE, 80LL, 2, DeviceAttachmentBaseRefWithTag, v9);
  ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x746C6644u);
  if ( Interface >= 0 )
  {
    v6 = guard_dispatch_icall_no_overrides(v10, 0LL);
    Interface = v6;
    if ( v6 == -1073741789 )
    {
      v7 = 0LL;
    }
    else if ( v6 < 0 )
    {
LABEL_4:
      guard_dispatch_icall_no_overrides(v10, v7);
      goto LABEL_5;
    }
    Interface = -1073741823;
    goto LABEL_4;
  }
  if ( Interface != -1073741670 )
    Interface = -1073741275;
LABEL_5:
  *a2 = 0LL;
  return (unsigned int)Interface;
}
