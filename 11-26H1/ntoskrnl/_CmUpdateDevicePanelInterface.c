/*
 * XREFs of _CmUpdateDevicePanelInterface @ 0x140A151A0
 * Callers:
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _CmQueryDevicePanelPldProperty @ 0x140A156F0 (_CmQueryDevicePanelPldProperty.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     _CmGetParentDeviceContainerId @ 0x140B2E0A8 (_CmGetParentDeviceContainerId.c)
 *     _CmBuildDevicePanelId @ 0x140B3BE24 (_CmBuildDevicePanelId.c)
 *     _CmGetDevicePanelGroup @ 0x140B49E58 (_CmGetDevicePanelGroup.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmUpdateDevicePanelInterface(__int64 a1, __int64 a2, char *a3)
{
  _WORD *v6; // rdi
  int DevicePanelPldProperty; // eax
  int ObjectProperty; // ebx
  __int64 v10; // r14
  __int64 Pool2; // rax
  void *v12; // r12
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int DevicePanelGroup; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v17; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v18; // [rsp+68h] [rbp-11h] BYREF
  int v19; // [rsp+6Ch] [rbp-Dh] BYREF
  int v20; // [rsp+70h] [rbp-9h] BYREF
  int v21; // [rsp+74h] [rbp-5h] BYREF
  __int64 v22; // [rsp+78h] [rbp-1h] BYREF
  PVOID P; // [rsp+80h] [rbp+7h] BYREF
  __int128 v24; // [rsp+88h] [rbp+Fh] BYREF

  P = 0LL;
  v21 = 0;
  v22 = 0LL;
  v20 = 0;
  DevicePanelGroup = 0;
  v24 = 0LL;
  v17 = 0;
  v6 = 0LL;
  v19 = 0;
  v18 = 0;
  DevicePanelPldProperty = CmQueryDevicePanelPldProperty(
                             a1,
                             a2,
                             3,
                             (_DWORD)a3,
                             (__int64)&DEVPKEY_Device_PhysicalDeviceLocation,
                             (__int64)&P,
                             (__int64)&v21,
                             (__int64)&v22,
                             (__int64)&v20);
  ObjectProperty = DevicePanelPldProperty;
  if ( DevicePanelPldProperty == -1073741275 )
  {
    ObjectProperty = 0;
  }
  else
  {
    if ( DevicePanelPldProperty < 0 )
      goto LABEL_3;
    v10 = v22;
    if ( v22 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v12 = (void *)Pool2;
      if ( Pool2 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           a1,
                           a2,
                           3,
                           a3,
                           0LL,
                           (__int64)&DEVPKEY_Device_InstanceId,
                           &v19,
                           Pool2,
                           0x190u,
                           (__int64)&v18,
                           0);
        if ( ObjectProperty >= 0 )
        {
          if ( v19 == 18 && v18 >= 2 )
          {
            ObjectProperty = CmGetParentDeviceContainerId(a1, v12, &v24);
            if ( ObjectProperty >= 0 )
            {
              DevicePanelGroup = CmGetDevicePanelGroup(v10);
              v13 = 0;
              if ( ((*(_DWORD *)(v10 + 8) >> 3) & 7) != 7 )
                v13 = dword_140022D28[(*(_DWORD *)(v10 + 8) >> 3) & 7];
              v17 = v13;
              v14 = ExAllocatePool2(0x100uLL);
              v6 = (_WORD *)v14;
              if ( v14 )
              {
                ObjectProperty = CmBuildDevicePanelId(&v24, DevicePanelGroup, v17, v14);
                if ( ObjectProperty >= 0 )
                {
                  v15 = -1LL;
                  do
                    ++v15;
                  while ( v6[v15] );
                  ObjectProperty = PnpSetObjectProperty(
                                     a1,
                                     a2,
                                     3,
                                     0LL,
                                     (__int64)DEVPKEY_Device_PanelId,
                                     18,
                                     (__int64)v6,
                                     2 * (int)v15 + 2,
                                     0);
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = PnpSetObjectProperty(
                                       a1,
                                       a2,
                                       3,
                                       0LL,
                                       (__int64)DEVPKEY_Device_PanelGroup,
                                       7,
                                       (__int64)&DevicePanelGroup,
                                       4,
                                       0);
                    if ( ObjectProperty >= 0 )
                      ObjectProperty = PnpSetObjectProperty(
                                         a1,
                                         a2,
                                         3,
                                         0LL,
                                         (__int64)DEVPKEY_Device_PanelSide,
                                         7,
                                         (__int64)&v17,
                                         4,
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
                       3,
                       a3,
                       0LL,
                       (__int64)DEVPKEY_Device_PanelId,
                       &v19,
                       0LL,
                       0,
                       (__int64)&v18,
                       0) == -1073741789 )
  {
    PnpSetObjectProperty(a1, a2, 3, 0LL, (__int64)DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
    PnpSetObjectProperty(a1, a2, 3, 0LL, (__int64)DEVPKEY_Device_PanelGroup, 0, 0LL, 0, 0);
    PnpSetObjectProperty(a1, a2, 3, 0LL, (__int64)DEVPKEY_Device_PanelSide, 0, 0LL, 0, 0);
  }
LABEL_3:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
