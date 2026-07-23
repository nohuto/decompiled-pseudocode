/*
 * XREFs of _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF5F94
 * Callers:
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140AF5AB0 (_CmSetDeviceInterfaceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095F9BC (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceMappedPropertyFromRegValue(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  unsigned int v4; // r11d
  int v5; // ebx
  unsigned int v10; // r8d
  DEVPROPKEY **v11; // r9
  DEVPROPKEY *v12; // r10
  DEVPROPKEY **v13; // rcx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  HANDLE v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h] BYREF
  HANDLE v25; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a4 + 16);
  v5 = 0;
  Handle[0] = 0LL;
  v25 = 0LL;
  if ( v4 < 2 )
    return (unsigned int)-1073741264;
  v10 = 0;
  v11 = &off_140BDFEB0;
  do
  {
    v12 = *v11;
    v13 = &off_140BDFEB0 + 2 * v10;
    if ( v4 == (*v11)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v12->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v12->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v12->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v13 = 0LL;
    ++v10;
    v11 += 2;
  }
  while ( v10 < 3 );
  if ( !v13 )
    return (unsigned int)-1073741264;
  if ( a3 || (v5 = CmOpenDeviceInterfaceRegKey(a1, a2, 48, (__int64)v11, 1, 0, (__int64)Handle, 0LL), v5 >= 0) )
  {
    v14 = *(_DWORD *)(a4 + 16);
    if ( v14 == 2 )
    {
      v18 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
        v18 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
      if ( !v18 )
      {
        v20 = Handle[0];
        if ( a3 )
          v20 = a3;
        v21 = PnpCtxRegOpenKey(a1, (__int64)v20, (__int64)L"Device Parameters", 0, 2u, (__int64)&v25);
        if ( v21 != -1073741772 && v21 != -1073741444 )
        {
          if ( v21 < 0
            || (v21 = PnpCtxRegDeleteValue(v22, v25, L"FriendlyName"), v21 != -1073741772)
            && v21 != -1073741444
            && v21 < 0 )
          {
            v5 = v21;
          }
        }
        goto LABEL_13;
      }
    }
    else
    {
      if ( v14 == 3 )
      {
        v15 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
          v15 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
        if ( !v15 )
          goto LABEL_12;
      }
      if ( v14 == 4 )
      {
        v19 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1 )
          v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data4;
        if ( !v19 )
          goto LABEL_12;
      }
      if ( v14 == 256 )
      {
        v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
          v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
        if ( !v23 )
        {
LABEL_12:
          v5 = -1073741790;
          goto LABEL_13;
        }
      }
    }
    v5 = -1073741264;
  }
LABEL_13:
  if ( v25 )
    ZwClose(v25);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v5;
}
