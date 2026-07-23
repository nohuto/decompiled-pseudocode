/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x1409551B0
 * Callers:
 *     _CmGetDeviceCompoundFilters @ 0x140953508 (_CmGetDeviceCompoundFilters.c)
 *     _PnpDispatchDevice @ 0x140956100 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x140AE0A94 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140B24BE8 (_CmGetDeviceCompoundFiltersWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpMultiSzGetLen @ 0x1409536BC (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     _PnpParseIndirectInfString @ 0x140973CE0 (_PnpParseIndirectInfString.c)
 *     _PnpParseIndirectResourceString @ 0x140973DB8 (_PnpParseIndirectResourceString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _WORD *a6,
        unsigned int a7,
        unsigned int *a8,
        int a9)
{
  _WORD *v9; // r14
  unsigned int v11; // r15d
  int v12; // r11d
  DEVPROPKEY **v13; // r8
  unsigned int v14; // edx
  DEVPROPKEY *v15; // r9
  DEVPROPKEY **v16; // rsi
  NTSTATUS DeviceRegProp; // ebx
  __int64 v19; // rcx
  int v20; // edi
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  int v26; // r15d
  NTSTATUS v27; // eax
  void *Pool2; // rsi
  _WORD *v29; // rdi
  unsigned int Len; // r9d
  int v31; // r9d
  int v32; // r9d
  int v33; // eax
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B8h]
  __int64 v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle[3]; // [rsp+78h] [rbp-90h] BYREF
  GUID Guid; // [rsp+90h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+A8h] [rbp-60h] BYREF

  v9 = a6;
  v35 = a1;
  v38 = a3;
  v36 = a2;
  LODWORD(v39) = 0;
  v34 = 0LL;
  LODWORD(v37) = 0;
  memset(Handle, 0, sizeof(Handle));
  Guid = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v11 = a7;
    if ( !a7 )
      v9 = 0LL;
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_DWORD *)(a4 + 16);
  v13 = &CmDeviceRegPropMap;
  v14 = 0;
  while ( 1 )
  {
    v15 = *v13;
    v16 = &CmDeviceRegPropMap + 3 * v14;
    if ( v12 == (*v13)->pid )
    {
      v19 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v19 )
        break;
    }
    ++v14;
    v13 += 3;
    if ( v14 >= 0x21 )
      return (unsigned int)-1073741802;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  v20 = *((_DWORD *)v16 + 3);
  switch ( v20 )
  {
    case 37:
      goto LABEL_45;
    case 27:
      v25 = v35;
      LODWORD(v34) = 4;
      DeviceRegProp = CmGetDeviceRegProp(v35, v36, v38, 27, (__int64)&v34 + 4, (__int64)&v37, (__int64)&v34, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_25;
      if ( HIDWORD(v34) != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 1;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        *(_BYTE *)v9 = -((_DWORD)v37 != 0);
        return (unsigned int)DeviceRegProp;
      }
      return (unsigned int)-1073741789;
    case 25:
      return (unsigned int)-1073741637;
    case 9:
LABEL_45:
      v31 = *((_DWORD *)v16 + 3);
      v25 = v35;
      LODWORD(v34) = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        v35,
                        v36,
                        v38,
                        v31,
                        (__int64)&v34 + 4,
                        (__int64)SourceString,
                        (__int64)&v34,
                        a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_25;
      if ( HIDWORD(v34) != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 16;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        SourceString[38] = 0;
        DeviceRegProp = RtlInitUnicodeStringEx((PUNICODE_STRING)&Handle[1], SourceString);
        if ( DeviceRegProp >= 0 )
        {
          DeviceRegProp = RtlGUIDFromString((PCUNICODE_STRING)&Handle[1], &Guid);
          if ( DeviceRegProp >= 0 )
          {
            *(GUID *)v9 = Guid;
            return (unsigned int)DeviceRegProp;
          }
        }
        goto LABEL_25;
      }
      return (unsigned int)-1073741789;
  }
  v21 = v38;
  v22 = v36;
  v23 = v35;
  *a8 = v11;
  DeviceRegProp = CmGetDeviceRegProp(v23, v22, v21, v20, (__int64)&v34 + 4, (__int64)v9, (__int64)a8, a9);
  if ( DeviceRegProp && DeviceRegProp != -1073741789 )
    goto LABEL_24;
  if ( HIDWORD(v34) != *((_DWORD *)v16 + 4) )
    return (unsigned int)-1073741811;
  v24 = *((_DWORD *)v16 + 2);
  *a5 = v24;
  if ( v24 != 18 )
    goto LABEL_23;
  LODWORD(v34) = *a8;
  if ( DeviceRegProp )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v32 = v20;
    v26 = v36;
    v25 = v35;
    v33 = CmGetDeviceRegProp(v35, v36, v38, v32, (__int64)&v39, (__int64)Pool2, (__int64)&v34, a9);
    if ( v33 < 0 )
    {
      DeviceRegProp = v33;
      ExFreePoolWithTag(Pool2, 0);
LABEL_26:
      if ( DeviceRegProp == -1073741810 )
      {
        v27 = CmOpenDeviceRegKey(v25, v26, 16, 0, 1, 0, (__int64)Handle, 0LL);
        DeviceRegProp = v27;
        if ( v27 )
        {
          if ( v27 != -1073741810 && v27 != -1073741632 )
            return (unsigned int)-1073741823;
        }
        else
        {
          ZwClose(Handle[0]);
          return (unsigned int)-1073741275;
        }
      }
      return (unsigned int)DeviceRegProp;
    }
    if ( (unsigned int)v34 < 2 )
      goto LABEL_37;
    v29 = Pool2;
  }
  else
  {
    if ( v11 < 2 )
      goto LABEL_38;
    Pool2 = 0LL;
    v29 = v9;
    if ( !v9 )
      goto LABEL_38;
  }
  if ( (unsigned __int8)PnpParseIndirectInfString(v29) || (unsigned __int8)PnpParseIndirectResourceString(v29) )
    *a5 = 25;
  if ( Pool2 )
LABEL_37:
    ExFreePoolWithTag(Pool2, 0);
LABEL_23:
  if ( DeviceRegProp )
  {
LABEL_24:
    v25 = v35;
LABEL_25:
    v26 = v36;
    goto LABEL_26;
  }
LABEL_38:
  if ( *a5 == 8210 )
  {
    Len = PnpMultiSzGetLen(v9);
    if ( 2 * (unsigned __int64)Len > *a8 )
    {
      DeviceRegProp = -1073741595;
      *a8 = 0;
      return (unsigned int)DeviceRegProp;
    }
    *a8 = 2 * Len;
  }
  if ( *a5 == 18 && !*a8 )
  {
    DeviceRegProp = -1073741275;
    *a8 = 0;
    *a5 = 0;
  }
  return (unsigned int)DeviceRegProp;
}
