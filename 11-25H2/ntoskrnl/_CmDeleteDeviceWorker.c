/*
 * XREFs of _CmDeleteDeviceWorker @ 0x14099FA74
 * Callers:
 *     _CmDeleteDevice @ 0x140808398 (_CmDeleteDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _CmRemoveDeviceFromContainer @ 0x14080A720 (_CmRemoveDeviceFromContainer.c)
 *     _CmRaiseDeleteEvent @ 0x14080C3C0 (_CmRaiseDeleteEvent.c)
 *     _CmRemovePanelDevice @ 0x14080DB0C (_CmRemovePanelDevice.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     _CmSetDeviceMappedProperty @ 0x14094EA4C (_CmSetDeviceMappedProperty.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140950D48 (_CmGetDeviceContainerIdFromBase.c)
 *     _PnpSetObjectProperty @ 0x1409558B8 (_PnpSetObjectProperty.c)
 *     _CmGetMatchingDeviceList @ 0x1409A0048 (_CmGetMatchingDeviceList.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409A013C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmDeleteDeviceRegKey @ 0x1409A0558 (_CmDeleteDeviceRegKey.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1409A8830 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmDeleteDeviceInterface @ 0x140AB7998 (_CmDeleteDeviceInterface.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceWorker(_QWORD *a1, const WCHAR *a2, __int16 a3)
{
  _WORD *v5; // r13
  void *v6; // r14
  void *Pool2; // rsi
  ULONG v8; // r15d
  int DeviceContainerIdFromBase; // ebx
  int DeviceRegProp; // eax
  int v11; // r15d
  int ObjectProperty; // eax
  _WORD *v13; // rdi
  int MatchingFilteredDeviceInterfaceList; // eax
  unsigned int v15; // eax
  _WORD *v16; // r15
  _WORD *v17; // rdi
  int MatchingDeviceList; // eax
  int v19; // r9d
  unsigned int *v20; // r15
  unsigned int v21; // edi
  const WCHAR *v22; // r15
  unsigned int v23; // edi
  int DeviceMappedPropertyKeys; // eax
  unsigned int j; // edi
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  unsigned int i; // eax
  __int64 v31; // rax
  ULONG v32; // [rsp+40h] [rbp-C0h]
  unsigned int v33; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v35; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v36; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  const WCHAR *v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v41[3]; // [rsp+8Ch] [rbp-74h] BYREF
  _OWORD v42[2]; // [rsp+98h] [rbp-68h] BYREF
  wchar_t v43[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v44[40]; // [rsp+110h] [rbp+10h] BYREF

  v39 = a2;
  Handle = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v35 = 0;
  Pool2 = 0LL;
  v36 = 0;
  v8 = 0;
  v41[0] = 0;
  v33 = 0;
  v40 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  DeviceContainerIdFromBase = CmOpenDeviceRegKey((__int64)a1, a2, 16, 0, 33619970, 0, (__int64)&Handle, 0LL);
  if ( DeviceContainerIdFromBase >= 0 )
  {
    v33 = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      (__int64)a1,
                      a2,
                      (__int64)Handle,
                      0x25u,
                      (__int64)v41,
                      (__int64)v43,
                      (__int64)&v33,
                      0);
    DeviceContainerIdFromBase = DeviceRegProp;
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp == -1073741275 )
        goto LABEL_5;
      goto LABEL_41;
    }
    DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(a1, (__int64)a2, v43, v44);
    if ( DeviceContainerIdFromBase >= 0 )
    {
      DeviceContainerIdFromBase = CmRemoveDeviceFromContainer((__int64)a1, (__int64)v44, (__int64)v43, (__int64)a2);
      if ( DeviceContainerIdFromBase >= 0 )
      {
LABEL_5:
        while ( 1 )
        {
          v32 = v8;
          v11 = (int)a2;
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             a2,
                             1u,
                             Handle,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelId,
                             &v40,
                             Pool2,
                             v32,
                             (__int64)&v33,
                             0);
          DeviceContainerIdFromBase = ObjectProperty;
          if ( ObjectProperty != -1073741789 )
            break;
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0);
          v8 = v33;
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          if ( !Pool2 )
          {
            DeviceContainerIdFromBase = -1073741801;
            goto LABEL_39;
          }
        }
        if ( ObjectProperty >= 0 )
        {
          if ( v40 != 18 || v33 < 2 || *((_WORD *)Pool2 + ((unsigned __int64)v33 >> 1) - 1) )
          {
            DeviceContainerIdFromBase = -1073741823;
LABEL_39:
            if ( Pool2 )
              ExFreePoolWithTag(Pool2, 0);
            goto LABEL_41;
          }
          DeviceContainerIdFromBase = CmRemovePanelDevice((__int64)a1, (__int64)Pool2, (__int64)a2);
          if ( DeviceContainerIdFromBase < 0 )
            goto LABEL_39;
        }
        else if ( ObjectProperty != -1073741275 )
        {
          goto LABEL_39;
        }
        for ( i = 0; ; i = v35 )
        {
          v13 = v5;
          MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                                  (_DWORD)a1,
                                                  0,
                                                  v11,
                                                  0,
                                                  0LL,
                                                  0LL,
                                                  (__int64)v5,
                                                  i,
                                                  (__int64)&v35,
                                                  0);
          DeviceContainerIdFromBase = MatchingFilteredDeviceInterfaceList;
          if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
            break;
          if ( 2 * (unsigned __int64)v35 > 0xFFFFFFFF )
          {
            DeviceContainerIdFromBase = -1073741811;
            goto LABEL_35;
          }
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
          v5 = (_WORD *)ExAllocatePool2(0x100uLL);
          if ( !v5 )
          {
            DeviceContainerIdFromBase = -1073741801;
            goto LABEL_35;
          }
        }
        if ( !MatchingFilteredDeviceInterfaceList )
        {
          if ( v35 && *v5 )
          {
            do
            {
              CmDeleteDeviceInterface(a1, v13, 0LL);
              v28 = -1LL;
              do
                ++v28;
              while ( v13[v28] );
              v13 += v28 + 1;
            }
            while ( *v13 );
          }
          v15 = 0;
          v16 = 0LL;
          while ( 1 )
          {
            v17 = v16;
            MatchingDeviceList = CmGetMatchingDeviceList(
                                   (_DWORD)a1,
                                   (unsigned int)&CmMatchLastKnownParentCallback,
                                   (_DWORD)v39,
                                   (_DWORD)v16,
                                   v15,
                                   (__int64)&v36,
                                   0);
            DeviceContainerIdFromBase = MatchingDeviceList;
            if ( MatchingDeviceList != -1073741789 )
              break;
            if ( 2 * (unsigned __int64)v36 > 0xFFFFFFFF )
            {
LABEL_90:
              DeviceContainerIdFromBase = -1073741811;
              goto LABEL_33;
            }
            if ( v16 )
              ExFreePoolWithTag(v16, 0);
            P = (PVOID)ExAllocatePool2(0x100uLL);
            v16 = P;
            if ( !P )
            {
LABEL_96:
              DeviceContainerIdFromBase = -1073741801;
              goto LABEL_33;
            }
            v15 = v36;
          }
          P = v16;
          if ( !MatchingDeviceList )
          {
            P = v16;
            if ( v36 )
            {
              P = v16;
              if ( *v16 )
              {
                P = v16;
                do
                {
                  PnpSetObjectProperty(
                    (__int64)a1,
                    (__int64)v17,
                    1,
                    0LL,
                    0LL,
                    (__int64)&DEVPKEY_Device_LastKnownParent,
                    0,
                    0LL,
                    0,
                    0);
                  v31 = -1LL;
                  do
                    ++v31;
                  while ( v17[v31] );
                  v17 += v31 + 1;
                }
                while ( *v17 );
              }
            }
            v20 = (unsigned int *)v42;
            v21 = 0;
            v42[0] = _mm_load_si128((const __m128i *)&_xmm);
            v42[1] = _mm_load_si128((const __m128i *)&_xmm);
            while ( v21 < 8 )
            {
              v27 = CmDeleteDeviceRegKey(a1, v39, *v20);
              DeviceContainerIdFromBase = v27;
              if ( v27 && v27 != -1073741772 && v27 != -1073741811 && v27 != -1073741637 )
              {
                if ( v27 < 0 )
                  goto LABEL_33;
                break;
              }
              ++v21;
              ++v20;
            }
            v22 = v39;
            v6 = 0LL;
            v23 = 0;
            v34 = 0;
            while ( 1 )
            {
              LOBYTE(v19) = 1;
              DeviceMappedPropertyKeys = CmGetDeviceMappedPropertyKeys(
                                           (_DWORD)a1,
                                           (_DWORD)v22,
                                           (_DWORD)Handle,
                                           v19,
                                           (__int64)v6,
                                           v23,
                                           (__int64)&v34);
              DeviceContainerIdFromBase = DeviceMappedPropertyKeys;
              if ( DeviceMappedPropertyKeys != -1073741789 )
                break;
              v23 = v34;
              if ( 20 * (unsigned __int64)v34 > 0xFFFFFFFF )
                goto LABEL_90;
              if ( v6 )
                ExFreePoolWithTag(v6, 0);
              v6 = (void *)ExAllocatePool2(0x100uLL);
              if ( !v6 )
                goto LABEL_96;
            }
            if ( !DeviceMappedPropertyKeys || DeviceMappedPropertyKeys == -1073741275 )
            {
              for ( j = 0; j < v34; ++j )
              {
                v26 = CmSetDeviceMappedProperty((__int64)a1, v22, Handle, 0LL, (__int64)v6 + 20 * j, 0, 0LL, 0);
                DeviceContainerIdFromBase = v26;
                if ( v26 && v26 != -1073741275 && v26 != -1073741790 && v26 != -1073741802 && v26 != -1073741637 )
                {
                  if ( v26 < 0 )
                    goto LABEL_33;
                  break;
                }
              }
              DeviceContainerIdFromBase = CmDeleteDeviceRegKey(a1, v22, 16LL);
              if ( DeviceContainerIdFromBase >= 0 )
                CmRaiseDeleteEvent((__int64)a1, (__int64)v22, 1u);
            }
          }
LABEL_33:
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
LABEL_35:
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        goto LABEL_39;
      }
    }
  }
LABEL_41:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceContainerIdFromBase;
}
