/*
 * XREFs of HalpIommuDeviceGetDomainTypes @ 0x14058A2B8
 * Callers:
 *     HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x14050B0EC (HalpIommuInvokeInterfaceStateChangeCallbacks.c)
 *     IommuDeviceQueryDomainTypes @ 0x1405A12C0 (IommuDeviceQueryDomainTypes.c)
 *     IommuDomainAttachDeviceEx @ 0x1405A14F0 (IommuDomainAttachDeviceEx.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x1405A1BB0 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuRegisterInterfaceStateChangeCallbackLegacy @ 0x1405A1DF0 (IommuRegisterInterfaceStateChangeCallbackLegacy.c)
 *     IommuDomainAttachPasidDevice @ 0x140789A10 (IommuDomainAttachPasidDevice.c)
 * Callees:
 *     IommupHvIsDmarStageCompatible @ 0x1405A0E84 (IommupHvIsDmarStageCompatible.c)
 *     IoGetDevicePropertyData @ 0x140A9C5D0 (IoGetDevicePropertyData.c)
 */

__int64 __fastcall HalpIommuDeviceGetDomainTypes(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rcx
  unsigned int v4; // ebx
  NTSTATUS DevicePropertyData; // eax
  char v6; // si
  char IsDmarStageCompatible; // al
  int v8; // edx
  ULONG v10; // [rsp+60h] [rbp+8h] BYREF
  ULONG v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF

  v10 = 0;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v4 = 0;
  v11 = 0;
  v12 = 2;
  if ( v3 )
  {
    DevicePropertyData = IoGetDevicePropertyData(v3, &DEVPKEY_Device_IommuDomainPolicy, 0, 0, 4u, &v12, &v11, &v10);
    if ( DevicePropertyData < 0 )
    {
      if ( DevicePropertyData == -1073741772 )
        v4 = 2;
    }
    else if ( v10 == 7 && v11 == 4 )
    {
      if ( v12 )
      {
        if ( v12 != 1 )
          return v4;
      }
      else
      {
        v4 = 2;
      }
    }
  }
  v6 = *(_BYTE *)(a1 + 266);
  if ( HalpHvIommu )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 266);
    IsDmarStageCompatible = IommupHvIsDmarStageCompatible(*(_QWORD *)a1, a2);
  }
  else
  {
    v8 = v6 != 0 ? 128 : 256;
    IsDmarStageCompatible = (v8 & *(_DWORD *)(*(_QWORD *)(a1 + 32) + 464LL)) == v8;
  }
  if ( IsDmarStageCompatible )
  {
    if ( v6 )
      v4 |= 8u;
    else
      v4 |= 1u;
  }
  return v4;
}
