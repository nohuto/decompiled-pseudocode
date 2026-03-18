/*
 * XREFs of _CmUpdateDevicePanelInterface @ 0x140A44F60
 * Callers:
 *     PiPnpRtlSetObjectProperty @ 0x140955470 (PiPnpRtlSetObjectProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x1409558B8 (_PnpSetObjectProperty.c)
 *     _CmQueryDevicePanelPldProperty @ 0x140A45C04 (_CmQueryDevicePanelPldProperty.c)
 *     _CmGetDevicePanelGroup @ 0x140A9CDE0 (_CmGetDevicePanelGroup.c)
 *     _CmBuildDevicePanelId @ 0x140AA6C40 (_CmBuildDevicePanelId.c)
 *     _CmGetParentDeviceContainerId @ 0x140AB15A4 (_CmGetParentDeviceContainerId.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmUpdateDevicePanelInterface(_QWORD *a1, const WCHAR *a2, void *a3)
{
  _WORD *v6; // rdi
  int DevicePanelPldProperty; // eax
  int ObjectProperty; // ebx
  __int64 v10; // r14
  void *Pool2; // rax
  void *v12; // r12
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v17; // [rsp+68h] [rbp-11h] BYREF
  int v18; // [rsp+6Ch] [rbp-Dh] BYREF
  int v19; // [rsp+70h] [rbp-9h] BYREF
  int v20; // [rsp+74h] [rbp-5h] BYREF
  __int64 v21; // [rsp+78h] [rbp-1h] BYREF
  PVOID P; // [rsp+80h] [rbp+7h] BYREF
  __int128 v23; // [rsp+88h] [rbp+Fh] BYREF

  P = 0LL;
  v20 = 0;
  v21 = 0LL;
  v19 = 0;
  v16 = 0LL;
  v23 = 0LL;
  v6 = 0LL;
  v18 = 0;
  v17 = 0;
  DevicePanelPldProperty = CmQueryDevicePanelPldProperty(
                             (_DWORD)a1,
                             (_DWORD)a2,
                             3,
                             (_DWORD)a3,
                             (__int64)&DEVPKEY_Device_PhysicalDeviceLocation,
                             (__int64)&P,
                             (__int64)&v20,
                             (__int64)&v21,
                             (__int64)&v19);
  ObjectProperty = DevicePanelPldProperty;
  if ( DevicePanelPldProperty == -1073741275 )
  {
    ObjectProperty = 0;
  }
  else
  {
    if ( DevicePanelPldProperty < 0 )
      goto LABEL_3;
    v10 = v21;
    if ( v21 )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v12 = Pool2;
      if ( Pool2 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           a1,
                           a2,
                           3u,
                           a3,
                           0LL,
                           (__int64)&DEVPKEY_Device_InstanceId,
                           &v18,
                           Pool2,
                           0x190u,
                           (__int64)&v17,
                           0);
        if ( ObjectProperty >= 0 )
        {
          if ( v18 == 18 && v17 >= 2 )
          {
            ObjectProperty = CmGetParentDeviceContainerId(a1, v12, &v23);
            if ( ObjectProperty >= 0 )
            {
              LODWORD(v16) = CmGetDevicePanelGroup(v10);
              v13 = 0;
              if ( ((*(_DWORD *)(v10 + 8) >> 3) & 7) != 7 )
                v13 = dword_140041420[(*(_DWORD *)(v10 + 8) >> 3) & 7];
              HIDWORD(v16) = v13;
              v14 = ExAllocatePool2(0x100uLL);
              v6 = (_WORD *)v14;
              if ( v14 )
              {
                ObjectProperty = CmBuildDevicePanelId(&v23, (unsigned int)v16, HIDWORD(v16), v14);
                if ( ObjectProperty >= 0 )
                {
                  v15 = -1LL;
                  do
                    ++v15;
                  while ( v6[v15] );
                  ObjectProperty = PnpSetObjectProperty(
                                     (__int64)a1,
                                     (__int64)a2,
                                     3,
                                     (__int64)a3,
                                     0LL,
                                     (__int64)&DEVPKEY_Device_PanelId,
                                     18,
                                     (__int64)v6,
                                     2 * (int)v15 + 2,
                                     0);
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = PnpSetObjectProperty(
                                       (__int64)a1,
                                       (__int64)a2,
                                       3,
                                       (__int64)a3,
                                       0LL,
                                       (__int64)&DEVPKEY_Device_PanelGroup,
                                       7,
                                       (__int64)&v16,
                                       4u,
                                       0);
                    if ( ObjectProperty >= 0 )
                      ObjectProperty = PnpSetObjectProperty(
                                         (__int64)a1,
                                         (__int64)a2,
                                         3,
                                         (__int64)a3,
                                         0LL,
                                         (__int64)&DEVPKEY_Device_PanelSide,
                                         7,
                                         (__int64)&v16 + 4,
                                         4u,
                                         0);
                  }
                }
              }
              else
              {
                ObjectProperty = -1073741801;
              }
            }
          }
          else
          {
            ObjectProperty = -1073741823;
          }
        }
        ExFreePoolWithTag(v12, 0);
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
      }
      else
      {
        ObjectProperty = -1073741801;
      }
      goto LABEL_3;
    }
  }
  if ( (unsigned int)PnpGetObjectProperty(
                       a1,
                       a2,
                       3u,
                       a3,
                       0LL,
                       (__int64)&DEVPKEY_Device_PanelId,
                       &v18,
                       0LL,
                       0,
                       (__int64)&v17,
                       0) == -1073741789 )
  {
    PnpSetObjectProperty((__int64)a1, (__int64)a2, 3, 0LL, 0LL, (__int64)&DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
    PnpSetObjectProperty((__int64)a1, (__int64)a2, 3, 0LL, 0LL, (__int64)&DEVPKEY_Device_PanelGroup, 0, 0LL, 0, 0);
    PnpSetObjectProperty((__int64)a1, (__int64)a2, 3, 0LL, 0LL, (__int64)&DEVPKEY_Device_PanelSide, 0, 0LL, 0, 0);
  }
LABEL_3:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
