/*
 * XREFs of PiDevCfgEnumDeviceKeys @ 0x140A42F04
 * Callers:
 *     PiDevCfgResetDeviceKeys @ 0x1407AE030 (PiDevCfgResetDeviceKeys.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140A4321C (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmIsStateSeparationEnabled @ 0x1404CEFB4 (CmIsStateSeparationEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpCtxOpenContextNodeBaseKey @ 0x14089C288 (_PnpCtxOpenContextNodeBaseKey.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140A42A2C (_PnpCtxOpenContextBaseKey.c)
 */

__int64 __fastcall PiDevCfgEnumDeviceKeys(__int64 a1, __int64 a2, void *a3, int a4, char a5, __int64 a6, __int64 a7)
{
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  __int64 v11; // rdi
  wchar_t **v12; // rsi
  int DeviceRegProp; // eax
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  const WCHAR *v19; // rdx
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-E0h]
  int v23; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE v28; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  void *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  _BYTE v35[76]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v36; // [rsp+10Ch] [rbp+Ch]

  v34 = a6;
  v32 = a7;
  v9 = 0;
  v31 = a3;
  v10 = 0;
  v33 = a1;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  v28 = 0LL;
  v26 = 0;
  v27 = 0;
  while ( v10 < 7 )
  {
    v11 = 4LL * v10;
    v12 = &(&off_140BE24F0)[v11];
    if ( (a4 & *(_DWORD *)(&off_140BE24F0 + v11 + 1)) == 0 )
      goto LABEL_14;
    RtlInitUnicodeString(&DestinationString, *v12);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = v31;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( DeviceRegProp == -1073741772 )
      goto LABEL_14;
    if ( DeviceRegProp < 0 )
      goto LABEL_22;
    v14 = (int)(&off_140BE24F0)[v11 + 1];
    if ( v14 )
    {
      DeviceRegProp = CmOpenDeviceRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        *(_QWORD *)(a2 + 8),
                        v14,
                        0,
                        983103,
                        a5,
                        (__int64)&Handle,
                        0LL);
      goto LABEL_8;
    }
    if ( !CmIsStateSeparationEnabled() )
      goto LABEL_16;
    if ( (_DWORD)v16 == 4 )
    {
      LODWORD(v16) = 4;
LABEL_16:
      DeviceRegProp = PnpCtxOpenContextBaseKey(v17, v16, v18, 0xF003Fu, (__int64)&Handle);
      goto LABEL_17;
    }
    if ( (_DWORD)v16 == 6 )
      goto LABEL_28;
    DeviceRegProp = PnpCtxOpenContextNodeBaseKey(v17, v16, v18, v16, v22, v23, (__int64)&Handle);
LABEL_17:
    if ( DeviceRegProp < 0 )
      goto LABEL_8;
    if ( *((_DWORD *)v12 + 3) == 7 )
    {
      v21 = *(_QWORD *)(a2 + 8);
      v26 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v21,
                        0LL,
                        9u,
                        (__int64)&v27,
                        (__int64)v35,
                        (__int64)&v26,
                        0);
      if ( DeviceRegProp >= 0 )
      {
        if ( v27 != 1 )
        {
LABEL_28:
          ZwClose(KeyHandle);
          KeyHandle = 0LL;
          goto LABEL_14;
        }
        v36 = 0;
        v19 = (const WCHAR *)v35;
LABEL_20:
        RtlInitUnicodeString(&DestinationString, v19);
        ObjectAttributes.RootDirectory = Handle;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        v28 = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        DeviceRegProp = ZwOpenKey(&v28, 0xF003Fu, &ObjectAttributes);
        if ( DeviceRegProp >= 0 )
        {
          ZwClose(Handle);
          v15 = (int)v28;
          Handle = v28;
          goto LABEL_11;
        }
      }
LABEL_8:
      if ( DeviceRegProp == -1073741772 )
        goto LABEL_28;
      if ( DeviceRegProp < 0 )
        goto LABEL_22;
      goto LABEL_10;
    }
    v19 = *(&off_140BE24F0 + v11 + 3);
    if ( v19 )
      goto LABEL_20;
LABEL_10:
    v15 = (int)Handle;
LABEL_11:
    v23 = v15;
    v22 = (int)KeyHandle;
    DeviceRegProp = guard_dispatch_icall_no_overrides(v33, a2);
    if ( DeviceRegProp == -1073741248 )
      break;
    if ( DeviceRegProp < 0 )
    {
LABEL_22:
      v9 = DeviceRegProp;
      break;
    }
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
    ZwClose(Handle);
    Handle = 0LL;
LABEL_14:
    ++v10;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return v9;
}
