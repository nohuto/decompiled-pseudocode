/*
 * XREFs of PiDcHandleCustomDeviceEvent @ 0x1409DD768
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x1409DD260 (PnpProcessCustomDeviceEvent.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlStringCbCopyW @ 0x140430A90 (RtlStringCbCopyW.c)
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _CmMoveBaseContainer @ 0x140897F70 (_CmMoveBaseContainer.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140909B98 (_CmGetDeviceContainerIdFromBase.c)
 *     PnpQueryDeviceRelations @ 0x14090E10C (PnpQueryDeviceRelations.c)
 *     _CmGetDeviceRegProp @ 0x140996210 (_CmGetDeviceRegProp.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     _CmIsLocalMachineContainer @ 0x140A2A6D8 (_CmIsLocalMachineContainer.c)
 *     PiDcContainerRequiresConfiguration @ 0x140B04F50 (PiDcContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcHandleCustomDeviceEvent(__int64 a1)
{
  int DeviceRelations; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  _DWORD *v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  int v9; // eax
  _DWORD *v10; // rcx
  bool v11; // r14
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  int DeviceRegProp; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD *v21; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszSrc[40]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Str2[40]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str1[40]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t v26[40]; // [rsp+150h] [rbp+50h] BYREF

  DeviceRelations = 0;
  v3 = *(_QWORD *)(a1 + 168);
  v21 = 0LL;
  v19 = 0;
  v20 = 0;
  v4 = *(_QWORD *)(v3 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data1;
  P[0] = 0LL;
  if ( !v4 )
    v4 = *(_QWORD *)(v3 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data4;
  if ( !v4 )
  {
    DeviceRelations = PiPnpRtlBeginOperation(P);
    if ( DeviceRelations >= 0 )
    {
      DeviceRelations = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 160), 6, 0LL, (__int64)&v21);
      if ( DeviceRelations >= 0 )
      {
        v6 = v21;
        if ( !v21 )
        {
LABEL_38:
          if ( P[0] )
            PiPnpRtlEndOperation((char *)P[0]);
          return (unsigned int)DeviceRelations;
        }
        if ( !*v21 )
        {
LABEL_35:
          if ( v6 )
          {
            v18 = 0LL;
            if ( *v6 )
            {
              do
              {
                ObfDereferenceObject(*(PVOID *)&v6[2 * v18 + 2]);
                v6 = v21;
                v18 = (unsigned int)(v18 + 1);
              }
              while ( (unsigned int)v18 < *v21 );
            }
          }
          goto LABEL_38;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        v19 = 78;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    a1 + 176,
                    0LL,
                    0x25u,
                    (__int64)&v20,
                    (__int64)Str1,
                    (__int64)&v19,
                    0) >= 0
          && v20 == 1
          && v19 == 78 )
        {
          DeviceRelations = CmGetDeviceContainerIdFromBase(*(_QWORD **)&PiPnpRtlCtx, a1 + 176, Str1, Str2);
          if ( DeviceRelations >= 0 )
          {
            v8 = 0LL;
            v9 = wcsicmp(Str1, Str2);
            v10 = v21;
            v11 = v9 != 0;
            while ( (unsigned int)v8 < *v10 )
            {
              v12 = *(_QWORD *)&v10[2 * v8 + 2];
              if ( v12 )
              {
                v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
                if ( v13 )
                {
                  v14 = *(_QWORD *)(v13 + 48);
                  if ( v14 )
                  {
                    v19 = 78;
                    DeviceRegProp = CmGetDeviceRegProp(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      v14,
                                      0LL,
                                      0x25u,
                                      (__int64)&v20,
                                      (__int64)v26,
                                      (__int64)&v19,
                                      0);
                    DeviceRelations = DeviceRegProp;
                    if ( DeviceRegProp != -1073741275 )
                    {
                      if ( DeviceRegProp < 0 || v20 != 1 || v19 != 78 )
                        goto LABEL_32;
                      DeviceRelations = CmGetDeviceContainerIdFromBase(*(_QWORD **)&PiPnpRtlCtx, v14, v26, pszSrc);
                      if ( DeviceRelations < 0 )
                        break;
                      if ( !v11 )
                      {
                        DeviceRelations = CmMoveBaseContainer(v16, (__int64)Str1, (__int64)Str2, (int)pszSrc);
                        PiDcContainerRequiresConfiguration(pszSrc);
                        if ( DeviceRelations < 0 )
                          break;
                        DeviceRelations = RtlStringCbCopyW(Str2, 0x4EuLL, pszSrc);
                        if ( DeviceRelations < 0 )
                          break;
                        v11 = 1;
                      }
                      if ( wcsicmp(pszSrc, Str2) )
                      {
                        if ( !(unsigned __int8)CmIsLocalMachineContainer(*(_QWORD *)&PiPnpRtlCtx, pszSrc) )
                        {
                          DeviceRelations = CmMoveBaseContainer(v17, (__int64)v26, (__int64)pszSrc, (int)Str2);
                          PiDcContainerRequiresConfiguration(Str2);
                          if ( DeviceRelations < 0 )
                            break;
                        }
                      }
                    }
                    v10 = v21;
                  }
                }
              }
              v8 = (unsigned int)(v8 + 1);
            }
          }
        }
        else
        {
LABEL_32:
          DeviceRelations = -1073739509;
        }
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
      }
    }
    v6 = v21;
    goto LABEL_35;
  }
  return (unsigned int)DeviceRelations;
}
