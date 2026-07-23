/*
 * XREFs of PipOpenServiceEnumKeys @ 0x140A114F8
 * Callers:
 *     PipGetDriverKsrGuid @ 0x14079FF30 (PipGetDriverKsrGuid.c)
 *     IopGetOriginalServiceName @ 0x1407A19B4 (IopGetOriginalServiceName.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407A6AB8 (PipApplyFunctionToServiceInstances.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1407A6CC8 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407ACBF0 (PiDevCfgMakeServiceBootStart.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140970EC4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiGetServiceNameInfo @ 0x140A10FA4 (PiGetServiceNameInfo.c)
 *     IoOpenDriverRegistryKey @ 0x140A110B0 (IoOpenDriverRegistryKey.c)
 *     PipHardwareConfigActivateService @ 0x140A3F950 (PipHardwareConfigActivateService.c)
 *     PiProcessDriverInstance @ 0x140AD2500 (PiProcessDriverInstance.c)
 *     PiDevCfgVerifyService @ 0x140AEA7D8 (PiDevCfgVerifyService.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140B267A0 (PipDmgGetDriverDmarCompatLevel.c)
 *     PnpDriverLoadingFailed @ 0x140B4858C (PnpDriverLoadingFailed.c)
 *     PpDevCfgInit @ 0x140CCC50C (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140958180 (_PnpCtxGetCachedNodeBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x140AFB79C (IopCreateRegistryKeyEx.c)
 */

int __fastcall PipOpenServiceEnumKeys(UNICODE_STRING *a1, ACCESS_MASK a2, HANDLE *a3, HANDLE *a4, char a5)
{
  __int64 v6; // rcx
  _QWORD *v10; // rdx
  int result; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // ebx
  _QWORD **v14; // rbx
  _QWORD **v15; // rax
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  void *v17; // [rsp+40h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-11h] BYREF
  __int128 v19; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF

  Handle = 0LL;
  v6 = *(_QWORD *)&PiPnpRtlCtx;
  v17 = 0LL;
  v19 = 0LL;
  v10 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 144LL);
  if ( !v10 )
  {
    v10 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 88LL);
    *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 144LL) = v10;
  }
  result = PnpCtxGetCachedNodeBaseKey(v6, v10, 6, &v17);
  if ( result >= 0 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = v17;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.ObjectName = a1;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        v15 = (_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 8LL);
        if ( v14 )
          v15 = v14;
        v14 = (_QWORD **)*v15;
        if ( *v15 == (_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 8LL) || !v14 )
          return -1073741772;
        result = PnpCtxGetCachedNodeBaseKey(*(__int64 *)&PiPnpRtlCtx, *v15, 6, &v17);
        if ( result < 0 )
        {
          if ( result != -2147483622 )
            return result;
          return -1073741772;
        }
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        KeyHandle = 0LL;
        ObjectAttributes.RootDirectory = v17;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.ObjectName = a1;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
        if ( result != -1073741772 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      if ( result >= 0 )
      {
        if ( a4 || a5 )
        {
          LODWORD(v19) = 655368;
          *((_QWORD *)&v19 + 1) = L"Enum";
          if ( a5 )
          {
            v12 = IopCreateRegistryKeyEx(&Handle, KeyHandle, &v19, a2, 1, 0LL);
          }
          else
          {
            ObjectAttributes.RootDirectory = KeyHandle;
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
            *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v12 = ZwOpenKey(&Handle, a2, &ObjectAttributes);
          }
          v13 = v12;
          if ( v12 < 0 )
          {
            ZwClose(KeyHandle);
            return v13;
          }
          if ( a4 )
            *a4 = Handle;
          else
            ZwClose(Handle);
        }
        if ( a3 )
          *a3 = KeyHandle;
        else
          ZwClose(KeyHandle);
        return 0;
      }
    }
  }
  return result;
}
