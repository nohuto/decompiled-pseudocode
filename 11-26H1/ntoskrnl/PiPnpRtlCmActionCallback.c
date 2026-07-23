/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x140963A50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     _CmClassPropertyRead @ 0x1404865B4 (_CmClassPropertyRead.c)
 *     _CmClassPropertyWrite @ 0x14050F9C8 (_CmClassPropertyWrite.c)
 *     McTemplateK0zjdd_EtwWriteTransfer @ 0x140527968 (McTemplateK0zjdd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140779EF0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14077B650 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x14077B700 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x14077DA9C (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14077F4F8 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     PnpIsValidGuidString @ 0x140963020 (PnpIsValidGuidString.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140963508 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140964970 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1409649B0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140965250 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140966B10 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140967630 (PiPnpRtlCacheObjectBaseKey.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     _CmGetInstallerClassRegProp @ 0x1409738BC (_CmGetInstallerClassRegProp.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1409A9DA0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1409A9E30 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectManagerReleaseLock @ 0x1409A9F94 (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1409AA00C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDmLookupObject @ 0x1409AA1E0 (PiDmLookupObject.c)
 *     PiDmListAddObject @ 0x1409AA3C0 (PiDmListAddObject.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x140A19290 (_CmIsRootEnumeratedDevice.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140A85248 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140AAE7D8 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiDmGetCmObjectListFromCache @ 0x140AAEBA4 (PiDmGetCmObjectListFromCache.c)
 *     _CmIsDeviceRegPropWritable @ 0x140AEFD44 (_CmIsDeviceRegPropWritable.c)
 *     PiDmListRemoveObject @ 0x140B165EC (PiDmListRemoveObject.c)
 *     PiDmListAddList @ 0x140B2E9E4 (PiDmListAddList.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140B37308 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140B43844 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140B64E18 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmListRemoveList @ 0x140B6F648 (PiDmListRemoveList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(__int64 a1, const WCHAR *a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned int v6; // r12d
  unsigned __int16 *v7; // rsi
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v11; // r13
  _DWORD *v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  NTSTATUS CachedObjectProperty; // ecx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // eax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned int v23; // eax
  unsigned int *v24; // rax
  const WCHAR *v25; // r8
  unsigned int v26; // ecx
  _DWORD *v27; // rax
  int v28; // eax
  int v29; // edx
  int v30; // r8d
  int CmObjectListFromCache; // eax
  __int64 v32; // rax
  void *v33; // rcx
  void *v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rax
  void *v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r15
  int v41; // eax
  void *Pool2; // r13
  __int64 v43; // r9
  int v44; // eax
  unsigned int v45; // r10d
  int DeviceRegProp; // eax
  int v47; // ebx
  unsigned int v48; // eax
  int v49; // eax
  _QWORD *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rdx
  unsigned int v53; // eax
  WCHAR *v54; // rbx
  SIZE_T v55; // rax
  __int64 v56; // r8
  GUID *v57; // rdx
  __int64 v58; // rcx
  int v59; // r9d
  unsigned int v60; // r14d
  size_t v61; // rdi
  int v62; // ebx
  void **v63; // rbx
  void *v64; // rdx
  int v65; // r15d
  __int64 v66; // rax
  void *v67; // rcx
  void *v68; // rbx
  char v69; // al
  void **v70; // rbx
  void *v71; // rdx
  void *v72; // rdx
  void *v73; // rdx
  int v74; // ecx
  int v75; // r8d
  _QWORD *v76; // rax
  _DWORD *v77; // rdx
  __int64 v78; // rax
  char v79; // al
  SIZE_T v80; // rax
  __int64 v81; // r8
  GUID *p_Guid; // rdx
  __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rcx
  void *v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  unsigned int v90; // eax
  void *Buf2; // [rsp+30h] [rbp-E0h]
  int v92[2]; // [rsp+38h] [rbp-D8h]
  __int64 v93; // [rsp+40h] [rbp-D0h]
  char v94[8]; // [rsp+90h] [rbp-80h] BYREF
  size_t Size; // [rsp+98h] [rbp-78h] BYREF
  int v96; // [rsp+A0h] [rbp-70h] BYREF
  _DWORD *v97; // [rsp+A8h] [rbp-68h]
  _DWORD *v98; // [rsp+B0h] [rbp-60h]
  __int64 v99; // [rsp+B8h] [rbp-58h]
  GUID Guid; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v101; // [rsp+D0h] [rbp-40h]
  char i; // [rsp+D8h] [rbp-38h]
  int v103; // [rsp+D9h] [rbp-37h]
  __int16 v104; // [rsp+DDh] [rbp-33h]
  char v105; // [rsp+DFh] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-30h] BYREF
  wchar_t pszDest[8]; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v108; // [rsp+100h] [rbp-10h]
  __int128 v109; // [rsp+110h] [rbp+0h]
  __int128 v110; // [rsp+120h] [rbp+10h]
  __int64 v111; // [rsp+130h] [rbp+20h]
  int v112; // [rsp+138h] [rbp+28h]
  __int16 v113; // [rsp+13Ch] [rbp+2Ch]

  v6 = a3;
  *(_QWORD *)&DestinationString.Length = a2;
  v7 = (unsigned __int16 *)a2;
  v99 = a1;
  v8 = a1;
  v9 = -1073741822;
  if ( a4 == 9 )
  {
    if ( a5 == 1 )
    {
      if ( (*(_DWORD *)(a6 + 56) & 0x10000) == 0 )
      {
        v11 = *(_QWORD *)(a6 + 40);
        v12 = *(_DWORD **)(a6 + 48);
        v97 = *(_DWORD **)(a6 + 32);
        v13 = *(_DWORD *)(a6 + 24);
        v98 = v12;
        v96 = 0;
        LODWORD(Size) = 0;
        Guid = 0LL;
        if ( v11 )
        {
          if ( !*v12 )
            v11 = 0LL;
        }
        else
        {
          *v12 = 0;
        }
        if ( v13 == 9 && (_DWORD)a3 == 1 )
        {
          v14 = CmMapCmObjectTypeToPnpObjectType(1LL);
          CachedObjectProperty = PiDmObjectGetCachedObjectProperty(
                                   v14,
                                   v15,
                                   v16,
                                   0,
                                   (__int64)&DEVPKEY_Device_ClassGuid,
                                   (__int64)&v96,
                                   (__int64)&Guid,
                                   16,
                                   (__int64)&Size);
          if ( CachedObjectProperty >= 0 )
          {
            *v97 = 1;
            if ( *v12 < 0x4Eu )
            {
              *v12 = 78;
              *(_DWORD *)a6 = -1073741789;
              return (unsigned int)-1073741536;
            }
            LODWORD(v93) = Guid.Data3;
            v92[0] = Guid.Data2;
            LODWORD(Buf2) = Guid.Data1;
            CachedObjectProperty = RtlStringCchPrintfExW(
                                     pszDest,
                                     0x27uLL,
                                     0LL,
                                     0LL,
                                     0x800u,
                                     L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                                     Buf2,
                                     *(_QWORD *)v92,
                                     v93,
                                     Guid.Data4[0],
                                     Guid.Data4[1],
                                     Guid.Data4[2],
                                     Guid.Data4[3],
                                     Guid.Data4[4],
                                     Guid.Data4[5],
                                     Guid.Data4[6],
                                     Guid.Data4[7]);
            if ( CachedObjectProperty >= 0 )
            {
              v18 = *(_OWORD *)pszDest;
              v19 = v108;
              *v98 = 78;
              v20 = v112;
              *(_OWORD *)v11 = v18;
              v21 = v109;
              *(_OWORD *)(v11 + 16) = v19;
              v22 = v110;
              *(_OWORD *)(v11 + 32) = v21;
              *(_QWORD *)&v21 = v111;
              *(_OWORD *)(v11 + 48) = v22;
              *(_QWORD *)(v11 + 64) = v21;
              *(_DWORD *)(v11 + 72) = v20;
              *(_WORD *)(v11 + 76) = v113;
              goto LABEL_15;
            }
            v8 = v99;
            v7 = *(unsigned __int16 **)&DestinationString.Length;
          }
          if ( CachedObjectProperty == -1073741772
            || CachedObjectProperty == -1073741789
            || CachedObjectProperty == -1073741275 )
          {
LABEL_15:
            *(_DWORD *)a6 = CachedObjectProperty;
            return (unsigned int)-1073741536;
          }
        }
        v9 = 0;
      }
      if ( !*(_QWORD *)(a6 + 16) )
      {
        v23 = CmMapCmObjectTypeToPnpObjectType(v6);
        PiPnpRtlCacheObjectBaseKey(v8, v7, v23);
      }
      return v9;
    }
    if ( *(int *)a6 < 0 )
    {
      if ( *(_DWORD *)a6 != -1073741275 )
        return 0;
      Guid = 0LL;
      if ( (_DWORD)a3 != 1 || *(_DWORD *)(a6 + 24) != 9 )
        return 0;
      v28 = CmMapCmObjectTypeToPnpObjectType((unsigned int)a3);
    }
    else
    {
      v24 = *(unsigned int **)(a6 + 48);
      v25 = *(const WCHAR **)(a6 + 40);
      DestinationString = 0LL;
      v26 = *v24;
      v27 = *(_DWORD **)(a6 + 32);
      Guid = 0LL;
      if ( v6 != 1 || *(_DWORD *)(a6 + 24) != 9 )
        return 0;
      if ( v26 )
      {
        if ( *v27 == 1 && v26 >= 2 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)&Guid, v25);
          if ( RtlGUIDFromString((PCUNICODE_STRING)&Guid, (GUID *)&DestinationString) >= 0 )
          {
            v74 = CmMapCmObjectTypeToPnpObjectType(1LL);
            PiDmObjectUpdateCachedObjectProperty(
              v74,
              (int)v7,
              v75,
              0,
              (__int64)&DEVPKEY_Device_ClassGuid,
              13,
              &DestinationString,
              16);
          }
        }
        return 0;
      }
      v28 = CmMapCmObjectTypeToPnpObjectType(1LL);
      v29 = (int)v7;
    }
    PiDmObjectUpdateCachedObjectProperty(v28, v29, v30, 0, (__int64)&DEVPKEY_Device_ClassGuid, 0, 0LL, 0);
    return 0;
  }
  switch ( a4 )
  {
    case 2:
      if ( a5 == 1 )
      {
        v48 = CmMapCmObjectTypeToPnpObjectType((unsigned int)a3);
        v49 = PiDmAddCacheReferenceForObject(v48, v7, 0LL);
        *(_DWORD *)a6 = v49;
        return (v49 >> 31) & 0xC0000120;
      }
      else if ( *(int *)a6 >= 0 && *(_BYTE *)(a6 + 32) )
      {
        Size = 0LL;
        v60 = CmMapCmObjectTypeToPnpObjectType((unsigned int)a3);
        if ( (int)PiDmGetObject(v60, v7, &Size) < 0 )
          return 0;
        v61 = Size;
        KsepCacheLock(Size);
        v62 = *(_DWORD *)(v61 + 32);
        *(_DWORD *)(v61 + 32) = v62 | 1;
        CmpUnlockSiloKeyLockTracker((struct _KTHREAD *)v61);
        if ( (v62 & 1) != 0 )
          PiDmRemoveCacheReferenceForObject(v60, v7);
        PiDmObjectRelease((PVOID)v61);
        return 0;
      }
      else
      {
        v53 = CmMapCmObjectTypeToPnpObjectType((unsigned int)a3);
        PiDmRemoveCacheReferenceForObject(v53, v7);
        return 0;
      }
    case 3:
      if ( a5 == 1 )
      {
        if ( (_DWORD)a3 == 1 )
        {
          Size = 0LL;
          CmObjectListFromCache = PiPnpRtlGatherDeviceDeleteInfo(a2, (__int64)&Size);
          goto LABEL_133;
        }
        if ( (_DWORD)a3 == 3 )
        {
          Size = 0LL;
          CmObjectListFromCache = PiPnpRtlGatherInterfaceDeleteInfo(a2, &Size);
          goto LABEL_133;
        }
      }
      else if ( (_DWORD)a3 == 1 )
      {
        v54 = *(WCHAR **)(a6 + 8);
        DestinationString = 0LL;
        Guid = 0LL;
        RtlInitUnicodeString(&DestinationString, v54 + 2);
        if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
          Guid = 0LL;
        if ( *(int *)a6 >= 0 )
        {
          LOBYTE(Size) = byte_140EF412A & 0x10;
          if ( (byte_140EF412A & 0x10) != 0 )
          {
            v80 = RtlCompareMemory(&NullGuid, &Guid, 0x10uLL);
            p_Guid = &Guid;
            if ( v80 == 16 )
              p_Guid = 0LL;
            McTemplateK0zjdd_EtwWriteTransfer(
              v80 != 16,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceDelete_Success,
              v81,
              v7,
              (__int64)p_Guid,
              *(_DWORD *)v54,
              *(_DWORD *)a6);
          }
        }
        else
        {
          LOBYTE(Size) = byte_140EF412A & 0x20;
          if ( (byte_140EF412A & 0x20) != 0 )
          {
            v55 = RtlCompareMemory(&NullGuid, &Guid, 0x10uLL);
            v57 = &Guid;
            if ( v55 == 16 )
              v57 = 0LL;
            McTemplateK0zjdd_EtwWriteTransfer(
              v55 != 16,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceDelete_Failure,
              v56,
              v7,
              (__int64)v57,
              *(_DWORD *)v54,
              *(_DWORD *)a6);
          }
        }
        if ( *(int *)a6 >= 0 )
        {
          if ( v54[2] )
          {
            Size = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              v8,
              (_DWORD)v54 + 4,
              2,
              0LL,
              (__int64)DEVPKEY_DeviceClass_LastDeleteDate,
              16,
              (__int64)&Size,
              8,
              0);
          }
          if ( (unsigned __int8)CmIsRootEnumeratedDevice(v7) )
          {
            RtlInitUnicodeString(&DestinationString, v7);
            if ( DestinationString.Length >= 2u )
            {
              if ( *DestinationString.Buffer )
              {
                v76 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
                if ( v76 )
                {
                  v77 = (_DWORD *)v76[8];
                  if ( v77 )
                    *v77 |= 1u;
                  ObfDereferenceObject(v76);
                }
              }
            }
          }
        }
        if ( !v54 )
          return 0;
        ExFreePoolWithTag(v54, 0x47706E50u);
        return 0;
      }
      else
      {
        if ( (_DWORD)a3 != 3 )
          return 0;
        v70 = *(void ***)(a6 + 8);
        if ( *(int *)a6 >= 0 && *v70 )
        {
          v71 = v70[1];
          if ( v71 )
            PiDmListRemoveObject(0LL, v71, *v70, 0LL);
          v72 = v70[2];
          if ( v72 )
            PiDmListRemoveObject(1LL, v72, *v70, 0LL);
          v73 = v70[3];
          if ( v73 )
            PiDmListRemoveObject(2LL, v73, *v70, 0LL);
        }
        PiPnpRtlFreeInterfaceDeleteInfo(v70);
        return 0;
      }
      return v9;
    case 4:
      if ( a5 == 1 && (*(_DWORD *)(a6 + 56) & 0x10000) == 0 )
      {
        CmObjectListFromCache = PiDmGetCmObjectListFromCache(
                                  a3,
                                  *(_QWORD *)(a6 + 16),
                                  *(_QWORD *)(a6 + 24),
                                  *(_QWORD *)(a6 + 32),
                                  *(_DWORD *)(a6 + 40),
                                  *(_QWORD *)(a6 + 48));
        goto LABEL_37;
      }
      return v9;
    case 10:
      if ( a5 != 1 )
      {
        if ( *(int *)a6 >= 0 )
        {
          PiDmObjectUpdateCachedCmProperty(
            (unsigned int)a3,
            a2,
            a3,
            *(unsigned int *)(a6 + 24),
            *(_DWORD *)(a6 + 28),
            *(_QWORD *)(a6 + 32),
            *(_DWORD *)(a6 + 40));
          v9 = 0;
        }
        if ( v6 == 1 && *(_DWORD *)(a6 + 24) == 9 )
        {
          v50 = *(_QWORD **)(a6 + 8);
          if ( *(int *)a6 >= 0 && *v50 )
          {
            v51 = v50[1];
            if ( v51 )
              PiDmListRemoveObject(4LL, v51, *v50, 0LL);
            v52 = v50[2];
            if ( v52 )
              PiDmListAddObject(4LL, v52, *v50, 0LL);
          }
          PiPnpRtlFreeInstallerClassChangeInfo(v50);
        }
        return v9;
      }
      v40 = 0LL;
      v9 = 0;
      if ( (*(_DWORD *)(a6 + 44) & 0x20000) != 0 )
        goto LABEL_56;
      v41 = *(_DWORD *)(a6 + 40);
      Pool2 = 0LL;
      v96 = 0;
      if ( !v41 || (Pool2 = (void *)ExAllocatePool2(0x100uLL)) == 0LL )
      {
        if ( *(_DWORD *)(a6 + 40) )
          goto LABEL_56;
      }
      v44 = *(_DWORD *)(a6 + 40);
      v94[0] = 1;
      LODWORD(Size) = v44;
      if ( v6 == 1 )
      {
        if ( (int)CmIsDeviceRegPropWritable(0LL, *(unsigned int *)(a6 + 24), v94) >= 0 && !v94[0] )
        {
          v47 = -1073741790;
          goto LABEL_75;
        }
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          (__int64)v7,
                          *(_QWORD *)(a6 + 16),
                          v45,
                          (__int64)&v96,
                          (__int64)Pool2,
                          (__int64)&Size,
                          0);
      }
      else
      {
        if ( v6 != 2 )
          goto LABEL_131;
        v59 = *(_DWORD *)(a6 + 24);
        if ( (unsigned int)(v59 - 1) <= 0x24 && CmClassPropertyRead(v59) && !CmClassPropertyWrite(v59) )
        {
          v47 = -1073741790;
          goto LABEL_75;
        }
        DeviceRegProp = CmGetInstallerClassRegProp(
                          PiPnpRtlCtx,
                          (_DWORD)v7,
                          *(_QWORD *)(a6 + 16),
                          v59,
                          (__int64)&v96,
                          (__int64)Pool2,
                          (__int64)&Size);
      }
      v47 = DeviceRegProp;
      if ( DeviceRegProp < 0 )
        goto LABEL_73;
      if ( v96 == *(_DWORD *)(a6 + 28) && (_DWORD)Size == *(_DWORD *)(a6 + 40) )
      {
        if ( !memcmp(Pool2, *(const void **)(a6 + 32), (unsigned int)Size) )
          goto LABEL_75;
LABEL_73:
        if ( v47 == -1073741275 )
        {
          if ( !*(_DWORD *)(a6 + 40) )
          {
LABEL_75:
            *(_DWORD *)a6 = v47;
            v9 = -1073741536;
            goto LABEL_76;
          }
        }
        else if ( v47 == -1073741790 )
        {
          goto LABEL_75;
        }
      }
LABEL_131:
      v9 = 0;
LABEL_76:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x47706E50u);
      if ( v9 )
        return v9;
LABEL_56:
      v43 = a6 + 16;
      if ( !*(_QWORD *)(a6 + 16) )
      {
        v90 = CmMapCmObjectTypeToPnpObjectType(v6);
        PiPnpRtlCacheObjectBaseKey(v8, v7, v90);
      }
      if ( v6 == 1 && *(_DWORD *)(a6 + 24) == 9 )
      {
        Size = 0LL;
        if ( *(_DWORD *)(a6 + 28) == 1 && *(_DWORD *)(a6 + 40) == 78 && PnpIsValidGuidString(*(PCWSTR *)(a6 + 32)) )
          v40 = *(_QWORD *)(a6 + 32);
        CmObjectListFromCache = PiPnpRtlGatherInstallerClassChangeInfo(v7, v40, &Size, v43);
        v9 = CmObjectListFromCache;
        if ( CmObjectListFromCache < 0 )
          goto LABEL_38;
        goto LABEL_134;
      }
      return v9;
    case 13:
      if ( a5 == 1 )
        return 0;
      if ( (_DWORD)a3 == 5 )
      {
        if ( *(int *)a6 < 0 )
          return 0;
        v94[0] = 0;
        PiDmObjectManagerAcquireSharedLock(&PiDmDeviceContainerManager);
        v32 = PiDmLookupObject(&PiDmDeviceContainerManager, v7);
        v33 = &PiDmDeviceContainerManager;
        v34 = (void *)v32;
        if ( v32 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 8));
          PiDmObjectManagerReleaseLock(&PiDmDeviceContainerManager);
          v35 = *(_QWORD *)(a6 + 24);
          PiDmObjectManagerAcquireSharedLock(&PiDmDeviceManager);
          v36 = PiDmLookupObject(&PiDmDeviceManager, v35);
          v37 = (void *)v36;
          if ( v36 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v36 + 8));
            PiDmObjectManagerReleaseLock(&PiDmDeviceManager);
            PiDmListAddObject(3LL, v34, v37, v94);
            if ( !v94[0] )
              PiDmListAddList(v38, v34, v39, v37);
            goto LABEL_46;
          }
          goto LABEL_203;
        }
        goto LABEL_204;
      }
      if ( (_DWORD)a3 == 6 && *(int *)a6 >= 0 )
      {
        PiDmObjectManagerAcquireSharedLock(&PiDmDevicePanelManager);
        v83 = PiDmLookupObject(&PiDmDevicePanelManager, v7);
        v33 = &PiDmDevicePanelManager;
        v34 = (void *)v83;
        if ( v83 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v83 + 8));
          PiDmObjectManagerReleaseLock(&PiDmDevicePanelManager);
          v84 = *(_QWORD *)(a6 + 24);
          PiDmObjectManagerAcquireSharedLock(&PiDmDeviceManager);
          v85 = PiDmLookupObject(&PiDmDeviceManager, v84);
          v37 = (void *)v85;
          if ( v85 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v85 + 8));
            PiDmObjectManagerReleaseLock(&PiDmDeviceManager);
            PiDmListAddObject(5LL, v34, v37, v94);
            goto LABEL_46;
          }
LABEL_203:
          PiDmObjectManagerReleaseLock(&PiDmDeviceManager);
LABEL_46:
          PiDmObjectRelease(v34);
          if ( v37 )
            PiDmObjectRelease(v37);
          return 0;
        }
