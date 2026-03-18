/*
 * XREFs of _CmDeleteDeviceRegKeyWorker @ 0x140A2A8BC
 * Callers:
 *     _CmDeleteDeviceRegKey @ 0x140A8A734 (_CmDeleteDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     wcsrchr @ 0x140538350 (wcsrchr.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _CmSetDeviceRegProp @ 0x14090A0E8 (_CmSetDeviceRegProp.c)
 *     _CmGetDeviceRegKeyPath @ 0x140994330 (_CmGetDeviceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140996AB8 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmOpenDeviceRegKey @ 0x140996B50 (_CmOpenDeviceRegKey.c)
 *     RtlPrefixUnicodeString @ 0x140A29BF0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140A2AEB0 (_PnpCtxRegOpenCurrentUserKey.c)
 *     _PnpCtxRegDeleteKey @ 0x140A2D8BC (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140A2D8F8 (_PnpCtxRegDeleteTree.c)
 *     _CmDeleteDeviceRegKey @ 0x140A8A734 (_CmDeleteDeviceRegKey.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x140B3E404 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceRegKeyWorker(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  unsigned __int16 *v8; // rbx
  wchar_t *Pool2; // rsi
  int v10; // r12d
  unsigned __int64 v11; // rdi
  NTSTATUS DeviceRegKeyPath; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int inited; // ebx
  unsigned __int16 Length; // bx
  const wchar_t *v17; // rdi
  HANDLE v18; // r12
  unsigned int v20; // r13d
  int v21; // eax
  UNICODE_STRING *p_DestinationString; // rax
  unsigned int v23; // r13d
  int v24; // eax
  wchar_t *v25; // rax
  wchar_t *v26; // r14
  size_t v27; // [rsp+30h] [rbp-40h]
  UNICODE_STRING *v28; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v29; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v33; // [rsp+C0h] [rbp+50h] BYREF

  v33 = 0;
  v28 = 0LL;
  v8 = (unsigned __int16 *)a2;
  v29 = 0LL;
  Pool2 = 0LL;
  Handle = 0LL;
  v10 = 4;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    goto LABEL_26;
  LODWORD(v11) = (a3 & 0x200) != 0 ? 360 : 240;
  while ( 1 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_18;
    }
    LODWORD(v27) = (unsigned int)v11 >> 1;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath(a1, v8, a3, a4, 0, Pool2, v27, &v33);
    inited = DeviceRegKeyPath;
    if ( DeviceRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v11 = 2LL * v33;
    if ( v11 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_18;
    }
    v8 = (unsigned __int16 *)a2;
  }
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_18;
  if ( (a3 & 0x100) != 0 )
  {
    v17 = Pool2;
    inited = PnpCtxRegOpenCurrentUserKey(a1, v13, v14, &v29);
    if ( inited < 0 )
      goto LABEL_18;
    v18 = v29;
    goto LABEL_17;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
  if ( inited < 0 )
    goto LABEL_18;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v11
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(&`_CmDeleteDeviceRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
  {
LABEL_26:
    inited = -1073741811;
    goto LABEL_18;
  }
  v17 = Pool2 + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = Pool2 + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(&`_CmDeleteDeviceRegKeyWorker'::`2'::EnumKeyPrefix, &DestinationString, 1u) )
  {
    v10 = 5;
    v17 = Pool2 + 30;
  }
  else if ( RtlPrefixUnicodeString(
              &`_CmDeleteDeviceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
              &DestinationString,
              1u) )
  {
    v10 = 14;
    v17 = Pool2 + 43;
  }
  inited = PnpCtxGetCachedContextBaseKey(a1, v10, (__int64)&v28);
  if ( inited < 0 )
    goto LABEL_18;
  v18 = v28;
LABEL_17:
  inited = CmOpenDeviceRegKey(a1, a2, 16, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( inited < 0 )
    goto LABEL_18;
  v20 = (unsigned __int8)a3;
  v33 = (unsigned __int8)a3;
  if ( (unsigned __int8)a3 == 18 && (a3 & 0xF00) == 0 )
  {
    *(_DWORD *)&DestinationString.Length = 786;
    p_DestinationString = &DestinationString;
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = 530;
    v23 = 0;
    LODWORD(DestinationString.Buffer) = 274;
    while ( 1 )
    {
      v28 = p_DestinationString;
      if ( v23 >= 3 )
        break;
      v24 = CmDeleteDeviceRegKey(a1, a2, *(unsigned int *)&p_DestinationString->Length);
      if ( v24 && v24 != -1073741772 && v24 != -1073741811 && v24 != -1073741637 )
      {
        inited = v24;
        if ( v24 < 0 )
          goto LABEL_18;
        break;
      }
      ++v23;
      p_DestinationString = (UNICODE_STRING *)(&v28->MaximumLength + 1);
    }
    CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues(a1, a2);
    v21 = CmSetDeviceRegProp(a1, a2, 0LL, 0xAu, 1, 0LL, 0, 0);
    if ( !v21 || v21 == -1073741275 || v21 == -1073741810 )
    {
      v20 = v33;
      goto LABEL_29;
    }
    goto LABEL_65;
  }
LABEL_29:
  if ( a5 )
    v21 = PnpCtxRegDeleteTree(a1, v18, v17);
  else
    v21 = PnpCtxRegDeleteKey(a1, v18, v17);
  if ( v21 != -1073741444 )
  {
    if ( v21 < 0 )
    {
LABEL_65:
      inited = v21;
      goto LABEL_18;
    }
    if ( v20 != 18 && (v20 != 17 || (a3 & 0xF00) != 0) )
    {
      v25 = wcsrchr(v17, 0x5Cu);
      if ( v25 && (*v25 = 0, (v26 = wcsrchr(v17, 0x5Cu)) != 0LL) )
      {
        v21 = PnpCtxRegDeleteKey(a1, v18, v17);
        if ( v21 != -1073741535 )
        {
          if ( v21 < 0 )
            goto LABEL_65;
          *v26 = 0;
          v21 = PnpCtxRegDeleteKey(a1, v18, v17);
          if ( (int)(v21 + 0x80000000) >= 0 && v21 != -1073741535 )
            goto LABEL_65;
        }
      }
      else
      {
        inited = -1073741595;
      }
    }
  }
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  if ( v29 )
    ZwClose(v29);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
