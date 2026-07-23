/*
 * XREFs of _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1408A175C
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x140AAD7DC (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue(__int64 a1, int a2, void *a3, __int64 a4)
{
  int v4; // r15d
  int v6; // ebx
  HANDLE v7; // rdx
  unsigned int v9; // r10d
  int v11; // r14d
  DEVPROPKEY **v12; // r8
  DEVPROPKEY *v13; // r9
  DEVPROPKEY **v14; // rdi
  int v15; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a4 + 16);
  v6 = 0;
  v7 = 0LL;
  Handle[0] = 0LL;
  v9 = 0;
  v11 = a1;
  v12 = &off_140BE03F0;
  do
  {
    v13 = *v12;
    v14 = &off_140BE03F0 + 4 * v9;
    if ( v4 == (*v12)->pid )
    {
      a1 = *(_QWORD *)a4 - *(_QWORD *)&v13->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v13->fmtid.Data1 )
        a1 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v13->fmtid.Data4;
      if ( !a1 )
        break;
    }
    v14 = 0LL;
    ++v9;
    v12 += 4;
  }
  while ( v9 < 2 );
  if ( !v14 )
    return (unsigned int)-1073741264;
  if ( a3 )
    goto LABEL_12;
  v6 = CmOpenDeviceRegKey(v11, a2, 16, 0, 2, 0, (__int64)Handle, 0LL);
  if ( v6 >= 0 )
  {
    v7 = Handle[0];
LABEL_12:
    if ( a3 )
      v7 = a3;
    v15 = PnpCtxRegDeleteValue(a1, v7, v14[2]);
    if ( v15 != -1073741772 && v15 != -1073741444 && v15 < 0 )
      v6 = v15;
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v6;
}
