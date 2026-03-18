/*
 * XREFs of _CmUpdateDevicePanelInterface @ 0x140AF175C
 * Callers:
 *     PiPnpRtlSetObjectProperty @ 0x1409DBA24 (PiPnpRtlSetObjectProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x1409DBEB0 (_PnpSetObjectProperty.c)
 *     _CmQueryDevicePanelPldProperty @ 0x140AF1950 (_CmQueryDevicePanelPldProperty.c)
 *     _CmGetParentDeviceContainerId @ 0x140B2C028 (_CmGetParentDeviceContainerId.c)
 *     _CmBuildDevicePanelId @ 0x140B39C14 (_CmBuildDevicePanelId.c)
 *     _CmGetDevicePanelGroup @ 0x140B480C8 (_CmGetDevicePanelGroup.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmUpdateDevicePanelInterface(__int64 a1, __int64 a2, char *a3)
{
  _WORD *v6; // rdi
  int DevicePanelPldProperty; // eax
  int ObjectProperty; // ebx
  __int64 v10; // r14
  __int64 Pool2; // rax
  void *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int DevicePanelGroup; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v19; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v20; // [rsp+68h] [rbp-11h] BYREF
  int v21; // [rsp+6Ch] [rbp-Dh] BYREF
  int v22; // [rsp+70h] [rbp-9h] BYREF
  int v23; // [rsp+74h] [rbp-5h] BYREF
  __int64 v24; // [rsp+78h] [rbp-1h] BYREF
  PVOID P; // [rsp+80h] [rbp+7h] BYREF
  __int128 v26; // [rsp+88h] [rbp+Fh] BYREF

  P = 0LL;
  v23 = 0;
  v24 = 0LL;
  v22 = 0;
  DevicePanelGroup = 0;
  v26 = 0LL;
  v19 = 0;
  v6 = 0LL;
  v21 = 0;
  v20 = 0;
  DevicePanelPldProperty = CmQueryDevicePanelPldProperty(
                             a1,
                             a2,
                             3,
                             (_DWORD)a3,
                             (__int64)&DEVPKEY_Device_PhysicalDeviceLocation,
                             (__int64)&P,
                             (__int64)&v23,
                             (__int64)&v24,
                             (__int64)&v22);
  ObjectProperty = DevicePanelPldProperty;
  if ( DevicePanelPldProperty == -1073741275 )
  {
    ObjectProperty = 0;
  }
  else
  {
    if ( DevicePanelPldProperty < 0 )
      goto LABEL_3;
    v10 = v24;
    if ( v24 )
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
                           &v21,
                           Pool2,
                           0x190u,
                           (__int64)&v20,
                           0);
        if ( ObjectProperty >= 0 )
        {
          if ( v21 == 18 && v20 >= 2 )
          {
            ObjectProperty = CmGetParentDeviceContainerId(a1, v12, &v26);
            if ( ObjectProperty >= 0 )
            {
              DevicePanelGroup = CmGetDevicePanelGroup(v10, v13, v14);
              v15 = 0;
              if ( ((*(_DWORD *)(v10 + 8) >> 3) & 7) != 7 )
                v15 = dword_1400234C8[(*(_DWORD *)(v10 + 8) >> 3) & 7];
              v19 = v15;
              v16 = ExAllocatePool2(0x100uLL);
              v6 = (_WORD *)v16;
              if ( v16 )
              {
                ObjectProperty = CmBuildDevicePanelId(&v26, DevicePanelGroup, v19, v16);
                if ( ObjectProperty >= 0 )
                {
                  v17 = -1LL;
                  do
                    ++v17;
                  while ( v6[v17] );
                  ObjectProperty = PnpSetObjectProperty(
                                     a1,
                                     a2,
                                     3,
                                     (__int64)a3,
                                     0LL,
                                     (__int64)DEVPKEY_Device_PanelId,
                                     18,
                                     (__int64)v6,
                                     2 * (int)v17 + 2,
                                     0);
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = PnpSetObjectProperty(
                                       a1,
                                       a2,
                                       3,
                                       (__int64)a3,
                                       0LL,
                                       (__int64)DEVPKEY_Device_PanelGroup,
                                       7,
                                       (__int64)&DevicePanelGroup,
                                       4u,
                                       0);
                    if ( ObjectProperty >= 0 )
                      ObjectProperty = PnpSetObjectProperty(
                                         a1,
                                         a2,
                                         3,
                                         (__int64)a3,
                                         0LL,
                                         (__int64)DEVPKEY_Device_PanelSide,
                                         7,
                                         (__int64)&v19,
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
                       3,
                       a3,
                       0LL,
                       (__int64)DEVPKEY_Device_PanelId,
                       &v21,
                       0LL,
                       0,
                       (__int64)&v20,
                       0) == -1073741789 )
  {
    PnpSetObjectProperty(a1, a2, 3, 0LL, 0LL, (__int64)DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
    PnpSetObjectProperty(a1, a2, 3, 0LL, 0LL, (__int64)DEVPKEY_Device_PanelGroup, 0, 0LL, 0, 0);
    PnpSetObjectProperty(a1, a2, 3, 0LL, 0LL, (__int64)DEVPKEY_Device_PanelSide, 0, 0LL, 0, 0);
  }
LABEL_3:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
