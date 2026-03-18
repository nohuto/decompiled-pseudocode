/*
 * XREFs of _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14080F71C
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14094EA4C (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegSetValue @ 0x140950248 (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall CmSetDeviceMappedPropertyFromInstanceKeyRegValue(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        _BYTE *a6,
        int a7)
{
  int v7; // r11d
  HANDLE v8; // rdx
  int v9; // ebx
  unsigned int v11; // r10d
  DEVPROPKEY **v13; // r9
  int v14; // r15d
  DEVPROPKEY *v15; // r8
  DEVPROPKEY **v16; // rdi
  DEVPROPKEY *v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v23; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-20h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0LL;
  v9 = 0;
  v23 = 0;
  v11 = 0;
  Handle = 0LL;
  v13 = &off_140B2C660;
  v14 = a1;
  do
  {
    v15 = *v13;
    v16 = v13;
    if ( v7 == (*v13)->pid )
    {
      a1 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        a1 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !a1 )
        break;
    }
    v16 = 0LL;
    ++v11;
    v13 += 4;
  }
  while ( v11 < 2 );
  if ( !v16 )
    return (unsigned int)-1073741264;
  if ( a5 != *((_DWORD *)v16 + 2) )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v9 = CmOpenDeviceRegKey(v14, 2, 0, (__int64)&Handle, 0LL);
    if ( v9 < 0 )
      goto LABEL_31;
    v8 = Handle;
  }
  v17 = v16[2];
  v18 = *((unsigned int *)v16 + 6);
  if ( *(_DWORD *)(a4 + 16) != 2 )
    goto LABEL_26;
  v19 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1 )
    v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Reported.fmtid.Data4;
  if ( v19 )
  {
LABEL_26:
    if ( a3 )
      v8 = a3;
    v21 = PnpCtxRegSetValue(a1, v8, v17, v18, a6, a7);
    if ( v21 != -1073741444 )
    {
      if ( v21 < 0 )
        v9 = v21;
      goto LABEL_31;
    }
  }
  else
  {
    if ( *a6 == 0xFF )
      v23 = 1;
    if ( a3 )
      v8 = a3;
    v20 = PnpCtxRegSetValue(a1, v8, v17, v18, &v23, 4);
    if ( v20 != -1073741444 )
    {
      if ( v20 < 0 )
        v9 = v20;
      goto LABEL_31;
    }
  }
  v9 = -1073741810;
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
