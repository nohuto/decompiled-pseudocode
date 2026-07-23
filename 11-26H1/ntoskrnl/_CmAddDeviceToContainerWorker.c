/*
 * XREFs of _CmAddDeviceToContainerWorker @ 0x140AE6180
 * Callers:
 *     _CmAddDeviceToContainer @ 0x140AE600C (_CmAddDeviceToContainer.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     _RegRtlCreateKeyTransacted @ 0x140979034 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlIsPredefinedKey @ 0x140979188 (_RegRtlIsPredefinedKey.c)
 *     _RegRtlSetValue @ 0x1409AD100 (_RegRtlSetValue.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1409AF85C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpCtxRegDeleteKey @ 0x140A3F2C8 (_PnpCtxRegDeleteKey.c)
 *     _CmCreateDeviceContainer @ 0x140AE65A8 (_CmCreateDeviceContainer.c)
 *     _RegRtlOpenPredefinedKey @ 0x140AE6AB8 (_RegRtlOpenPredefinedKey.c)
 *     _CmDeleteDeviceContainer @ 0x140B1FCDC (_CmDeleteDeviceContainer.c)
 */

__int64 __fastcall CmAddDeviceToContainerWorker(__int64 a1, __int64 a2, const WCHAR *a3, const WCHAR *a4, HANDLE a5)
{
  _BYTE *v5; // r12
  int DeviceContainer; // eax
  HANDLE v10; // r14
  int inited; // ebx
  __int64 v13; // rax
  HANDLE v14; // rsi
  __int64 v15; // rcx
  HANDLE v16; // rcx
  __int64 v17; // rax
  NTSTATUS Value; // eax
  HANDLE v19; // rcx
  __int64 v20; // rcx
  HANDLE v21; // rcx
  __int64 v22; // rcx
  _BYTE v23[4]; // [rsp+58h] [rbp-41h] BYREF
  ULONG v24; // [rsp+5Ch] [rbp-3Dh] BYREF
  ULONG Disposition; // [rsp+60h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-31h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-29h] BYREF
  HANDLE v28[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v29; // [rsp+88h] [rbp-11h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-9h] BYREF

  v5 = a5;
  v28[0] = 0LL;
  KeyHandle = 0LL;
  *(_BYTE *)a5 = 0;
  Handle = 0LL;
  v23[0] = 0;
  Disposition = 0;
  v24 = 0;
  DeviceContainer = CmCreateDeviceContainer(a1, a2, (_DWORD)a3, (unsigned int)v28, (__int64)v23);
  v10 = v28[0];
  inited = DeviceContainer;
  if ( DeviceContainer < 0 )
    goto LABEL_2;
  if ( a1 && (v13 = *(_QWORD *)(a1 + 224)) != 0 )
  {
    inited = RegRtlCreateKeyTransacted(
               v28[0],
               L"BaseContainers",
               0,
               4u,
               0LL,
               0,
               &KeyHandle,
               &Disposition,
               *(PUNICODE_STRING *)(v13 + 8));
  }
  else
  {
    a5 = 0LL;
    v19 = v28[0];
    memset(&ObjectAttributes, 0, 44);
    *(_OWORD *)v28 = 0LL;
    if ( !RegRtlIsPredefinedKey((__int64)v19) || (inited = RegRtlOpenPredefinedKey(v20, &a5), inited >= 0) )
    {
      inited = RtlInitUnicodeStringEx((PUNICODE_STRING)v28, L"BaseContainers");
      if ( inited >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 704;
        v21 = v10;
        if ( a5 )
          v21 = a5;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v28;
        ObjectAttributes.RootDirectory = v21;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      }
    }
    if ( a5 )
      ZwClose(a5);
  }
  if ( inited < 0 )
    goto LABEL_2;
  v14 = KeyHandle;
  if ( a1 && (v15 = *(_QWORD *)(a1 + 224)) != 0 )
  {
    inited = RegRtlCreateKeyTransacted(KeyHandle, a3, 0, 3u, 0LL, 0, &Handle, &v24, *(PUNICODE_STRING *)(v15 + 8));
  }
  else
  {
    a5 = 0LL;
    memset(&ObjectAttributes, 0, 44);
    *(_OWORD *)v28 = 0LL;
    if ( !RegRtlIsPredefinedKey((__int64)KeyHandle) || (inited = RegRtlOpenPredefinedKey(v22, &a5), inited >= 0) )
    {
      inited = RtlInitUnicodeStringEx((PUNICODE_STRING)v28, a3);
      if ( inited >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 704;
        if ( a5 )
          v14 = a5;
        ObjectAttributes.RootDirectory = v14;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v28;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = ZwCreateKey(&Handle, 3u, &ObjectAttributes, 0, 0LL, 0, &v24);
      }
    }
    v16 = a5;
    if ( a5 )
      ZwClose(a5);
  }
  if ( inited < 0 )
    goto LABEL_2;
  if ( v24 == 2 )
  {
    LODWORD(a5) = 0;
    Value = PnpCtxRegQueryValue((__int64)v16, Handle, a4, 0LL, 0LL, (unsigned int *)&a5);
    inited = Value;
    if ( Value == -1073741772 || Value == -1073741444 )
    {
      inited = 0;
    }
    else
    {
      if ( !Value )
      {
        *v5 = 1;
        goto LABEL_4;
      }
      if ( Value < 0 )
        goto LABEL_3;
    }
  }
  if ( *v5 )
  {
LABEL_3:
    if ( inited >= 0 )
      goto LABEL_4;
    goto LABEL_50;
  }
  inited = RegRtlSetValue(Handle, a4, 0, 0LL, 0);
  if ( inited < 0 )
  {
LABEL_2:
    if ( inited == -1073741444 )
    {
      inited = -1073741772;
LABEL_50:
      if ( v24 == 1 )
        PnpCtxRegDeleteKey(a1, (__int64)Handle, 0LL);
      if ( Disposition == 1 )
        PnpCtxRegDeleteKey(a1, (__int64)KeyHandle, 0LL);
      if ( v23[0] == 1 )
        CmDeleteDeviceContainer(a1, a2);
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v29 = 0LL;
  v17 = *(_QWORD *)(a1 + 496);
  *(_OWORD *)v28 = 0LL;
  if ( v17 )
    PnpDeviceRaisePropertyChangeEventWorker(a1, (__int64)a4, 0LL, 0LL, (__int64)&DEVPKEY_Device_ContainerId, v17);
LABEL_4:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v10 )
    ZwClose(v10);
  return (unsigned int)inited;
}
