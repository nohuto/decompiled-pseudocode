/*
 * XREFs of PiDmObjectGetCachedObjectProperty @ 0x1409A47F0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     RtlLookupElementGenericTableAvl @ 0x14042F140 (RtlLookupElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1409915EC (PiDmObjectGetCachedObjectReference.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 *     PiDmGetObject @ 0x1409A2D70 (PiDmGetObject.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1409A4440 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectRelease @ 0x1409A6000 (PiDmObjectRelease.c)
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
  __int64 v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // r10
  unsigned int v31; // r14d
  struct _KLOCK_ENTRIES *v32; // r9
  char v33; // r12
  signed __int64 *v34; // rsi
  int CachedObjectPropertyData; // r15d
  DEVPROPKEY **v36; // r8
  unsigned int i; // ebx
  DEVPROPKEY *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r8
  signed __int64 v42; // rax
  signed __int64 v43; // rdx
  signed __int64 v44; // rtt
  __int64 v45; // rdx
  __int64 v46; // r8
  signed __int64 *v47; // rcx
  __int64 v48; // rcx
  struct _KTHREAD *v49; // rax
  void *v50; // rdx
  LegacyAutoBoost *v51; // r14
  signed __int64 *v52; // rdx
  unsigned int v53; // ecx
  int v54; // eax
  __int64 v55; // rax
  unsigned int v57; // eax
  signed __int64 *v58; // rbx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // eax
  unsigned int v63; // eax
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  unsigned int v68; // [rsp+40h] [rbp-C0h]
  GUID *Guid; // [rsp+58h] [rbp-A8h]
  signed __int64 *v70; // [rsp+60h] [rbp-A0h] BYREF
  void *Buf1; // [rsp+68h] [rbp-98h]
  unsigned int v72; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int128 *Buffer; // [rsp+88h] [rbp-78h] BYREF
  __int128 v75; // [rsp+90h] [rbp-70h] BYREF
  __int128 v76; // [rsp+A0h] [rbp-60h]
  __int128 v77; // [rsp+B0h] [rbp-50h]
  __int128 v78; // [rsp+C0h] [rbp-40h]
  __int128 v79; // [rsp+D0h] [rbp-30h]
  __int128 v80; // [rsp+E0h] [rbp-20h]
  __int128 v81; // [rsp+F0h] [rbp-10h]

  v9 = a7;
  Buf1 = a5;
  v72 = a1;
  Guid = a7;
  v70 = 0LL;
  if ( a7 )
  {
    v68 = a8;
    if ( !a8 )
      v9 = 0LL;
    Guid = v9;
  }
  else
  {
    v68 = 0;
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
    v64 = a1 - 1;
    if ( v64 )
    {
      v65 = v64 - 1;
      if ( v65 )
      {
        v66 = v65 - 2;
        if ( v66 )
        {
          v67 = v66 - 1;
          if ( v67 )
          {
            if ( v67 == 1 )
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
  Buffer = &v75;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( !a2 )
    goto LABEL_35;
  Flink = (int)v12[2].SystemResourcesList.Flink;
  v15 = 0x7FFFLL;
  HIDWORD(v76) = Flink;
  v16 = a2;
  *(_QWORD *)&v76 = a2;
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
  for ( DWORD2(v76) = 0; v23; v20 = (unsigned __int16)v25 + 65599 * v20 )
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
  DWORD2(v76) = v20;
  v26 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)&v12[1], &Buffer);
  if ( !v26 || (v27 = *v26) == 0 )
  {
LABEL_35:
    ExReleaseResourceLite(v12);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v39, v40);
    return 3221225524LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
  ExReleaseResourceLite(v12);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v28, v29);
  v30 = Buf1;
  v31 = 3;
  if ( a1 == 3 && *((_DWORD *)Buf1 + 4) == 2 )
  {
    if ( !memcmp(Buf1, &DEVPKEY_Device_ContainerId, 0x10uLL)
      && (int)PiDmObjectGetCachedObjectReference(
                3u,
                (__int64)a2,
                (struct _KTHREAD *)v27,
                (__int64)&DEVPKEY_Device_InstanceId,
                &v70) >= 0 )
    {
      v58 = v70;
      CachedObjectPropertyData = PiDmObjectGetCachedObjectPropertyData(
                                   *((_DWORD *)v70 + 7),
                                   (unsigned __int16 *)v70[2],
                                   v70,
                                   (__int64)Buf1,
                                   a6,
                                   v9,
                                   v68,
                                   a9);
      v47 = v58;
LABEL_43:
      PiDmObjectRelease(v47);
      goto LABEL_44;
    }
    v30 = Buf1;
  }
  v32 = (struct _KLOCK_ENTRIES *)v72;
  v33 = 0;
  v70 = (signed __int64 *)v27;
  v34 = (signed __int64 *)v27;
  CachedObjectPropertyData = -1073741802;
  switch ( v72 )
  {
    case 1u:
      v36 = &PiDmCachedDeviceKeys;
      v31 = 10;
LABEL_25:
      for ( i = 0; ; ++i )
      {
        if ( i >= v31 )
          goto LABEL_44;
        v38 = v36[3 * i];
        if ( *((_DWORD *)v30 + 4) == v38->pid )
        {
          v48 = *v30 - *(_QWORD *)&v38->fmtid.Data1;
          if ( *v30 == *(_QWORD *)&v38->fmtid.Data1 )
            v48 = v30[1] - *(_QWORD *)v38->fmtid.Data4;
          if ( !v48 )
            break;
        }
      }
      if ( !v27 )
      {
        CachedObjectPropertyData = PiDmGetObject(v72, a2, &v70);
        if ( CachedObjectPropertyData < 0 )
          break;
        v34 = v70;
        v33 = 1;
      }
      v49 = KeGetCurrentThread();
      --v49->KernelApcDisable;
      v51 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v34, 0LL, 0LL, v32);
      if ( _InterlockedCompareExchange64(v34, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v34, 0, v51, (struct _KTHREAD *)v34);
      if ( v51 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v51, v50);
        else
          *((_BYTE *)v51 + 10) = 1;
      }
      v52 = &v34[3 * i];
      v53 = *((_DWORD *)v52 + 28);
      if ( v53 <= 1 )
      {
        CachedObjectPropertyData = -1073741802;
        goto LABEL_37;
      }
      CachedObjectPropertyData = 0;
      DestinationString = 0LL;
      if ( v53 == 6 )
      {
        v54 = *((_DWORD *)v52 + 30);
        if ( v54 == 18 )
        {
          *a6 = 18;
          v55 = -1LL;
          while ( *(_WORD *)(*(_QWORD *)(v52[16] + 16) + 2 * v55++ + 2) != 0 )
            ;
          v57 = 2 * v55 + 2;
          *a9 = v57;
          if ( v68 < v57 )
            goto LABEL_61;
          memmove(Guid, *(const void **)(v52[16] + 16), v57);
LABEL_37:
          _m_prefetchw(v34);
          v42 = *v34;
          v43 = *v34 - 16;
          if ( (*v34 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v43 = 0LL;
          if ( (v42 & 2) != 0 || (v44 = *v34, v44 != _InterlockedCompareExchange64(v34, v43, v42)) )
            ExfReleasePushLock(v34);
          KeAbPostRelease((unsigned __int64)v34);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v45, v46);
          if ( v33 )
          {
            v47 = v34;
            goto LABEL_43;
          }
          break;
        }
        if ( v54 != 13 )
        {
          CachedObjectPropertyData = -1073741595;
          goto LABEL_37;
        }
        *a6 = 13;
        *a9 = 16;
        if ( v68 >= 0x10 )
        {
          RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v52[16] + 16));
          CachedObjectPropertyData = RtlGUIDFromString(&DestinationString, Guid);
          goto LABEL_37;
        }
      }
      else
      {
        v59 = v53 - 2;
        if ( !v59 )
        {
          CachedObjectPropertyData = -1073741275;
          goto LABEL_37;
        }
        v60 = v59 - 1;
        if ( v60 )
        {
          v61 = v60 - 1;
          if ( v61 )
          {
            if ( v61 != 1 )
            {
              CachedObjectPropertyData = -1073741595;
              goto LABEL_37;
            }
            *a6 = *((_DWORD *)v52 + 30);
            v62 = *((_DWORD *)v52 + 31);
            *a9 = v62;
            if ( v68 >= v62 )
            {
              memmove(Guid, (const void *)v52[16], v62);
              goto LABEL_37;
            }
          }
          else
          {
            *a6 = 13;
            *a9 = 16;
            if ( v68 >= 0x10 )
            {
              *Guid = *(GUID *)(v52 + 15);
              goto LABEL_37;
            }
          }
        }
        else
        {
          *a6 = *((_DWORD *)v52 + 30);
          v63 = *((_DWORD *)v52 + 31);
          *a9 = v63;
          if ( v68 >= v63 )
          {
            memmove(Guid, v52 + 16, v63);
            goto LABEL_37;
          }
        }
      }
LABEL_61:
      CachedObjectPropertyData = -1073741789;
      goto LABEL_37;
    case 3u:
      v36 = &PiDmCachedDeviceInterfaceKeys;
      v31 = 1;
      goto LABEL_25;
    case 5u:
      v36 = &PiDmCachedDeviceContainerKeys;
      goto LABEL_25;
  }
LABEL_44:
  PiDmObjectRelease((PVOID)v27);
  return (unsigned int)CachedObjectPropertyData;
}
