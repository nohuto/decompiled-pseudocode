/*
 * XREFs of PiDmGetObject @ 0x1409A2D70
 * Callers:
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x1407787B0 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140778860 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407A71F8 (PiPnpRtlEnsureObjectCached.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14098EA84 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectProcessPropertyChange @ 0x140991140 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1409915EC (PiDmObjectGetCachedObjectReference.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1409A2C44 (PiDmGetCmObjectConstraintListFromCache.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1409A4110 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1409A4440 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1409A47F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1409A60B0 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1409A6BD0 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiUEventHandleRegistration @ 0x1409D71F0 (PiUEventHandleRegistration.c)
 *     PiDmCacheDataEncode @ 0x140ADD9AC (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140AFBBCC (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140B350F8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140B41834 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlLookupElementGenericTableAvl @ 0x14042F140 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall PiDmGetObject(int a1, unsigned __int16 *a2, _QWORD *a3)
{
  unsigned int v3; // esi
  struct _ERESOURCE *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int Flink; // r8d
  __int64 v9; // rcx
  _WORD *v10; // rax
  int v11; // eax
  unsigned __int16 v12; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v14; // r9d
  unsigned __int16 v15; // dx
  int v16; // r10d
  struct _LIST_ENTRY *v17; // r11
  unsigned __int64 v18; // r8
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  __int128 *Buffer; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+28h] [rbp-B0h]
  __int128 v30; // [rsp+40h] [rbp-98h] BYREF
  __int128 v31; // [rsp+50h] [rbp-88h]
  __int128 v32; // [rsp+60h] [rbp-78h]
  __int128 v33; // [rsp+70h] [rbp-68h]
  __int128 v34; // [rsp+80h] [rbp-58h]
  __int128 v35; // [rsp+90h] [rbp-48h]
  __int128 v36; // [rsp+A0h] [rbp-38h]

  v3 = 0;
  v6 = 0LL;
  if ( a1 == 3 )
  {
    v6 = &PiDmDeviceInterfaceManager;
  }
  else
  {
    v24 = a1 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 2;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 == 1 )
              v6 = (struct _ERESOURCE *)&PiDmDevicePanelManager;
          }
          else
          {
            v6 = (struct _ERESOURCE *)&PiDmDeviceContainerManager;
          }
        }
        else
        {
          v6 = (struct _ERESOURCE *)&PiDmDeviceInterfaceClassManager;
        }
      }
      else
      {
        v6 = (struct _ERESOURCE *)&PiDmDeviceInstallerClassManager;
      }
    }
    else
    {
      v6 = (struct _ERESOURCE *)&PiDmDeviceManager;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v6, 1u);
  Buffer = &v30;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( !a2 )
    goto LABEL_23;
  Flink = (int)v6[2].SystemResourcesList.Flink;
  v9 = 0x7FFFLL;
  HIDWORD(v31) = Flink;
  v10 = a2;
  *(_QWORD *)&v31 = a2;
  v29 = 0LL;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  v11 = -1073741811;
  if ( v9 )
  {
    v11 = 0;
    v12 = -2 - 2 * v9;
  }
  else
  {
    a2 = (unsigned __int16 *)*((_QWORD *)&v29 + 1);
    v12 = v29;
  }
  if ( v11 < 0 )
    goto LABEL_23;
  if ( Flink == 3 )
  {
    if ( v12 <= 8u )
    {
LABEL_23:
      *a3 = 0LL;
      goto LABEL_24;
    }
    a2 += 4;
  }
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v16 = v15 >> 1;
  v17 = CurrentServerSiloGlobals[75].Flink;
  for ( DWORD2(v31) = 0; v16; v14 = (unsigned __int16)v18 + 65599 * v14 )
  {
    v18 = *a2++;
    --v16;
    if ( (unsigned int)v18 >= 0x61 )
    {
      if ( (unsigned int)v18 > 0x7A )
      {
        if ( v17 && (unsigned __int16)v18 >= 0xC0u )
          LOWORD(v18) = *((_WORD *)&v17->Flink
                        + (v18 & 0xF)
                        + *((unsigned __int16 *)&v17->Flink
                          + ((unsigned __int8)v18 >> 4)
                          + (unsigned int)*((unsigned __int16 *)&v17->Flink + (v18 >> 8))))
                      + v18;
      }
      else
      {
        LOWORD(v18) = v18 - 32;
      }
    }
  }
  DWORD2(v31) = v14;
  v19 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)&v6[1], &Buffer);
  if ( !v19 )
    goto LABEL_23;
  v20 = *v19;
  *a3 = v20;
  if ( !v20 )
  {
LABEL_24:
    v3 = -1073741772;
    goto LABEL_19;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
LABEL_19:
  ExReleaseResourceLite(v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22);
  return v3;
}
