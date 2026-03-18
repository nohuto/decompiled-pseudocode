/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x1409AA514
 * Callers:
 *     _PnpDispatchDevice @ 0x1408CB4B0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1409A8830 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceCompoundFilters @ 0x1409AAC80 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A7D238 (_CmGetDeviceCompoundFiltersWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 *     _PnpMultiSzGetLen @ 0x1409AAC40 (_PnpMultiSzGetLen.c)
 *     _PnpParseIndirectInfString @ 0x1409AAE34 (_PnpParseIndirectInfString.c)
 *     _PnpParseIndirectResourceString @ 0x1409AAF04 (_PnpParseIndirectResourceString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        GUID *a6,
        unsigned int a7,
        unsigned int *a8,
        int a9)
{
  GUID *v9; // r15
  unsigned int v11; // r13d
  int v12; // r11d
  DEVPROPKEY **v13; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v15; // r9
  DEVPROPKEY **v16; // rsi
  unsigned int v17; // r12d
  __int64 v18; // r8
  const WCHAR *v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // r10d
  int DeviceRegProp; // ebx
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // r12
  const WCHAR *v28; // r13
  unsigned int Len; // r9d
  unsigned int v30; // r9d
  GUID *Pool2; // rsi
  unsigned int v32; // r9d
  int v33; // eax
  GUID *v34; // r11
  char v35; // al
  __int64 v36; // r11
  char v37; // al
  unsigned int v38; // [rsp+40h] [rbp-B9h] BYREF
  int v39; // [rsp+44h] [rbp-B5h] BYREF
  const WCHAR *v40; // [rsp+48h] [rbp-B1h]
  __int64 v41; // [rsp+50h] [rbp-A9h]
  int v42; // [rsp+58h] [rbp-A1h] BYREF
  __int64 v43; // [rsp+60h] [rbp-99h]
  int v44; // [rsp+68h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-89h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-81h] BYREF
  GUID Guid; // [rsp+88h] [rbp-71h] BYREF
  WCHAR SourceString[40]; // [rsp+A0h] [rbp-59h] BYREF

  v9 = a6;
  v43 = a3;
  v40 = a2;
  v41 = a1;
  v39 = 0;
  v44 = 0;
  v38 = 0;
  v42 = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v11 = a7;
    v9 = (GUID *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_DWORD *)(a4 + 16);
  v13 = &CmDeviceRegPropMap;
  for ( i = 0; i < 0x21; ++i )
  {
    v15 = *v13;
    v16 = v13;
    if ( v12 == (*v13)->pid )
    {
      v25 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v25 )
        break;
    }
    v13 += 3;
    v16 = 0LL;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  v17 = *((_DWORD *)v16 + 3);
  switch ( v17 )
  {
    case 0x25u:
      goto LABEL_39;
    case 0x1Bu:
      v27 = v41;
      v38 = 4;
      DeviceRegProp = CmGetDeviceRegProp(v41, v40, v43, 0x1Bu, (__int64)&v39, (__int64)&v42, (__int64)&v38, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_24;
      if ( v39 != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 1;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        LOBYTE(v9->Data1) = -(v42 != 0);
        return (unsigned int)DeviceRegProp;
      }
      return (unsigned int)-1073741789;
    case 9u:
LABEL_39:
      v30 = *((_DWORD *)v16 + 3);
      v27 = v41;
      v38 = 78;
      DeviceRegProp = CmGetDeviceRegProp(v41, v40, v43, v30, (__int64)&v39, (__int64)SourceString, (__int64)&v38, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_24;
      if ( v39 != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 16;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        SourceString[38] = 0;
        DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, SourceString);
        if ( DeviceRegProp >= 0 )
        {
          DeviceRegProp = RtlGUIDFromString(&DestinationString, &Guid);
          if ( DeviceRegProp >= 0 )
          {
            *v9 = Guid;
            return (unsigned int)DeviceRegProp;
          }
        }
        goto LABEL_24;
      }
      return (unsigned int)-1073741789;
    case 0x19u:
      return (unsigned int)-1073741637;
  }
  v18 = v43;
  v19 = v40;
  v20 = v41;
  *a8 = v11;
  v21 = CmGetDeviceRegProp(v20, v19, v18, v17, (__int64)&v39, (__int64)v9, (__int64)a8, a9);
  v22 = 0;
  DeviceRegProp = v21;
  if ( v21 && v21 != -1073741789 )
    goto LABEL_23;
  if ( v39 != *((_DWORD *)v16 + 4) )
    return (unsigned int)-1073741811;
  v26 = *((_DWORD *)v16 + 2);
  *a5 = v26;
  if ( v26 == 18 )
  {
    v38 = *a8;
    if ( DeviceRegProp )
    {
      if ( DeviceRegProp != -1073741789 )
        goto LABEL_23;
      Pool2 = (GUID *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v32 = v17;
      v28 = v40;
      v27 = v41;
      v33 = CmGetDeviceRegProp(v41, v40, v43, v32, (__int64)&v44, (__int64)Pool2, (__int64)&v38, a9);
      if ( v33 < 0 )
      {
        DeviceRegProp = v33;
        ExFreePoolWithTag(Pool2, 0);
LABEL_25:
        if ( DeviceRegProp == -1073741810 )
        {
          DeviceRegProp = CmOpenDeviceRegKey(v27, v28, 16, 0, 1, 0, (__int64)&Handle, 0LL);
          if ( !DeviceRegProp )
          {
            ZwClose(Handle);
            return (unsigned int)-1073741275;
          }
          if ( DeviceRegProp != -1073741810 && DeviceRegProp != -1073741632 )
            return (unsigned int)-1073741823;
        }
        return (unsigned int)DeviceRegProp;
      }
      if ( v38 < 2 )
        goto LABEL_54;
      v34 = Pool2;
    }
    else
    {
      if ( v11 < 2 )
        goto LABEL_33;
      Pool2 = 0LL;
      v34 = v9;
      if ( !v9 )
        goto LABEL_33;
    }
    v35 = PnpParseIndirectInfString(v34);
    v22 = 0;
    if ( v35 || (v37 = PnpParseIndirectResourceString(v36), v22 = 0, v37) )
      *a5 = 25;
    if ( !Pool2 )
      goto LABEL_22;
LABEL_54:
    ExFreePoolWithTag(Pool2, 0);
    v22 = 0;
  }
LABEL_22:
  if ( DeviceRegProp )
  {
LABEL_23:
    v27 = v41;
LABEL_24:
    v28 = v40;
    goto LABEL_25;
  }
LABEL_33:
  if ( *a5 == 8210 )
  {
    Len = PnpMultiSzGetLen(v9);
    if ( 2 * (unsigned __int64)Len > *a8 )
    {
      DeviceRegProp = -1073741595;
      *a8 = v22;
      return (unsigned int)DeviceRegProp;
    }
    *a8 = 2 * Len;
  }
  if ( *a5 == 18 && *a8 == v22 )
  {
    *a8 = v22;
    *a5 = v22;
    return (unsigned int)-1073741275;
  }
  return (unsigned int)DeviceRegProp;
}
