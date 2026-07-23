/*
 * XREFs of _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AADC30
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x140AAD7DC (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall CmDeleteDeviceMappedPropertyFromDriverKeyRegValue(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r8d
  DEVPROPKEY **v7; // r9
  DEVPROPKEY *v8; // rdx
  DEVPROPKEY **v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  v6 = 0;
  v7 = &off_140BE31E0;
  do
  {
    v8 = *v7;
    v9 = &off_140BE31E0 + 4 * v6;
    if ( *(_DWORD *)(a3 + 16) == (*v7)->pid )
    {
      v16 = *(_QWORD *)a3 - *(_QWORD *)&v8->fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&v8->fmtid.Data1 )
        v16 = *(_QWORD *)(a3 + 8) - *(_QWORD *)v8->fmtid.Data4;
      if ( !v16 )
        break;
    }
    v9 = 0LL;
    ++v6;
    v7 += 4;
  }
  while ( v6 < 0xD );
  if ( !v9 )
    return (unsigned int)-1073741802;
  v10 = CmOpenDeviceRegKey(a1, a2, 18, 0, 2, 0, (__int64)&Handle, 0LL);
  v12 = v10;
  if ( v10 == -1073741772 )
  {
    v12 = 0;
  }
  else if ( v10 >= 0 )
  {
    v13 = PnpCtxRegDeleteValue(v11, Handle, (const WCHAR *)v9[2]);
    if ( v13 == -1073741772 )
      goto LABEL_10;
    if ( v13 != -1073741444 )
    {
      if ( v13 >= 0 )
      {
LABEL_10:
        if ( *(_DWORD *)(a3 + 16) == 2 )
        {
          v17 = *(_QWORD *)a3 - *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1;
          if ( *(_QWORD *)a3 == *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1 )
            v17 = *(_QWORD *)(a3 + 8) - *(_QWORD *)DEVPKEY_Device_DriverDate.fmtid.Data4;
          if ( !v17 )
            PnpCtxRegDeleteValue(v14, Handle, L"DriverDate");
        }
        goto LABEL_11;
      }
      v12 = v13;
    }
  }
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  return v12;
}
