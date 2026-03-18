/*
 * XREFs of _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140A58EDC
 * Callers:
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140A58D74 (_CmSetDeviceInterfaceMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x1408111F4 (_RegRtlOpenPredefinedKey.c)
 *     _RegRtlCreateKeyTransacted @ 0x14093201C (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlIsPredefinedKey @ 0x14093216C (_RegRtlIsPredefinedKey.c)
 *     _RegRtlSetValue @ 0x14095027C (_RegRtlSetValue.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095A430 (_CmOpenDeviceInterfaceRegKey.c)
 */

__int64 __fastcall CmSetDeviceInterfaceMappedPropertyFromRegValue(
        _QWORD *a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        void *a6,
        ULONG a7)
{
  unsigned int v7; // r11d
  int v12; // ebx
  __int64 v14; // r9
  DEVPROPKEY **v15; // rcx
  DEVPROPKEY *v16; // r10
  DEVPROPKEY **v17; // r8
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  HANDLE v24; // rsi
  __int64 v25; // rax
  int inited; // edi
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  HANDLE v30; // [rsp+58h] [rbp-41h] BYREF
  HANDLE v31; // [rsp+60h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+100h] [rbp+67h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  KeyHandle = 0LL;
  v31 = 0LL;
  v12 = 0;
  if ( v7 < 2 )
    return (unsigned int)-1073741264;
  v14 = 0LL;
  v15 = &off_140B2C130;
  do
  {
    v16 = *v15;
    v17 = v15;
    if ( v7 == (*v15)->pid )
    {
      v22 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v22 )
        break;
    }
    v14 = (unsigned int)(v14 + 1);
    v15 += 2;
    v17 = 0LL;
  }
  while ( (unsigned int)v14 < 3 );
  if ( !v17 )
    return (unsigned int)-1073741264;
  v18 = *((_DWORD *)v17 + 2);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 == 18 )
        goto LABEL_9;
    }
    else if ( a5 < 2 )
    {
      goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
LABEL_9:
  if ( !a3 )
  {
    v12 = CmOpenDeviceInterfaceRegKey(a1, a2, 0x30u, v14, 1u, 0, &Handle, 0LL);
    if ( v12 < 0 )
      goto LABEL_19;
  }
  v19 = *(_DWORD *)(a4 + 16);
  if ( v19 == 2 )
  {
    v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
      v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
    if ( !v23 )
    {
      v24 = Handle;
      if ( a3 )
        v24 = a3;
      if ( a1 && (v25 = a1[28]) != 0 )
      {
        inited = RegRtlCreateKeyTransacted(
                   v24,
                   L"Device Parameters",
                   0,
                   2u,
                   0LL,
                   0,
                   &KeyHandle,
                   0LL,
                   *(_QWORD *)(v25 + 8));
      }
      else
      {
        v30 = 0LL;
        memset(&ObjectAttributes, 0, 44);
        DestinationString = 0LL;
        if ( !RegRtlIsPredefinedKey((__int64)v24) || (inited = RegRtlOpenPredefinedKey(v27, (__int64)&v30), inited >= 0) )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, L"Device Parameters");
          if ( inited >= 0 )
          {
            if ( v30 )
              v24 = v30;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v24;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Attributes = 704;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            inited = ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL);
          }
        }
        if ( v30 )
          ZwClose(v30);
      }
      if ( inited == -1073741444 )
      {
LABEL_18:
        v12 = -1073741772;
        goto LABEL_19;
      }
      if ( inited < 0 )
      {
        v12 = inited;
        goto LABEL_19;
      }
      v21 = RegRtlSetValue(KeyHandle, L"FriendlyName", 1u, a6, a7);
LABEL_17:
      if ( v21 != -1073741444 )
      {
        if ( v21 < 0 )
          v12 = v21;
        goto LABEL_19;
      }
      goto LABEL_18;
    }
    goto LABEL_60;
  }
  if ( v19 != 256 )
  {
    if ( v19 == 3 )
    {
      v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
        v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
      if ( !v28 )
        goto LABEL_69;
    }
    if ( v19 == 4 )
    {
      v29 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1 )
        v29 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data4;
      if ( !v29 )
      {
LABEL_69:
        v12 = -1073741790;
        goto LABEL_19;
      }
    }
    goto LABEL_60;
  }
  v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
    v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
  if ( v20 )
  {
LABEL_60:
    v12 = -1073741264;
    goto LABEL_19;
  }
  v12 = CmOpenDeviceInterfaceRegKey(a1, a2, 0x31u, v14, 2u, 0, &v31, 0LL);
  if ( v12 >= 0 )
  {
    v21 = RegRtlSetValue(v31, L"DeviceInstance", 1u, a6, a7);
    goto LABEL_17;
  }
LABEL_19:
  if ( v31 )
    ZwClose(v31);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}
