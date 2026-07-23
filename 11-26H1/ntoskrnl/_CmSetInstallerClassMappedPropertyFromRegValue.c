/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140B47184
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140B40214 (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x140956580 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x14095ED14 (_CmOpenInstallerClassRegKey.c)
 *     _PnpCtxRegSetValue @ 0x1409AD0CC (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromRegValue(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        ULONG a7)
{
  int v7; // ebx
  __int64 v12; // r9
  DEVPROPKEY **v13; // r8
  DEVPROPKEY *v14; // rdx
  DEVPROPKEY **v15; // rsi
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // r14
  unsigned int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // rax
  const wchar_t *v23; // rax
  HANDLE v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  HANDLE v28; // rdx
  __int64 v29; // rax
  HANDLE v30; // rdx
  int v31; // eax
  int v33; // [rsp+28h] [rbp-38h]
  int v34; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v35; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF

  v7 = 0;
  v34 = 0;
  v35 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v13 = &off_140BE1FD0;
  do
  {
    v14 = *v13;
    v15 = &off_140BE1FD0 + 4 * (unsigned int)v12;
    if ( *(_DWORD *)(a4 + 16) == (*v13)->pid )
    {
      v16 = *(_QWORD *)a4 - *(_QWORD *)&v14->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v14->fmtid.Data1 )
        v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v14->fmtid.Data4;
      if ( !v16 )
        break;
    }
    v15 = 0LL;
    v12 = (unsigned int)(v12 + 1);
    v13 += 4;
  }
  while ( (unsigned int)v12 < 0xD );
  if ( !v15 )
    return (unsigned int)-1073741802;
  v17 = *((_DWORD *)v15 + 2);
  if ( a5 != v17 )
  {
    if ( a5 == 25 )
    {
      if ( v17 != 18 )
        return (unsigned int)-1073741811;
    }
    else if ( a5 >= 2 )
    {
      return (unsigned int)-1073741811;
    }
  }
  if ( a3 || (v7 = CmOpenInstallerClassRegKey(a1, a2, (__int64)v13, v12, 3, 0, (__int64)&v35, 0LL), v7 >= 0) )
  {
    v18 = *(_DWORD *)(a4 + 16);
    v19 = (__int64)v15[2];
    v20 = *((_DWORD *)v15 + 6);
    if ( v18 == 7 )
    {
      v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
        v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
      if ( !v21 )
        goto LABEL_36;
    }
    if ( v18 == 8 )
    {
      v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
        v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
      if ( !v21 )
        goto LABEL_36;
    }
    if ( v18 == 9 )
    {
      v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
        v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
      if ( !v21 )
        goto LABEL_36;
    }
    if ( v18 == 10 )
    {
      v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
        v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
      if ( !v21 )
        goto LABEL_36;
    }
    v21 = a7;
    switch ( v18 )
    {
      case 15:
        v22 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_FSFilterClass;
        if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_FSFilterClass )
          v22 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
        if ( !v22 )
        {
LABEL_36:
          if ( !a7 )
          {
LABEL_37:
            v7 = -1073741811;
            goto LABEL_70;
          }
          LOBYTE(v21) = *a6;
          if ( *a6 == 0xFF )
          {
            v23 = L"1";
          }
          else
          {
            if ( (_BYTE)v21 )
              goto LABEL_37;
            v23 = L"0";
          }
          v24 = v35;
          if ( a3 )
            v24 = a3;
LABEL_44:
          v25 = PnpCtxRegSetValue(v21, v24, v19, v20, (__int64)v23, 4u);
          if ( v25 == -1073741444 )
          {
            v7 = -1073741772;
          }
          else if ( v25 < 0 )
          {
            v7 = v25;
          }
          goto LABEL_70;
        }
        break;
      case 2:
        v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
          v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
        if ( !v26 )
        {
          if ( !a7 )
            goto LABEL_37;
          if ( *a6 == 0xFF )
          {
            v27 = 1;
          }
          else
          {
            if ( *a6 )
              goto LABEL_37;
            v27 = 0;
          }
          v28 = v35;
          v34 = v27;
          if ( a3 )
            v28 = a3;
          v7 = PnpOpenPropertiesKey(a1, (__int64)v28, 0LL, 2LL, 1, v33, &Handle);
          if ( v7 < 0 )
            goto LABEL_70;
          v24 = Handle;
          v23 = (const wchar_t *)&v34;
          goto LABEL_44;
        }
        break;
      case 3:
        v29 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassName.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassName.fmtid.Data1 )
          v29 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassName.fmtid.Data4;
        if ( !v29 && a7 > 0x40 )
          goto LABEL_37;
        break;
    }
    v30 = v35;
    if ( a3 )
      v30 = a3;
    v31 = PnpCtxRegSetValue(a7, v30, v19, v20, (__int64)a6, a7);
    if ( v31 < 0 )
      v7 = v31;
  }
LABEL_70:
  if ( Handle )
    ZwClose(Handle);
  if ( v35 )
    ZwClose(v35);
  return (unsigned int)v7;
}
