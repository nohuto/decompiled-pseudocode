/*
 * XREFs of PiPnpRtlObjectActionCallback @ 0x1409A4F20
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlLookupElementGenericTableAvl @ 0x14042F140 (RtlLookupElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     PiDrvDbUnmountNode @ 0x14077B400 (PiDrvDbUnmountNode.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1409915EC (PiDmObjectGetCachedObjectReference.c)
 *     PnpGetObjectProperty @ 0x14099D8E0 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 *     PiDmGetObject @ 0x1409A2D70 (PiDmGetObject.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1409A4440 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectRelease @ 0x1409A6000 (PiDmObjectRelease.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x1409A604C (CmpUnlockSiloKeyLockTracker.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1409A60B0 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1409A6BD0 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmObjectAcquireSharedLock @ 0x1409A7358 (PiDmObjectAcquireSharedLock.c)
 *     KsepCacheLock @ 0x1409A73D0 (KsepCacheLock.c)
 *     PiDmCacheDataFree @ 0x1409A7440 (PiDmCacheDataFree.c)
 *     PiDmGetObjectList @ 0x140AB0C18 (PiDmGetObjectList.c)
 *     PiDmCacheDataEncode @ 0x140ADD9AC (PiDmCacheDataEncode.c)
 *     PiDrvDbMountNode @ 0x140B65614 (PiDrvDbMountNode.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned int v39; // r15d
  _QWORD *v40; // r9
  struct _KTHREAD *v41; // r13
  int v42; // r8d
  DEVPROPKEY **v43; // r12
  unsigned int n; // ebx
  DEVPROPKEY *v45; // rdx
  __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // r8
  int v50; // r8d
  int Object; // eax
  _DWORD *v53; // rax
  bool v54; // r13
  __int64 v55; // r14
  _DWORD *v56; // rax
  DEVPROPKEY **v57; // r12
  unsigned int v58; // r15d
  unsigned int i; // ebx
  DEVPROPKEY *v60; // rdx
  __int64 v61; // rcx
  unsigned int v62; // r12d
  char v63; // r15
  _DISPATCHER_HEADER *v64; // rdx
  unsigned int Blink; // ecx
  volatile LONG Lock; // eax
  __int64 v67; // rax
  unsigned int v69; // eax
  int v70; // r9d
  int v71; // r9d
  int v72; // r9d
  int v73; // eax
  void *Pool2; // r14
  int ObjectProperty; // ebx
  __int64 v76; // rcx
  struct _KTHREAD *v77; // r15
  unsigned int v78; // edi
  unsigned int v79; // r12d
  int v80; // eax
  PVOID v81; // rdi
  struct _KTHREAD *v82; // rcx
  __int64 v83; // r14
  bool v84; // r13
  DEVPROPKEY **v85; // r12
  unsigned int v86; // r15d
  unsigned int j; // ebx
  DEVPROPKEY *v88; // rdx
  __int64 v89; // rcx
  struct _KTHREAD *v90; // rdi
  unsigned int v91; // eax
  int v92; // eax
  PVOID v93; // r14
  int CachedObjectReference; // eax
  PVOID v95; // rbx
  int v96; // edx
  __int64 v97; // r9
  unsigned int v98; // ecx
  bool v99; // cf
  __int64 v100; // r12
  __int64 *v101; // r13
  struct _KTHREAD *v102; // r14
  __int64 v103; // r12
  LONG v104; // eax
  int v105; // eax
  void **v106; // rax
  void **m; // rdx
  char *v108; // rdx
  int v109; // eax
  unsigned int v110; // ecx
  unsigned int v111; // ecx
  unsigned int SignalState; // eax
  __int64 v113; // r9
  int v114; // eax
  unsigned int v115; // ecx
  int ObjectList; // eax
  unsigned int v117; // eax
  int v118; // eax
  __int64 v119; // [rsp+28h] [rbp-D8h]
  unsigned int v120; // [rsp+60h] [rbp-A0h]
  NTSTATUS v121; // [rsp+60h] [rbp-A0h]
  __int64 v122; // [rsp+64h] [rbp-9Ch] BYREF
  int v123; // [rsp+6Ch] [rbp-94h] BYREF
  char v124; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  __int64 v126; // [rsp+80h] [rbp-80h] BYREF
  GUID *Guid; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v128; // [rsp+90h] [rbp-70h]
  PVOID v129; // [rsp+98h] [rbp-68h] BYREF
  PVOID v130; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v131; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD Buffer[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v134; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v135; // [rsp+E0h] [rbp-20h]
  __int128 v136; // [rsp+F0h] [rbp-10h]
  __int128 v137; // [rsp+100h] [rbp+0h]
  __int128 v138; // [rsp+110h] [rbp+10h]
  __int128 v139; // [rsp+120h] [rbp+20h]
  __int128 v140; // [rsp+130h] [rbp+30h]

  v6 = a2;
  v120 = a3;
  v7 = -1073741822;
  v128 = a2;
  v129 = a1;
  if ( a4 != 8 )
  {
    v70 = a4 - 3;
    if ( v70 )
    {
      v71 = v70 - 1;
      if ( !v71 )
      {
        if ( (_DWORD)a3 == 7 )
        {
          if ( a5 == 1 )
          {
            v105 = PiDrvDbUnmountNode(a2);
            v7 = v105;
            if ( v105 < 0 )
            {
              *(_DWORD *)a6 = v105;
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
      v72 = v71 - 1;
      if ( v72 )
      {
        if ( v72 != 4 )
          return v7;
        if ( a5 == 1 )
        {
          v7 = 0;
          if ( (*(_DWORD *)(a6 + 60) & 0x20000) != 0 )
            goto LABEL_91;
          v73 = *(_DWORD *)(a6 + 56);
          Pool2 = 0LL;
          v122 = 0LL;
          if ( v73 )
          {
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            if ( !Pool2 )
              return v7;
            LODWORD(a3) = v120;
            v6 = v128;
          }
          ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             (__int64)v6,
                             a3,
                             *(char **)(a6 + 16),
                             *(_QWORD *)(a6 + 24),
                             *(_QWORD *)(a6 + 32),
                             &v122,
                             (__int64)Pool2,
                             *(_DWORD *)(a6 + 56),
                             (__int64)&v122 + 4,
                             0);
          if ( ObjectProperty < 0 )
            goto LABEL_269;
          if ( v122 != __PAIR64__(*(_DWORD *)(a6 + 56), *(_DWORD *)(a6 + 40)) )
          {
LABEL_86:
            v7 = 0;
LABEL_87:
            if ( Pool2 )
              ExFreePoolWithTag(Pool2, 0x47706E50u);
            if ( v7 )
              return v7;
            a3 = v120;
            v6 = v128;
            a1 = v129;
LABEL_91:
            if ( !*(_QWORD *)(a6 + 16) )
              PiPnpRtlCacheObjectBaseKey(a1, v6, a3);
            return v7;
          }
          if ( memcmp(Pool2, *(const void **)(a6 + 48), HIDWORD(v122)) )
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
      v96 = *(_DWORD *)(a6 + 40);
      v97 = *(_QWORD *)(a6 + 32);
      if ( (int)a3 >= 7 )
        return 0;
      v119 = *(_QWORD *)(a6 + 48);
      Buffer[0] = *(_QWORD *)(a6 + 16);
      Buffer[1] = *(_QWORD *)(a6 + 24);
      ObjectList = PiDmGetObjectList(a3, (unsigned int)PiDmPnpObjectMatchCallback, (unsigned int)Buffer, v97, v96, v119);
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
      v53 = *(_DWORD **)(a6 + 64);
      v54 = 0;
      v55 = *(_QWORD *)(a6 + 32);
      v129 = 0LL;
      LODWORD(v122) = 0;
      HIDWORD(v122) = *v53;
      Guid = *(GUID **)(a6 + 48);
      v56 = *(_DWORD **)(a6 + 40);
      P = 0LL;
      v123 = 0;
      LODWORD(v126) = *v56;
      if ( !*(_QWORD *)(a6 + 24) )
      {
        switch ( (_DWORD)a3 )
        {
          case 1:
            v57 = &PiDmCachedDeviceKeys;
            v58 = 10;
LABEL_57:
            for ( i = 0; ; ++i )
            {
              if ( i >= v58 )
                return 0;
              v60 = v57[3 * i];
              if ( *(_DWORD *)(v55 + 16) == v60->pid )
              {
                v76 = *(_QWORD *)v55 - *(_QWORD *)&v60->fmtid.Data1;
                if ( *(_QWORD *)v55 == *(_QWORD *)&v60->fmtid.Data1 )
                  v76 = *(_QWORD *)(v55 + 8) - *(_QWORD *)v60->fmtid.Data4;
                if ( !v76 )
                  break;
              }
            }
            if ( (int)PiDmGetObject(a3, v6, &v129) < 0 )
              return 0;
            v77 = (struct _KTHREAD *)v129;
            KsepCacheLock(v129);
            v78 = *((_DWORD *)&v77->WaitRegister.Flags + 6 * i);
            if ( v78 <= 1 )
            {
              v113 = LODWORD(v57[3 * i + 1]);
              v114 = HIDWORD(v57[3 * i + 1]);
              v79 = HIDWORD(v122);
              PiDmCacheDataEncode((unsigned int)v126, Guid, HIDWORD(v122), v113, v114, &v77->WaitRegister + 24 * i);
              v54 = v78 == 0;
            }
            else
            {
              v79 = HIDWORD(v122);
            }
            CmpUnlockSiloKeyLockTracker(v77);
            if ( v54 )
            {
              v80 = PnpGetObjectProperty(
                      0x5A706E50u,
                      v79,
                      (__int64)v128,
                      v120,
                      0LL,
                      0LL,
                      v55,
                      &v122,
                      &P,
                      (unsigned int *)&v123,
                      0x10000);
              v81 = P;
              if ( v80 == -1073741275 )
              {
                LODWORD(v122) = 0;
                if ( P )
                {
                  ExFreePoolWithTag(P, 0x5A706E50u);
                  v81 = 0LL;
                }
                v115 = 0;
              }
              else
              {
                if ( v80 < 0 )
                {
LABEL_102:
                  KsepCacheLock(v77);
                  PiDmCacheDataFree(&v77->WaitRegister + 16 * i + 8 * i);
                  CmpUnlockSiloKeyLockTracker(v77);
                  goto LABEL_103;
                }
                v115 = v123;
              }
              if ( v115 != v79 || (_DWORD)v122 != (_DWORD)v126 )
                goto LABEL_102;
              if ( v81 )
              {
                if ( !Guid )
                  goto LABEL_102;
              }
              else if ( Guid )
              {
                goto LABEL_102;
              }
              if ( !v115 )
              {
LABEL_103:
                if ( v81 )
                  ExFreePoolWithTag(v81, 0x5A706E50u);
                goto LABEL_105;
              }
              if ( v81 )
              {
                if ( memcmp(v81, Guid, v115) )
                  goto LABEL_102;
                goto LABEL_103;
              }
            }
LABEL_105:
            v82 = v77;
            goto LABEL_106;
          case 3:
            v57 = &PiDmCachedDeviceInterfaceKeys;
            v58 = 1;
            goto LABEL_57;
          case 5:
            v57 = &PiDmCachedDeviceContainerKeys;
            v58 = 3;
            goto LABEL_57;
        }
      }
      return 0;
    }
    if ( *(_DWORD *)a6 != -1073741275 )
      return 0;
    v83 = *(_QWORD *)(a6 + 32);
    v84 = 0;
    v129 = 0LL;
    LODWORD(v122) = 0;
    P = 0LL;
    LODWORD(v126) = 0;
    if ( *(_QWORD *)(a6 + 24) )
      return 0;
    switch ( (_DWORD)a3 )
    {
      case 1:
        v85 = &PiDmCachedDeviceKeys;
        v86 = 10;
        break;
      case 3:
        v85 = &PiDmCachedDeviceInterfaceKeys;
        v86 = 1;
        break;
      case 5:
        v85 = &PiDmCachedDeviceContainerKeys;
        v86 = 3;
        break;
      default:
        return 0;
    }
    for ( j = 0; ; ++j )
    {
      if ( j >= v86 )
        return 0;
      v88 = v85[3 * j];
      if ( *(_DWORD *)(v83 + 16) == v88->pid )
      {
        v89 = *(_QWORD *)v83 - *(_QWORD *)&v88->fmtid.Data1;
        if ( *(_QWORD *)v83 == *(_QWORD *)&v88->fmtid.Data1 )
          v89 = *(_QWORD *)(v83 + 8) - *(_QWORD *)v88->fmtid.Data4;
        if ( !v89 )
          break;
      }
    }
    if ( (int)PiDmGetObject(a3, v6, &v129) < 0 )
      return 0;
    v90 = (struct _KTHREAD *)v129;
    KsepCacheLock(v129);
    v91 = *((_DWORD *)&v90->WaitRegister.Flags + 6 * j);
    if ( v91 <= 1 )
    {
      *((_DWORD *)&v90->WaitRegister.Flags + 6 * j) = 2;
      v84 = v91 == 0;
    }
    CmpUnlockSiloKeyLockTracker(v90);
    if ( !v84 )
    {
LABEL_144:
      v82 = v90;
LABEL_106:
      PiDmObjectRelease(v82);
      return 0;
    }
    v92 = PnpGetObjectProperty(
            0x5A706E50u,
            0,
            (__int64)v128,
            v120,
            0LL,
            0LL,
            v83,
            &v122,
            &P,
            (unsigned int *)&v126,
            0x10000);
    v93 = P;
    if ( v92 == -1073741275 )
    {
      LODWORD(v122) = 0;
      if ( P )
      {
        ExFreePoolWithTag(P, 0x5A706E50u);
        v93 = 0LL;
      }
      v118 = 0;
    }
    else
    {
      if ( v92 < 0 )
      {
LABEL_142:
        KsepCacheLock(v90);
        PiDmCacheDataFree(&v90->WaitRegister + 16 * j + 8 * j);
        CmpUnlockSiloKeyLockTracker(v90);
        if ( v93 )
          ExFreePoolWithTag(v93, 0x5A706E50u);
        goto LABEL_144;
      }
      v118 = v126;
    }
    if ( !(_DWORD)v122 && !v118 && !v93 )
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
  HIDWORD(v122) = 0;
  v124 = 0;
  LODWORD(v126) = 0;
  if ( v8 )
  {
    if ( !v11 )
      v8 = 0LL;
  }
  else
  {
    v11 = 0;
  }
  LODWORD(v122) = -1073741802;
  if ( (int)a3 < 7 && !v14 )
  {
    for ( k = 0; k < 3; ++k )
    {
      v46 = 7LL * k;
      v47 = *(__int64 *)((char *)&off_140001C10 + v46 * 8);
      if ( *(_DWORD *)(v47 + 16) == *(_DWORD *)(v13 + 16) )
      {
        v100 = *(_QWORD *)v47 - *(_QWORD *)v13;
        if ( *(_QWORD *)v47 == *(_QWORD *)v13 )
          v100 = *(_QWORD *)(v47 + 8) - *(_QWORD *)(v13 + 8);
        if ( !v100 )
        {
          LODWORD(a3) = v120;
          if ( v120 == *(_DWORD *)&byte_140001C08[v46 * 8] )
          {
            v101 = &PiDmAggregatedBooleanDefs[v46];
            if ( !&PiDmAggregatedBooleanDefs[v46] )
              break;
            *v12 = 17;
            *v9 = 1;
            if ( v11 )
            {
              Object = PiDmGetObject(v120, v128, &P);
              if ( Object >= 0 )
              {
                v102 = (struct _KTHREAD *)P;
                v103 = v101[6];
                KsepCacheLock(P);
                v104 = *(volatile LONG *)((char *)&v102->Header.Lock + v103);
                if ( v104 == 0x80000000 )
                {
                  v106 = (void **)((char *)v102 + qword_140001A48[5 * *((int *)v101 + 10)]);
                  v130 = v106;
                  for ( m = (void **)*v106; ; m = *(void ***)P )
                  {
                    P = m;
                    if ( m == v106 )
                      break;
                    v108 = (char *)m - qword_140001A58[5 * *((int *)v101 + 10)];
                    v109 = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             *((_QWORD *)v108 + 2),
                             *((_DWORD *)v108 + 7),
                             0LL,
                             0LL,
                             v101[1],
                             (_DWORD *)&v122 + 1,
                             (__int64)&v124,
                             1u,
                             (__int64)&v126,
                             0);
                    v123 = v109;
                    if ( v109 < 0 )
                    {
                      if ( v109 != -1073741275 )
                        goto LABEL_183;
                    }
                    else if ( HIDWORD(v122) == 17 && v124 == -1 )
                    {
                      ++v10;
                    }
                    v106 = (void **)v130;
                  }
                  *(LONG *)((char *)&v102->Header.LockNV + v103) = v10;
                  v104 = v10;
                }
                v123 = 0;
                *v8 = (v104 <= 0) - 1;
LABEL_183:
                CmpUnlockSiloKeyLockTracker(v102);
                PiDmObjectRelease(v102);
                Object = v123;
              }
              if ( Object == -1073741802 )
              {
                LODWORD(a3) = v120;
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
      LODWORD(a3) = v120;
    }
  }
  v7 = 0;
  if ( (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
  {
    v62 = v120;
LABEL_128:
    if ( !*(_QWORD *)(a6 + 16) )
      PiPnpRtlCacheObjectBaseKey(v129, v128, v62);
    return v7;
  }
  v16 = *(GUID **)(a6 + 48);
  v17 = *(void **)(a6 + 32);
  v18 = *(_DWORD *)(a6 + 56);
  v131 = *(unsigned int **)(a6 + 64);
  v126 = *(_QWORD *)(a6 + 40);
  v19 = *(_QWORD *)(a6 + 24);
  HIDWORD(v122) = v18;
  Guid = v16;
  P = v17;
  v130 = 0LL;
  if ( v16 )
  {
    if ( !v18 )
      v16 = 0LL;
    Guid = v16;
  }
  else
  {
    HIDWORD(v122) = 0;
  }
  v20 = -1073741789;
  v123 = -1073741789;
  if ( (int)a3 >= 7 || v19 )
  {
    v62 = v120;
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
  Buffer[0] = &v134;
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  if ( v128 )
  {
    Flink = (int)v21[2].SystemResourcesList.Flink;
    v24 = 0x7FFFLL;
    HIDWORD(v135) = Flink;
    v25 = v128;
    *(_QWORD *)&v135 = v128;
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
      for ( DWORD2(v135) = 0; v32; v29 = (unsigned __int16)v34 + 65599 * v29 )
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
      DWORD2(v135) = v29;
      v35 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)&v21[1], Buffer);
      if ( v35 )
      {
        v36 = *v35;
        if ( *v35 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v36 + 8));
          ExReleaseResourceLite(v21);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v37, v38);
          v39 = 3;
          v40 = P;
          if ( v120 == 3 && *((_DWORD *)P + 4) == 2 )
          {
            if ( !memcmp(P, &DEVPKEY_Device_ContainerId, 0x10uLL) )
            {
              CachedObjectReference = PiDmObjectGetCachedObjectReference(
                                        3u,
                                        (__int64)v128,
                                        (struct _KTHREAD *)v36,
                                        (__int64)&DEVPKEY_Device_InstanceId,
                                        &v130);
              v40 = P;
              if ( CachedObjectReference >= 0 )
              {
                v95 = v130;
                LODWORD(v122) = PiDmObjectGetCachedObjectPropertyData(
                                  *((_DWORD *)v130 + 7),
                                  *((unsigned __int16 **)v130 + 2),
                                  (signed __int64 *)v130,
                                  (__int64)P,
                                  (_DWORD *)v126,
                                  v16,
                                  HIDWORD(v122),
                                  v131);
                PiDmObjectRelease(v95);
                v62 = 3;
                goto LABEL_122;
              }
            }
            else
            {
              v40 = P;
            }
          }
          v130 = (PVOID)v36;
          v41 = (struct _KTHREAD *)v36;
          v42 = -1073741802;
          switch ( v120 )
          {
            case 1u:
              v43 = &PiDmCachedDeviceKeys;
              v39 = 10;
              break;
            case 3u:
              v43 = &PiDmCachedDeviceInterfaceKeys;
              v39 = 1;
              break;
            case 5u:
              v43 = &PiDmCachedDeviceContainerKeys;
              break;
            default:
              v62 = v120;
              goto LABEL_121;
          }
          for ( n = 0; ; ++n )
          {
            if ( n >= v39 )
            {
              v62 = v120;
              goto LABEL_121;
            }
            v45 = v43[3 * n];
            if ( *((_DWORD *)v40 + 4) == v45->pid )
            {
              v61 = *v40 - *(_QWORD *)&v45->fmtid.Data1;
              if ( *v40 == *(_QWORD *)&v45->fmtid.Data1 )
                v61 = v40[1] - *(_QWORD *)v45->fmtid.Data4;
              if ( !v61 )
                break;
            }
          }
          v62 = v120;
          if ( v36 )
          {
            v63 = 0;
            goto LABEL_66;
          }
          v42 = PiDmGetObject(v120, v128, &v130);
          if ( v42 >= 0 )
          {
            v41 = (struct _KTHREAD *)v130;
            v63 = 1;
LABEL_66:
            PiDmObjectAcquireSharedLock(v41);
            v64 = &v41->Header + n;
            Blink = (unsigned int)v64[4].WaitListHead.Blink;
            if ( Blink <= 1 )
            {
              v121 = -1073741802;
            }
            else
            {
              v121 = 0;
              DestinationString = 0LL;
              if ( Blink == 6 )
              {
                Lock = v64[5].Lock;
                if ( Lock == 18 )
                {
                  *(_DWORD *)v126 = 18;
                  v67 = -1LL;
                  while ( *((_WORD *)&v64[5].WaitListHead.Flink[1].Flink->Flink + ++v67) != 0 )
                    ;
                  v69 = 2 * v67 + 2;
                  *v131 = v69;
                  if ( HIDWORD(v122) >= v69 )
                  {
                    memmove(Guid, v64[5].WaitListHead.Flink[1].Flink, v69);
                    goto LABEL_118;
                  }
                }
                else
                {
                  if ( Lock != 13 )
                  {
                    v121 = -1073741595;
                    goto LABEL_118;
                  }
                  v99 = HIDWORD(v122) < 0x10;
                  *(_DWORD *)v126 = 13;
                  *v131 = 16;
                  if ( !v99 )
                  {
                    RtlInitUnicodeString(&DestinationString, (PCWSTR)v64[5].WaitListHead.Flink[1].Flink);
                    v121 = RtlGUIDFromString(&DestinationString, Guid);
                    goto LABEL_118;
                  }
                }
              }
              else
              {
                v98 = Blink - 2;
                if ( !v98 )
                {
                  v121 = -1073741275;
                  goto LABEL_118;
                }
                v110 = v98 - 1;
                if ( v110 )
                {
                  v111 = v110 - 1;
                  if ( v111 )
                  {
                    if ( v111 != 1 )
                    {
                      v121 = -1073741595;
                      goto LABEL_118;
                    }
                    *(_DWORD *)v126 = v64[5].Lock;
                    SignalState = v64[5].SignalState;
                    *v131 = SignalState;
                    if ( HIDWORD(v122) >= SignalState )
                    {
                      memmove(Guid, v64[5].WaitListHead.Flink, SignalState);
                      goto LABEL_118;
                    }
                  }
                  else
                  {
                    v99 = HIDWORD(v122) < 0x10;
                    *(_DWORD *)v126 = 13;
                    *v131 = 16;
                    if ( !v99 )
                    {
                      *Guid = *(GUID *)&v64[5].Lock;
                      goto LABEL_118;
                    }
                  }
                }
                else
                {
                  *(_DWORD *)v126 = v64[5].Lock;
                  v117 = v64[5].SignalState;
                  *v131 = v117;
                  if ( HIDWORD(v122) >= v117 )
                  {
                    memmove(Guid, &v64[5].WaitListHead, v117);
                    goto LABEL_118;
                  }
                }
              }
              v121 = v123;
            }
LABEL_118:
            CmpUnlockSiloKeyLockTracker(v41);
            if ( v63 )
              PiDmObjectRelease(v41);
            v42 = v121;
          }
LABEL_121:
          LODWORD(v122) = v42;
LABEL_122:
          PiDmObjectRelease((PVOID)v36);
          v20 = v123;
LABEL_123:
          if ( (int)v122 >= 0 || (_DWORD)v122 == v20 )
          {
            v50 = v122;
          }
          else
          {
            v50 = v122;
            if ( (_DWORD)v122 != -1073741772 && (_DWORD)v122 != -1073741275 )
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v48, v49);
  v50 = -1073741772;
LABEL_49:
  Object = v50;
LABEL_50:
  v7 = -1073741536;
  *(_DWORD *)a6 = Object;
  return v7;
}
