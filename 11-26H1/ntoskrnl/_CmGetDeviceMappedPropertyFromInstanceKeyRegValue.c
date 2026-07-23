/*
 * XREFs of _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409536FC
 * Callers:
 *     _PnpDispatchDevice @ 0x140956100 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x140AE0A94 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromInstanceKeyRegValue(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r13
  HANDLE v9; // rdx
  _DWORD *v10; // rax
  int v11; // ebx
  __int64 v12; // r15
  int v15; // esi
  int v16; // r11d
  DEVPROPKEY **v17; // r9
  unsigned int i; // r8d
  DEVPROPKEY *v19; // r10
  DEVPROPKEY **v20; // rdi
  DEVPROPKEY *v21; // r8
  int v22; // ecx
  __int64 v24; // rax
  int v25; // eax
  int v26; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  int v28; // [rsp+90h] [rbp+40h]

  v28 = a1;
  v8 = a5;
  v9 = 0LL;
  v10 = a8;
  v11 = 0;
  v12 = a6;
  Handle = 0LL;
  *a5 = 0;
  *v10 = 0;
  v26 = 0;
  if ( v12 )
  {
    v15 = a7;
    a1 = -(__int64)(a7 != 0);
    v12 &= a1;
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  v17 = &off_140BE03F0;
  for ( i = 0; i < 2; ++i )
  {
    v19 = *v17;
    v20 = &off_140BE03F0 + 4 * i;
    if ( v16 == (*v17)->pid )
    {
      a1 = *(_QWORD *)a4 - *(_QWORD *)&v19->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v19->fmtid.Data1 )
        a1 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v19->fmtid.Data4;
      if ( !a1 )
        break;
    }
    v20 = 0LL;
    v17 += 4;
  }
  if ( !v20 )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    v11 = CmOpenDeviceRegKey(v28, a2, 16, 0, 1, 0, (__int64)&Handle, 0LL);
    if ( v11 < 0 )
      goto LABEL_15;
    v9 = Handle;
  }
  v21 = v20[2];
  if ( *(_DWORD *)(a4 + 16) == 2 )
  {
    v24 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1 )
      v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Reported.fmtid.Data4;
    if ( !v24 )
    {
      LODWORD(a6) = 0;
      LODWORD(a5) = 4;
      if ( a3 )
        v9 = a3;
      if ( (int)PnpCtxRegQueryValue(a1, v9, v21, &v26, &a6, &a5) >= 0 && v26 == 4 && (_DWORD)a5 == 4 )
        v25 = a6;
      else
        v25 = 0;
      if ( v25 )
      {
        *a8 = 1;
        *v8 = 17;
        if ( v15 )
        {
          *(_BYTE *)v12 = -1;
          goto LABEL_15;
        }
LABEL_46:
        v11 = -1073741789;
        goto LABEL_15;
      }
LABEL_14:
      v11 = -1073741275;
      goto LABEL_15;
    }
  }
  LODWORD(a5) = v15;
  if ( a3 )
    v9 = a3;
  v22 = PnpCtxRegQueryValue(a1, v9, v21, &v26, v12, &a5);
  if ( v22 == -1073741772 || v22 == -1073741444 )
    goto LABEL_14;
  if ( v22 && v22 != -1073741789 )
  {
    v11 = v22;
    goto LABEL_15;
  }
  if ( v26 != *((_DWORD *)v20 + 6) )
  {
    v11 = -1073741811;
    goto LABEL_15;
  }
  *a8 = (_DWORD)a5;
  *v8 = *((_DWORD *)v20 + 2);
  if ( v22 || !v15 )
    goto LABEL_46;
LABEL_15:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v11;
}
