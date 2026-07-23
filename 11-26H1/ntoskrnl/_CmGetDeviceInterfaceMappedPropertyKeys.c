/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyKeys @ 0x140971B14
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x14095F340 (_PnpDispatchDeviceInterface.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x140B4572C (_CmDeleteDeviceInterfaceWorker.c)
 * Callees:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14095F698 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140971D58 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        char *a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  int v8; // r10d
  unsigned int i; // edi
  __int64 v13; // rsi
  int DeviceInterfaceMappedPropertyFromRegValue; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned int j; // edi
  __int64 v20; // rsi
  int DeviceInterfaceMappedPropertyFromComposite; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // ecx
  _DWORD v25[4]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26; // [rsp+80h] [rbp+8h]

  v26 = a1;
  v7 = a7;
  v8 = 0;
  LODWORD(a7) = 0;
  *v7 = 0;
  for ( i = 0; i < 3; ++i )
  {
    v13 = (__int64)*(&off_140BDFEB0 + 2 * i);
    if ( v13 )
    {
      if ( a4
        || (DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyFromRegValue(
                                                          a1,
                                                          a2,
                                                          (_DWORD)a3,
                                                          (unsigned int)*(&off_140BDFEB0 + 2 * i),
                                                          (__int64)&a7,
                                                          0LL,
                                                          0,
                                                          (__int64)v25),
            v8 = DeviceInterfaceMappedPropertyFromRegValue,
            DeviceInterfaceMappedPropertyFromRegValue == -1073741789)
        || !DeviceInterfaceMappedPropertyFromRegValue )
      {
        if ( a5 )
        {
          v15 = *v7;
          if ( (unsigned int)v15 < a6 )
          {
            v16 = 5 * v15;
            *(_OWORD *)(a5 + 4 * v16) = *(_OWORD *)v13;
            *(_DWORD *)(a5 + 4 * v16 + 16) = *(_DWORD *)(v13 + 16);
          }
        }
        v17 = *v7 + 1;
        if ( v17 < *v7 )
        {
LABEL_13:
          v8 = -1073741675;
          *v7 = 0;
          return (unsigned int)v8;
        }
        *v7 = v17;
      }
      else if ( DeviceInterfaceMappedPropertyFromRegValue == -1073741811
             || (unsigned int)(DeviceInterfaceMappedPropertyFromRegValue + 1073741767) <= 1 )
      {
        a1 = v26;
        *v7 = 0;
        break;
      }
      a1 = v26;
      v8 = 0;
    }
  }
  if ( v8 >= 0 )
  {
    for ( j = 0; j < 4; ++j )
    {
      v20 = (__int64)*(&off_140BE0710 + 2 * j);
      if ( a4
        || (DeviceInterfaceMappedPropertyFromComposite = CmGetDeviceInterfaceMappedPropertyFromComposite(
                                                           a1,
                                                           a2,
                                                           a3,
                                                           (__int64)*(&off_140BE0710 + 2 * j),
                                                           &a7,
                                                           0LL,
                                                           0,
                                                           v25),
            v8 = DeviceInterfaceMappedPropertyFromComposite,
            DeviceInterfaceMappedPropertyFromComposite == -1073741789)
        || !DeviceInterfaceMappedPropertyFromComposite )
      {
        if ( a5 )
        {
          v22 = *v7;
          if ( (unsigned int)v22 < a6 )
          {
            v23 = 5 * v22;
            *(_OWORD *)(a5 + 4 * v23) = *(_OWORD *)v20;
            *(_DWORD *)(a5 + 4 * v23 + 16) = *(_DWORD *)(v20 + 16);
          }
        }
        v24 = *v7 + 1;
        if ( v24 < *v7 )
          goto LABEL_13;
        *v7 = v24;
      }
      else if ( DeviceInterfaceMappedPropertyFromComposite == -1073741811
             || (unsigned int)(DeviceInterfaceMappedPropertyFromComposite + 1073741767) <= 1 )
      {
        *v7 = 0;
        break;
      }
      a1 = v26;
      v8 = 0;
    }
    if ( v8 >= 0 )
      return a6 < *v7 ? 0xC0000023 : 0;
  }
  return (unsigned int)v8;
}
