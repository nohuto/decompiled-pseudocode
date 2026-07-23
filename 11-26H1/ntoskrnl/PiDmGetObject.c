/*
 * XREFs of PiDmGetObject @ 0x1409637D0
 * Callers:
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14077B650 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x14077B700 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407A9DA8 (PiPnpRtlEnsureObjectCached.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectProcessPropertyChange @ 0x140951BA0 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14095204C (PiDmObjectGetCachedObjectReference.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1409636A4 (PiDmGetCmObjectConstraintListFromCache.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x140964B70 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140964EA0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140965250 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140966B10 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140967630 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiUEventHandleRegistration @ 0x1409A80E0 (PiUEventHandleRegistration.c)
 *     PiDmCacheDataEncode @ 0x140ADA71C (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140AFD84C (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140B37308 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140B43844 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  __int128 *Buffer; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+28h] [rbp-B0h]
  __int128 v28; // [rsp+40h] [rbp-98h] BYREF
  __int128 v29; // [rsp+50h] [rbp-88h]
  __int128 v30; // [rsp+60h] [rbp-78h]
  __int128 v31; // [rsp+70h] [rbp-68h]
  __int128 v32; // [rsp+80h] [rbp-58h]
  __int128 v33; // [rsp+90h] [rbp-48h]
  __int128 v34; // [rsp+A0h] [rbp-38h]

  v3 = 0;
  v6 = 0LL;
  if ( a1 == 3 )
  {
    v6 = &PiDmDeviceInterfaceManager;
  }
  else
  {
    v22 = a1 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 2;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            if ( v25 == 1 )
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
  Buffer = &v28;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( !a2 )
    goto LABEL_23;
  Flink = (int)v6[2].SystemResourcesList.Flink;
  v9 = 0x7FFFLL;
  HIDWORD(v29) = Flink;
  v10 = a2;
  *(_QWORD *)&v29 = a2;
  v27 = 0LL;
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
    a2 = (unsigned __int16 *)*((_QWORD *)&v27 + 1);
    v12 = v27;
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
  for ( DWORD2(v29) = 0; v16; v14 = (unsigned __int16)v18 + 65599 * v14 )
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
  DWORD2(v29) = v14;
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
