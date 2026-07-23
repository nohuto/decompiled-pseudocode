/*
 * XREFs of _CmDeleteDevicePanelWorker @ 0x1408A05DC
 * Callers:
 *     _CmDeleteDevicePanel @ 0x1408A00D8 (_CmDeleteDevicePanel.c)
 * Callees:
 *     _CmRaiseDeleteEvent @ 0x140777BCC (_CmRaiseDeleteEvent.c)
 *     _CmDeleteDevicePanelRegKey @ 0x1408A0200 (_CmDeleteDevicePanelRegKey.c)
 *     _CmGetDevicePanelMappedPropertyKeys @ 0x1408A0BE0 (_CmGetDevicePanelMappedPropertyKeys.c)
 *     _CmSetDevicePanelMappedProperty @ 0x1408A1410 (_CmSetDevicePanelMappedProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDevicePanelWorker(__int64 a1, __int64 a2, __int16 a3, int a4)
{
  int v4; // ebx
  unsigned int *v7; // r14
  int i; // edi
  int v9; // eax
  void *Pool2; // rdi
  unsigned int v11; // ebp
  int DevicePanelMappedPropertyKeys; // eax
  int v13; // edx
  int v14; // r8d
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
    v19 = 352;
    v7 = &v19;
    for ( i = 0; !i; i = 1 )
    {
      v9 = CmDeleteDevicePanelRegKey(a1, a2, *v7);
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
      DevicePanelMappedPropertyKeys = CmGetDevicePanelMappedPropertyKeys(
                                        a1,
                                        a2,
                                        a3,
                                        a4,
                                        (__int64)Pool2,
                                        v11,
                                        (__int64)&v19);
      if ( DevicePanelMappedPropertyKeys != -1073741789 )
        break;
      v11 = v19;
      if ( 20 * (unsigned __int64)v19 > 0xFFFFFFFF )
      {
        DevicePanelMappedPropertyKeys = -1073741811;
        goto LABEL_21;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        DevicePanelMappedPropertyKeys = -1073741801;
LABEL_21:
        v4 = DevicePanelMappedPropertyKeys;
        goto LABEL_36;
      }
    }
    if ( DevicePanelMappedPropertyKeys && DevicePanelMappedPropertyKeys != -1073741275 )
      goto LABEL_21;
    for ( j = 0LL; (unsigned int)j < v19; j = (unsigned int)(v17 + 1) )
    {
      v16 = CmSetDevicePanelMappedProperty(5 * (int)j, v13, v14, 0, (__int64)Pool2 + 20 * j);
      if ( v16 && v16 != -1073741275 && v16 != -1073741790 && v16 != -1073741802 && v16 != -1073741637 )
      {
        v4 = v16;
        break;
      }
    }
    if ( v4 >= 0 )
    {
      DevicePanelMappedPropertyKeys = CmDeleteDevicePanelRegKey(a1, a2, 0x60u);
      if ( DevicePanelMappedPropertyKeys
        && DevicePanelMappedPropertyKeys != -1073741772
        && DevicePanelMappedPropertyKeys != -1073741811 )
      {
        goto LABEL_21;
      }
      CmRaiseDeleteEvent(a1, a2, 6u);
    }
LABEL_36:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v4;
}
