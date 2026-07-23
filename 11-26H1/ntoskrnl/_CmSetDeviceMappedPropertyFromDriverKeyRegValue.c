/*
 * XREFs of _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AADD7C
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x140AAD7DC (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140412290 (RtlUnalignedStringCchLengthW.c)
 *     RtlTimeToTimeFields @ 0x140449E50 (RtlTimeToTimeFields.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegSetValue @ 0x1409AD0CC (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall CmSetDeviceMappedPropertyFromDriverKeyRegValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        PLARGE_INTEGER Time,
        ULONG a6)
{
  int v6; // r11d
  DEVPROPKEY **v8; // r10
  unsigned int i; // edx
  DEVPROPKEY *v12; // r8
  DEVPROPKEY **v13; // rdi
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-60h]
  __int64 v22; // [rsp+28h] [rbp-58h]
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  size_t pcchLength; // [rsp+48h] [rbp-38h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+50h] [rbp-30h] BYREF
  wchar_t pszDest[12]; // [rsp+60h] [rbp-20h] BYREF

  v6 = *(_DWORD *)(a3 + 16);
  Handle = 0LL;
  TimeFields = 0LL;
  v8 = &off_140BE31E0;
  pcchLength = 0LL;
  for ( i = 0; i < 0xD; ++i )
  {
    v12 = *v8;
    v13 = &off_140BE31E0 + 4 * i;
    if ( v6 == (*v8)->pid )
    {
      v18 = *(_QWORD *)a3 - *(_QWORD *)&v12->fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&v12->fmtid.Data1 )
        v18 = *(_QWORD *)(a3 + 8) - *(_QWORD *)v12->fmtid.Data4;
      if ( !v18 )
        break;
    }
    v13 = 0LL;
    v8 += 4;
  }
  if ( !v13 )
    return (unsigned int)-1073741802;
  v14 = *((_DWORD *)v13 + 2);
  if ( a4 != v14 )
  {
    if ( a4 == 25 )
    {
      if ( v14 == 18 )
        goto LABEL_6;
    }
    else if ( a4 < 2 )
    {
      goto LABEL_6;
    }
    return (unsigned int)-1073741811;
  }
LABEL_6:
  v15 = CmOpenDeviceRegKey(a1, a2, 18, 0, 2, 1, (__int64)&Handle, 0LL);
  if ( v15 >= 0 )
  {
    v16 = PnpCtxRegSetValue(a6, Handle, (__int64)v13[2], *((unsigned int *)v13 + 6), (__int64)Time, a6);
    if ( v16 == -1073741444 )
    {
      v15 = -1073741772;
    }
    else if ( v16 < 0 )
    {
      v15 = v16;
    }
    else if ( *(_DWORD *)(a3 + 16) == 2 )
    {
      v19 = *(_QWORD *)a3 - *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1 )
        v19 = *(_QWORD *)(a3 + 8) - *(_QWORD *)DEVPKEY_Device_DriverDate.fmtid.Data4;
      if ( !v19 )
      {
        RtlTimeToTimeFields(Time, &TimeFields);
        LODWORD(v22) = TimeFields.Year;
        LODWORD(v21) = TimeFields.Day;
        if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%d-%d-%d", (unsigned int)TimeFields.Month, v21, v22) >= 0
          && RtlUnalignedStringCchLengthW(pszDest, 0xBuLL, &pcchLength) >= 0 )
        {
          PnpCtxRegSetValue(v20, Handle, (__int64)L"DriverDate", 1LL, (__int64)pszDest, 2 * (pcchLength + 1));
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v15;
}
