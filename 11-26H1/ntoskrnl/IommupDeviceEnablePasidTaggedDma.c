/*
 * XREFs of IommupDeviceEnablePasidTaggedDma @ 0x14078518C
 * Callers:
 *     IommupDeviceEnableSvm @ 0x14078537C (IommupDeviceEnableSvm.c)
 * Callees:
 *     HalpIommuFreeDomainId @ 0x140535968 (HalpIommuFreeDomainId.c)
 *     IommupPasidDeviceCreate @ 0x14058AAEC (IommupPasidDeviceCreate.c)
 *     IommupPasidDeviceDelete @ 0x14058AC50 (IommupPasidDeviceDelete.c)
 *     HalpIommuBusInterfaceCheckSvmSupport @ 0x14058E32C (HalpIommuBusInterfaceCheckSvmSupport.c)
 *     HalpIommuBusInterfaceEnableSvmCapabilities @ 0x14058E398 (HalpIommuBusInterfaceEnableSvmCapabilities.c)
 *     HalpIommuBusInterfaceGetSvmCapabilities @ 0x14058E3D8 (HalpIommuBusInterfaceGetSvmCapabilities.c)
 *     HalpIommuGetDomainId @ 0x14058E69C (HalpIommuGetDomainId.c)
 *     HalpIommuIsDmarStageCompatible @ 0x14059044C (HalpIommuIsDmarStageCompatible.c)
 *     IommuDisableDevicePasid @ 0x14059E170 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x14059E450 (IommuEnableDevicePasid.c)
 *     IommuGetLeastMaximumSupportedAsidValue @ 0x14059EBE4 (IommuGetLeastMaximumSupportedAsidValue.c)
 *     IommupMapDeviceInternal @ 0x14059F814 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x14059FB94 (IommupUnmapDeviceInternal.c)
 *     IommupHvAttachPasidDevice @ 0x1405A001C (IommupHvAttachPasidDevice.c)
 *     IommupHvDetachPasidDevice @ 0x1405A07C8 (IommupHvDetachPasidDevice.c)
 *     IommupHvIsStage1DmarCompatible @ 0x1405A0F08 (IommupHvIsStage1DmarCompatible.c)
 */

__int64 __fastcall IommupDeviceEnablePasidTaggedDma(__int64 a1, char a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebp
  KSPIN_LOCK **v4; // r15
  char v5; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  int v11; // ebx
  unsigned int KernelStack; // ebx
  __int64 v13; // rcx
  int DomainId; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  ULONG v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0LL;
  v3 = -1;
  v4 = 0LL;
  v19 = -1;
  v5 = 0;
  v21 = 0LL;
  v20 = 0;
  if ( HalpHvIommu )
  {
    if ( !IommupHvIsStage1DmarCompatible(*(_DWORD **)a1, a2 == 0) )
    {
LABEL_3:
      v11 = -1073741637;
      goto LABEL_30;
    }
    if ( HalpHvIommu )
    {
      KernelStack = (unsigned int)IommuInterfaceStateChangeCallbackPushLock.KernelStack;
      goto LABEL_8;
    }
  }
  else if ( !HalpIommuIsDmarStageCompatible(*(_QWORD *)(a1 + 32), 1) )
  {
    goto LABEL_3;
  }
  KernelStack = IommuGetLeastMaximumSupportedAsidValue();
LABEL_8:
  if ( !a2 )
  {
    if ( !HalpIommuBusInterfaceCheckSvmSupport(a1) )
      goto LABEL_3;
    if ( (int)HalpIommuBusInterfaceGetSvmCapabilities(v13, (__int64)&v20) < 0 )
      goto LABEL_3;
    if ( (v20 & 4) == 0 )
      goto LABEL_3;
    v8 = (unsigned int)(1 << (v20 >> 3));
    if ( (unsigned int)v8 < KernelStack )
      goto LABEL_3;
    *(_DWORD *)(a1 + 376) = *(_DWORD *)(a1 + 376) & 0xFFFFFF07 | v20 & 0xF8 | 4;
  }
  if ( !HalpHvIommu )
  {
    DomainId = HalpIommuGetDomainId(*(_QWORD *)(a1 + 32), &v19);
    v3 = v19;
    v11 = DomainId;
    if ( DomainId < 0 )
      goto LABEL_30;
    if ( v19 - 1 > 0xFFFFFFFD )
    {
      v11 = -1073741670;
      goto LABEL_30;
    }
    *(_DWORD *)(a1 + 268) = v19;
    v5 = 1;
  }
  v15 = IommupPasidDeviceCreate(a1, 0, &v21);
  v2 = v21;
  v11 = v15;
  if ( v15 >= 0 )
  {
    if ( HalpHvIommu )
    {
      v16 = IommupHvAttachPasidDevice(a1, v8, v9, v10);
    }
    else
    {
      v4 = *(KSPIN_LOCK ***)(v21 + 56);
      v11 = IommupMapDeviceInternal(*v4, a1, (_DWORD *)(a1 + 376));
      if ( v11 < 0 )
        goto LABEL_30;
      v16 = IommuEnableDevicePasid((__int64)v4, a1);
    }
    v11 = v16;
    if ( v16 >= 0 )
    {
      if ( a2 )
        return (unsigned int)v11;
      v11 = HalpIommuBusInterfaceEnableSvmCapabilities(a1);
      if ( v11 >= 0 )
        return (unsigned int)v11;
      if ( HalpHvIommu )
        IommupHvDetachPasidDevice(a1, v17);
      else
        IommuDisableDevicePasid((__int64)v4, a1);
    }
  }
LABEL_30:
  if ( *(_QWORD *)(a1 + 88) )
    IommupUnmapDeviceInternal((__int64)*v4, a1);
  if ( v2 )
    IommupPasidDeviceDelete(v2, v8, v9, v10);
  if ( v5 )
  {
    HalpIommuFreeDomainId(*(_QWORD *)(a1 + 32), v3);
    *(_DWORD *)(a1 + 268) = -1;
  }
  *(_DWORD *)(a1 + 376) &= 0xFFFFFF03;
  return (unsigned int)v11;
}