LABEL_204:
        PiDmObjectManagerReleaseLock(v33);
        return 0;
      }
      return 0;
    case 14:
      if ( a5 != 1 )
      {
        if ( (_DWORD)a3 == 5 )
        {
          v63 = *(void ***)(a6 + 8);
          if ( *(int *)a6 >= 0 )
          {
            v87 = v63[1];
            v94[0] = 0;
            if ( v87 )
            {
              if ( *v63 )
              {
                PiDmListRemoveObject(3LL, v87, *v63, v94);
                if ( v94[0] )
                  PiDmListRemoveList(v88, v63[1], v89, *v63);
              }
            }
          }
        }
        else
        {
          if ( (_DWORD)a3 != 6 )
            return 0;
          v63 = *(void ***)(a6 + 8);
          if ( *(int *)a6 >= 0 )
          {
            v64 = v63[1];
            if ( v64 )
            {
              if ( *v63 )
                PiDmListRemoveObject(5LL, v64, *v63, v94);
            }
          }
        }
        PiPnpRtlFreePanelRemoveInfo(v63);
        return 0;
      }
      if ( (_DWORD)a3 == 5 )
      {
        v86 = *(_QWORD *)(a6 + 24);
        Size = 0LL;
        CmObjectListFromCache = PiPnpRtlGatherContainerRemoveInfo(v86, (__int64)a2, (PVOID *)&Size);
        v9 = CmObjectListFromCache;
        if ( CmObjectListFromCache >= 0 )
          goto LABEL_134;
      }
      else
      {
        if ( (_DWORD)a3 != 6 )
          return v9;
        v58 = *(_QWORD *)(a6 + 24);
        Size = 0LL;
        CmObjectListFromCache = PiPnpRtlGatherPanelRemoveInfo(v58, (__int64)a2, (PVOID *)&Size);
LABEL_133:
        v9 = CmObjectListFromCache;
        if ( CmObjectListFromCache >= 0 )
        {
LABEL_134:
          *(_QWORD *)(a6 + 8) = Size;
          return v9;
        }
      }
