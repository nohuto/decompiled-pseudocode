/*
 * XREFs of _CmDeleteDeviceInterfaceWorker @ 0x140808898
 * Callers:
 *     _CmDeleteDeviceInterface @ 0x140AB7998 (_CmDeleteDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _CmDeleteDeviceInterfaceRegKey @ 0x1408084C4 (_CmDeleteDeviceInterfaceRegKey.c)
 *     _CmRaiseDeleteEvent @ 0x14080C3C0 (_CmRaiseDeleteEvent.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x140955BD4 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140A58D74 (_CmSetDeviceInterfaceMappedProperty.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceWorker(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  int v4; // ebx
  int *v7; // r14
  unsigned int v8; // edi
  int v9; // ebp
  int v10; // eax
  void *Pool2; // rdi
  int v12; // r14d
  int DeviceInterfaceMappedPropertyKeys; // eax
  __int64 v14; // r9
  unsigned int i; // ebp
  int v16; // eax
  __int64 v17; // r9
  _DWORD v19[4]; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v20[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v20[0] = 768;
    v7 = v20;
    v20[1] = 512;
    v8 = 0;
    v20[2] = 256;
    while ( v8 < 3 )
    {
      v9 = *v7;
      v10 = CmDeleteDeviceInterfaceRegKey(a1, a2, *v7 | 0x30u, a4, 1);
      if ( v10 && v10 != -1073741772 && v10 != -1073741811 && v10 != -1073741637
        || (v10 = CmDeleteDeviceInterfaceRegKey(a1, a2, v9 | 0x31u, a4, 0)) != 0
        && v10 != -1073741772
        && v10 != -1073741811
        && v10 != -1073741637
        && v10 != -1073741535 )
      {
        v4 = v10;
        if ( v10 < 0 )
          return (unsigned int)v4;
        break;
      }
      ++v8;
      ++v7;
    }
    Pool2 = 0LL;
    v12 = 0;
    v19[0] = 0;
    while ( 1 )
    {
      LOBYTE(a4) = 1;
      DeviceInterfaceMappedPropertyKeys = CmGetDeviceInterfaceMappedPropertyKeys(
                                            a1,
                                            a2,
                                            0,
                                            a4,
                                            (__int64)Pool2,
                                            v12,
                                            (__int64)v19);
      if ( DeviceInterfaceMappedPropertyKeys != -1073741789 )
        break;
      v12 = v19[0];
      if ( 20 * (unsigned __int64)v19[0] > 0xFFFFFFFF )
      {
        DeviceInterfaceMappedPropertyKeys = -1073741811;
        goto LABEL_26;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        DeviceInterfaceMappedPropertyKeys = -1073741801;
LABEL_26:
        v4 = DeviceInterfaceMappedPropertyKeys;
        goto LABEL_45;
      }
    }
    if ( DeviceInterfaceMappedPropertyKeys && DeviceInterfaceMappedPropertyKeys != -1073741275 )
      goto LABEL_26;
    for ( i = 0; i < v19[0]; ++i )
    {
      v16 = CmSetDeviceInterfaceMappedProperty(a1, a2, (unsigned int)Pool2 + 20 * i, 0, 0LL, 0);
      if ( v16 && v16 != -1073741275 && v16 != -1073741790 && v16 != -1073741802 && v16 != -1073741637 )
      {
        v4 = v16;
        break;
      }
    }
    if ( v4 >= 0 )
    {
      DeviceInterfaceMappedPropertyKeys = CmDeleteDeviceInterfaceRegKey(a1, a2, 48, v14, 1);
      if ( DeviceInterfaceMappedPropertyKeys
        && DeviceInterfaceMappedPropertyKeys != -1073741772
        && DeviceInterfaceMappedPropertyKeys != -1073741811 )
      {
        goto LABEL_26;
      }
      DeviceInterfaceMappedPropertyKeys = CmDeleteDeviceInterfaceRegKey(a1, a2, 49, v17, 0);
      if ( DeviceInterfaceMappedPropertyKeys )
      {
        if ( DeviceInterfaceMappedPropertyKeys != -1073741772
          && DeviceInterfaceMappedPropertyKeys != -1073741811
          && DeviceInterfaceMappedPropertyKeys != -1073741535 )
        {
          goto LABEL_26;
        }
      }
      CmRaiseDeleteEvent(a1, a2, 3LL);
    }
LABEL_45:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v4;
}
