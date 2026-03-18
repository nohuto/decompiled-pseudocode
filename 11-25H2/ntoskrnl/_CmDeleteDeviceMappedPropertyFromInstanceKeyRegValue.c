/*
 * XREFs of _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14080E248
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14094EA4C (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegDeleteValue @ 0x140950624 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  int v4; // ebp
  DEVPROPKEY **v5; // r10
  int v6; // ebx
  HANDLE v7; // rdx
  unsigned int v9; // r11d
  int v10; // r15d
  DEVPROPKEY *v11; // r8
  DEVPROPKEY **v12; // rdi
  int v13; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a4 + 16);
  v5 = &off_140B2C660;
  v6 = 0;
  v7 = 0LL;
  Handle[0] = 0LL;
  v9 = 0;
  v10 = a1;
  do
  {
    v11 = *v5;
    v12 = v5;
    if ( v4 == (*v5)->pid )
    {
      a1 = *(_QWORD *)a4 - *(_QWORD *)&v11->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v11->fmtid.Data1 )
        a1 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v11->fmtid.Data4;
      if ( !a1 )
        break;
    }
    v12 = 0LL;
    ++v9;
    v5 += 4;
  }
  while ( v9 < 2 );
  if ( !v12 )
    return (unsigned int)-1073741264;
  if ( a3 )
    goto LABEL_12;
  v6 = CmOpenDeviceRegKey(v10, 2, 0, (__int64)Handle, 0LL);
  if ( v6 >= 0 )
  {
    v7 = Handle[0];
LABEL_12:
    if ( a3 )
      v7 = a3;
    v13 = PnpCtxRegDeleteValue(a1, v7, v12[2]);
    if ( v13 != -1073741772 && v13 != -1073741444 && v13 < 0 )
      v6 = v13;
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v6;
}