LABEL_38:
      *(_DWORD *)a6 = CmObjectListFromCache;
      return (unsigned int)-1073741536;
    case 15:
      if ( a5 != 1 )
        return v9;
      if ( (_DWORD)a3 == 5 )
      {
        if ( (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
          return v9;
        v65 = 0;
        v103 = 0;
        v104 = 0;
        v105 = 0;
        PiDmObjectManagerAcquireSharedLock(&PiDmDeviceContainerManager);
        v66 = PiDmLookupObject(&PiDmDeviceContainerManager, v7);
        v67 = &PiDmDeviceContainerManager;
        v68 = (void *)v66;
        if ( v66 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v66 + 8));
          PiDmObjectManagerReleaseLock(&PiDmDeviceContainerManager);
          v69 = 1;
          *(_QWORD *)Guid.Data4 = *(_QWORD *)(a6 + 24);
          v101 = *(_QWORD *)(a6 + 32);
          *(_QWORD *)&Guid.Data1 = v8;
          for ( i = 1; v69; v69 = i )
          {
            i = 0;
            v65 = PiDmListEnumObjectsWithCallback(3LL, v68, PiPnpRtlEnumDevicesCallback, &Guid);
            if ( v65 < 0 )
              break;
          }
LABEL_149:
          PiDmObjectRelease(v68);
LABEL_150:
          *(_DWORD *)a6 = v65;
          return (unsigned int)-1073741536;
        }
        goto LABEL_206;
      }
      if ( (_DWORD)a3 == 6 && (*(_DWORD *)(a6 + 40) & 0x10000) == 0 )
      {
        v65 = 0;
        v103 = 0;
        v104 = 0;
        v105 = 0;
        PiDmObjectManagerAcquireSharedLock(&PiDmDevicePanelManager);
        v78 = PiDmLookupObject(&PiDmDevicePanelManager, v7);
        v67 = &PiDmDevicePanelManager;
        v68 = (void *)v78;
        if ( v78 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v78 + 8));
          PiDmObjectManagerReleaseLock(&PiDmDevicePanelManager);
          v79 = 1;
          *(_QWORD *)Guid.Data4 = *(_QWORD *)(a6 + 24);
          v101 = *(_QWORD *)(a6 + 32);
          *(_QWORD *)&Guid.Data1 = v8;
          for ( i = 1; v79; v79 = i )
          {
            i = 0;
            v65 = PiDmListEnumObjectsWithCallback(5LL, v68, PiPnpRtlEnumDevicesCallback, &Guid);
            if ( v65 < 0 )
              break;
          }
          goto LABEL_149;
        }
LABEL_206:
        PiDmObjectManagerReleaseLock(v67);
        v65 = -1073741772;
        goto LABEL_150;
      }
      break;
    case 16:
      if ( a5 != 1 || (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
        return v9;
      CmObjectListFromCache = PiPnpRtlGetFilteredDeviceList(a6);
      goto LABEL_37;
    case 17:
      if ( a5 != 1 || (*(_DWORD *)(a6 + 80) & 0x10000) != 0 )
        return v9;
      CmObjectListFromCache = PiPnpRtlGetFilteredDeviceInterfaceList(a6);
LABEL_37:
      if ( CmObjectListFromCache != -1073741802 )
        goto LABEL_38;
      return 0;
    default:
      return v9;
  }
  return v9;
}
