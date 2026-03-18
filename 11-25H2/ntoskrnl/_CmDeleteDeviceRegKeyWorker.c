/*
 * XREFs of _CmDeleteDeviceRegKeyWorker @ 0x140A7798C
 * Callers:
 *     _CmDeleteDeviceRegKey @ 0x1409A0558 (_CmDeleteDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     wcsrchr @ 0x1404FDA00 (wcsrchr.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _PnpCtxRegDeleteKey @ 0x1406ED0DC (_PnpCtxRegDeleteKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x14083D4A0 (_CmGetDeviceRegKeyPath.c)
 *     RtlPrefixUnicodeString @ 0x140871070 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegDeleteTree @ 0x14088F19C (_PnpCtxRegDeleteTree.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C9F0C (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmSetDeviceRegProp @ 0x140950F0C (_CmSetDeviceRegProp.c)
 *     _CmDeleteDeviceRegKey @ 0x1409A0558 (_CmDeleteDeviceRegKey.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x140A94308 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140A996EC (_PnpCtxRegOpenCurrentUserKey.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceRegKeyWorker(__int64 a1, unsigned __int16 *a2, int a3, int a4, __int64 a5)
{
  unsigned __int16 *v8; // rbx
  int v9; // r12d
  wchar_t *Pool2; // rsi
  unsigned __int64 v11; // rdi
  int inited; // ebx
  unsigned __int16 Length; // bx
  const wchar_t *v15; // rdi
  HANDLE v16; // r12
  unsigned int v17; // r13d
  int *p_DestinationString; // rax
  unsigned int v19; // r13d
  NTSTATUS DeviceRegKeyPath; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  int v24; // eax
  wchar_t *v25; // rax
  wchar_t *v26; // r14
  size_t v27; // [rsp+30h] [rbp-50h]
  unsigned int v28; // [rsp+40h] [rbp-40h] BYREF
  int *v29; // [rsp+48h] [rbp-38h] BYREF
  int v30[2]; // [rsp+50h] [rbp-30h]
  HANDLE v31; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)v30 = a2;
  v28 = 0;
  v29 = 0LL;
  v31 = 0LL;
  v8 = a2;
  Handle = 0LL;
  v9 = 4;
  Pool2 = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    goto LABEL_31;
  LODWORD(v11) = (a3 & 0x200) != 0 ? 360 : 240;
  while ( 1 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_6;
    }
    LODWORD(v27) = (unsigned int)v11 >> 1;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath(a1, v8, a3, a4, 0, Pool2, v27, &v28);
    inited = DeviceRegKeyPath;
    if ( DeviceRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v11 = 2LL * v28;
    if ( v11 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_6;
    }
    v8 = *(unsigned __int16 **)v30;
  }
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_6;
  if ( (a3 & 0x100) != 0 )
  {
    v15 = Pool2;
    inited = PnpCtxRegOpenCurrentUserKey(a1, v21, v22, &v31);
    if ( inited < 0 )
      goto LABEL_6;
    v16 = v31;
    goto LABEL_24;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
  if ( inited < 0 )
    goto LABEL_6;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v11
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_31:
    inited = -1073741811;
    goto LABEL_6;
  }
  v15 = Pool2 + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = Pool2 + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(&`_CmDeleteDeviceRegKeyWorker'::`2'::EnumKeyPrefix, &DestinationString, 1u) )
  {
    v9 = 5;
    v15 = Pool2 + 30;
  }
  else if ( RtlPrefixUnicodeString(
              &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
              &DestinationString,
              1u) )
  {
    v9 = 14;
    v15 = Pool2 + 43;
  }
  inited = PnpCtxGetCachedContextBaseKey(a1, v9, &v29);
  if ( inited < 0 )
    goto LABEL_6;
  v16 = v29;
LABEL_24:
  inited = CmOpenDeviceRegKey(a1, *(const WCHAR **)v30, 16, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( inited < 0 )
    goto LABEL_6;
  v17 = (unsigned __int8)a3;
  v28 = (unsigned __int8)a3;
  if ( (unsigned __int8)a3 == 18 && (a3 & 0xF00) == 0 )
  {
    *(_DWORD *)&DestinationString.Length = 786;
    p_DestinationString = (int *)&DestinationString;
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = 530;
    v19 = 0;
    LODWORD(DestinationString.Buffer) = 274;
    while ( 1 )
    {
      v29 = p_DestinationString;
      if ( v19 >= 3 )
        break;
      v23 = CmDeleteDeviceRegKey(a1, *(__int64 *)v30, *p_DestinationString, 0);
      if ( v23 && v23 != -1073741772 && v23 != -1073741811 && v23 != -1073741637 )
      {
        inited = v23;
        if ( v23 < 0 )
          goto LABEL_6;
        break;
      }
      ++v19;
      p_DestinationString = v29 + 1;
    }
    CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues(a1, v30[0]);
    v24 = CmSetDeviceRegProp(a1, *(__int64 *)v30, 0LL, 0xAu, 1, 0LL, 0, 0);
    if ( v24 && v24 != -1073741275 && v24 != -1073741810 )
      goto LABEL_45;
    v17 = v28;
  }
  if ( (_BYTE)a5 )
    v24 = PnpCtxRegDeleteTree(a1, (__int64)v16, (__int64)v15);
  else
    v24 = PnpCtxRegDeleteKey(a1, (__int64)v16, (__int64)v15);
  if ( v24 != -1073741444 )
  {
    if ( v24 < 0 )
    {
LABEL_45:
      inited = v24;
      goto LABEL_6;
    }
    if ( v17 != 18 && (v17 != 17 || (a3 & 0xF00) != 0) )
    {
      v25 = wcsrchr(v15, 0x5Cu);
      if ( v25 && (*v25 = 0, (v26 = wcsrchr(v15, 0x5Cu)) != 0LL) )
      {
        v24 = PnpCtxRegDeleteKey(a1, (__int64)v16, (__int64)v15);
        if ( v24 != -1073741535 )
        {
          if ( v24 < 0 )
            goto LABEL_45;
          *v26 = 0;
          v24 = PnpCtxRegDeleteKey(a1, (__int64)v16, (__int64)v15);
          if ( (int)(v24 + 0x80000000) >= 0 && v24 != -1073741535 )
            goto LABEL_45;
        }
      }
      else
      {
        inited = -1073741595;
      }
    }
  }
LABEL_6:
  if ( Handle )
    ZwClose(Handle);
  if ( v31 )
    ZwClose(v31);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
