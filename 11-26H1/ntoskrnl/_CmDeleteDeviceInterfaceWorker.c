/*
 * XREFs of _CmDeleteDeviceInterfaceWorker @ 0x140B4572C
 * Callers:
 *     _CmDeleteDeviceInterface @ 0x1409B846C (_CmDeleteDeviceInterface.c)
 * Callees:
 *     _CmRaiseDeleteEvent @ 0x140777BCC (_CmRaiseDeleteEvent.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x140971B14 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140AF5AB0 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmDeleteDeviceInterfaceRegKey @ 0x140B61D9C (_CmDeleteDeviceInterfaceRegKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceWorker(__int64 a1, __int64 a2, __int16 a3, int a4)
{
  int v4; // ebx
  int *v7; // r14
  unsigned int v8; // esi
  int v9; // ebp
  int v10; // eax
  int v11; // r9d
  void *Pool2; // rsi
  unsigned int v13; // ebp
  int DeviceInterfaceMappedPropertyKeys; // eax
  int v15; // r9d
  __int64 i; // rbp
  int v17; // eax
  int v18; // r9d
  _DWORD v20[4]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+18h] BYREF

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
        || (v10 = CmDeleteDeviceInterfaceRegKey(a1, a2, v9 | 0x31u, v11, 0)) != 0
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
    v13 = 0;
    v21 = 0;
    while ( 1 )
    {
      DeviceInterfaceMappedPropertyKeys = CmGetDeviceInterfaceMappedPropertyKeys(
                                            a1,
                                            a2,
                                            0LL,
                                            1,
                                            (__int64)Pool2,
                                            v13,
                                            &v21);
      if ( DeviceInterfaceMappedPropertyKeys != -1073741789 )
        break;
      v13 = v21;
      if ( 20 * (unsigned __int64)v21 > 0xFFFFFFFF )
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
    for ( i = 0LL; (unsigned int)i < v21; i = (unsigned int)(i + 1) )
    {
      v17 = CmSetDeviceInterfaceMappedProperty(a1, a2, 0LL, 0LL, (__int64)Pool2 + 20 * i, 0, 0LL, 0);
      if ( v17 && v17 != -1073741275 && v17 != -1073741790 && v17 != -1073741802 && v17 != -1073741637 )
      {
        v4 = v17;
        break;
      }
    }
    if ( v4 >= 0 )
    {
      DeviceInterfaceMappedPropertyKeys = CmDeleteDeviceInterfaceRegKey(a1, a2, 48, v15, 1);
      if ( DeviceInterfaceMappedPropertyKeys
        && DeviceInterfaceMappedPropertyKeys != -1073741772
        && DeviceInterfaceMappedPropertyKeys != -1073741811 )
      {
        goto LABEL_26;
      }
      DeviceInterfaceMappedPropertyKeys = CmDeleteDeviceInterfaceRegKey(a1, a2, 49, v18, 0);
      if ( DeviceInterfaceMappedPropertyKeys )
      {
        if ( DeviceInterfaceMappedPropertyKeys != -1073741772
          && DeviceInterfaceMappedPropertyKeys != -1073741811
          && DeviceInterfaceMappedPropertyKeys != -1073741535 )
        {
          goto LABEL_26;
        }
      }
      CmRaiseDeleteEvent(a1, a2, 3u);
    }
LABEL_45:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v4;
}
