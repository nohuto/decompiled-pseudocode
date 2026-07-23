/*
 * XREFs of _CmDeleteDeviceWorker @ 0x1409B70E4
 * Callers:
 *     _CmDeleteDevice @ 0x14089CD0C (_CmDeleteDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _CmRaiseDeleteEvent @ 0x140777BCC (_CmRaiseDeleteEvent.c)
 *     _CmRemoveDeviceFromContainer @ 0x14089E454 (_CmRemoveDeviceFromContainer.c)
 *     _CmRemovePanelDevice @ 0x1408A1124 (_CmRemovePanelDevice.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1409AC150 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmDeleteDeviceRegKey @ 0x1409B7554 (_CmDeleteDeviceRegKey.c)
 *     _CmGetMatchingDeviceList @ 0x1409B75FC (_CmGetMatchingDeviceList.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409B7DBC (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmDeleteDeviceInterface @ 0x1409B846C (_CmDeleteDeviceInterface.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     _CmSetDeviceMappedProperty @ 0x140AAD7DC (_CmSetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x140AE0A94 (_CmGetDeviceMappedPropertyKeys.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceWorker(_QWORD *a1, __int64 a2, __int16 a3)
{
  void *v3; // rdi
  unsigned int v6; // r13d
  void *Pool2; // rsi
  ULONG v8; // r14d
  int DeviceContainerIdFromBase; // ebx
  int DeviceRegProp; // eax
  int ObjectProperty; // eax
  _WORD *i; // rbx
  __int64 v13; // rax
  int MatchingFilteredDeviceInterfaceList; // eax
  unsigned int v15; // eax
  void *v16; // r13
  int MatchingDeviceList; // eax
  int v18; // r9d
  unsigned int v19; // edi
  unsigned int *v20; // r14
  PVOID v21; // r14
  unsigned int v22; // ebx
  _WORD *j; // rbx
  __int64 v25; // rax
  int DeviceMappedPropertyKeys; // eax
  unsigned int k; // edi
  int v28; // eax
  unsigned int v29; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v30; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v31; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v34; // [rsp+80h] [rbp-80h] BYREF
  int v35; // [rsp+88h] [rbp-78h] BYREF
  int v36; // [rsp+8Ch] [rbp-74h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h]
  _OWORD v38[2]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t v39[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v40[40]; // [rsp+110h] [rbp+10h] BYREF

  v3 = 0LL;
  Handle = 0LL;
  v32 = 0LL;
  v6 = 0;
  v30 = 0;
  Pool2 = 0LL;
  v31 = 0;
  v8 = 0;
  v36 = 0;
  v29 = 0;
  v35 = 0;
  P = 0LL;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    DeviceContainerIdFromBase = CmOpenDeviceRegKey((__int64)a1, a2, 16, 0, 33619970, 0, (__int64)&Handle, 0LL);
    if ( DeviceContainerIdFromBase >= 0 )
    {
      v29 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        (__int64)a1,
                        a2,
                        (__int64)Handle,
                        0x25u,
                        (__int64)&v36,
                        (__int64)v39,
                        (__int64)&v29,
                        0);
      DeviceContainerIdFromBase = DeviceRegProp;
      if ( DeviceRegProp >= 0 )
      {
        DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(a1, a2, v39, v40);
        if ( DeviceContainerIdFromBase >= 0 )
        {
          DeviceContainerIdFromBase = CmRemoveDeviceFromContainer((__int64)a1, (__int64)v40, (__int64)v39, a2);
          if ( DeviceContainerIdFromBase >= 0 )
          {
LABEL_5:
            while ( 1 )
            {
              ObjectProperty = PnpGetObjectProperty(
                                 (__int64)a1,
                                 a2,
                                 1,
                                 (char *)Handle,
                                 0LL,
                                 (__int64)DEVPKEY_Device_PanelId,
                                 &v35,
                                 (__int64)Pool2,
                                 v8,
                                 (__int64)&v29,
                                 0);
              DeviceContainerIdFromBase = ObjectProperty;
              if ( ObjectProperty != -1073741789 )
                break;
              if ( Pool2 )
                ExFreePoolWithTag(Pool2, 0);
              v8 = v29;
              Pool2 = (void *)ExAllocatePool2(0x100uLL);
              if ( !Pool2 )
              {
                DeviceContainerIdFromBase = -1073741801;
                goto LABEL_35;
              }
            }
            if ( ObjectProperty >= 0 )
            {
              if ( v35 != 18 || v29 < 2 || *((_WORD *)Pool2 + ((unsigned __int64)v29 >> 1) - 1) )
              {
                DeviceContainerIdFromBase = -1073741823;
              }
              else
              {
                DeviceContainerIdFromBase = CmRemovePanelDevice((__int64)a1, (__int64)Pool2, a2);
                if ( DeviceContainerIdFromBase >= 0 )
                {
LABEL_14:
                  while ( 1 )
                  {
                    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                                            (_DWORD)a1,
                                                            0,
                                                            a2,
                                                            0,
                                                            0LL,
                                                            0LL,
                                                            (__int64)v3,
                                                            v6,
                                                            (__int64)&v30,
                                                            0);
                    DeviceContainerIdFromBase = MatchingFilteredDeviceInterfaceList;
                    if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
                      break;
                    if ( 2 * (unsigned __int64)v30 > 0xFFFFFFFF )
                    {
                      DeviceContainerIdFromBase = -1073741811;
                      goto LABEL_31;
                    }
                    if ( v3 )
                      ExFreePoolWithTag(v3, 0);
                    v32 = ExAllocatePool2(0x100uLL);
                    v3 = (void *)v32;
                    if ( !v32 )
                    {
                      DeviceContainerIdFromBase = -1073741801;
                      goto LABEL_31;
                    }
                    v6 = v30;
                  }
                  if ( !MatchingFilteredDeviceInterfaceList )
                  {
                    if ( v30 )
                    {
                      for ( i = v3; *i; i += v13 + 1 )
                      {
                        CmDeleteDeviceInterface(a1, i, 0LL);
                        v13 = -1LL;
                        do
                          ++v13;
                        while ( i[v13] );
                      }
                    }
                    v15 = 0;
                    v16 = 0LL;
                    while ( 1 )
                    {
                      MatchingDeviceList = CmGetMatchingDeviceList(
                                             (_DWORD)a1,
                                             (unsigned int)&CmMatchLastKnownParentCallback,
                                             a2,
                                             (_DWORD)v16,
                                             v15,
                                             (__int64)&v31,
                                             0);
                      DeviceContainerIdFromBase = MatchingDeviceList;
                      if ( MatchingDeviceList != -1073741789 )
                        break;
                      if ( 2 * (unsigned __int64)v31 > 0xFFFFFFFF )
                      {
                        DeviceContainerIdFromBase = -1073741811;
                        goto LABEL_29;
                      }
                      if ( v16 )
                        ExFreePoolWithTag(v16, 0);
                      v16 = (void *)ExAllocatePool2(0x100uLL);
                      if ( !v16 )
                      {
                        DeviceContainerIdFromBase = -1073741801;
                        goto LABEL_29;
                      }
                      v15 = v31;
                    }
                    if ( !MatchingDeviceList )
                    {
                      if ( v31 )
                      {
                        for ( j = v16; *j; j += v25 + 1 )
                        {
                          PnpSetObjectProperty(
                            (_DWORD)a1,
                            (_DWORD)j,
                            1,
                            0LL,
                            (__int64)DEVPKEY_Device_LastKnownParent,
                            0,
                            0LL,
                            0,
                            0);
                          v25 = -1LL;
                          do
                            ++v25;
                          while ( j[v25] );
                        }
                      }
                      v19 = 0;
                      v20 = (unsigned int *)v38;
                      v38[0] = _mm_load_si128((const __m128i *)&_xmm);
                      v38[1] = _mm_load_si128((const __m128i *)&_xmm);
                      while ( 1 )
                      {
                        if ( v19 >= 8 )
                        {
                          v21 = 0LL;
                          goto LABEL_26;
                        }
                        DeviceContainerIdFromBase = CmDeleteDeviceRegKey(a1, a2, *v20, 0LL);
                        if ( DeviceContainerIdFromBase )
                        {
                          if ( DeviceContainerIdFromBase != -1073741772
                            && DeviceContainerIdFromBase != -1073741811
                            && DeviceContainerIdFromBase != -1073741637 )
                          {
                            break;
                          }
                        }
                        ++v19;
                        ++v20;
                      }
                      v21 = 0LL;
                      if ( DeviceContainerIdFromBase < 0 )
                        goto LABEL_28;
LABEL_26:
                      P = 0LL;
                      v22 = 0;
                      v34 = 0;
                      while ( 1 )
                      {
                        LOBYTE(v18) = 1;
                        DeviceMappedPropertyKeys = CmGetDeviceMappedPropertyKeys(
                                                     (_DWORD)a1,
                                                     a2,
                                                     (_DWORD)Handle,
                                                     v18,
                                                     (__int64)v21,
                                                     v22,
                                                     (__int64)&v34);
                        DeviceContainerIdFromBase = DeviceMappedPropertyKeys;
                        if ( DeviceMappedPropertyKeys != -1073741789 )
                          break;
                        v22 = v34;
                        if ( 20 * (unsigned __int64)v34 > 0xFFFFFFFF )
                        {
                          DeviceContainerIdFromBase = -1073741811;
                          goto LABEL_28;
                        }
                        if ( v21 )
                          ExFreePoolWithTag(v21, 0);
                        P = (PVOID)ExAllocatePool2(0x100uLL);
                        v21 = P;
                        if ( !P )
                        {
                          DeviceContainerIdFromBase = -1073741801;
                          goto LABEL_28;
                        }
                      }
                      if ( !DeviceMappedPropertyKeys || DeviceMappedPropertyKeys == -1073741275 )
                      {
                        for ( k = 0; k < v34; ++k )
                        {
                          v28 = CmSetDeviceMappedProperty((_DWORD)a1, a2, (unsigned int)v21 + 20 * k, 0, 0LL, 0);
                          DeviceContainerIdFromBase = v28;
                          if ( v28
                            && v28 != -1073741275
                            && v28 != -1073741790
                            && v28 != -1073741802
                            && v28 != -1073741637 )
                          {
                            if ( v28 < 0 )
                              goto LABEL_28;
                            break;
                          }
                        }
                        DeviceContainerIdFromBase = CmDeleteDeviceRegKey(a1, a2, 16LL, 0LL);
                        if ( DeviceContainerIdFromBase >= 0 )
                          CmRaiseDeleteEvent((__int64)a1, a2, 1u);
                      }
LABEL_28:
                      v3 = (void *)v32;
                    }
LABEL_29:
                    if ( v16 )
                      ExFreePoolWithTag(v16, 0);
                  }
LABEL_31:
                  if ( v3 )
                    ExFreePoolWithTag(v3, 0);
                  if ( P )
                    ExFreePoolWithTag(P, 0);
                }
              }
            }
            else if ( ObjectProperty == -1073741275 )
            {
              goto LABEL_14;
            }
LABEL_35:
            if ( Pool2 )
              ExFreePoolWithTag(Pool2, 0);
          }
        }
      }
      else if ( DeviceRegProp == -1073741275 )
      {
        goto LABEL_5;
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)DeviceContainerIdFromBase;
}
