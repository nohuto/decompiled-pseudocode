/*
 * XREFs of _CmDeleteDeviceContainerWorker @ 0x140B1FE00
 * Callers:
 *     _CmDeleteDeviceContainer @ 0x140B1FCDC (_CmDeleteDeviceContainer.c)
 * Callees:
 *     _CmRaiseDeleteEvent @ 0x140777BCC (_CmRaiseDeleteEvent.c)
 *     _CmSetDeviceContainerMappedProperty @ 0x140A3DEE4 (_CmSetDeviceContainerMappedProperty.c)
 *     _CmGetDeviceContainerMappedPropertyKeys @ 0x140B1FFB8 (_CmGetDeviceContainerMappedPropertyKeys.c)
 *     _CmDeleteDeviceContainerRegKey @ 0x140B2004C (_CmDeleteDeviceContainerRegKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceContainerWorker(__int64 a1, __int64 a2, __int16 a3, int a4)
{
  int v4; // ebx
  unsigned int *v7; // r14
  int i; // edi
  int v9; // eax
  void *Pool2; // rdi
  unsigned int v11; // ebp
  int DeviceContainerMappedPropertyKeys; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 j; // r11
  int v16; // eax
  int v17; // r11d
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v19 = 336;
    v7 = &v19;
    for ( i = 0; !i; i = 1 )
    {
      v9 = CmDeleteDeviceContainerRegKey(a1, a2, *v7);
      if ( v9 && v9 != -1073741772 && v9 != -1073741811 && v9 != -1073741637 )
      {
        v4 = v9;
        if ( v9 < 0 )
          return (unsigned int)v4;
        break;
      }
      ++v7;
    }
    Pool2 = 0LL;
    v11 = 0;
    v19 = 0;
    while ( 1 )
    {
      DeviceContainerMappedPropertyKeys = CmGetDeviceContainerMappedPropertyKeys(
                                            a1,
                                            a2,
                                            a3,
                                            a4,
                                            (__int64)Pool2,
                                            v11,
                                            (__int64)&v19);
      if ( DeviceContainerMappedPropertyKeys != -1073741789 )
        break;
      v11 = v19;
      if ( 20 * (unsigned __int64)v19 > 0xFFFFFFFF )
      {
        DeviceContainerMappedPropertyKeys = -1073741811;
        goto LABEL_21;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        DeviceContainerMappedPropertyKeys = -1073741801;
LABEL_21:
        v4 = DeviceContainerMappedPropertyKeys;
        goto LABEL_36;
      }
    }
    if ( DeviceContainerMappedPropertyKeys && DeviceContainerMappedPropertyKeys != -1073741275 )
      goto LABEL_21;
    for ( j = 0LL; (unsigned int)j < v19; j = (unsigned int)(v17 + 1) )
    {
      v16 = CmSetDeviceContainerMappedProperty(5 * j, v13, v14, 0LL, (__int64)Pool2 + 20 * j);
      if ( v16 && v16 != -1073741275 && v16 != -1073741790 && v16 != -1073741802 && v16 != -1073741637 )
      {
        v4 = v16;
        break;
      }
    }
    if ( v4 >= 0 )
    {
      DeviceContainerMappedPropertyKeys = CmDeleteDeviceContainerRegKey(a1, a2, 80LL);
      if ( DeviceContainerMappedPropertyKeys
        && DeviceContainerMappedPropertyKeys != -1073741772
        && DeviceContainerMappedPropertyKeys != -1073741811 )
      {
        goto LABEL_21;
      }
      CmRaiseDeleteEvent(a1, a2, 5u);
    }
LABEL_36:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v4;
}
