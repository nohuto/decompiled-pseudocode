/*
 * XREFs of PiDmObjectGetCachedObjectProperty @ 0x140965250
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14095204C (PiDmObjectGetCachedObjectReference.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140964EA0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectProperty(
        int a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        _DWORD *a6,
        GUID *a7,
        unsigned int a8,
        unsigned int *a9)
{
  GUID *v9; // r12
  struct _ERESOURCE *v12; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int Flink; // r8d
  __int64 v15; // rcx
  unsigned __int16 *v16; // rax
  int v17; // eax
  unsigned __int16 Length; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v20; // r9d
  unsigned __int16 *v21; // r11
  unsigned __int16 v22; // dx
  int v23; // r10d
  struct _LIST_ENTRY *v24; // rbx
  unsigned __int64 v25; // r8
  __int64 *v26; // rax
  __int64 v27; // rdi
  _QWORD *v28; // r10
  unsigned int v29; // r14d
  struct _KLOCK_ENTRIES *v30; // r9
  char v31; // r12
  signed __int64 *v32; // rsi
  int CachedObjectPropertyData; // r15d
  DEVPROPKEY **v34; // r8
  unsigned int i; // ebx
  DEVPROPKEY *v36; // rdx
  signed __int64 v38; // rax
  signed __int64 v39; // rdx
  signed __int64 v40; // rtt
  signed __int64 *v41; // rcx
  __int64 v42; // rcx
  struct _KTHREAD *v43; // rax
  void *v44; // rdx
  LegacyAutoBoost *v45; // r14
  signed __int64 *v46; // rdx
  unsigned int v47; // ecx
  int v48; // eax
  __int64 v49; // rax
  unsigned int v51; // eax
  signed __int64 *v52; // rbx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // eax
  unsigned int v57; // eax
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  unsigned int v62; // [rsp+40h] [rbp-C0h]
  GUID *Guid; // [rsp+58h] [rbp-A8h]
  signed __int64 *v64; // [rsp+60h] [rbp-A0h] BYREF
  void *Buf1; // [rsp+68h] [rbp-98h]
  unsigned int v66; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int128 *Buffer; // [rsp+88h] [rbp-78h] BYREF
  __int128 v69; // [rsp+90h] [rbp-70h] BYREF
  __int128 v70; // [rsp+A0h] [rbp-60h]
  __int128 v71; // [rsp+B0h] [rbp-50h]
  __int128 v72; // [rsp+C0h] [rbp-40h]
  __int128 v73; // [rsp+D0h] [rbp-30h]
  __int128 v74; // [rsp+E0h] [rbp-20h]
  __int128 v75; // [rsp+F0h] [rbp-10h]

  v9 = a7;
  Buf1 = a5;
  v66 = a1;
  Guid = a7;
  v64 = 0LL;
  if ( a7 )
  {
    v62 = a8;
    if ( !a8 )
      v9 = 0LL;
    Guid = v9;
  }
  else
  {
    v62 = 0;
  }
  if ( a1 >= 7 || a4 )
    return 3221225494LL;
  v12 = 0LL;
  if ( a1 == 3 )
  {
    v12 = &PiDmDeviceInterfaceManager;
  }
  else
  {
    v58 = a1 - 1;
    if ( v58 )
    {
      v59 = v58 - 1;
      if ( v59 )
      {
        v60 = v59 - 2;
        if ( v60 )
        {
          v61 = v60 - 1;
          if ( v61 )
          {
            if ( v61 == 1 )
              v12 = (struct _ERESOURCE *)&PiDmDevicePanelManager;
          }
          else
          {
            v12 = (struct _ERESOURCE *)&PiDmDeviceContainerManager;
          }
        }
        else
        {
          v12 = (struct _ERESOURCE *)&PiDmDeviceInterfaceClassManager;
        }
      }
      else
      {
        v12 = (struct _ERESOURCE *)&PiDmDeviceInstallerClassManager;
      }
    }
    else
    {
      v12 = (struct _ERESOURCE *)&PiDmDeviceManager;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v12, 1u);
  Buffer = &v69;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  if ( !a2 )
    goto LABEL_35;
  Flink = (int)v12[2].SystemResourcesList.Flink;
  v15 = 0x7FFFLL;
  HIDWORD(v70) = Flink;
  v16 = a2;
  *(_QWORD *)&v70 = a2;
  DestinationString = 0LL;
  do
  {
    if ( !*v16 )
      break;
    ++v16;
    --v15;
  }
  while ( v15 );
  v17 = -1073741811;
  if ( v15 )
  {
    v17 = 0;
    Length = -2 - 2 * v15;
  }
  else
  {
    Length = DestinationString.Length;
  }
  if ( v17 < 0 || Flink == 3 && Length <= 8u )
    goto LABEL_35;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v23 = v22 >> 1;
  v24 = CurrentServerSiloGlobals[75].Flink;
  for ( DWORD2(v70) = 0; v23; v20 = (unsigned __int16)v25 + 65599 * v20 )
  {
    v25 = *v21++;
    --v23;
    if ( (unsigned int)v25 >= 0x61 )
    {
      if ( (unsigned int)v25 > 0x7A )
      {
        if ( v24 && (unsigned __int16)v25 >= 0xC0u )
          LOWORD(v25) = *((_WORD *)&v24->Flink
                        + (v25 & 0xF)
                        + *((unsigned __int16 *)&v24->Flink
                          + ((unsigned __int8)v25 >> 4)
                          + (unsigned int)*((unsigned __int16 *)&v24->Flink + (v25 >> 8))))
                      + v25;
      }
      else
      {
        LOWORD(v25) = v25 - 32;
      }
    }
  }
  DWORD2(v70) = v20;
  v26 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)&v12[1], &Buffer);
  if ( !v26 || (v27 = *v26) == 0 )
  {
LABEL_35:
    ExReleaseResourceLite(v12);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 3221225524LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
  ExReleaseResourceLite(v12);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v28 = Buf1;
  v29 = 3;
  if ( a1 == 3 && *((_DWORD *)Buf1 + 4) == 2 )
  {
    if ( !memcmp(Buf1, &DEVPKEY_Device_ContainerId, 0x10uLL)
      && (int)PiDmObjectGetCachedObjectReference(
                3u,
                (__int64)a2,
                (struct _KTHREAD *)v27,
                (__int64)&DEVPKEY_Device_InstanceId,
                &v64) >= 0 )
    {
      v52 = v64;
      CachedObjectPropertyData = PiDmObjectGetCachedObjectPropertyData(
                                   *((_DWORD *)v64 + 7),
                                   (unsigned __int16 *)v64[2],
                                   v64,
                                   (__int64)Buf1,
                                   a6,
                                   v9,
                                   v62,
                                   a9);
      v41 = v52;
LABEL_43:
      PiDmObjectRelease(v41);
      goto LABEL_44;
    }
    v28 = Buf1;
  }
  v30 = (struct _KLOCK_ENTRIES *)v66;
  v31 = 0;
  v64 = (signed __int64 *)v27;
  v32 = (signed __int64 *)v27;
  CachedObjectPropertyData = -1073741802;
  switch ( v66 )
  {
    case 1u:
      v34 = &PiDmCachedDeviceKeys;
      v29 = 10;
LABEL_25:
      for ( i = 0; ; ++i )
      {
        if ( i >= v29 )
          goto LABEL_44;
        v36 = v34[3 * i];
        if ( *((_DWORD *)v28 + 4) == v36->pid )
        {
          v42 = *v28 - *(_QWORD *)&v36->fmtid.Data1;
          if ( *v28 == *(_QWORD *)&v36->fmtid.Data1 )
            v42 = v28[1] - *(_QWORD *)v36->fmtid.Data4;
          if ( !v42 )
            break;
        }
      }
      if ( !v27 )
      {
        CachedObjectPropertyData = PiDmGetObject(v66, a2, &v64);
        if ( CachedObjectPropertyData < 0 )
          break;
        v32 = v64;
        v31 = 1;
      }
      v43 = KeGetCurrentThread();
      --v43->KernelApcDisable;
      v45 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v32, 0LL, 0LL, v30);
      if ( _InterlockedCompareExchange64(v32, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v32, 0, v45, (struct _KTHREAD *)v32);
      if ( v45 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v45, v44);
        else
          *((_BYTE *)v45 + 10) = 1;
      }
      v46 = &v32[3 * i];
      v47 = *((_DWORD *)v46 + 28);
      if ( v47 <= 1 )
      {
        CachedObjectPropertyData = -1073741802;
        goto LABEL_37;
      }
      CachedObjectPropertyData = 0;
      DestinationString = 0LL;
      if ( v47 == 6 )
      {
        v48 = *((_DWORD *)v46 + 30);
        if ( v48 == 18 )
        {
          *a6 = 18;
          v49 = -1LL;
          while ( *(_WORD *)(*(_QWORD *)(v46[16] + 16) + 2 * v49++ + 2) != 0 )
            ;
          v51 = 2 * v49 + 2;
          *a9 = v51;
          if ( v62 < v51 )
            goto LABEL_61;
          memmove(Guid, *(const void **)(v46[16] + 16), v51);
LABEL_37:
          _m_prefetchw(v32);
          v38 = *v32;
          v39 = *v32 - 16;
          if ( (*v32 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v39 = 0LL;
          if ( (v38 & 2) != 0 || (v40 = *v32, v40 != _InterlockedCompareExchange64(v32, v39, v38)) )
            ExfReleasePushLock(v32);
          KeAbPostRelease((unsigned __int64)v32);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v31 )
          {
            v41 = v32;
            goto LABEL_43;
          }
          break;
        }
        if ( v48 != 13 )
        {
          CachedObjectPropertyData = -1073741595;
          goto LABEL_37;
        }
        *a6 = 13;
        *a9 = 16;
        if ( v62 >= 0x10 )
        {
          RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v46[16] + 16));
          CachedObjectPropertyData = RtlGUIDFromString(&DestinationString, Guid);
          goto LABEL_37;
        }
      }
      else
      {
        v53 = v47 - 2;
        if ( !v53 )
        {
          CachedObjectPropertyData = -1073741275;
          goto LABEL_37;
        }
        v54 = v53 - 1;
        if ( v54 )
        {
          v55 = v54 - 1;
          if ( v55 )
          {
            if ( v55 != 1 )
            {
              CachedObjectPropertyData = -1073741595;
              goto LABEL_37;
            }
            *a6 = *((_DWORD *)v46 + 30);
            v56 = *((_DWORD *)v46 + 31);
            *a9 = v56;
            if ( v62 >= v56 )
            {
              memmove(Guid, (const void *)v46[16], v56);
              goto LABEL_37;
            }
          }
          else
          {
            *a6 = 13;
            *a9 = 16;
            if ( v62 >= 0x10 )
            {
              *Guid = *(GUID *)(v46 + 15);
              goto LABEL_37;
            }
          }
        }
        else
        {
          *a6 = *((_DWORD *)v46 + 30);
          v57 = *((_DWORD *)v46 + 31);
          *a9 = v57;
          if ( v62 >= v57 )
          {
            memmove(Guid, v46 + 16, v57);
            goto LABEL_37;
          }
        }
      }
LABEL_61:
      CachedObjectPropertyData = -1073741789;
      goto LABEL_37;
    case 3u:
      v34 = &PiDmCachedDeviceInterfaceKeys;
      v29 = 1;
      goto LABEL_25;
    case 5u:
      v34 = &PiDmCachedDeviceContainerKeys;
      goto LABEL_25;
  }
LABEL_44:
  PiDmObjectRelease((PVOID)v27);
  return (unsigned int)CachedObjectPropertyData;
}
