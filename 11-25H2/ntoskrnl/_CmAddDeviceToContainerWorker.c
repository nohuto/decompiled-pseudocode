/*
 * XREFs of _CmAddDeviceToContainerWorker @ 0x14094F44C
 * Callers:
 *     _CmAddDeviceToContainer @ 0x14094F2F0 (_CmAddDeviceToContainer.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     _PnpCtxRegDeleteKey @ 0x1406ED0DC (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteDeviceContainer @ 0x1408096D4 (_CmDeleteDeviceContainer.c)
 *     _RegRtlOpenPredefinedKey @ 0x1408111F4 (_RegRtlOpenPredefinedKey.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408369DC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _RegRtlCreateKeyTransacted @ 0x14093201C (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlIsPredefinedKey @ 0x14093216C (_RegRtlIsPredefinedKey.c)
 *     _CmCreateDeviceContainer @ 0x14094F878 (_CmCreateDeviceContainer.c)
 *     _RegRtlSetValue @ 0x14095027C (_RegRtlSetValue.c)
 *     _PnpCtxRegQueryValue @ 0x140953C60 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall CmAddDeviceToContainerWorker(__int64 a1, __int64 a2, const WCHAR *a3, __int64 a4, HANDLE a5)
{
  _BYTE *v5; // r12
  int DeviceContainer; // eax
  HANDLE v10; // r14
  int inited; // ebx
  __int64 v13; // rax
  HANDLE v14; // rsi
  __int64 v15; // rax
  HANDLE v16; // rcx
  __int64 (__fastcall *v17)(int, int, int, int, __int64); // rax
  HANDLE v18; // rcx
  __int64 v19; // rcx
  HANDLE v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  _BYTE v23[4]; // [rsp+58h] [rbp-41h] BYREF
  ULONG v24; // [rsp+5Ch] [rbp-3Dh] BYREF
  ULONG Disposition; // [rsp+60h] [rbp-39h] BYREF
  HANDLE v26; // [rsp+68h] [rbp-31h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-29h] BYREF
  HANDLE Handle[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v29; // [rsp+88h] [rbp-11h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-9h] BYREF

  v5 = a5;
  Handle[0] = 0LL;
  KeyHandle = 0LL;
  *(_BYTE *)a5 = 0;
  v26 = 0LL;
  v23[0] = 0;
  Disposition = 0;
  v24 = 0;
  DeviceContainer = CmCreateDeviceContainer(a1, a2, (_DWORD)a3, (unsigned int)Handle, (__int64)v23);
  v10 = Handle[0];
  inited = DeviceContainer;
  if ( DeviceContainer < 0 )
    goto LABEL_2;
  if ( a1 && (v13 = *(_QWORD *)(a1 + 224)) != 0 )
  {
    inited = RegRtlCreateKeyTransacted(
               Handle[0],
               L"BaseContainers",
               0,
               4u,
               0LL,
               0,
               &KeyHandle,
               &Disposition,
               *(_QWORD *)(v13 + 8));
  }
  else
  {
    a5 = 0LL;
    v18 = Handle[0];
    memset(&ObjectAttributes, 0, 44);
    *(_OWORD *)Handle = 0LL;
    if ( !RegRtlIsPredefinedKey((__int64)v18) || (inited = RegRtlOpenPredefinedKey(v19, (__int64)&a5), inited >= 0) )
    {
      inited = RtlInitUnicodeStringEx((PUNICODE_STRING)Handle, L"BaseContainers");
      if ( inited >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 704;
        v20 = v10;
        if ( a5 )
          v20 = a5;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)Handle;
        ObjectAttributes.RootDirectory = v20;
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
    inited = RegRtlCreateKeyTransacted(KeyHandle, a3, 0, 3u, 0LL, 0, &v26, &v24, *(_QWORD *)(v15 + 8));
  }
  else
  {
    a5 = 0LL;
    memset(&ObjectAttributes, 0, 44);
    *(_OWORD *)Handle = 0LL;
    if ( !RegRtlIsPredefinedKey((__int64)KeyHandle)
      || (inited = RegRtlOpenPredefinedKey(v21, (__int64)&a5), inited >= 0) )
    {
      inited = RtlInitUnicodeStringEx((PUNICODE_STRING)Handle, a3);
      if ( inited >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 704;
        if ( a5 )
          v14 = a5;
        ObjectAttributes.RootDirectory = v14;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)Handle;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = ZwCreateKey(&v26, 3u, &ObjectAttributes, 0, 0LL, 0, &v24);
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
    v22 = PnpCtxRegQueryValue(v16, v26, a4, 0LL, 0LL, &a5);
    inited = v22;
    if ( v22 == -1073741772 || v22 == -1073741444 )
    {
      inited = 0;
    }
    else if ( v22 )
    {
      if ( v22 < 0 )
        goto LABEL_3;
    }
    else
    {
      *v5 = 1;
    }
  }
  if ( *v5 )
    goto LABEL_3;
  inited = RegRtlSetValue(v26, 0);
  if ( inited < 0 )
  {
LABEL_2:
    if ( inited == -1073741444 )
    {
      inited = -1073741772;
LABEL_51:
      if ( v24 == 1 )
        PnpCtxRegDeleteKey(a1, (__int64)v26, 0LL);
      if ( Disposition == 1 )
        PnpCtxRegDeleteKey(a1, (__int64)KeyHandle, 0LL);
      if ( v23[0] == 1 )
        CmDeleteDeviceContainer(a1, a2);
      goto LABEL_4;
    }
LABEL_3:
    if ( inited >= 0 )
      goto LABEL_4;
    goto LABEL_51;
  }
  v29 = 0LL;
  v17 = *(__int64 (__fastcall **)(int, int, int, int, __int64))(a1 + 496);
  *(_OWORD *)Handle = 0LL;
  if ( v17 )
    PnpDeviceRaisePropertyChangeEventWorker(a1, a4, 0LL, 0LL, (__int64)&DEVPKEY_Device_ContainerId, v17);
LABEL_4:
  if ( v26 )
    ZwClose(v26);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v10 )
    ZwClose(v10);
  return (unsigned int)inited;
}
