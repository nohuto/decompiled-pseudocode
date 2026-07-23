/*
 * XREFs of _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF5C1C
 * Callers:
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140AF5AB0 (_CmSetDeviceInterfaceMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095F9BC (_CmOpenDeviceInterfaceRegKey.c)
 *     _RegRtlCreateKeyTransacted @ 0x140979034 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlIsPredefinedKey @ 0x140979188 (_RegRtlIsPredefinedKey.c)
 *     _RegRtlSetValue @ 0x1409AD100 (_RegRtlSetValue.c)
 *     _RegRtlOpenPredefinedKey @ 0x140AE6AB8 (_RegRtlOpenPredefinedKey.c)
 */

__int64 __fastcall CmSetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        void *a6,
        ULONG a7)
{
  unsigned int v7; // r11d
  int v12; // ebx
  unsigned int v13; // r8d
  DEVPROPKEY **v14; // r9
  DEVPROPKEY *v15; // r10
  DEVPROPKEY **v16; // rcx
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rax
  int v20; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  HANDLE v24; // rsi
  __int64 v25; // rax
  int inited; // edi
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  HANDLE v30; // [rsp+58h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-39h] BYREF
  HANDLE v32; // [rsp+68h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+100h] [rbp+67h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v32 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  v12 = 0;
  if ( v7 < 2 )
    return (unsigned int)-1073741264;
  v13 = 0;
  v14 = &off_140BDFEB0;
  do
  {
    v15 = *v14;
    v16 = &off_140BDFEB0 + 2 * v13;
    if ( v7 == (*v14)->pid )
    {
      v22 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v22 )
        break;
    }
    ++v13;
    v14 += 2;
    v16 = 0LL;
  }
  while ( v13 < 3 );
  if ( !v16 )
    return (unsigned int)-1073741264;
  v17 = *((_DWORD *)v16 + 2);
  if ( a5 != v17 )
  {
    if ( a5 == 25 )
    {
      if ( v17 == 18 )
        goto LABEL_7;
    }
    else if ( a5 < 2 )
    {
      goto LABEL_7;
    }
    return (unsigned int)-1073741811;
  }
LABEL_7:
  if ( !a3 )
  {
    v12 = CmOpenDeviceInterfaceRegKey(a1, a2, 48, (__int64)v14, 1, 0, (__int64)&v32, 0LL);
    if ( v12 < 0 )
      goto LABEL_17;
  }
  v18 = *(_DWORD *)(a4 + 16);
  if ( v18 == 2 )
  {
    v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
      v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
    if ( !v23 )
    {
      v24 = v32;
      if ( a3 )
        v24 = a3;
      if ( a1 && (v25 = *(_QWORD *)(a1 + 224)) != 0 )
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
                   *(PUNICODE_STRING *)(v25 + 8));
      }
      else
      {
        v30 = 0LL;
        memset(&ObjectAttributes, 0, 44);
        DestinationString = 0LL;
        if ( !RegRtlIsPredefinedKey((__int64)v24) || (inited = RegRtlOpenPredefinedKey(v27, &v30), inited >= 0) )
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
LABEL_16:
        v12 = -1073741772;
        goto LABEL_17;
      }
      if ( inited < 0 )
      {
        v12 = inited;
        goto LABEL_17;
      }
      v20 = RegRtlSetValue(KeyHandle, L"FriendlyName", 1u, a6, a7);
LABEL_15:
      if ( v20 != -1073741444 )
      {
        if ( v20 < 0 )
          v12 = v20;
        goto LABEL_17;
      }
      goto LABEL_16;
    }
    goto LABEL_55;
  }
  if ( v18 != 256 )
  {
    if ( v18 == 3 )
    {
      v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
        v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
      if ( !v28 )
        goto LABEL_68;
    }
    if ( v18 == 4 )
    {
      v29 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1 )
        v29 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data4;
      if ( !v29 )
      {
LABEL_68:
        v12 = -1073741790;
        goto LABEL_17;
      }
    }
    goto LABEL_55;
  }
  v19 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
    v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
  if ( v19 )
  {
LABEL_55:
    v12 = -1073741264;
    goto LABEL_17;
  }
  v12 = CmOpenDeviceInterfaceRegKey(a1, a2, 49, (__int64)v14, 2, 0, (__int64)&Handle, 0LL);
  if ( v12 >= 0 )
  {
    v20 = RegRtlSetValue(Handle, L"DeviceInstance", 1u, a6, a7);
    goto LABEL_15;
  }
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v32 )
    ZwClose(v32);
  return (unsigned int)v12;
}
