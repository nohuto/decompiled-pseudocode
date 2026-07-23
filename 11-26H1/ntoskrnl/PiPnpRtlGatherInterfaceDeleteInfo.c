/*
 * XREFs of PiPnpRtlGatherInterfaceDeleteInfo @ 0x140B37308
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14077F4F8 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PnpGetObjectProperty @ 0x14095E340 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiDmObjectManagerReleaseLock @ 0x1409A9F94 (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1409AA00C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDmLookupObject @ 0x1409AA1E0 (PiDmLookupObject.c)
 *     _PnpStringFromGuid @ 0x1409B134C (_PnpStringFromGuid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlGatherInterfaceDeleteInfo(_WORD *a1, void ***a2)
{
  _WORD *v2; // r14
  __int64 Pool2; // rax
  _QWORD *v6; // rbx
  int Object; // edi
  __int64 v8; // rax
  int ObjectProperty; // eax
  int v10; // eax
  void **v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+60h] [rbp-49h] BYREF
  __int64 v17; // [rsp+68h] [rbp-41h] BYREF
  __int128 v18; // [rsp+70h] [rbp-39h] BYREF
  wchar_t v19[40]; // [rsp+80h] [rbp-29h] BYREF

  v2 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  *a2 = (void **)Pool2;
  v6 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    Object = -1073741670;
LABEL_28:
    PiPnpRtlFreeInterfaceDeleteInfo(*a2);
    *a2 = 0LL;
    goto LABEL_30;
  }
  Object = 0;
  PiDmObjectManagerAcquireSharedLock(&PiDmDeviceInterfaceManager);
  v8 = PiDmLookupObject((__int64)&PiDmDeviceInterfaceManager, a1);
  *v6 = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  else
    Object = -1073741772;
  PiDmObjectManagerReleaseLock(&PiDmDeviceInterfaceManager);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_28;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)a1,
                     3,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_DeviceInterface_ClassGuid,
                     (_DWORD *)&v16 + 1,
                     (__int64)&v18,
                     0x10u,
                     (__int64)&v16,
                     0);
  Object = ObjectProperty;
  if ( ObjectProperty != -1073741772 && ObjectProperty != -1073741275 )
  {
    if ( ObjectProperty < 0 )
      goto LABEL_28;
    if ( PnpStringFromGuid((int *)&v18, v19) >= 0 )
    {
      Object = PiDmGetObject(4, v19, *a2 + 1);
      if ( ((Object + 0x80000000) & 0x80000000) == 0 && Object != -1073741772 )
        goto LABEL_28;
    }
  }
  v10 = PnpGetObjectProperty(
          0x47706E50u,
          0xC8u,
          (__int64)a1,
          3,
          0LL,
          0LL,
          (__int64)&DEVPKEY_Device_InstanceId,
          (_DWORD *)&v16 + 1,
          (PVOID *)&v17,
          (unsigned int *)&v16,
          0);
  v2 = (_WORD *)v17;
  Object = v10;
  if ( v10 != -1073741772 && v10 != -1073741275 )
  {
    if ( v10 < 0 )
      goto LABEL_28;
    v11 = *a2;
    Object = 0;
    PiDmObjectManagerAcquireSharedLock((struct _ERESOURCE *)&PiDmDeviceManager);
    v12 = PiDmLookupObject((__int64)&PiDmDeviceManager, v2);
    v11[2] = (void *)v12;
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    else
      Object = -1073741772;
    PiDmObjectManagerReleaseLock((struct _ERESOURCE *)&PiDmDeviceManager);
    if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
      goto LABEL_28;
  }
  v13 = PnpGetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          (__int64)a1,
          3,
          0LL,
          0LL,
          (__int64)&DEVPKEY_Device_ContainerId,
          (_DWORD *)&v16 + 1,
          (__int64)&v18,
          0x10u,
          (__int64)&v16,
          0);
  Object = v13;
  if ( v13 != -1073741772 && v13 != -1073741275 )
  {
    if ( v13 < 0 )
      goto LABEL_28;
    Object = PnpStringFromGuid((int *)&v18, v19);
    if ( Object < 0 )
      goto LABEL_28;
    v14 = PiDmGetObject(5, v19, *a2 + 3);
    Object = v14;
    if ( v14 != -1073741772 )
    {
      if ( v14 >= 0 )
        goto LABEL_30;
      goto LABEL_28;
    }
  }
  Object = 0;
LABEL_30:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x47706E50u);
  return (unsigned int)Object;
}
