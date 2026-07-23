/*
 * XREFs of PiPnpRtlObjectActionCallback @ 0x140965980
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PiDrvDbUnmountNode @ 0x14077E040 (PiDrvDbUnmountNode.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14095204C (PiDmObjectGetCachedObjectReference.c)
 *     PnpGetObjectProperty @ 0x14095E340 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140964EA0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140966B10 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140967630 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmObjectAcquireSharedLock @ 0x140967DB8 (PiDmObjectAcquireSharedLock.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     PiDmCacheDataFree @ 0x140967EA0 (PiDmCacheDataFree.c)
 *     PiDmGetObjectList @ 0x140AAEBFC (PiDmGetObjectList.c)
 *     PiDmCacheDataEncode @ 0x140ADA71C (PiDmCacheDataEncode.c)
 *     PiDrvDbMountNode @ 0x140B686B4 (PiDrvDbMountNode.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlObjectActionCallback(PVOID a1, unsigned __int16 *a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned __int16 *v6; // r10
  unsigned int v7; // ebx
  _BYTE *v8; // rbx
  _DWORD *v9; // r11
  LONG v10; // r15d
  int v11; // edx
  _DWORD *v12; // r14
  __int64 v13; // r10
  __int64 v14; // rax
  unsigned int k; // ecx
  GUID *v16; // r13
  void *v17; // r9
  int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // edx
  struct _ERESOURCE *v21; // r15
  struct _KTHREAD *CurrentThread; // rax
  int Flink; // r8d
  __int64 v24; // rcx
  unsigned __int16 *v25; // rax
  int v26; // eax
  unsigned __int16 Length; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v29; // r9d
  unsigned __int16 *v30; // r11
  unsigned __int16 v31; // dx
  int v32; // r10d
  struct _LIST_ENTRY *v33; // rbx
  unsigned __int64 v34; // r8
  __int64 *v35; // rax
  __int64 v36; // r14
  unsigned int v37; // r15d
  _QWORD *v38; // r9
  struct _KTHREAD *v39; // r13
  int v40; // r8d
  DEVPROPKEY **v41; // r12
  unsigned int n; // ebx
  DEVPROPKEY *v43; // rdx
  __int64 v44; // r9
  __int64 v45; // r8
  int v46; // r8d
  int Object; // eax
  _DWORD *v49; // rax
  bool v50; // r13
  __int64 v51; // r14
  _DWORD *v52; // rax
  DEVPROPKEY **v53; // r12
  unsigned int v54; // r15d
  unsigned int i; // ebx
  DEVPROPKEY *v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // r12d
  char v59; // r15
  _DISPATCHER_HEADER *v60; // rdx
  unsigned int Blink; // ecx
  volatile LONG Lock; // eax
  __int64 v63; // rax
  unsigned int v65; // eax
  int v66; // r9d
  int v67; // r9d
  int v68; // r9d
  int v69; // eax
  void *Pool2; // r14
  int ObjectProperty; // ebx
  __int64 v72; // rcx
  struct _KTHREAD *v73; // r15
  unsigned int v74; // edi
  unsigned int v75; // r12d
  int v76; // eax
  PVOID v77; // rdi
  struct _KTHREAD *v78; // rcx
  __int64 v79; // r14
  bool v80; // r13
  DEVPROPKEY **v81; // r12
  unsigned int v82; // r15d
  unsigned int j; // ebx
  DEVPROPKEY *v84; // rdx
  __int64 v85; // rcx
  struct _KTHREAD *v86; // rdi
  unsigned int v87; // eax
  int v88; // eax
  PVOID v89; // r14
  int CachedObjectReference; // eax
  PVOID v91; // rbx
  int v92; // edx
  __int64 v93; // r9
  unsigned int v94; // ecx
  bool v95; // cf
  __int64 v96; // r12
  __int64 *v97; // r13
  struct _KTHREAD *v98; // r14
  __int64 v99; // r12
  LONG v100; // eax
  int v101; // eax
  void **v102; // rax
  void **m; // rdx
  char *v104; // rdx
  int v105; // eax
  unsigned int v106; // ecx
  unsigned int v107; // ecx
  unsigned int SignalState; // eax
  __int64 v109; // r9
  int v110; // eax
  unsigned int v111; // ecx
  int ObjectList; // eax
  unsigned int v113; // eax
  int v114; // eax
  __int64 v115; // [rsp+28h] [rbp-D8h]
  unsigned int v116; // [rsp+60h] [rbp-A0h]
  NTSTATUS v117; // [rsp+60h] [rbp-A0h]
  __int64 v118; // [rsp+64h] [rbp-9Ch] BYREF
  int v119; // [rsp+6Ch] [rbp-94h] BYREF
  char v120; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  __int64 v122; // [rsp+80h] [rbp-80h] BYREF
  GUID *Guid; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v124; // [rsp+90h] [rbp-70h]
  PVOID v125; // [rsp+98h] [rbp-68h] BYREF
  PVOID v126; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v127; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD Buffer[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v130; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v131; // [rsp+E0h] [rbp-20h]
  __int128 v132; // [rsp+F0h] [rbp-10h]
  __int128 v133; // [rsp+100h] [rbp+0h]
  __int128 v134; // [rsp+110h] [rbp+10h]
  __int128 v135; // [rsp+120h] [rbp+20h]
  __int128 v136; // [rsp+130h] [rbp+30h]

  v6 = a2;
  v116 = a3;
  v7 = -1073741822;
  v124 = a2;
  v125 = a1;
  if ( a4 != 8 )
  {
    v66 = a4 - 3;
    if ( v66 )
    {
      v67 = v66 - 1;
      if ( !v67 )
      {
        if ( (_DWORD)a3 == 7 )
        {
          if ( a5 == 1 )
          {
            v101 = PiDrvDbUnmountNode(a2);
            v7 = v101;
            if ( v101 < 0 )
            {
              *(_DWORD *)a6 = v101;
              return (unsigned int)-1073741536;
            }
          }
          else if ( *(_DWORD *)a6 == -1073741772 )
          {
            v7 = -1073741536;
            *(_DWORD *)a6 = 0;
          }
        }
        return v7;
      }
      v68 = v67 - 1;
      if ( v68 )
      {
        if ( v68 != 4 )
          return v7;
        if ( a5 == 1 )
        {
          v7 = 0;
          if ( (*(_DWORD *)(a6 + 60) & 0x20000) != 0 )
            goto LABEL_91;
          v69 = *(_DWORD *)(a6 + 56);
          Pool2 = 0LL;
          v118 = 0LL;
          if ( v69 )
          {
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            if ( !Pool2 )
              return v7;
            LODWORD(a3) = v116;
            v6 = v124;
          }
          ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             (__int64)v6,
                             a3,
                             *(char **)(a6 + 16),
                             *(_QWORD *)(a6 + 24),
                             *(_QWORD *)(a6 + 32),
                             &v118,
                             (__int64)Pool2,
                             *(_DWORD *)(a6 + 56),
                             (__int64)&v118 + 4,
                             0);
          if ( ObjectProperty < 0 )
            goto LABEL_269;
          if ( v118 != __PAIR64__(*(_DWORD *)(a6 + 56), *(_DWORD *)(a6 + 40)) )
          {
LABEL_86:
            v7 = 0;
LABEL_87:
            if ( Pool2 )
              ExFreePoolWithTag(Pool2, 0x47706E50u);
            if ( v7 )
              return v7;
            a3 = v116;
            v6 = v124;
            a1 = v125;
LABEL_91:
            if ( !*(_QWORD *)(a6 + 16) )
              PiPnpRtlCacheObjectBaseKey(a1, v6, a3);
            return v7;
          }
          if ( memcmp(Pool2, *(const void **)(a6 + 48), HIDWORD(v118)) )
          {
LABEL_269:
            if ( ObjectProperty != -1073741275 || *(_DWORD *)(a6 + 40) || *(_DWORD *)(a6 + 56) )
              goto LABEL_86;
          }
          *(_DWORD *)a6 = ObjectProperty;
          v7 = -1073741536;
          goto LABEL_87;
        }
        if ( *(int *)a6 < 0 )
          return v7;
        PiDmObjectUpdateCachedObjectProperty(
          a3,
          (int)a2,
          a3,
          *(_QWORD *)(a6 + 24),
          *(_QWORD *)(a6 + 32),
          *(_DWORD *)(a6 + 40),
          *(void **)(a6 + 48),
          *(_DWORD *)(a6 + 56));
        return 0;
      }
      if ( a5 != 1 || (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
        return v7;
      v92 = *(_DWORD *)(a6 + 40);
      v93 = *(_QWORD *)(a6 + 32);
      if ( (int)a3 >= 7 )
        return 0;
      v115 = *(_QWORD *)(a6 + 48);
      Buffer[0] = *(_QWORD *)(a6 + 16);
      Buffer[1] = *(_QWORD *)(a6 + 24);
      ObjectList = PiDmGetObjectList(a3, (unsigned int)PiDmPnpObjectMatchCallback, (unsigned int)Buffer, v93, v92, v115);
      if ( ObjectList == -1073741802 )
        return 0;
    }
    else
    {
      if ( (_DWORD)a3 != 7 )
        return v7;
      if ( a5 != 1 )
      {
        if ( *(_QWORD *)(a6 + 8) == 1LL )
        {
          if ( *(int *)a6 < 0 )
            PiDrvDbUnmountNode(a2);
          else
            *(_BYTE *)(a6 + 32) = 1;
          *(_QWORD *)(a6 + 8) = 0LL;
        }
        return v7;
      }
      ObjectList = PiDrvDbMountNode(a2);
      v7 = ObjectList;
      if ( ObjectList >= 0 )
      {
        *(_QWORD *)(a6 + 8) = 1LL;
        return v7;
      }
    }
    *(_DWORD *)a6 = ObjectList;
    return (unsigned int)-1073741536;
  }
  if ( a5 != 1 )
  {
    if ( (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
      return v7;
    if ( *(int *)a6 >= 0 )
    {
      v49 = *(_DWORD **)(a6 + 64);
      v50 = 0;
      v51 = *(_QWORD *)(a6 + 32);
      v125 = 0LL;
      LODWORD(v118) = 0;
      HIDWORD(v118) = *v49;
      Guid = *(GUID **)(a6 + 48);
      v52 = *(_DWORD **)(a6 + 40);
      P = 0LL;
      v119 = 0;
      LODWORD(v122) = *v52;
      if ( !*(_QWORD *)(a6 + 24) )
      {
        switch ( (_DWORD)a3 )
        {
          case 1:
            v53 = &PiDmCachedDeviceKeys;
            v54 = 10;
LABEL_57:
            for ( i = 0; ; ++i )
            {
              if ( i >= v54 )
                return 0;
              v56 = v53[3 * i];
              if ( *(_DWORD *)(v51 + 16) == v56->pid )
              {
                v72 = *(_QWORD *)v51 - *(_QWORD *)&v56->fmtid.Data1;
                if ( *(_QWORD *)v51 == *(_QWORD *)&v56->fmtid.Data1 )
                  v72 = *(_QWORD *)(v51 + 8) - *(_QWORD *)v56->fmtid.Data4;
                if ( !v72 )
                  break;
              }
            }
            if ( (int)PiDmGetObject(a3, v6, &v125) < 0 )
              return 0;
            v73 = (struct _KTHREAD *)v125;
            KsepCacheLock(v125);
            v74 = *((_DWORD *)&v73->WaitRegister.Flags + 6 * i);
            if ( v74 <= 1 )
            {
              v109 = LODWORD(v53[3 * i + 1]);
              v110 = HIDWORD(v53[3 * i + 1]);
              v75 = HIDWORD(v118);
              PiDmCacheDataEncode((unsigned int)v122, Guid, HIDWORD(v118), v109, v110, &v73->WaitRegister + 24 * i);
              v50 = v74 == 0;
            }
            else
            {
              v75 = HIDWORD(v118);
            }
            CmpUnlockSiloKeyLockTracker(v73);
            if ( v50 )
            {
              v76 = PnpGetObjectProperty(
                      0x5A706E50u,
                      v75,
                      (__int64)v124,
                      v116,
                      0LL,
                      0LL,
                      v51,
                      &v118,
                      &P,
                      (unsigned int *)&v119,
                      0x10000);
              v77 = P;
              if ( v76 == -1073741275 )
              {
                LODWORD(v118) = 0;
                if ( P )
                {
                  ExFreePoolWithTag(P, 0x5A706E50u);
                  v77 = 0LL;
                }
                v111 = 0;
              }
              else
              {
                if ( v76 < 0 )
                {
LABEL_102:
                  KsepCacheLock(v73);
                  PiDmCacheDataFree(&v73->WaitRegister + 16 * i + 8 * i);
                  CmpUnlockSiloKeyLockTracker(v73);
                  goto LABEL_103;
                }
                v111 = v119;
              }
              if ( v111 != v75 || (_DWORD)v118 != (_DWORD)v122 )
                goto LABEL_102;
              if ( v77 )
              {
                if ( !Guid )
                  goto LABEL_102;
              }
              else if ( Guid )
              {
                goto LABEL_102;
              }
              if ( !v111 )
              {
LABEL_103:
                if ( v77 )
                  ExFreePoolWithTag(v77, 0x5A706E50u);
                goto LABEL_105;
              }
              if ( v77 )
              {
                if ( memcmp(v77, Guid, v111) )
                  goto LABEL_102;
                goto LABEL_103;
              }
            }
LABEL_105:
            v78 = v73;
            goto LABEL_106;
          case 3:
            v53 = &PiDmCachedDeviceInterfaceKeys;
            v54 = 1;
            goto LABEL_57;
          case 5:
            v53 = &PiDmCachedDeviceContainerKeys;
            v54 = 3;
            goto LABEL_57;
        }
      }
      return 0;
    }
    if ( *(_DWORD *)a6 != -1073741275 )
      return 0;
    v79 = *(_QWORD *)(a6 + 32);
    v80 = 0;
    v125 = 0LL;
    LODWORD(v118) = 0;
    P = 0LL;
    LODWORD(v122) = 0;
    if ( *(_QWORD *)(a6 + 24) )
      return 0;
    switch ( (_DWORD)a3 )
    {
      case 1:
        v81 = &PiDmCachedDeviceKeys;
        v82 = 10;
        break;
      case 3:
        v81 = &PiDmCachedDeviceInterfaceKeys;
        v82 = 1;
        break;
      case 5:
        v81 = &PiDmCachedDeviceContainerKeys;
        v82 = 3;
        break;
      default:
        return 0;
    }
    for ( j = 0; ; ++j )
    {
      if ( j >= v82 )
        return 0;
      v84 = v81[3 * j];
      if ( *(_DWORD *)(v79 + 16) == v84->pid )
      {
        v85 = *(_QWORD *)v79 - *(_QWORD *)&v84->fmtid.Data1;
        if ( *(_QWORD *)v79 == *(_QWORD *)&v84->fmtid.Data1 )
          v85 = *(_QWORD *)(v79 + 8) - *(_QWORD *)v84->fmtid.Data4;
        if ( !v85 )
          break;
      }
    }
    if ( (int)PiDmGetObject(a3, v6, &v125) < 0 )
      return 0;
    v86 = (struct _KTHREAD *)v125;
    KsepCacheLock(v125);
    v87 = *((_DWORD *)&v86->WaitRegister.Flags + 6 * j);
    if ( v87 <= 1 )
    {
      *((_DWORD *)&v86->WaitRegister.Flags + 6 * j) = 2;
      v80 = v87 == 0;
    }
    CmpUnlockSiloKeyLockTracker(v86);
    if ( !v80 )
    {
LABEL_144:
      v78 = v86;
LABEL_106:
      PiDmObjectRelease(v78);
      return 0;
    }
    v88 = PnpGetObjectProperty(
            0x5A706E50u,
            0,
            (__int64)v124,
            v116,
            0LL,
            0LL,
            v79,
            &v118,
            &P,
            (unsigned int *)&v122,
            0x10000);
    v89 = P;
    if ( v88 == -1073741275 )
    {
      LODWORD(v118) = 0;
      if ( P )
      {
        ExFreePoolWithTag(P, 0x5A706E50u);
        v89 = 0LL;
      }
      v114 = 0;
    }
    else
    {
      if ( v88 < 0 )
      {
LABEL_142:
        KsepCacheLock(v86);
        PiDmCacheDataFree(&v86->WaitRegister + 16 * j + 8 * j);
        CmpUnlockSiloKeyLockTracker(v86);
        if ( v89 )
          ExFreePoolWithTag(v89, 0x5A706E50u);
        goto LABEL_144;
      }
      v114 = v122;
    }
    if ( !(_DWORD)v118 && !v114 && !v89 )
      goto LABEL_144;
    goto LABEL_142;
  }
  v8 = *(_BYTE **)(a6 + 48);
  v9 = *(_DWORD **)(a6 + 64);
  v10 = 0;
  v11 = *(_DWORD *)(a6 + 56);
  v12 = *(_DWORD **)(a6 + 40);
  v13 = *(_QWORD *)(a6 + 32);
  v14 = *(_QWORD *)(a6 + 24);
  P = 0LL;
  HIDWORD(v118) = 0;
  v120 = 0;
  LODWORD(v122) = 0;
  if ( v8 )
  {
    if ( !v11 )
      v8 = 0LL;
  }
  else
  {
    v11 = 0;
  }
  LODWORD(v118) = -1073741802;
  if ( (int)a3 < 7 && !v14 )
  {
    for ( k = 0; k < 3; ++k )
    {
      v44 = 7LL * k;
      v45 = *(__int64 *)((char *)&off_140001870 + v44 * 8);
      if ( *(_DWORD *)(v45 + 16) == *(_DWORD *)(v13 + 16) )
      {
        v96 = *(_QWORD *)v45 - *(_QWORD *)v13;
        if ( *(_QWORD *)v45 == *(_QWORD *)v13 )
          v96 = *(_QWORD *)(v45 + 8) - *(_QWORD *)(v13 + 8);
        if ( !v96 )
        {
          LODWORD(a3) = v116;
          if ( v116 == *(_DWORD *)&byte_140001868[v44 * 8] )
          {
            v97 = &PiDmAggregatedBooleanDefs[v44];
            if ( !&PiDmAggregatedBooleanDefs[v44] )
              break;
            *v12 = 17;
            *v9 = 1;
            if ( v11 )
            {
              Object = PiDmGetObject(v116, v124, &P);
              if ( Object >= 0 )
              {
                v98 = (struct _KTHREAD *)P;
                v99 = v97[6];
                KsepCacheLock(P);
                v100 = *(volatile LONG *)((char *)&v98->Header.Lock + v99);
                if ( v100 == 0x80000000 )
                {
                  v102 = (void **)((char *)v98 + qword_1400016A8[5 * *((int *)v97 + 10)]);
                  v126 = v102;
                  for ( m = (void **)*v102; ; m = *(void ***)P )
                  {
                    P = m;
                    if ( m == v102 )
                      break;
                    v104 = (char *)m - qword_1400016B8[5 * *((int *)v97 + 10)];
                    v105 = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             *((_QWORD *)v104 + 2),
                             *((_DWORD *)v104 + 7),
                             0LL,
                             0LL,
                             v97[1],
                             (_DWORD *)&v118 + 1,
                             (__int64)&v120,
                             1u,
                             (__int64)&v122,
                             0);
                    v119 = v105;
                    if ( v105 < 0 )
                    {
                      if ( v105 != -1073741275 )
                        goto LABEL_183;
                    }
                    else if ( HIDWORD(v118) == 17 && v120 == -1 )
                    {
                      ++v10;
                    }
                    v102 = (void **)v126;
                  }
                  *(LONG *)((char *)&v98->Header.LockNV + v99) = v10;
                  v100 = v10;
                }
                v119 = 0;
                *v8 = (v100 <= 0) - 1;
LABEL_183:
                CmpUnlockSiloKeyLockTracker(v98);
                PiDmObjectRelease(v98);
                Object = v119;
              }
              if ( Object == -1073741802 )
              {
                LODWORD(a3) = v116;
                break;
              }
            }
            else
            {
              Object = -1073741789;
            }
            goto LABEL_50;
          }
        }
      }
      LODWORD(a3) = v116;
    }
  }
  v7 = 0;
  if ( (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
  {
    v58 = v116;
LABEL_128:
    if ( !*(_QWORD *)(a6 + 16) )
      PiPnpRtlCacheObjectBaseKey(v125, v124, v58);
    return v7;
  }
  v16 = *(GUID **)(a6 + 48);
  v17 = *(void **)(a6 + 32);
  v18 = *(_DWORD *)(a6 + 56);
  v127 = *(unsigned int **)(a6 + 64);
  v122 = *(_QWORD *)(a6 + 40);
  v19 = *(_QWORD *)(a6 + 24);
  HIDWORD(v118) = v18;
  Guid = v16;
  P = v17;
  v126 = 0LL;
  if ( v16 )
  {
    if ( !v18 )
      v16 = 0LL;
    Guid = v16;
  }
  else
  {
    HIDWORD(v118) = 0;
  }
  v20 = -1073741789;
  v119 = -1073741789;
  if ( (int)a3 >= 7 || v19 )
  {
    v58 = v116;
    goto LABEL_123;
  }
  v21 = 0LL;
  switch ( (_DWORD)a3 )
  {
    case 3:
      v21 = &PiDmDeviceInterfaceManager;
      break;
    case 1:
      v21 = (struct _ERESOURCE *)&PiDmDeviceManager;
      break;
    case 2:
      v21 = (struct _ERESOURCE *)&PiDmDeviceInstallerClassManager;
      break;
    case 4:
      v21 = (struct _ERESOURCE *)&PiDmDeviceInterfaceClassManager;
      break;
    case 5:
      v21 = (struct _ERESOURCE *)&PiDmDeviceContainerManager;
      break;
    case 6:
      v21 = (struct _ERESOURCE *)&PiDmDevicePanelManager;
      break;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v21, 1u);
  Buffer[0] = &v130;
  v130 = 0LL;
  v131 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  if ( v124 )
  {
    Flink = (int)v21[2].SystemResourcesList.Flink;
    v24 = 0x7FFFLL;
    HIDWORD(v131) = Flink;
    v25 = v124;
    *(_QWORD *)&v131 = v124;
    DestinationString = 0LL;
    do
    {
      if ( !*v25 )
        break;
      ++v25;
      --v24;
    }
    while ( v24 );
    v26 = -1073741811;
    if ( v24 )
    {
      v26 = 0;
      Length = -2 - 2 * v24;
    }
    else
    {
      Length = DestinationString.Length;
    }
    if ( v26 >= 0 && (Flink != 3 || Length > 8u) )
    {
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      v32 = v31 >> 1;
      v33 = CurrentServerSiloGlobals[75].Flink;
      for ( DWORD2(v131) = 0; v32; v29 = (unsigned __int16)v34 + 65599 * v29 )
      {
        v34 = *v30++;
        --v32;
        if ( (unsigned int)v34 >= 0x61 )
        {
          if ( (unsigned int)v34 > 0x7A )
          {
            if ( v33 && (unsigned __int16)v34 >= 0xC0u )
              LOWORD(v34) = *((_WORD *)&v33->Flink
                            + (v34 & 0xF)
                            + *((unsigned __int16 *)&v33->Flink
                              + ((unsigned __int8)v34 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&v33->Flink + (v34 >> 8))))
                          + v34;
          }
          else
          {
            LOWORD(v34) = v34 - 32;
          }
        }
      }
      DWORD2(v131) = v29;
      v35 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)&v21[1], Buffer);
      if ( v35 )
      {
        v36 = *v35;
        if ( *v35 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v36 + 8));
          ExReleaseResourceLite(v21);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v37 = 3;
          v38 = P;
          if ( v116 == 3 && *((_DWORD *)P + 4) == 2 )
          {
            if ( !memcmp(P, &DEVPKEY_Device_ContainerId, 0x10uLL) )
            {
              CachedObjectReference = PiDmObjectGetCachedObjectReference(
                                        3u,
                                        (__int64)v124,
                                        (struct _KTHREAD *)v36,
                                        (__int64)&DEVPKEY_Device_InstanceId,
                                        &v126);
              v38 = P;
              if ( CachedObjectReference >= 0 )
              {
                v91 = v126;
                LODWORD(v118) = PiDmObjectGetCachedObjectPropertyData(
                                  *((_DWORD *)v126 + 7),
                                  *((unsigned __int16 **)v126 + 2),
                                  (signed __int64 *)v126,
                                  (__int64)P,
                                  (_DWORD *)v122,
                                  v16,
                                  HIDWORD(v118),
                                  v127);
                PiDmObjectRelease(v91);
                v58 = 3;
                goto LABEL_122;
              }
            }
            else
            {
              v38 = P;
            }
          }
          v126 = (PVOID)v36;
          v39 = (struct _KTHREAD *)v36;
          v40 = -1073741802;
          switch ( v116 )
          {
            case 1u:
              v41 = &PiDmCachedDeviceKeys;
              v37 = 10;
              break;
            case 3u:
              v41 = &PiDmCachedDeviceInterfaceKeys;
              v37 = 1;
              break;
            case 5u:
              v41 = &PiDmCachedDeviceContainerKeys;
              break;
            default:
              v58 = v116;
              goto LABEL_121;
          }
          for ( n = 0; ; ++n )
          {
            if ( n >= v37 )
            {
              v58 = v116;
              goto LABEL_121;
            }
            v43 = v41[3 * n];
            if ( *((_DWORD *)v38 + 4) == v43->pid )
            {
              v57 = *v38 - *(_QWORD *)&v43->fmtid.Data1;
              if ( *v38 == *(_QWORD *)&v43->fmtid.Data1 )
                v57 = v38[1] - *(_QWORD *)v43->fmtid.Data4;
              if ( !v57 )
                break;
            }
          }
          v58 = v116;
          if ( v36 )
          {
            v59 = 0;
            goto LABEL_66;
          }
          v40 = PiDmGetObject(v116, v124, &v126);
          if ( v40 >= 0 )
          {
            v39 = (struct _KTHREAD *)v126;
            v59 = 1;
LABEL_66:
            PiDmObjectAcquireSharedLock(v39);
            v60 = &v39->Header + n;
            Blink = (unsigned int)v60[4].WaitListHead.Blink;
            if ( Blink <= 1 )
            {
              v117 = -1073741802;
            }
            else
            {
              v117 = 0;
              DestinationString = 0LL;
              if ( Blink == 6 )
              {
                Lock = v60[5].Lock;
                if ( Lock == 18 )
                {
                  *(_DWORD *)v122 = 18;
                  v63 = -1LL;
                  while ( *((_WORD *)&v60[5].WaitListHead.Flink[1].Flink->Flink + ++v63) != 0 )
                    ;
                  v65 = 2 * v63 + 2;
                  *v127 = v65;
                  if ( HIDWORD(v118) >= v65 )
                  {
                    memmove(Guid, v60[5].WaitListHead.Flink[1].Flink, v65);
                    goto LABEL_118;
                  }
                }
                else
                {
                  if ( Lock != 13 )
                  {
                    v117 = -1073741595;
                    goto LABEL_118;
                  }
                  v95 = HIDWORD(v118) < 0x10;
                  *(_DWORD *)v122 = 13;
                  *v127 = 16;
                  if ( !v95 )
                  {
                    RtlInitUnicodeString(&DestinationString, (PCWSTR)v60[5].WaitListHead.Flink[1].Flink);
                    v117 = RtlGUIDFromString(&DestinationString, Guid);
                    goto LABEL_118;
                  }
                }
              }
              else
              {
                v94 = Blink - 2;
                if ( !v94 )
                {
                  v117 = -1073741275;
                  goto LABEL_118;
                }
                v106 = v94 - 1;
                if ( v106 )
                {
                  v107 = v106 - 1;
                  if ( v107 )
                  {
                    if ( v107 != 1 )
                    {
                      v117 = -1073741595;
                      goto LABEL_118;
                    }
                    *(_DWORD *)v122 = v60[5].Lock;
                    SignalState = v60[5].SignalState;
                    *v127 = SignalState;
                    if ( HIDWORD(v118) >= SignalState )
                    {
                      memmove(Guid, v60[5].WaitListHead.Flink, SignalState);
                      goto LABEL_118;
                    }
                  }
                  else
                  {
                    v95 = HIDWORD(v118) < 0x10;
                    *(_DWORD *)v122 = 13;
                    *v127 = 16;
                    if ( !v95 )
                    {
                      *Guid = *(GUID *)&v60[5].Lock;
                      goto LABEL_118;
                    }
                  }
                }
                else
                {
                  *(_DWORD *)v122 = v60[5].Lock;
                  v113 = v60[5].SignalState;
                  *v127 = v113;
                  if ( HIDWORD(v118) >= v113 )
                  {
                    memmove(Guid, &v60[5].WaitListHead, v113);
                    goto LABEL_118;
                  }
                }
              }
              v117 = v119;
            }
LABEL_118:
            CmpUnlockSiloKeyLockTracker(v39);
            if ( v59 )
              PiDmObjectRelease(v39);
            v40 = v117;
          }
LABEL_121:
          LODWORD(v118) = v40;
LABEL_122:
          PiDmObjectRelease((PVOID)v36);
          v20 = v119;
LABEL_123:
          if ( (int)v118 >= 0 || (_DWORD)v118 == v20 )
          {
            v46 = v118;
          }
          else
          {
            v46 = v118;
            if ( (_DWORD)v118 != -1073741772 && (_DWORD)v118 != -1073741275 )
            {
              v7 = 0;
              goto LABEL_128;
            }
          }
          goto LABEL_49;
        }
      }
    }
  }
  ExReleaseResourceLite(v21);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v46 = -1073741772;
LABEL_49:
  Object = v46;
LABEL_50:
  v7 = -1073741536;
  *(_DWORD *)a6 = Object;
  return v7;
}
