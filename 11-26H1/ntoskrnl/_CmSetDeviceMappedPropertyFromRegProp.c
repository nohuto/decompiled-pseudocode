/*
 * XREFs of _CmSetDeviceMappedPropertyFromRegProp @ 0x140AADA38
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x140AAD7DC (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 *     _PnpStringFromGuid @ 0x1409B134C (_PnpStringFromGuid.c)
 */

NTSTATUS __fastcall CmSetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int *a6,
        unsigned int a7)
{
  int v7; // esi
  __int64 v8; // r10
  DEVPROPKEY **v13; // rbx
  int v14; // r9d
  DEVPROPKEY *v15; // r11
  DEVPROPKEY **v16; // rdx
  int v17; // ecx
  unsigned int v18; // ebx
  int v19; // edi
  NTSTATUS result; // eax
  __int64 v21; // rcx
  wchar_t *v22; // rax
  int v23; // ecx
  int *v24; // rax
  int v25; // ecx
  __int64 v26; // [rsp+28h] [rbp-C0h]
  int v27; // [rsp+30h] [rbp-B8h]
  int v28; // [rsp+40h] [rbp-A8h] BYREF
  wchar_t v29[40]; // [rsp+50h] [rbp-98h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0LL;
  v28 = 0;
  v13 = &CmDeviceRegPropMap;
  v14 = 1;
  do
  {
    v15 = *v13;
    v16 = &CmDeviceRegPropMap + 3 * v8;
    if ( v7 == (*v13)->pid )
    {
      v21 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v21 )
        break;
    }
    v16 = 0LL;
    v8 = (unsigned int)(v8 + 1);
    v13 += 3;
  }
  while ( (unsigned int)v8 < 0x21 );
  if ( !v16 )
    return -1073741264;
  v17 = *((_DWORD *)v16 + 2);
  v18 = *((_DWORD *)v16 + 3);
  if ( a5 != v17 )
  {
    if ( a5 == 25 )
    {
      if ( v17 != 18 )
        return -1073741811;
    }
    else if ( a5 >= 2 )
    {
      return -1073741811;
    }
  }
  v19 = *((_DWORD *)v16 + 4);
  if ( v18 != 37 && v18 != 9 )
  {
    if ( v18 == 25 )
      return -1073741637;
    if ( v18 != 27 )
    {
      v27 = a6 != 0LL ? a7 : 0;
      v26 = (unsigned __int64)a6 & -(__int64)(a6 != 0LL);
      return CmSetDeviceRegProp(a1, a2, a3, v18, v19, v26, v27, 0);
    }
    if ( !a6 )
    {
      v24 = 0LL;
      v25 = 0;
      return CmSetDeviceRegProp(a1, a2, a3, 0x1Bu, v19, (__int64)v24, v25, 0);
    }
    if ( a7 )
    {
      if ( *(_BYTE *)a6 == 0xFF )
      {
LABEL_35:
        v28 = v14;
        v24 = &v28;
        v25 = 4;
        return CmSetDeviceRegProp(a1, a2, a3, 0x1Bu, v19, (__int64)v24, v25, 0);
      }
      if ( !*(_BYTE *)a6 )
      {
        v14 = 0;
        goto LABEL_35;
      }
    }
    return -1073741811;
  }
  if ( !a6 )
  {
    v22 = 0LL;
    v23 = 0;
    goto LABEL_22;
  }
  if ( a7 < 0x10 )
    return -1073741811;
  result = PnpStringFromGuid(a6, v29);
  if ( result >= 0 )
  {
    v22 = v29;
    v23 = 78;
LABEL_22:
    v27 = v23;
    v26 = (__int64)v22;
    return CmSetDeviceRegProp(a1, a2, a3, v18, v19, v26, v27, 0);
  }
  return result;
}
